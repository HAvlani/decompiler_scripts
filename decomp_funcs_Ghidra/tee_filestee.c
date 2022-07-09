
_Bool tee_files(int nfiles,char **files)

{
  long lVar1;
  long lVar2;
  _Bool _Var3;
  int iVar4;
  FILE **p;
  char *pcVar5;
  FILE *pFVar6;
  int *piVar7;
  size_t __size;
  undefined8 uVar8;
  size_t sVar9;
  long lVar10;
  char **ppcVar11;
  FILE **ppFVar12;
  char *mode;
  long in_FS_OFFSET;
  _Bool local_2070;
  char buffer [8192];
  
  mode = "a";
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (append == false) {
    mode = "w";
  }
  fadvise(stdin,FADVISE_SEQUENTIAL);
  p = (FILE **)xnmalloc((long)(nfiles + 1),8);
  *p = stdout;
  pcVar5 = (char *)dcgettext(0,"standard output",5);
  pFVar6 = stdout;
  files[-1] = pcVar5;
  setvbuf(pFVar6,(char *)0x0,2,0);
  if (nfiles < 1) {
    local_2070 = true;
    lVar10 = 1;
LAB_00102bad:
    do {
      __size = read(0,buffer,0x2000);
      if ((long)__size < 0) {
        piVar7 = __errno_location();
        if (*piVar7 != 4) break;
      }
      else {
        if (__size == 0) goto LAB_00102bf3;
        ppcVar11 = files + -1;
        ppFVar12 = p;
        if (-1 < nfiles) {
          do {
            if ((*ppFVar12 != (FILE *)0x0) &&
               (sVar9 = fwrite_unlocked(buffer,__size,1,*ppFVar12), sVar9 != 1)) {
              piVar7 = __errno_location();
              pFVar6 = *ppFVar12;
              iVar4 = *piVar7;
              if ((iVar4 == 0x20) &&
                 ((output_error & ~output_error_warn_nopipe) != output_error_warn)) {
                if (pFVar6 == stdout) {
                  clearerr_unlocked(pFVar6);
                }
                *ppFVar12 = (FILE *)0x0;
              }
              else {
                if (pFVar6 == stdout) {
                  clearerr_unlocked(pFVar6);
                }
                uVar8 = quotearg_n_style_colon(0,3,*ppcVar11);
                error(output_error + ~output_error_warn_nopipe < 2,iVar4,&DAT_001076bb,uVar8);
                *ppFVar12 = (FILE *)0x0;
                local_2070 = false;
              }
              lVar10 = lVar10 + -1;
            }
            ppcVar11 = ppcVar11 + 1;
            ppFVar12 = ppFVar12 + 1;
          } while (ppcVar11 != files + (uint)nfiles);
        }
      }
    } while (lVar10 != 0);
    if (__size == 0xffffffffffffffff) {
      uVar8 = dcgettext(0,"read error",5);
      piVar7 = __errno_location();
      error(0,*piVar7,uVar8);
      local_2070 = false;
    }
LAB_00102bf3:
    if (nfiles < 1) goto LAB_00102c78;
  }
  else {
    ppFVar12 = p + 1;
    local_2070 = true;
    lVar10 = 1;
    ppcVar11 = files;
    do {
      while( true ) {
        pFVar6 = (FILE *)fopen_safer(*ppcVar11,mode);
        *ppFVar12 = pFVar6;
        if (pFVar6 != (FILE *)0x0) break;
        quotearg_n_style_colon(0,3,*ppcVar11);
        piVar7 = __errno_location();
        ppcVar11 = ppcVar11 + 1;
        ppFVar12 = ppFVar12 + 1;
        error(output_error + ~output_error_warn_nopipe < 2,*piVar7,&DAT_001076bb);
        local_2070 = false;
        if (files + (ulong)(nfiles - 1) + 1 == ppcVar11) goto LAB_00102ba8;
      }
      ppcVar11 = ppcVar11 + 1;
      setvbuf(pFVar6,(char *)0x0,2,0);
      lVar10 = lVar10 + 1;
      ppFVar12 = ppFVar12 + 1;
    } while (files + (ulong)(nfiles - 1) + 1 != ppcVar11);
LAB_00102ba8:
    if (lVar10 != 0) goto LAB_00102bad;
  }
  lVar10 = 1;
  _Var3 = local_2070;
  do {
    while ((local_2070 = _Var3, p[lVar10] == (FILE *)0x0 ||
           (iVar4 = rpl_fclose((FILE *)p[lVar10]), iVar4 == 0))) {
      lVar10 = lVar10 + 1;
      _Var3 = local_2070;
      if (nfiles < (int)lVar10) goto LAB_00102c78;
    }
    lVar2 = lVar10 + -1;
    lVar10 = lVar10 + 1;
    uVar8 = quotearg_n_style_colon(0,3,files[lVar2]);
    piVar7 = __errno_location();
    error(0,*piVar7,&DAT_001076bb,uVar8);
    local_2070 = false;
    _Var3 = false;
  } while ((int)lVar10 <= nfiles);
LAB_00102c78:
  rpl_free(p);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_2070;
}

