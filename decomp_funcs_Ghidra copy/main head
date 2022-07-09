
/* WARNING: Could not reconcile some variable overlaps */

int main(int argc,char **argv)

{
  long *plVar1;
  void **ppvVar2;
  long lVar3;
  byte **ppbVar4;
  byte bVar5;
  int __fildes;
  uint uVar6;
  int iVar7;
  Copy_fd_status CVar8;
  char *pcVar9;
  int *piVar10;
  void **p;
  void *buf;
  char *pcVar11;
  size_t sVar12;
  byte *pbVar13;
  Elf64_Ehdr *pEVar14;
  off_t oVar15;
  char **ppcVar16;
  __blksize_t _Var17;
  char *pcVar18;
  Elf64_Ehdr *pEVar19;
  char *pcVar20;
  ulong uVar21;
  Elf64_Ehdr *pEVar22;
  uint uVar23;
  Elf64_Ehdr *pEVar24;
  char cVar25;
  _Bool _Var26;
  Elf64_Ehdr *pEVar27;
  long lVar28;
  long lVar29;
  void **ppvVar30;
  long in_FS_OFFSET;
  bool bVar31;
  undefined auVar32 [16];
  undefined8 uVar33;
  Elf64_Ehdr *local_168;
  byte **local_160;
  uint local_158;
  byte local_153;
  char local_152;
  byte local_151;
  Elf64_Ehdr *local_150;
  char *local_148;
  char *local_140;
  Elf64_Ehdr *local_138;
  char *local_130;
  char *local_128;
  Elf64_Ehdr *local_120;
  Elf64_Ehdr *local_118;
  ulong local_110;
  byte *local_108;
  char *local_100;
  char *b [2];
  stat st;
  char umax_buf [21];
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  have_read_stdin = false;
  print_headers = false;
  line_end = '\n';
  if (((argc < 2) || (pcVar9 = argv[1], *pcVar9 != '-')) || (9 < (int)pcVar9[1] - 0x30U)) {
    local_152 = '\x01';
    iVar7 = 0;
    local_168 = (Elf64_Ehdr *)0xa;
    ppcVar16 = argv;
  }
  else {
    pcVar20 = pcVar9 + 1;
    do {
      pcVar11 = pcVar20;
      uVar6 = (uint)pcVar11[1];
      pcVar20 = pcVar11 + 1;
    } while (uVar6 - 0x30 < 10);
    if (pcVar11[1] == '\0') {
      local_152 = true;
      iVar7 = 0;
    }
    else {
      bVar31 = false;
      cVar25 = '\n';
      uVar23 = 0;
      _Var26 = true;
      iVar7 = 0;
      pcVar18 = pcVar20;
      do {
        switch((char)uVar6) {
        case 'b':
        case 'k':
        case 'm':
          _Var26 = false;
          uVar23 = uVar6;
          break;
        case 'c':
          uVar23 = 0;
          _Var26 = false;
          break;
        default:
          if (bVar31) {
            line_end = cVar25;
          }
          uVar33 = dcgettext(0,"invalid trailing option -- %c",5);
          __fildes = (int)(char)uVar6;
          goto LAB_001032b3;
        case 'l':
          _Var26 = true;
          break;
        case 'q':
          iVar7 = 2;
          break;
        case 'v':
          iVar7 = 1;
          break;
        case 'z':
          bVar31 = true;
          cVar25 = '\0';
        }
        pbVar13 = (byte *)(pcVar18 + 1);
        uVar6 = (uint)*pbVar13;
        pcVar18 = pcVar18 + 1;
      } while (*pbVar13 != 0);
      if (bVar31) {
        line_end = cVar25;
      }
      *pcVar20 = (char)uVar23;
      local_152 = _Var26;
      if ((char)uVar23 != '\0') {
        pcVar11[2] = '\0';
      }
    }
    ppcVar16 = argv + 1;
    argc = argc + -1;
    local_168 = (Elf64_Ehdr *)string_to_integer((_Bool)local_152,pcVar9 + 1);
    *ppcVar16 = *argv;
  }
  local_153 = 0;
  do {
    uVar33 = 0x1027e3;
    __fildes = getopt_long(argc,ppcVar16,"c:n:qvz0123456789",long_options,0);
    if (__fildes == -1) {
      if ((iVar7 == 1) || ((iVar7 == 0 && (optind < argc + -1)))) {
        print_headers = true;
      }
      if (((local_152 == '\0') && (local_153 != 0)) && ((long)local_168 < 0)) {
        pcVar9 = umaxtostr((uintmax_t)local_168,umax_buf);
        pcVar9 = quote(pcVar9);
        uVar33 = dcgettext(0,"invalid number of bytes",5);
        auVar32 = error(1,0x4b,"%s: %s",uVar33,pcVar9);
        pEVar24 = local_168;
        local_168 = SUB168(auVar32,0);
        (*(code *)PTR___libc_start_main_0010cfd0)
                  (main,pEVar24,&local_160,__libc_csu_init,__libc_csu_fini,SUB168(auVar32 >> 0x40,0)
                   ,&local_168);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      if (optind < argc) {
        ppcVar16 = ppcVar16 + optind;
        pcVar9 = *ppcVar16;
        if (pcVar9 == (char *)0x0) {
          local_151 = 1;
          goto LAB_00102df9;
        }
      }
      else {
        ppcVar16 = main::default_file_list;
        pcVar9 = "-";
      }
      local_151 = 1;
      local_108 = (byte *)(ulong)((uint)local_168 & 0x1fff);
      local_110 = 0x2000 - (long)local_108;
      local_120 = (Elf64_Ehdr *)((long)local_168 + local_110 >> 0xd);
      local_138 = (Elf64_Ehdr *)local_120->e_ident_magic_str;
      local_118 = (Elf64_Ehdr *)((ulong)local_138 >> 1);
      local_160 = (byte **)ppcVar16 + 1;
      do {
        local_158 = (byte)*pcVar9 - 0x2d;
        if ((local_158 == 0) && (local_158 = (uint)(byte)pcVar9[1], local_158 == 0)) {
          __fildes = 0;
          have_read_stdin = true;
          pcVar9 = (char *)dcgettext(0,"standard input",5);
        }
        else {
          __fildes = open(pcVar9,0);
          if (__fildes < 0) {
            pcVar9 = quotearg_style(shell_escape_always_quoting_style,pcVar9);
            pcVar20 = "cannot open %s for reading";
            goto LAB_00102ba4;
          }
        }
        if (print_headers != false) {
          pcVar20 = "\n";
          if (first_file_7231 != '\0') {
            pcVar20 = "";
          }
          __printf_chk(1,"%s==> %s <==\n",pcVar20,pcVar9);
          first_file_7231 = '\0';
        }
        if (local_153 == 0) {
          if (local_152 == '\0') {
            local_150._0_1_ = head_bytes(pcVar9,__fildes,(uintmax_t)local_168);
          }
          else {
            local_150._0_1_ = head_lines(pcVar9,__fildes,(uintmax_t)local_168);
          }
        }
        else {
          iVar7 = __fxstat(1,__fildes,(stat *)&st);
          if (iVar7 == 0) {
            if ((presume_input_pipe == false) && ((st.st_mode & 0xd000) == 0x8000))
            goto LAB_001031f1;
            local_128 = (char *)0xffffffffffffffff;
            if (local_152 != '\0') goto LAB_00102e59;
            goto LAB_00102c34;
          }
          pcVar20 = quotearg_style(shell_escape_always_quoting_style,pcVar9);
          uVar33 = dcgettext(0,"cannot fstat %s",5);
          piVar10 = __errno_location();
          error(0,*piVar10,uVar33,pcVar20);
          local_150._0_1_ = 0;
        }
LAB_00102b38:
        if ((local_158 != 0) && (iVar7 = close(__fildes), iVar7 != 0)) {
          pcVar9 = quotearg_style(shell_escape_always_quoting_style,pcVar9);
          pcVar20 = "failed to close %s";
LAB_00102ba4:
          local_150._0_1_ = 0;
          uVar33 = dcgettext(0,pcVar20,5);
          piVar10 = __errno_location();
          error(0,*piVar10,uVar33,pcVar9);
        }
        ppbVar4 = local_160 + 1;
        local_151 = local_151 & (byte)local_150;
        pcVar9 = (char *)*local_160;
        local_160 = ppbVar4;
      } while (pcVar9 != (char *)0x0);
LAB_00102df9:
      if ((have_read_stdin == false) || (iVar7 = close(0), -1 < iVar7)) {
        if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
          return (int)(local_151 ^ 1);
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      piVar10 = __errno_location();
      error(1,*piVar10,&DAT_00108155);
LAB_001031f1:
      local_128 = (char *)elseek(__fildes,0,1,pcVar9);
      _Var26 = presume_input_pipe;
      if ((long)local_128 < 0) {
LAB_0010316b:
        local_150._0_1_ = 0;
      }
      else if (local_152 == '\0') {
        if (presume_input_pipe == false) {
          _Var17 = st.st_blksize;
          if (0x1fffffffffffffff < st.st_blksize - 1U) {
            _Var17 = 0x200;
          }
          if (_Var17 < st.st_size) {
            pEVar24 = (Elf64_Ehdr *)(st.st_size - (long)local_128);
            if ((long)pEVar24 < 0) {
              pEVar24 = (Elf64_Ehdr *)0x0;
            }
            local_150._0_1_ = local_153;
            if ((local_168 < pEVar24) &&
               (CVar8 = copy_fd(__fildes,(long)pEVar24 - (long)local_168),
               local_150._0_1_ = local_153, CVar8 != COPY_FD_OK)) {
              diagnose_copy_fd_failure();
              local_150._0_1_ = _Var26;
            }
            goto LAB_00102b38;
          }
        }
LAB_00102c34:
        pEVar24 = local_168;
        local_148 = local_128;
        if (&Elf64_Ehdr_00100000 < local_168) {
          bVar5 = 0;
          p = (void **)0x0;
          local_130 = (char *)0x0;
          pEVar14 = (Elf64_Ehdr *)0x0;
          local_150 = (Elf64_Ehdr *)0x1;
          pEVar24 = (Elf64_Ehdr *)0x0;
          pEVar19 = local_150;
          local_100 = pcVar9;
          do {
            local_150 = pEVar19;
            if (pEVar24 == (Elf64_Ehdr *)0x0) {
              pEVar22 = (Elf64_Ehdr *)0x10;
              if (local_138 < (Elf64_Ehdr *)0x11) {
                pEVar22 = local_138;
              }
            }
            else {
              pEVar22 = (Elf64_Ehdr *)((long)pEVar24 * 2);
              if (local_118 < pEVar24) {
                pEVar22 = local_138;
              }
            }
            p = (void **)xreallocarray(p,(size_t)pEVar22,8);
            pEVar27 = pEVar14;
            pEVar19 = local_150;
            local_150 = pEVar22;
            do {
              pEVar14 = pEVar19;
              if (bVar5 != 0) {
                pcVar20 = (char *)full_read(__fildes,p[(long)pEVar27],0x2000);
                if ((char *)0x1fff < pcVar20) {
                  local_148 = local_148 + (long)pcVar20;
                  local_150._0_1_ = 0;
LAB_00102dc0:
                  local_140 = (char *)((ulong)local_140 & 0xffffffffffffff00 |
                                      (ulong)(byte)local_150);
                  xwrite_stdout((char *)p[(long)pEVar14],(size_t)pcVar20);
                  local_150._0_1_ = (byte)local_140;
                  bVar5 = local_153;
                  goto LAB_00102d02;
                }
                piVar10 = __errno_location();
                local_150._0_1_ = bVar5;
                if (*piVar10 == 0) goto LAB_00102cef;
LAB_0010359a:
                pcVar9 = local_100;
                pcVar20 = quotearg_style(shell_escape_always_quoting_style,local_100);
                uVar33 = dcgettext(0,"error reading %s",5);
                local_150._0_1_ = 0;
                error(0,*piVar10,uVar33,pcVar20);
free_mem:
                ppvVar2 = p + (long)local_130;
                for (ppvVar30 = p; ppvVar30 != ppvVar2; ppvVar30 = ppvVar30 + 1) {
                  rpl_free(*ppvVar30);
                }
                rpl_free(p);
                goto LAB_001033e1;
              }
              buf = xmalloc(0x2000);
              p[(long)pEVar27] = buf;
              local_130 = pEVar27->e_ident_magic_str;
              pcVar20 = (char *)full_read(__fildes,buf,0x2000);
              if (pcVar20 < (char *)0x2000) {
                piVar10 = __errno_location();
                local_150._0_1_ = local_153;
                if (*piVar10 != 0) goto LAB_0010359a;
              }
              else {
                local_150._0_1_ = 0;
              }
              if (local_120 == pEVar27) {
LAB_00102cef:
                local_148 = local_148 + (long)pcVar20;
                bVar5 = local_153;
                if (pcVar20 != (char *)0x0) goto LAB_00102dc0;
              }
LAB_00102d02:
              pcVar9 = local_100;
              pEVar19 = (Elf64_Ehdr *)((ulong)pEVar14->e_ident_magic_str % (ulong)local_138);
              if ((byte)local_150 != 0) {
                local_150 = (Elf64_Ehdr *)((ulong)local_150 & 0xffffffffffffff00 | (ulong)bVar5);
                if (bVar5 == 0) {
                  if (local_120 == pEVar14) {
                    sVar12 = (long)pcVar20 - (long)local_108;
                    local_148 = local_148 + sVar12;
                    if (sVar12 != 0) {
                      xwrite_stdout((char *)p[(long)pEVar19],sVar12);
                    }
                  }
                }
                else {
                  uVar21 = 0x2000 - (long)pcVar20;
                  local_148 = local_148 + local_110;
                  if (local_110 < uVar21) {
                    xwrite_stdout((char *)((long)p[(long)pEVar14] + (long)pcVar20),local_110);
                  }
                  else {
                    if (uVar21 != 0) {
                      local_140 = pcVar20;
                      xwrite_stdout((char *)((long)p[(long)pEVar14] + (long)pcVar20),uVar21);
                      pcVar20 = local_140;
                      if (local_108 == (byte *)local_140) goto free_mem;
                    }
                    xwrite_stdout((char *)p[(long)pEVar19],(long)pcVar20 - (long)local_108);
                  }
                }
                goto free_mem;
              }
              pEVar24 = local_150;
              pEVar27 = pEVar14;
            } while (local_150 != pEVar14);
          } while( true );
        }
        uVar21 = 0;
        pEVar19 = local_168 + 0x80;
        local_130 = (char *)xnmalloc(2,(size_t)pEVar19);
        b[0] = local_130;
        b[1] = local_130 + (long)pEVar19;
        local_140 = pcVar9;
        local_150._0_1_ = local_153;
LAB_00103445:
        while( true ) {
          pcVar20 = b[uVar21];
          pEVar14 = (Elf64_Ehdr *)full_read(__fildes,pcVar20,(size_t)pEVar19);
          uVar6 = (uint)uVar21;
          if (pEVar14 < pEVar19) break;
          bVar5 = (byte)local_150;
          if ((byte)local_150 == 0) {
LAB_001034df:
            local_148 = local_148 + (long)pEVar24;
            pcVar11 = b[uVar6 ^ 1];
            pEVar22 = pEVar24;
            local_150._0_1_ = bVar5;
            if (pEVar24 != (Elf64_Ehdr *)0x0) {
LAB_00103500:
              local_150 = pEVar14;
              xwrite_stdout(pcVar11 + 0x2000,(size_t)pEVar22);
              pEVar14 = local_150;
              local_150._0_1_ = bVar5;
            }
            if (pEVar24 < pEVar14) {
LAB_001034b1:
              sVar12 = (long)pEVar14 - (long)pEVar24;
              local_148 = local_148 + sVar12;
              goto LAB_001034bc;
            }
            goto LAB_001034c4;
          }
          local_150._0_1_ = 0;
          if (pEVar24 < pEVar14) goto LAB_001034b1;
          uVar21 = (ulong)(uVar6 ^ 1);
          local_150._0_1_ = 0;
        }
        local_150 = pEVar14;
        pEVar14 = (Elf64_Ehdr *)__errno_location();
        pcVar9 = local_140;
        if (*(int *)pEVar14 == 0) {
          bVar5 = local_153;
          if (local_150 <= pEVar24) {
            bVar31 = (byte)local_150 == 0;
            local_150._0_1_ = local_153;
            if (bVar31) {
              local_148 = local_148 + (long)local_150;
              pcVar11 = b[uVar6 ^ 1];
              pEVar14 = local_150;
              pEVar22 = local_150;
              if (local_150 != (Elf64_Ehdr *)0x0) goto LAB_00103500;
            }
            goto LAB_00103493;
          }
          pEVar14 = local_150;
          if ((byte)local_150 == 0) goto LAB_001034df;
          sVar12 = (long)local_150 - (long)pEVar24;
          local_148 = local_148 + sVar12;
          if (sVar12 == 0) goto LAB_00103493;
LAB_001034bc:
          xwrite_stdout(pcVar20,sVar12);
LAB_001034c4:
          uVar21 = (ulong)(uVar6 ^ 1);
          pcVar9 = local_140;
          if ((byte)local_150 != 0) goto LAB_00103493;
          local_150._0_1_ = 0;
          goto LAB_00103445;
        }
        local_150 = pEVar14;
        pcVar20 = quotearg_style(shell_escape_always_quoting_style,local_140);
        uVar33 = dcgettext(0,"error reading %s",5);
        error(0,*(undefined4 *)local_150,uVar33,pcVar20);
        local_150._0_1_ = 0;
LAB_00103493:
        rpl_free(local_130);
LAB_001033e1:
        if ((local_128 != (char *)0xffffffffffffffff) &&
           (oVar15 = elseek(__fildes,(off_t)local_148,0,pcVar9), oVar15 < 0)) {
          local_150._0_1_ = 0;
        }
      }
      else if (presume_input_pipe == false) {
        _Var17 = st.st_blksize;
        if (0x1fffffffffffffff < st.st_blksize - 1U) {
          _Var17 = 0x200;
        }
        if (st.st_size <= _Var17) goto LAB_00102e59;
        bVar5 = 1;
        if ((long)local_128 < st.st_size) {
          bVar5 = elide_tail_lines_seekable
                            (pcVar9,__fildes,(uintmax_t)local_168,(off_t)local_128,st.st_size);
        }
        local_150._0_1_ = bVar5 & 1;
      }
      else {
LAB_00102e59:
        local_130 = local_128;
        pcVar11 = (char *)xmalloc(0x2020);
        *(undefined8 *)(pcVar11 + 0x2010) = 0;
        *(undefined8 *)(pcVar11 + 0x2008) = 0;
        *(undefined8 *)(pcVar11 + 0x2018) = 0;
        local_148 = pcVar11;
        pcVar20 = (char *)xmalloc(0x2020);
        local_150 = (Elf64_Ehdr *)0x0;
        local_140 = pcVar11;
        while (pcVar11 = pcVar20, sVar12 = safe_read(__fildes,pcVar11,0x2000), cVar25 = line_end,
              sVar12 - 1 < 0xfffffffffffffffe) {
          pcVar20 = pcVar11;
          if (local_168 == (Elf64_Ehdr *)0x0) {
            local_130 = local_130 + sVar12;
            xwrite_stdout(pcVar11,sVar12);
          }
          else {
            iVar7 = (int)line_end;
            *(undefined8 *)(pcVar11 + 0x2010) = 0;
            *(size_t *)(pcVar11 + 0x2008) = sVar12;
            *(undefined8 *)(pcVar11 + 0x2018) = 0;
            pcVar11[sVar12] = cVar25;
            pcVar18 = pcVar11;
            lVar28 = *(long *)(pcVar11 + 0x2010);
            while( true ) {
              pbVar13 = (byte *)rawmemchr(pcVar18,iVar7);
              pcVar18 = local_148;
              if (pcVar11 + sVar12 <= pbVar13) break;
              *(long *)(pcVar11 + 0x2010) = lVar28 + 1;
              pcVar18 = (char *)(pbVar13 + 1);
              lVar28 = lVar28 + 1;
            }
            local_150 = (Elf64_Ehdr *)(local_150->e_ident_magic_str + lVar28 + -1);
            if (*(size_t *)(pcVar11 + 0x2008) + *(long *)(local_148 + 0x2008) < 0x2000) {
              memcpy(local_148 + *(long *)(local_148 + 0x2008),pcVar11,*(size_t *)(pcVar11 + 0x2008)
                    );
              plVar1 = (long *)(pcVar18 + 0x2008);
              *plVar1 = *plVar1 + *(long *)(pcVar11 + 0x2008);
              plVar1 = (long *)(pcVar18 + 0x2010);
              *plVar1 = *plVar1 + *(long *)(pcVar11 + 0x2010);
            }
            else {
              *(char **)(local_148 + 0x2018) = pcVar11;
              if (local_168 < (Elf64_Ehdr *)((long)local_150 - *(long *)(local_140 + 0x2010))) {
                sVar12 = *(size_t *)(local_140 + 0x2008);
                local_130 = local_130 + sVar12;
                if (sVar12 != 0) {
                  xwrite_stdout(local_140,sVar12);
                }
                local_150 = (Elf64_Ehdr *)((long)local_150 - *(long *)(local_140 + 0x2010));
                pcVar20 = local_140;
                local_148 = pcVar11;
                local_140 = *(char **)(local_140 + 0x2018);
              }
              else {
                pcVar20 = (char *)xmalloc(0x2020);
                local_148 = pcVar11;
              }
            }
          }
        }
        rpl_free(pcVar11);
        pEVar24 = local_168;
        if (sVar12 == 0xffffffffffffffff) {
          local_150._0_1_ = 0;
          pcVar20 = quotearg_style(shell_escape_always_quoting_style,pcVar9);
          uVar33 = dcgettext(0,"error reading %s",5);
          piVar10 = __errno_location();
          error(0,*piVar10,uVar33,pcVar20);
          pcVar20 = local_140;
          goto joined_r0x0010363d;
        }
        if ((*(long *)(local_148 + 0x2008) != 0) &&
           (local_148[*(long *)(local_148 + 0x2008) + -1] != line_end)) {
          *(long *)(local_148 + 0x2010) = *(long *)(local_148 + 0x2010) + 1;
          local_150 = (Elf64_Ehdr *)local_150->e_ident_magic_str;
        }
        pEVar14 = (Elf64_Ehdr *)((long)local_150 - *(long *)(local_140 + 0x2010));
        pEVar19 = local_150;
        pcVar20 = local_140;
        pcVar11 = local_130;
        while (pEVar24 < pEVar14) {
          sVar12 = *(size_t *)(pcVar20 + 0x2008);
          pcVar11 = pcVar11 + sVar12;
          if (sVar12 != 0) {
            xwrite_stdout(pcVar20,sVar12);
          }
          pEVar19 = (Elf64_Ehdr *)((long)pEVar19 - *(long *)(pcVar20 + 0x2010));
          pcVar20 = *(char **)(pcVar20 + 0x2018);
          pEVar14 = (Elf64_Ehdr *)((long)pEVar19 - *(long *)(pcVar20 + 0x2010));
        }
        pcVar18 = local_140;
        local_150 = pEVar19;
        local_130 = pcVar11;
        local_150._0_1_ = local_153;
        if (local_168 < pEVar19) {
          lVar28 = *(long *)(pcVar20 + 0x2008);
          iVar7 = (int)line_end;
          lVar29 = (long)pEVar19 - (long)local_168;
          pcVar11 = pcVar20;
          do {
            pcVar11 = (char *)memchr(pcVar11,iVar7,(size_t)(pcVar20 + (lVar28 - (long)pcVar11)));
            if (pcVar11 == (char *)0x0) break;
            *(long *)(pcVar20 + 0x2010) = *(long *)(pcVar20 + 0x2010) + 1;
            pcVar11 = pcVar11 + 1;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          sVar12 = (long)pcVar11 - (long)pcVar20;
          local_130 = local_130 + sVar12;
          pcVar18 = local_140;
          local_150._0_1_ = local_153;
          if (sVar12 != 0) {
            xwrite_stdout(pcVar20,sVar12);
            pcVar18 = local_140;
            local_150._0_1_ = local_153;
          }
        }
        do {
          pcVar20 = *(char **)(pcVar18 + 0x2018);
          rpl_free(pcVar18);
joined_r0x0010363d:
          pcVar18 = pcVar20;
        } while (pcVar20 != (char *)0x0);
        if ((local_128 != (char *)0xffffffffffffffff) &&
           (oVar15 = elseek(__fildes,(off_t)local_130,0,pcVar9), oVar15 < 0)) goto LAB_0010316b;
      }
      goto LAB_00102b38;
    }
    if (0x80 < __fildes) {
switchD_0010281b_caseD_64:
      if (__fildes - 0x30U < 10) {
        uVar33 = dcgettext(0,"invalid trailing option -- %c",5);
LAB_001032b3:
        error(0,0,uVar33,__fildes);
      }
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    if (__fildes < 99) {
      if (__fildes == -0x83) {
        version_etc(stdout,"head","GNU coreutils",Version,"David MacKenzie","Jim Meyering",0,uVar33)
        ;
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (__fildes == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_0010281b_caseD_64;
    }
    switch(__fildes) {
    case 99:
      local_153 = *optarg == '-';
      if ((bool)local_153) {
        optarg = optarg + 1;
      }
      local_168 = (Elf64_Ehdr *)string_to_integer(false,optarg);
      local_152 = '\0';
      break;
    default:
      goto switchD_0010281b_caseD_64;
    case 0x6e:
      local_153 = *optarg == '-';
      if ((bool)local_153) {
        optarg = optarg + 1;
      }
      local_168 = (Elf64_Ehdr *)string_to_integer(true,optarg);
      local_152 = '\x01';
      break;
    case 0x71:
      iVar7 = 2;
      break;
    case 0x76:
      iVar7 = 1;
      break;
    case 0x7a:
      line_end = '\0';
      break;
    case 0x80:
      presume_input_pipe = true;
    }
  } while( true );
}

