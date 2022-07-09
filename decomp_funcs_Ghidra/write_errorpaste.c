
void write_error(void)

{
  byte bVar1;
  char *pcVar2;
  uchar *puVar3;
  bool bVar4;
  uchar uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  uint *puVar12;
  _IO_FILE *__ptr;
  FILE **p;
  size_t sVar13;
  int *piVar14;
  FILE *pFVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  byte *pbVar19;
  byte **ppbVar20;
  char **ppcVar21;
  long lVar22;
  char **ppcVar23;
  size_t __n;
  long lVar24;
  ulong uVar25;
  byte *pbVar26;
  ulong uVar27;
  uint uVar28;
  FILE **ppFVar29;
  bool bVar30;
  int iStack100;
  
  uVar11 = dcgettext(0,"write error",5);
  puVar12 = (uint *)__errno_location();
  lVar22 = 1;
  ppcVar21 = (char **)(ulong)*puVar12;
  error(1,ppcVar21,uVar11);
  __ptr = (_IO_FILE *)xmalloc(lVar22 + 2);
  p = (FILE **)xnmalloc(lVar22 + 1,8);
  if (lVar22 == 0) {
LAB_00102d7b:
    rpl_free(p);
    rpl_free(__ptr);
    return;
  }
  bVar30 = false;
  ppcVar23 = ppcVar21;
  lVar6 = 0;
  do {
    while ((lVar24 = lVar6, pcVar2 = *ppcVar23, *pcVar2 != '-' || (pcVar2[1] != '\0'))) {
      pFVar15 = fopen(pcVar2,"r");
      p[lVar24] = pFVar15;
      if (pFVar15 == (FILE *)0x0) goto LAB_00102f48;
      iVar7 = fileno(pFVar15);
      if (iVar7 == 0) {
        bVar30 = true;
      }
      ppcVar23 = ppcVar23 + 1;
      fadvise((FILE *)p[lVar24],FADVISE_SEQUENTIAL);
      lVar6 = lVar24 + 1;
      if (lVar22 == lVar24 + 1) goto LAB_00102b66;
    }
    have_read_stdin = true;
    ppcVar23 = ppcVar23 + 1;
    p[lVar24] = stdin;
    lVar6 = lVar24 + 1;
  } while (lVar22 != lVar24 + 1);
LAB_00102b66:
  uVar25 = lVar24 + 1;
  uVar27 = uVar25;
  if ((!bVar30) || (have_read_stdin == false)) {
LAB_00102b84:
    bVar30 = false;
    uVar18 = 1;
    __n = 0;
    pFVar15 = *p;
    pbVar19 = (byte *)delims;
    ppFVar29 = p;
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
      piVar14 = __errno_location();
      iStack100 = *piVar14;
      if (uVar8 == 0xffffffff || __n == 0) {
        if (uVar8 != 0xffffffff) goto LAB_00102c24;
        pFVar15 = *ppFVar29;
        if (pFVar15 == (FILE *)0x0) goto LAB_00102cbc;
        if ((*(byte *)&pFVar15->_flags & 0x20) == 0) {
          if (pFVar15 == stdin) {
            clearerr_unlocked(pFVar15);
            goto LAB_00102e30;
          }
          iVar7 = rpl_fclose((FILE *)pFVar15);
          if (iVar7 != -1) goto LAB_00102e30;
LAB_00102eae:
          iStack100 = *piVar14;
LAB_00102e4f:
          if (iStack100 == 0) goto LAB_00102e30;
        }
        else {
          if (pFVar15 == stdin) {
            clearerr_unlocked(pFVar15);
            goto LAB_00102e4f;
          }
          iVar7 = rpl_fclose((FILE *)pFVar15);
          if (iVar7 != -1) goto LAB_00102e4f;
          if (iStack100 == 0) goto LAB_00102eae;
        }
        uVar11 = quotearg_n_style_colon(0,3,ppcVar21[uVar18 - 1]);
        error(0,iStack100,"%s",uVar11);
LAB_00102e30:
        *ppFVar29 = (FILE *)0x0;
        uVar27 = uVar27 - 1;
        goto LAB_00102cbc;
      }
    }
    pFVar15 = __ptr;
    sVar13 = fwrite_unlocked(__ptr,1,__n,stdout);
    if (sVar13 != __n) goto LAB_00102c52;
    __n = 0;
LAB_00102c24:
    do {
      while( true ) {
        if (line_delim == uVar8) {
          if (uVar25 != uVar18) goto LAB_00102c76;
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
        pFVar15 = *ppFVar29;
        pbVar17 = (byte *)pFVar15->_IO_read_ptr;
        if (pFVar15->_IO_read_end <= pbVar17) break;
        pFVar15->_IO_read_ptr = (char *)(pbVar17 + 1);
        uVar8 = (uint)*pbVar17;
      }
      while (uVar8 = __uflow(pFVar15), uVar8 == 0xffffffff) {
        if (uVar25 != uVar18) {
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
          bVar30 = true;
          if ((byte *)delim_end == pbVar19) goto LAB_00102ce2;
LAB_00102c94:
          while( true ) {
            bVar4 = uVar25 <= uVar18;
            ppFVar29 = ppFVar29 + 1;
            uVar18 = uVar18 + 1;
            if (bVar4 || uVar27 == 0) goto LAB_00102d72;
            pFVar15 = *ppFVar29;
            if (pFVar15 != (FILE *)0x0) goto LAB_00102bb0;
LAB_00102cbc:
            if (uVar25 == uVar18) break;
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
          if (bVar30) {
            if ((__n != 0) &&
               (pFVar15 = __ptr, sVar13 = fwrite_unlocked(__ptr,1,__n,stdout), sVar13 != __n))
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
          if (uVar27 != 0) goto LAB_00102b84;
          goto LAB_00102d7b;
        }
        uVar8 = (uint)line_delim;
LAB_00102cf5:
        pcVar2 = stdout->_IO_write_ptr;
        if (pcVar2 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar2 + 1;
          *pcVar2 = (char)uVar8;
LAB_00102d15:
          bVar30 = true;
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
  uVar11 = dcgettext(0,"standard input is closed",5);
  error(1,0,uVar11);
LAB_00102f48:
  uVar11 = quotearg_n_style_colon();
  puVar12 = (uint *)__errno_location();
  lVar22 = 1;
  ppbVar20 = (byte **)(ulong)*puVar12;
  error(1,ppbVar20,"%s",uVar11);
  if (lVar22 != 0) {
    piVar14 = __errno_location();
    do {
      pbVar19 = *ppbVar20;
      uVar8 = *pbVar19 - 0x2d;
      if ((uVar8 == 0) && (uVar8 = (uint)pbVar19[1], pbVar19[1] == 0)) {
        have_read_stdin = true;
        pFVar15 = stdin;
LAB_00102fe5:
        pbVar26 = (byte *)delims;
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
              uVar28 = (uint)*pbVar16;
            }
            else {
              uVar28 = __uflow(pFVar15);
              if (uVar28 == 0xffffffff) {
                iVar7 = *piVar14;
                pcVar2 = stdout->_IO_write_ptr;
                if (pcVar2 < stdout->_IO_write_end) {
                  stdout->_IO_write_ptr = pcVar2 + 1;
                  *pcVar2 = (char)uVar9;
                }
                else {
                  iVar10 = __overflow(stdout,uVar9 & 0xff);
                  if (iVar10 < 0) goto LAB_00103268;
                }
                uVar28 = (uint)line_delim;
                if (uVar28 != uVar9) goto LAB_001030a1;
                goto LAB_001030c0;
              }
            }
            if (line_delim == uVar9) {
              bVar1 = *pbVar26;
              if (bVar1 == 0) {
LAB_0010301d:
                pbVar26 = pbVar26 + 1;
                if ((byte *)delim_end != pbVar26) goto LAB_0010302e;
              }
              else {
                pbVar19 = (byte *)stdout->_IO_write_ptr;
                if (stdout->_IO_write_end <= pbVar19) {
                  iVar7 = __overflow(stdout,(uint)bVar1);
                  if (-1 < iVar7) goto LAB_0010301d;
                  goto LAB_00103268;
                }
                pbVar26 = pbVar26 + 1;
                bVar30 = (byte *)delim_end != pbVar26;
                stdout->_IO_write_ptr = (char *)(pbVar19 + 1);
                *pbVar19 = bVar1;
                if (bVar30) goto LAB_0010302e;
              }
              pbVar26 = (byte *)delims;
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
            uVar9 = uVar28;
          } while( true );
        }
        uVar9 = __uflow(pFVar15);
        iVar7 = *piVar14;
        if (uVar9 != 0xffffffff) {
          pbVar16 = (byte *)pFVar15->_IO_read_ptr;
          pbVar17 = (byte *)pFVar15->_IO_read_end;
          goto LAB_00103039;
        }
        uVar28 = (uint)line_delim;
LAB_001030a1:
        pcVar2 = stdout->_IO_write_ptr;
        if (pcVar2 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar2 + 1;
          *pcVar2 = (char)uVar28;
        }
        else {
          iVar10 = __overflow(stdout,uVar28);
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
              iVar7 = *piVar14;
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
              iVar7 = *piVar14;
              goto LAB_0010316d;
            }
          }
          uVar11 = quotearg_n_style_colon(0,3,*ppbVar20);
          error(0,iVar7,"%s",uVar11);
        }
      }
      else {
        pFVar15 = fopen((char *)pbVar19,"r");
        if (pFVar15 != (FILE *)0x0) {
          fadvise((FILE *)pFVar15,FADVISE_SEQUENTIAL);
          goto LAB_00102fe5;
        }
LAB_00103270:
        uVar11 = quotearg_n_style_colon(0,3,*ppbVar20);
        error(0,*piVar14,"%s",uVar11);
      }
LAB_001030da:
      ppbVar20 = ppbVar20 + 1;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  return;
}

