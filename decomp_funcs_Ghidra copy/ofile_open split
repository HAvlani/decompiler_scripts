
_Bool ofile_open(of_t *files,size_t i_check,size_t nfiles)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  FILE *pFVar4;
  undefined8 uVar5;
  _Bool _Var6;
  of_t *poVar7;
  char *file;
  of_t *poVar8;
  bool bVar9;
  
  poVar8 = files + i_check;
  _Var6 = false;
  if (-1 < poVar8->ofd) {
    return false;
  }
  sVar3 = i_check - 1;
  if (i_check == 0) {
    sVar3 = nfiles - 1;
  }
  file = poVar8->of_name;
  if (poVar8->ofd == -1) goto LAB_001050db;
  do {
    iVar1 = open_safer(file,0xc01);
    while( true ) {
      if (-1 < iVar1) {
        poVar8->ofd = iVar1;
        pFVar4 = fdopen(iVar1,"a");
        poVar8->ofile = (FILE *)pFVar4;
        iVar1 = filter_pid;
        if (pFVar4 != (FILE *)0x0) {
          filter_pid = 0;
          poVar8->opid = iVar1;
          return _Var6;
        }
        uVar5 = quotearg_n_style_colon(0,3,poVar8->of_name);
        piVar2 = __errno_location();
                    /* WARNING: Subroutine does not return */
        error(1,*piVar2,"%s",uVar5);
      }
      piVar2 = __errno_location();
      if (1 < *piVar2 - 0x17U) {
        uVar5 = quotearg_n_style_colon(0,3,poVar8->of_name);
                    /* WARNING: Subroutine does not return */
        error(1,*piVar2,"%s",uVar5);
      }
      while (poVar7 = files + sVar3, poVar7->ofd < 0) {
        bVar9 = sVar3 == 0;
        sVar3 = sVar3 - 1;
        if (bVar9) {
          sVar3 = nfiles - 1;
        }
        if (sVar3 == i_check) {
          uVar5 = quotearg_n_style_colon(0,3,poVar8->of_name);
                    /* WARNING: Subroutine does not return */
          error(1,*piVar2,"%s",uVar5);
        }
      }
      iVar1 = rpl_fclose(poVar7->ofile);
      if (iVar1 != 0) {
        uVar5 = quotearg_n_style_colon(0,3,poVar7->of_name);
                    /* WARNING: Subroutine does not return */
        error(1,*piVar2,"%s",uVar5);
      }
      poVar7->ofd = -2;
      iVar1 = poVar8->ofd;
      poVar7->ofile = (FILE *)0x0;
      file = poVar8->of_name;
      _Var6 = true;
      if (iVar1 != -1) break;
LAB_001050db:
      iVar1 = create(file);
    }
  } while( true );
}

