
/* WARNING: Removing unreachable block (ram,0x00103f6d) */
/* WARNING: Removing unreachable block (ram,0x00103f5f) */
/* WARNING: Removing unreachable block (ram,0x00103f53) */
/* WARNING: Removing unreachable block (ram,0x00103f44) */

_Bool wc(int fd,char *file_x,fstatus *fstatus,off_t current_pos)

{
  uint *puVar1;
  undefined uVar2;
  wint_t wVar3;
  int iVar4;
  size_t sVar5;
  __off_t _Var6;
  size_t sVar7;
  size_t sVar8;
  ushort **ppuVar9;
  undefined8 uVar10;
  int *piVar11;
  ulong uVar12;
  uint uVar13;
  uintmax_t bytes_00;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  byte bVar17;
  char *pcVar18;
  long lVar19;
  ulong uVar20;
  byte *s;
  uintmax_t words;
  wchar_t __c;
  size_t n;
  undefined *puVar21;
  long in_FS_OFFSET;
  char cVar22;
  wchar_t wide_char;
  uintmax_t lines;
  uintmax_t bytes;
  mbstate_t state;
  char buf [16385];
  
  puVar14 = &stack0xffffffffffffffd0;
  do {
    puVar15 = puVar14;
    *(undefined8 *)(puVar15 + -0x1000) = *(undefined8 *)(puVar15 + -0x1000);
    puVar14 = puVar15 + -0x1000;
  } while (puVar15 + -0x1000 != buf + 0x18);
  *(int *)(puVar15 + -0x1050) = fd;
  *(char **)(puVar15 + -0x1048) = file_x;
  *(undefined8 *)(puVar15 + 0x2ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(char **)(puVar15 + -0x1040) = file_x;
  if (file_x == (char *)0x0) {
    *(undefined8 *)(puVar15 + -0x1080) = 0x103d89;
    uVar10 = dcgettext(0,"standard input",5);
    *(undefined8 *)(puVar15 + -0x1040) = uVar10;
  }
  *(undefined8 *)(puVar15 + -0x1028) = 0;
  *(undefined8 *)(puVar15 + -0x1030) = 0;
  *(undefined8 *)(puVar15 + -0x1080) = 0x10368e;
  sVar5 = __ctype_get_mb_cur_max();
  uVar2 = print_linelength;
  cVar22 = print_bytes;
  if (sVar5 < 2) {
    puVar15[-0x1049] = 0;
    if (print_bytes == false) {
      cVar22 = print_chars;
    }
  }
  else {
    puVar15[-0x1049] = print_chars;
  }
  if ((print_words == false) && (print_linelength == false)) {
    if ((cVar22 == '\x01') && (puVar15[-0x1049] == '\0')) {
      if (print_lines != false) {
        *(undefined8 *)(puVar15 + -0x1080) = 0x104072;
        fdadvise(*(int *)(puVar15 + -0x1050),0,0,2);
LAB_00103f2c:
        if (print_lines != false) {
LAB_00103f40:
          piVar11 = (int *)cpuid_basic_info(0);
          uVar13 = piVar11[3];
          if (*piVar11 == 0) {
LAB_00103fd0:
            if (debug != false) {
              pcVar18 = "failed to get cpuid";
LAB_00103fe5:
              *(undefined8 *)(puVar15 + -0x1080) = 0x103fec;
              uVar10 = dcgettext(0,pcVar18,5,uVar13);
              *(undefined8 *)(puVar15 + -0x1080) = 0x104001;
              error(0,0,"%s",uVar10);
            }
          }
          else {
            lVar19 = cpuid_Version_info(1);
            uVar13 = *(uint *)(lVar19 + 0xc) & 0x8000000;
            if (uVar13 == 0) {
LAB_00103f78:
              pcVar18 = "avx2 support not detected";
              if (debug != false) goto LAB_00103fe5;
            }
            else {
              puVar1 = (uint *)cpuid_basic_info(0);
              uVar13 = puVar1[3];
              if (*puVar1 < 7) goto LAB_00103fd0;
              lVar19 = cpuid_Extended_Feature_Enumeration_info(7);
              uVar13 = *(uint *)(lVar19 + 0xc);
              if ((*(uint *)(lVar19 + 4) & 0x20) == 0) goto LAB_00103f78;
              if (debug != false) {
                *(undefined8 *)(puVar15 + -0x1080) = 0x104032;
                uVar10 = dcgettext(0,"using avx2 hardware support",5,uVar13);
                *(undefined8 *)(puVar15 + -0x1080) = 0x104047;
                error(0,0,"%s",uVar10);
              }
              wc_lines_p = wc_lines_avx2;
            }
          }
          uVar16 = 0;
          sVar7 = 0;
          words = 0;
          *(undefined8 *)(puVar15 + -0x1080) = 0x103fb1;
          uVar2 = (*wc_lines_p)(*(char **)(puVar15 + -0x1040),*(int *)(puVar15 + -0x1050),
                                (uintmax_t *)(puVar15 + -0x1030),(uintmax_t *)(puVar15 + -0x1028));
          bytes_00 = *(uintmax_t *)(puVar15 + -0x1028);
          goto LAB_00103800;
        }
      }
      iVar4 = fstatus->failed;
      if (0 < iVar4) {
        *(undefined8 *)(puVar15 + -0x1080) = 0x103eae;
        iVar4 = __fxstat(1,*(int *)(puVar15 + -0x1050),(stat *)&fstatus->st);
        fstatus->failed = iVar4;
      }
      sVar7 = page_size;
      if (((iVar4 == 0) && (((fstatus->st).st_mode & 0xd000) == 0x8000)) &&
         (bytes_00 = (fstatus->st).st_size, -1 < (long)bytes_00)) {
        if (current_pos == -1) {
          *(uintmax_t *)(puVar15 + -0x1070) = bytes_00;
          *(undefined8 *)(puVar15 + -0x1080) = 0x103eca;
          uVar12 = lseek(*(int *)(puVar15 + -0x1050),0,1);
          uVar16 = *(ulong *)(puVar15 + -0x1070);
          if (uVar16 % sVar7 != 0) {
            if (uVar16 < uVar12) {
              bytes_00 = 0;
            }
            else {
              bytes_00 = uVar16 - uVar12;
            }
            goto LAB_00103eee;
          }
          bVar17 = (byte)~(byte)(uVar12 >> 0x38) >> 7;
        }
        else {
          if (bytes_00 % page_size != 0) {
LAB_00103eee:
            *(uintmax_t *)(puVar15 + -0x1028) = bytes_00;
            uVar16 = 0;
            sVar7 = 0;
            words = 0;
            uVar2 = 1;
            goto LAB_00103800;
          }
          bVar17 = 1;
          uVar12 = 0;
        }
        lVar19 = (fstatus->st).st_blksize;
        uVar16 = 0x201;
        if (lVar19 - 1U < 0x2000000000000000) {
          uVar16 = lVar19 + 1;
        }
        lVar19 = bytes_00 - bytes_00 % uVar16;
        if (((long)uVar12 < lVar19) && (bVar17 != 0)) {
          *(undefined8 *)(puVar15 + -0x1080) = 0x103791;
          _Var6 = lseek(*(int *)(puVar15 + -0x1050),lVar19,1);
          if (-1 < _Var6) {
            *(ulong *)(puVar15 + -0x1028) = lVar19 - uVar12;
          }
        }
      }
      iVar4 = *(int *)(puVar15 + -0x1050);
      *(undefined8 *)(puVar15 + -0x1080) = 0x1037b7;
      fdadvise(iVar4,0,0,2);
      while( true ) {
        *(undefined8 *)(puVar15 + -0x1080) = 0x1037de;
        sVar7 = safe_read(iVar4,puVar15 + -0x1018,0x4000);
        if (sVar7 == 0) break;
        if (sVar7 == 0xffffffffffffffff) {
          uVar16 = 0;
          words = 0;
          *(undefined8 *)(puVar15 + -0x1080) = 0x103e72;
          uVar10 = quotearg_n_style_colon(0,3,*(undefined8 *)(puVar15 + -0x1040));
          *(undefined8 *)(puVar15 + -0x1080) = 0x103e7a;
          piVar11 = __errno_location();
          iVar4 = *piVar11;
          sVar7 = 0;
          *(undefined8 *)(puVar15 + -0x1080) = 0x103e92;
          error(0,iVar4,"%s",uVar10);
          bytes_00 = *(uintmax_t *)(puVar15 + -0x1028);
          goto LAB_00103800;
        }
        *(size_t *)(puVar15 + -0x1028) = *(long *)(puVar15 + -0x1028) + sVar7;
      }
      bytes_00 = *(uintmax_t *)(puVar15 + -0x1028);
      uVar16 = 0;
      words = 0;
      uVar2 = 1;
      goto LAB_00103800;
    }
    *(undefined8 *)(puVar15 + -0x1080) = 0x103f18;
    fdadvise(*(int *)(puVar15 + -0x1050),0,0,2);
    if (puVar15[-0x1049] != '\x01') {
      if (cVar22 != '\0') goto LAB_00103f2c;
      if (puVar15[-0x1049] == '\0') goto LAB_00103f40;
    }
  }
  else {
    *(undefined8 *)(puVar15 + -0x1080) = 0x1038a2;
    fdadvise(*(int *)(puVar15 + -0x1050),0,0,2);
  }
  *(undefined8 *)(puVar15 + -0x1080) = 0x1038a7;
  sVar5 = __ctype_get_mb_cur_max();
  if (sVar5 < 2) {
    uVar12 = 0;
    lVar19 = 0;
    *(undefined **)(puVar15 + -0x1058) = puVar15 + -0x1018;
    uVar20 = 0;
    uVar16 = uVar12;
    while( true ) {
      *(undefined8 *)(puVar15 + -0x1080) = 0x103c5b;
      sVar7 = safe_read(*(int *)(puVar15 + -0x1050),*(void **)(puVar15 + -0x1058),0x4000);
      if (sVar7 == 0) break;
      if (sVar7 == 0xffffffffffffffff) {
        *(undefined8 *)(puVar15 + -0x1080) = 0x103e3a;
        uVar10 = quotearg_n_style_colon(0,3,*(undefined8 *)(puVar15 + -0x1040));
        uVar2 = 0;
        *(undefined8 *)(puVar15 + -0x1080) = 0x103e45;
        piVar11 = __errno_location();
        iVar4 = *piVar11;
        *(undefined8 *)(puVar15 + -0x1080) = 0x103e5a;
        error(0,iVar4,"%s",uVar10);
        goto LAB_00103dff;
      }
      *(size_t *)(puVar15 + -0x1028) = *(long *)(puVar15 + -0x1028) + sVar7;
      puVar21 = *(undefined **)(puVar15 + -0x1058);
      puVar14 = puVar21 + sVar7;
      do {
        uVar2 = *puVar21;
        puVar21 = puVar21 + 1;
        switch(uVar2) {
        case 9:
          uVar16 = (uVar16 & 0xfffffffffffffff8) + 8;
          break;
        case 10:
          *(long *)(puVar15 + -0x1030) = *(long *)(puVar15 + -0x1030) + 1;
        case 0xc:
        case 0xd:
          if (uVar12 < uVar16) {
            uVar12 = uVar16;
          }
          uVar16 = 0;
          break;
        case 0xb:
          break;
        default:
          *(undefined **)(puVar15 + -0x1068) = puVar14;
          puVar15[-0x1070] = uVar2;
          *(undefined8 *)(puVar15 + -0x1080) = 0x103caf;
          ppuVar9 = __ctype_b_loc();
          puVar14 = *(undefined **)(puVar15 + -0x1068);
          bVar17 = puVar15[-0x1070];
          if (((*ppuVar9)[bVar17] & 0x4000) != 0) {
            uVar16 = uVar16 + 1;
            if (((*ppuVar9)[bVar17] & 0x2000) != 0) break;
            *(undefined **)(puVar15 + -0x1070) = puVar14;
            *(undefined8 *)(puVar15 + -0x1080) = 0x103cde;
            wVar3 = btowc((uint)bVar17);
            puVar14 = *(undefined **)(puVar15 + -0x1070);
            if (posixly_correct == false) {
              if (((wVar3 == 0xa0) || (wVar3 == 0x2007)) || ((wVar3 == 0x202f || (wVar3 == 0x2060)))
                 ) break;
              uVar20 = 1;
            }
            else {
              uVar20 = (ulong)posixly_correct;
            }
          }
          goto LAB_00103d18;
        case 0x20:
          uVar16 = uVar16 + 1;
        }
        lVar19 = lVar19 + uVar20;
        uVar20 = 0;
LAB_00103d18:
      } while (puVar21 != puVar14);
    }
    uVar2 = 1;
LAB_00103dff:
    bytes_00 = *(uintmax_t *)(puVar15 + -0x1028);
    if (uVar16 <= uVar12) {
      uVar16 = uVar12;
    }
    words = uVar20 + lVar19;
    sVar7 = 0;
  }
  else {
    n = 0;
    cVar22 = '\0';
    uVar16 = 0;
    *(undefined8 *)(puVar15 + -0x1020) = 0;
    uVar12 = 0;
    sVar7 = 0;
    *(undefined8 *)(puVar15 + -0x1060) = 0;
    *(undefined8 *)(puVar15 + -0x1068) = 0;
    *(undefined **)(puVar15 + -0x1058) = puVar15 + -0x1018;
LAB_001038e8:
    *(undefined8 *)(puVar15 + -0x1080) = 0x103902;
    sVar8 = safe_read(*(int *)(puVar15 + -0x1050),(void *)(*(long *)(puVar15 + -0x1058) + n),
                      0x4000 - n);
    if (sVar8 != 0) {
      if (sVar8 == 0xffffffffffffffff) {
        *(undefined8 *)(puVar15 + -0x1080) = 0x103dc8;
        uVar10 = quotearg_n_style_colon(0,3,*(undefined8 *)(puVar15 + -0x1040));
        *(undefined8 *)(puVar15 + -0x1080) = 0x103dd0;
        piVar11 = __errno_location();
        iVar4 = *piVar11;
        uVar2 = 0;
        *(undefined8 *)(puVar15 + -0x1080) = 0x103de8;
        error(0,iVar4,"%s",uVar10);
        goto LAB_00103d99;
      }
      *(size_t *)(puVar15 + -0x1028) = *(long *)(puVar15 + -0x1028) + sVar8;
      n = n + sVar8;
      s = *(byte **)(puVar15 + -0x1058);
      do {
        if (cVar22 != '\0') {
LAB_00103a40:
          *(undefined8 *)(puVar15 + -0x1070) = *(undefined8 *)(puVar15 + -0x1020);
          *(undefined8 *)(puVar15 + -0x1080) = 0x103a62;
          sVar8 = rpl_mbrtowc((wchar_t *)(puVar15 + -0x1034),(char *)s,n,
                              (mbstate_t *)(mbstate_t *)(puVar15 + -0x1020));
          if (sVar8 != 0xfffffffffffffffe) {
            if (sVar8 != 0xffffffffffffffff) {
              *(size_t *)(puVar15 + -0x1070) = sVar8;
              *(undefined8 *)(puVar15 + -0x1080) = 0x103a83;
              iVar4 = mbsinit((mbstate_t *)(puVar15 + -0x1020));
              lVar19 = *(long *)(puVar15 + -0x1070);
              cVar22 = iVar4 == 0;
              if (lVar19 == 0) {
                *(undefined4 *)(puVar15 + -0x1034) = 0;
                __c = L'\0';
                lVar19 = 1;
              }
              else {
                __c = *(wchar_t *)(puVar15 + -0x1034);
                switch(__c) {
                case L'\t':
                  goto switchD_00103b70_caseD_9;
                case L'\n':
                  goto switchD_00103b70_caseD_a;
                case L'\v':
                  goto mb_word_separator;
                case L'\f':
                case L'\r':
                  goto switchD_00103b70_caseD_c;
                case L' ':
                  goto switchD_00103b70_caseD_20;
                }
              }
              puVar15[-0x104a] = cVar22;
              *(long *)(puVar15 + -0x1070) = lVar19;
              *(undefined8 *)(puVar15 + -0x1080) = 0x103ab9;
              iVar4 = iswprint(__c);
              lVar19 = *(long *)(puVar15 + -0x1070);
              cVar22 = puVar15[-0x104a];
              if (iVar4 != 0) {
                if (print_linelength != false) {
                  *(undefined8 *)(puVar15 + -0x1080) = 0x103c08;
                  iVar4 = wcwidth(__c);
                  cVar22 = puVar15[-0x104a];
                  lVar19 = *(long *)(puVar15 + -0x1070);
                  if (0 < iVar4) {
                    uVar16 = (long)iVar4 + uVar16;
                  }
                }
                wVar3 = *(wint_t *)(puVar15 + -0x1034);
                puVar15[-0x104a] = cVar22;
                *(long *)(puVar15 + -0x1070) = lVar19;
                *(undefined8 *)(puVar15 + -0x1080) = 0x103af0;
                iVar4 = iswspace(wVar3);
                lVar19 = *(long *)(puVar15 + -0x1070);
                cVar22 = puVar15[-0x104a];
                if (iVar4 != 0) goto mb_word_separator;
                if (posixly_correct == false) {
                  if ((((wVar3 == 0xa0) || (wVar3 == 0x2007)) || (wVar3 == 0x202f)) ||
                     (wVar3 == 0x2060)) goto mb_word_separator;
                  uVar12 = 1;
                }
                else {
                  uVar12 = (ulong)posixly_correct;
                }
              }
              goto LAB_001039c0;
            }
            s = s + 1;
            lVar19 = -1;
            cVar22 = '\x01';
            goto LAB_001039ca;
          }
          *(undefined8 *)(puVar15 + -0x1020) = *(undefined8 *)(puVar15 + -0x1070);
          if (n != 0) {
            if (n == 0x4000) {
              s = s + 1;
              n = 0x3fff;
            }
            *(undefined8 *)(puVar15 + -0x1080) = 0x103bca;
            __memmove_chk(*(undefined8 *)(puVar15 + -0x1058),s,n);
          }
          cVar22 = '\x01';
          break;
        }
        bVar17 = *s;
        uVar13 = *(uint *)(is_basic_table + (ulong)(bVar17 >> 5) * 4) >> (bVar17 & 0x1f) & 1;
        if (uVar13 == 0) goto LAB_00103a40;
        *(int *)(puVar15 + -0x1034) = (int)(char)bVar17;
        switch(bVar17) {
        case 9:
          lVar19 = 1;
switchD_00103b70_caseD_9:
          uVar16 = (uVar16 & 0xfffffffffffffff8) + 8;
          break;
        case 10:
          lVar19 = 1;
switchD_00103b70_caseD_a:
          *(long *)(puVar15 + -0x1030) = *(long *)(puVar15 + -0x1030) + 1;
          goto switchD_00103b70_caseD_c;
        case 0xb:
          lVar19 = 1;
          break;
        case 0xc:
        case 0xd:
          lVar19 = 1;
switchD_00103b70_caseD_c:
          if (uVar16 <= *(ulong *)(puVar15 + -0x1060)) {
            uVar16 = *(ulong *)(puVar15 + -0x1060);
          }
          *(ulong *)(puVar15 + -0x1060) = uVar16;
          uVar16 = 0;
          break;
        default:
          puVar15[-0x104a] = 0;
          puVar15[-0x1070] = bVar17;
          *(undefined8 *)(puVar15 + -0x1080) = 0x103996;
          ppuVar9 = __ctype_b_loc();
          cVar22 = puVar15[-0x104a];
          lVar19 = 1;
          if (((*ppuVar9)[(byte)puVar15[-0x1070]] & 0x4000) != 0) {
            uVar16 = uVar16 + 1;
            if (((*ppuVar9)[(byte)puVar15[-0x1070]] & 0x2000) != 0) break;
            uVar12 = (ulong)uVar13;
          }
          goto LAB_001039c0;
        case 0x20:
          lVar19 = 1;
switchD_00103b70_caseD_20:
          uVar16 = uVar16 + 1;
        }
mb_word_separator:
        *(ulong *)(puVar15 + -0x1068) = *(long *)(puVar15 + -0x1068) + uVar12;
        uVar12 = 0;
LAB_001039c0:
        s = s + lVar19;
        lVar19 = -lVar19;
        sVar7 = sVar7 + 1;
LAB_001039ca:
        n = n + lVar19;
      } while (n != 0);
      goto LAB_001038e8;
    }
    uVar2 = 1;
LAB_00103d99:
    bytes_00 = *(uintmax_t *)(puVar15 + -0x1028);
    if (uVar16 <= *(ulong *)(puVar15 + -0x1060)) {
      uVar16 = *(ulong *)(puVar15 + -0x1060);
    }
    words = *(long *)(puVar15 + -0x1068) + uVar12;
  }
LAB_00103800:
  if ((byte)puVar15[-0x1049] < print_chars) {
    sVar7 = bytes_00;
  }
  *(undefined8 *)(puVar15 + -0x1080) = 0x103827;
  write_counts(*(uintmax_t *)(puVar15 + -0x1030),words,sVar7,bytes_00,uVar16,
               *(char **)(puVar15 + -0x1048));
  total_words = total_words + words;
  total_lines = total_lines + *(long *)(puVar15 + -0x1030);
  total_chars = total_chars + sVar7;
  total_bytes = total_bytes + *(long *)(puVar15 + -0x1028);
  if (max_line_length < uVar16) {
    max_line_length = uVar16;
  }
  if (*(long *)(puVar15 + 0x2ff0) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar15 + -0x1080) = 0x10407c;
    __stack_chk_fail();
  }
  return (_Bool)uVar2;
}

