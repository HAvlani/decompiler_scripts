
_Bool paste_parallel(size_t nfiles,char **fnamptr)

{
  byte bVar1;
  char *pcVar2;
  uchar *puVar3;
  bool bVar4;
  uchar uVar5;
  size_t sVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  _IO_FILE *__ptr;
  FILE **p;
  size_t sVar11;
  int *piVar12;
  undefined8 uVar13;
  uint *puVar14;
  FILE *pFVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  byte *pbVar19;
  byte **ppbVar20;
  long lVar21;
  char **ppcVar22;
  size_t __n;
  size_t sVar23;
  ulong uVar24;
  byte *pbVar25;
  ulong uVar26;
  uint uVar27;
  FILE **ppFVar28;
  bool bVar29;
  _Bool _Stack161;
  int local_5c;
  _Bool local_55;
  
  __ptr = (_IO_FILE *)xmalloc(nfiles + 2);
  p = (FILE **)xnmalloc(nfiles + 1,8);
  if (nfiles == 0) {
    local_55 = true;
LAB_00102d7b:
    rpl_free(p);
    rpl_free(__ptr);
    return local_55;
  }
  local_55 = false;
  ppcVar22 = fnamptr;
  sVar6 = 0;
  do {
    while ((sVar23 = sVar6, pcVar2 = *ppcVar22, *pcVar2 != '-' || (pcVar2[1] != '\0'))) {
      pFVar15 = fopen(pcVar2,"r");
      p[sVar23] = pFVar15;
      if (pFVar15 == (FILE *)0x0) goto LAB_00102f48;
      iVar7 = fileno(pFVar15);
      if (iVar7 == 0) {
        local_55 = true;
      }
      ppcVar22 = ppcVar22 + 1;
      fadvise((FILE *)p[sVar23],FADVISE_SEQUENTIAL);
      sVar6 = sVar23 + 1;
      if (nfiles == sVar23 + 1) goto LAB_00102b66;
    }
    have_read_stdin = true;
    ppcVar22 = ppcVar22 + 1;
    p[sVar23] = stdin;
    sVar6 = sVar23 + 1;
  } while (nfiles != sVar23 + 1);
LAB_00102b66:
  uVar24 = sVar23 + 1;
  uVar26 = uVar24;
  if (local_55 == false) {
    local_55 = true;
  }
  else if (have_read_stdin != false) {
    uVar13 = dcgettext(0,"standard input is closed",5);
    error(1,0,uVar13);
LAB_00102f48:
    uVar13 = quotearg_n_style_colon();
    puVar14 = (uint *)__errno_location();
    lVar21 = 1;
    ppbVar20 = (byte **)(ulong)*puVar14;
    error(1,ppbVar20,"%s",uVar13);
    if (lVar21 == 0) {
      _Stack161 = true;
    }
    else {
      piVar12 = __errno_location();
      _Stack161 = true;
      do {
        pbVar19 = *ppbVar20;
        uVar8 = *pbVar19 - 0x2d;
        if ((uVar8 == 0) && (uVar8 = (uint)pbVar19[1], pbVar19[1] == 0)) {
          have_read_stdin = true;
          pFVar15 = stdin;
LAB_00102fe5:
          pbVar25 = (byte *)delims;
          pbVar19 = (byte *)pFVar15->_IO_read_ptr;
          pbVar17 = (byte *)pFVar15->_IO_read_end;
          if (pbVar19 < pbVar17) {
            pbVar16 = pbVar19 + 1;
            pFVar15->_IO_read_ptr = (char *)pbVar16;
            uVar9 = (uint)*pbVar19;
LAB_00103039:
            do {
              if (pbVar16 < pbVar17) {
                pFVar15->_IO_read_ptr = (char *)(pbVar16 + 1);
                uVar27 = (uint)*pbVar16;
              }
              else {
                uVar27 = __uflow(pFVar15);
                if (uVar27 == 0xffffffff) {
                  iVar7 = *piVar12;
                  pcVar2 = stdout->_IO_write_ptr;
                  if (pcVar2 < stdout->_IO_write_end) {
                    stdout->_IO_write_ptr = pcVar2 + 1;
                    *pcVar2 = (char)uVar9;
                  }
                  else {
                    iVar10 = __overflow(stdout,uVar9 & 0xff);
                    if (iVar10 < 0) goto LAB_00103268;
                  }
                  uVar27 = (uint)line_delim;
                  if (uVar27 != uVar9) goto LAB_001030a1;
                  goto LAB_001030c0;
                }
              }
              if (line_delim == uVar9) {
                bVar1 = *pbVar25;
                if (bVar1 == 0) {
LAB_0010301d:
                  pbVar25 = pbVar25 + 1;
                  if ((byte *)delim_end != pbVar25) goto LAB_0010302e;
                }
                else {
                  pbVar19 = (byte *)stdout->_IO_write_ptr;
                  if (stdout->_IO_write_end <= pbVar19) {
                    iVar7 = __overflow(stdout,(uint)bVar1);
                    if (-1 < iVar7) goto LAB_0010301d;
                    goto LAB_00103268;
                  }
                  pbVar25 = pbVar25 + 1;
                  bVar29 = (byte *)delim_end != pbVar25;
                  stdout->_IO_write_ptr = (char *)(pbVar19 + 1);
                  *pbVar19 = bVar1;
                  if (bVar29) goto LAB_0010302e;
                }
                pbVar25 = (byte *)delims;
              }
              else {
                pcVar2 = stdout->_IO_write_ptr;
                if (pcVar2 < stdout->_IO_write_end) {
                  stdout->_IO_write_ptr = pcVar2 + 1;
                  *pcVar2 = (char)uVar9;
                }
                else {
                  iVar7 = __overflow(stdout,uVar9 & 0xff);
                  if (iVar7 < 0) goto LAB_00103268;
                }
              }
LAB_0010302e:
              pbVar16 = (byte *)pFVar15->_IO_read_ptr;
              pbVar17 = (byte *)pFVar15->_IO_read_end;
              uVar9 = uVar27;
            } while( true );
          }
          uVar9 = __uflow(pFVar15);
          iVar7 = *piVar12;
          if (uVar9 != 0xffffffff) {
            pbVar16 = (byte *)pFVar15->_IO_read_ptr;
            pbVar17 = (byte *)pFVar15->_IO_read_end;
            goto LAB_00103039;
          }
          uVar27 = (uint)line_delim;
LAB_001030a1:
          pcVar2 = stdout->_IO_write_ptr;
          if (pcVar2 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar2 + 1;
            *pcVar2 = (char)uVar27;
          }
          else {
            iVar10 = __overflow(stdout,uVar27);
            if (iVar10 < 0) {
LAB_00103268:
              write_error();
              goto LAB_00103270;
            }
          }
LAB_001030c0:
          if ((*(byte *)&pFVar15->_flags & 0x20) == 0) {
            if (uVar8 == 0) {
              clearerr_unlocked(pFVar15);
            }
            else {
              iVar7 = rpl_fclose((FILE *)pFVar15);
              if (iVar7 != 0) {
                iVar7 = *piVar12;
                goto LAB_0010316d;
              }
            }
          }
          else {
            if (uVar8 == 0) {
              clearerr_unlocked(pFVar15);
LAB_0010316d:
              if (iVar7 == 0) goto LAB_001030da;
            }
            else {
              iVar10 = rpl_fclose((FILE *)pFVar15);
              if (iVar10 == 0) goto LAB_0010316d;
              if (iVar7 == 0) {
                iVar7 = *piVar12;
                goto LAB_0010316d;
              }
            }
            uVar13 = quotearg_n_style_colon(0,3,*ppbVar20);
            error(0,iVar7,"%s",uVar13);
            _Stack161 = false;
          }
        }
        else {
          pFVar15 = fopen((char *)pbVar19,"r");
          if (pFVar15 != (FILE *)0x0) {
            fadvise((FILE *)pFVar15,FADVISE_SEQUENTIAL);
            goto LAB_00102fe5;
          }
LAB_00103270:
          uVar13 = quotearg_n_style_colon(0,3,*ppbVar20);
          error(0,*piVar12,"%s",uVar13);
          _Stack161 = false;
        }
LAB_001030da:
        ppbVar20 = ppbVar20 + 1;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
    }
    return _Stack161;
  }
LAB_00102b84:
  bVar29 = false;
  uVar18 = 1;
  __n = 0;
  pFVar15 = *p;
  pbVar19 = (byte *)delims;
  ppFVar28 = p;
  if (pFVar15 == (FILE *)0x0) goto LAB_00102cbc;
LAB_00102bb0:
  pbVar17 = (byte *)pFVar15->_IO_read_ptr;
  if (pbVar17 < pFVar15->_IO_read_end) {
    pFVar15->_IO_read_ptr = (char *)(pbVar17 + 1);
    uVar8 = (uint)*pbVar17;
    if (__n == 0) goto LAB_00102c24;
  }
  else {
    uVar8 = __uflow(pFVar15);
    piVar12 = __errno_location();
    local_5c = *piVar12;
    if (uVar8 == 0xffffffff || __n == 0) {
      if (uVar8 != 0xffffffff) goto LAB_00102c24;
      pFVar15 = *ppFVar28;
      if (pFVar15 == (FILE *)0x0) goto LAB_00102cbc;
      if ((*(byte *)&pFVar15->_flags & 0x20) == 0) {
        if (pFVar15 == stdin) {
          clearerr_unlocked(pFVar15);
          goto LAB_00102e30;
        }
        iVar7 = rpl_fclose((FILE *)pFVar15);
        if (iVar7 != -1) goto LAB_00102e30;
LAB_00102eae:
        local_5c = *piVar12;
LAB_00102e4f:
        if (local_5c == 0) goto LAB_00102e30;
      }
      else {
        if (pFVar15 == stdin) {
          clearerr_unlocked(pFVar15);
          goto LAB_00102e4f;
        }
        iVar7 = rpl_fclose((FILE *)pFVar15);
        if (iVar7 != -1) goto LAB_00102e4f;
        if (local_5c == 0) goto LAB_00102eae;
      }
      uVar13 = quotearg_n_style_colon(0,3,fnamptr[uVar18 - 1]);
      error(0,local_5c,"%s",uVar13);
      local_55 = false;
LAB_00102e30:
      *ppFVar28 = (FILE *)0x0;
      uVar26 = uVar26 - 1;
      goto LAB_00102cbc;
    }
  }
  pFVar15 = __ptr;
  sVar11 = fwrite_unlocked(__ptr,1,__n,stdout);
  if (sVar11 != __n) goto LAB_00102c52;
  __n = 0;
LAB_00102c24:
  do {
    while( true ) {
      if (line_delim == uVar8) {
        if (uVar24 != uVar18) goto LAB_00102c76;
        goto LAB_00102cf5;
      }
      pcVar2 = stdout->_IO_write_ptr;
      if (pcVar2 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar2 + 1;
        *pcVar2 = (char)uVar8;
      }
      else {
        pFVar15 = stdout;
        iVar7 = __overflow(stdout,uVar8 & 0xff);
        if (iVar7 < 0) goto LAB_00102c52;
      }
      pFVar15 = *ppFVar28;
      pbVar17 = (byte *)pFVar15->_IO_read_ptr;
      if (pFVar15->_IO_read_end <= pbVar17) break;
      pFVar15->_IO_read_ptr = (char *)(pbVar17 + 1);
      uVar8 = (uint)*pbVar17;
    }
    while (uVar8 = __uflow(pFVar15), uVar8 == 0xffffffff) {
      if (uVar24 != uVar18) {
LAB_00102c76:
        bVar1 = *pbVar19;
        if (bVar1 != 0) {
          pbVar17 = (byte *)stdout->_IO_write_ptr;
          if (pbVar17 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = (char *)(pbVar17 + 1);
            *pbVar17 = bVar1;
          }
          else {
            pFVar15 = stdout;
            iVar7 = __overflow(stdout,(uint)bVar1);
            if (iVar7 < 0) goto LAB_00102c52;
          }
        }
        pbVar19 = pbVar19 + 1;
        bVar29 = true;
        if ((byte *)delim_end == pbVar19) goto LAB_00102ce2;
LAB_00102c94:
        while( true ) {
          bVar4 = uVar24 <= uVar18;
          ppFVar28 = ppFVar28 + 1;
          uVar18 = uVar18 + 1;
          if (bVar4 || uVar26 == 0) goto LAB_00102d72;
          pFVar15 = *ppFVar28;
          if (pFVar15 != (FILE *)0x0) goto LAB_00102bb0;
LAB_00102cbc:
          if (uVar24 == uVar18) break;
          if (*pbVar19 != 0) {
            *(byte *)((long)&__ptr->_flags + __n) = *pbVar19;
            __n = __n + 1;
          }
          pbVar19 = pbVar19 + 1;
          if ((byte *)delim_end == pbVar19) {
LAB_00102ce2:
            pbVar19 = (byte *)delims;
          }
        }
        if (bVar29) {
          if ((__n != 0) &&
             (pFVar15 = __ptr, sVar11 = fwrite_unlocked(__ptr,1,__n,stdout), sVar11 != __n))
          goto LAB_00102c52;
          uVar5 = line_delim;
          puVar3 = (uchar *)stdout->_IO_write_ptr;
          if (puVar3 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = (char *)(puVar3 + 1);
            *puVar3 = uVar5;
          }
          else {
            pFVar15 = stdout;
            iVar7 = __overflow(stdout,(uint)line_delim);
            if (iVar7 < 0) goto LAB_00102c52;
          }
        }
LAB_00102d72:
        if (uVar26 != 0) goto LAB_00102b84;
        goto LAB_00102d7b;
      }
      uVar8 = (uint)line_delim;
LAB_00102cf5:
      pcVar2 = stdout->_IO_write_ptr;
      if (pcVar2 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar2 + 1;
        *pcVar2 = (char)uVar8;
LAB_00102d15:
        bVar29 = true;
        goto LAB_00102c94;
      }
      pFVar15 = stdout;
      iVar7 = __overflow(stdout,uVar8 & 0xff);
      if (-1 < iVar7) goto LAB_00102d15;
LAB_00102c52:
      write_error();
    }
  } while( true );
}

