
int main(int argc,char **argv)

{
  long lVar1;
  uchar *puVar2;
  bool bVar3;
  uchar uVar4;
  _Bool _Var5;
  char cVar6;
  int iVar7;
  strtol_error sVar8;
  long lVar9;
  undefined *puVar10;
  ushort **ppuVar11;
  char *pcVar12;
  FILE *__stream;
  char **ppcVar13;
  __int32_t **pp_Var14;
  int *piVar15;
  uint *puVar16;
  char *pcVar17;
  byte bVar18;
  option *length_00;
  ulong uVar19;
  uint uVar20;
  uint *puVar21;
  FILE *pFVar22;
  byte bVar23;
  char *pcVar24;
  byte *pbVar25;
  char *in_R9;
  FILE *pFVar26;
  char *in_R11;
  char *pcVar27;
  char *pcVar28;
  FILE *pFVar29;
  char **__lineptr;
  size_t *__n;
  long in_FS_OFFSET;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  byte bVar33;
  undefined8 uVar34;
  char **local_158;
  char *local_150;
  FILE *local_148;
  byte local_13e;
  int local_13c;
  FILE *local_138;
  char local_128;
  char **local_120;
  FILE *local_118;
  FILE *local_110;
  byte local_100;
  byte local_ff;
  char local_fe;
  byte local_fd;
  int local_fc;
  char *line;
  size_t line_chars_allocated;
  uintmax_t length;
  _Bool missing;
  undefined7 uStack223;
  uchar bin_buffer_unaligned [72];
  uchar bin_buffer_unaligned_1 [72];
  
  bVar33 = 0;
  __n = (size_t *)0x0;
  __lineptr = (char **)0xffffffff;
  pcVar12 = (char *)(ulong)(uint)argc;
  puVar21 = &switchD_001028ff::switchdataD_0010ad60;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils");
  textdomain("coreutils");
  atexit(close_stdout);
  setvbuf(stdout,(char *)0x0,1,0);
  bVar3 = false;
  __stream = (FILE *)0x10b5e1;
LAB_001028b3:
  while( true ) {
    local_138 = (FILE *)0x0;
    length_00 = long_options;
    uVar34 = 0x1028cf;
    iVar7 = getopt_long((ulong)pcVar12 & 0xffffffff,argv,"l:bctwz");
    if (iVar7 == -1) break;
    if (0x84 < iVar7) goto switchD_001028ff_caseD_64;
    if (iVar7 < 0x62) {
      if (iVar7 == -0x83) {
        version_etc((FILE *)stdout,"b2sum","GNU coreutils",Version,"Padraig Brady","Samuel Neves",0,
                    uVar34);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar7 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_001028ff_caseD_64;
    }
    switch(iVar7) {
    case 99:
      __n = (size_t *)0x1;
      break;
    default:
      goto switchD_001028ff_caseD_64;
    case 0x6c:
      pcVar24 = (char *)dcgettext(0,"invalid length",5);
      in_R9 = (char *)0x0;
      digest_length = xdectoumax((char *)optarg,0,0xffffffffffffffff,"",pcVar24,0);
      __stream = optarg;
      if ((digest_length & 7) != 0) {
        pcVar12 = quote((char *)optarg);
        uVar34 = dcgettext(0,"invalid length: %s",5);
        error(0,0,uVar34,pcVar12);
        uVar34 = dcgettext(0,"length is not a multiple of 8",5);
        error(1,0,uVar34);
        goto switchD_001028ff_caseD_83;
      }
      break;
    case 0x74:
      __lineptr = (char **)0x0;
      break;
    case 0x77:
      status_only = false;
      warn = true;
      quiet = false;
      break;
    case 0x7a:
      digest_delim = '\0';
      break;
    case 0x80:
      ignore_missing = true;
      break;
    case 0x81:
      status_only = true;
      warn = false;
      quiet = false;
      break;
    case 0x82:
      goto switchD_001028ff_caseD_82;
    case 0x83:
switchD_001028ff_caseD_83:
      strict = true;
      break;
    case 0x84:
      bVar3 = true;
    case 0x62:
      __lineptr = (char **)0x1;
    }
  }
  min_digest_line_length = 3;
  if (digest_length < 0x201) {
    if (digest_length == 0) {
      digest_length = 0x200;
    }
    digest_hex_bytes = digest_length >> 2;
    iVar7 = (int)__lineptr;
    if (!(bool)(bVar3 & iVar7 == 0)) {
      bVar18 = (byte)__n;
      if (digest_delim == '\n') {
        if (((bVar18 != 0) &&
            (pcVar24 = "the --tag option is meaningless when verifying checksums", bVar3)) ||
           ((-1 < iVar7 &&
            (pcVar24 = "the --binary and --text options are meaningless when verifying checksums",
            bVar18 != 0)))) goto LAB_00102b75;
        if (ignore_missing == false) {
          if (status_only == false) goto LAB_00102b01;
          if (bVar18 == 0) goto LAB_00103a4e;
        }
        else if (bVar18 == 0) goto LAB_00103a22;
        if (warn != false) goto LAB_00102bcd;
LAB_00102bb3:
        if (strict == false) goto LAB_00102bcd;
        pcVar24 = "the --strict option is meaningful only when verifying checksums";
      }
      else {
        pcVar24 = "the --zero option is not supported when verifying checksums";
        if (bVar18 != 0) goto LAB_00102b75;
        if (ignore_missing != false) {
LAB_00103a22:
          pcVar24 = "the --ignore-missing option is meaningful only when verifying checksums";
          goto LAB_00102b75;
        }
        if (status_only != false) {
LAB_00103a4e:
          pcVar24 = "the --status option is meaningful only when verifying checksums";
          goto LAB_00102b75;
        }
LAB_00102b01:
        if (warn == false) {
          if ((quiet == true) &&
             (pcVar24 = "the --quiet option is meaningful only when verifying checksums",
             bVar18 == 0)) goto LAB_00102b75;
          goto LAB_00102bb3;
        }
        pcVar24 = "the --warn option is meaningful only when verifying checksums";
      }
      if (bVar18 != 0) {
LAB_00102bcd:
        local_120 = argv + (int)pcVar12;
        lVar9 = (long)optind;
        if (optind == (int)pcVar12) {
          length_00 = (option *)&DAT_0010a12a;
          *local_120 = "-";
          local_120 = local_120 + 1;
        }
        local_158 = argv + lVar9;
        if (local_120 <= local_158) {
          local_ff = 1;
          pcVar12 = in_R9;
          goto LAB_001031c8;
        }
        __lineptr = (char **)(ulong)(iVar7 - 1U);
        local_ff = 1;
        local_fc = 0x20;
        if (iVar7 - 1U == 0) {
          local_fc = 0x2a;
        }
        local_fd = (byte)local_fc;
        local_13e = bVar18;
        do {
          local_150 = *local_158;
          if (local_13e != 0) {
            local_13c = strcmp(local_150,"-");
            if (local_13c == 0) {
              have_read_stdin = true;
              local_150 = (char *)dcgettext(0,"standard input",5);
              __stream = stdin;
            }
            else {
              __stream = (FILE *)fopen_safer(local_150,"r");
              if (__stream == (FILE *)0x0) {
                length_00 = (option *)quotearg_n_style_colon(0,3,local_150);
                piVar15 = __errno_location();
                error(0,*piVar15,"%s");
                bVar18 = 0;
                goto LAB_00103187;
              }
            }
            local_fe = '\0';
            pFVar29 = (FILE *)0x1;
            __n = &line_chars_allocated;
            __lineptr = &line;
            line = (char *)0x0;
            line_chars_allocated = 0;
            local_100 = 0;
            local_110 = (FILE *)0x0;
            local_118 = (FILE *)0x0;
            local_148 = (FILE *)0x0;
            goto LAB_00102cd8;
          }
          puVar21 = (uint *)bin_buffer_unaligned;
          _Var5 = digest_file(local_150,(uchar *)puVar21,&missing,(uintmax_t *)length_00,
                              &local_138->_flags);
          uVar4 = digest_delim;
          if (_Var5 == false) {
            local_ff = 0;
          }
          else {
            uVar20 = (uint)digest_delim;
            argv = (char **)(ulong)uVar20;
            _Var5 = false;
            if ((digest_delim == '\n') &&
               (((pcVar12 = strchr(local_150,0x5c), pcVar12 != (char *)0x0 ||
                 (pcVar12 = strchr(local_150,10), pcVar12 != (char *)0x0)) ||
                (pcVar12 = strchr(local_150,0xd), pcVar12 != (char *)0x0)))) {
              pcVar12 = stdout->_IO_write_ptr;
              if (pcVar12 < stdout->_IO_write_end) {
                _Var5 = true;
                stdout->_IO_write_ptr = pcVar12 + 1;
                *pcVar12 = '\\';
              }
              else {
                _Var5 = true;
                __overflow(stdout,0x5c);
              }
            }
            if (bVar3) {
              fwrite_unlocked("BLAKE2b",1,7,stdout);
              if (digest_length < 0x200) {
                __printf_chk(1,&DAT_0010a19d);
              }
              fwrite_unlocked(&DAT_0010a1a2,1,2,stdout);
              print_filename(local_150,_Var5);
              length_00 = (option *)stdout;
              fwrite_unlocked(&DAT_0010a1a5,1,4,stdout);
              if (digest_hex_bytes >> 1 != 0) goto LAB_00103365;
            }
            else {
              if (digest_hex_bytes >> 1 != 0) {
LAB_00103365:
                __stream = (FILE *)0x0;
                do {
                  piVar15 = &__stream->_flags;
                  __stream = (FILE *)((long)&__stream->_flags + 1);
                  __printf_chk(1,&DAT_0010a1aa,*(undefined *)((long)piVar15 + (long)(int *)puVar21))
                  ;
                } while (__stream < (FILE *)(digest_hex_bytes >> 1));
                if (bVar3) goto LAB_001033f3;
              }
              pcVar12 = stdout->_IO_write_ptr;
              if (pcVar12 < stdout->_IO_write_end) {
                stdout->_IO_write_ptr = pcVar12 + 1;
                *pcVar12 = ' ';
              }
              else {
                __overflow(stdout,0x20);
              }
              pbVar25 = (byte *)stdout->_IO_write_ptr;
              if (pbVar25 < stdout->_IO_write_end) {
                length_00 = (option *)(ulong)local_fd;
                stdout->_IO_write_ptr = (char *)(pbVar25 + 1);
                *pbVar25 = local_fd;
              }
              else {
                __overflow(stdout,local_fc);
              }
              print_filename(local_150,_Var5);
            }
LAB_001033f3:
            puVar2 = (uchar *)stdout->_IO_write_ptr;
            if (puVar2 < stdout->_IO_write_end) {
              stdout->_IO_write_ptr = (char *)(puVar2 + 1);
              *puVar2 = uVar4;
            }
            else {
              __overflow(stdout,uVar20);
            }
          }
          while (local_158 = local_158 + 1, pcVar12 = in_R9, local_120 <= local_158) {
LAB_001031c8:
            if ((have_read_stdin == false) || (iVar7 = rpl_fclose((FILE *)stdin), iVar7 != -1)) {
              if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return (int)(local_ff ^ 1);
            }
            pFVar29 = (FILE *)dcgettext(0,"standard input",5);
            piVar15 = __errno_location();
            error(1,*piVar15,pFVar29);
            pFVar26 = (FILE *)argv;
LAB_0010386c:
            argv = (char **)pFVar26;
            pcVar24 = pcVar12;
            pcVar27 = in_R11;
            if (*(char *)&pFVar26->_flags != ')') goto LAB_00102e10;
            pFVar22 = (FILE *)0x0;
LAB_001034d7:
            in_R9 = pcVar12;
            pcVar28 = in_R11;
            puVar21 = (uint *)pFVar26;
            if (((char)in_R11 != '\0') &&
               (pcVar17 = filename_unescape((char *)argv,(size_t)pFVar22), pcVar24 = pcVar12,
               in_R9 = pcVar12, pcVar27 = in_R11, pcVar28 = in_R11, pcVar17 == (char *)0x0))
            goto LAB_00102e10;
            *(char *)&pFVar26->_flags = '\0';
            do {
              do {
                pFVar22 = (FILE *)((long)&pFVar22->_flags + 1);
                cVar6 = *(char *)((long)&pFVar22->_flags + (long)(int *)argv);
              } while (cVar6 == ' ');
            } while (cVar6 == '\t');
            pcVar24 = in_R9;
            pcVar27 = pcVar28;
            if (cVar6 != '=') goto LAB_00102e10;
            pFVar26 = (FILE *)((undefined *)((long)(int *)argv + 1) + (long)pFVar22);
            do {
              do {
                local_138 = pFVar26;
                pFVar26 = (FILE *)((long)&local_138->_flags + 1);
              } while (*(char *)&local_138->_flags == ' ');
            } while (*(char *)&local_138->_flags == '\t');
            cVar6 = hex_digits((uchar *)local_138);
LAB_0010352c:
            pcVar24 = in_R9;
            pcVar27 = pcVar28;
            if (cVar6 == '\0') goto LAB_00102e10;
LAB_00102fc1:
            in_R11 = pcVar28;
            if ((local_13c == 0) &&
               (iVar7 = strcmp((char *)argv,"-"), pcVar24 = in_R9, pcVar27 = pcVar28,
               in_R11 = pcVar28, iVar7 == 0)) goto LAB_00102e10;
            bVar30 = false;
            if (status_only == false) {
              pcVar12 = strchr((char *)argv,10);
              bVar30 = pcVar12 != (char *)0x0;
            }
            length_00 = (option *)bin_buffer_unaligned_1;
            _Var5 = digest_file((char *)argv,(uchar *)length_00,&missing,(uintmax_t *)length_00,
                                &local_138->_flags);
            if (_Var5 == false) {
              local_118 = (FILE *)((long)&local_118->_flags + 1);
              if (status_only == false) {
                if (bVar30) {
                  pcVar12 = stdout->_IO_write_ptr;
                  if (pcVar12 < stdout->_IO_write_end) {
                    stdout->_IO_write_ptr = pcVar12 + 1;
                    *pcVar12 = '\\';
                  }
                  else {
                    __overflow(stdout,0x5c);
                  }
                }
                print_filename((char *)argv,bVar30);
                pcVar12 = "FAILED open or read";
LAB_001030a3:
                uVar34 = dcgettext(0,pcVar12,5);
                __printf_chk(1,": %s\n",uVar34);
              }
            }
            else if ((ignore_missing == false) || (missing == false)) {
              pFVar26 = (FILE *)(digest_hex_bytes >> 1);
              if (pFVar26 == (FILE *)0x0) {
                puVar21 = (uint *)(FILE *)0x0;
              }
              else {
                pFVar22 = (FILE *)0x0;
                pp_Var14 = __ctype_tolower_loc();
                do {
                  bVar18 = *(byte *)((long)&pFVar22->_flags + (long)&((FILE *)length_00)->_flags);
                  in_R9 = (char *)(ulong)*(byte *)((long)&local_138->_flags + (long)pFVar22 * 2);
                  in_R11 = "0123456789abcdef9.1";
                  if (((*pp_Var14)[(long)in_R9] != (int)"0123456789abcdef9.1"[bVar18 >> 4]) ||
                     ((*pp_Var14)[*(byte *)((long)&local_138->_flags + (long)pFVar22 * 2 + 1)] !=
                      (int)"0123456789abcdef9.1"[bVar18 & 0xf])) {
                    local_110 = (FILE *)((long)&local_110->_flags + 1);
                    puVar21 = (uint *)pFVar22;
                    if (status_only != false) goto LAB_001030c0;
                    if (!bVar30) goto LAB_001037be;
                    goto LAB_0010379e;
                  }
                  pFVar22 = (FILE *)((long)&pFVar22->_flags + 1);
                  puVar21 = (uint *)pFVar26;
                } while (pFVar26 != pFVar22);
              }
              local_fe = status_only;
              if ((status_only == false) && (local_fe = quiet, quiet == false)) {
                local_fe = _Var5;
                if (bVar30) {
LAB_0010379e:
                  pcVar12 = stdout->_IO_write_ptr;
                  if (pcVar12 < stdout->_IO_write_end) {
                    stdout->_IO_write_ptr = pcVar12 + 1;
                    *pcVar12 = '\\';
                  }
                  else {
                    __overflow(stdout,0x5c);
                  }
LAB_001037be:
                  print_filename((char *)argv,bVar30);
                  if ((FILE *)puVar21 != pFVar26) {
                    pcVar12 = "FAILED";
                    goto LAB_001030a3;
                  }
                }
                else {
                  print_filename((char *)argv,false);
                }
                if (quiet == false) {
                  pcVar12 = "OK";
                  goto LAB_001030a3;
                }
              }
            }
LAB_001030c0:
            local_100 = local_13e;
            pFVar26 = local_138;
            if ((*(byte *)&__stream->_flags & 0x30) == 0) {
LAB_00102e33:
              pFVar29 = (FILE *)((long)&pFVar29->_flags + 1);
              local_138 = pFVar26;
              if (pFVar29 == (FILE *)0x0) {
                pFVar29 = (FILE *)quotearg_n_style_colon(0,3,local_150);
                uVar34 = dcgettext(0,"%s: too many checksum lines",5);
                length_00 = (option *)pFVar29;
                error(1,0,uVar34);
LAB_00102e80:
                pcVar28 = (char *)((ulong)in_R11 & 0xff);
                local_138 = pFVar26;
                pcVar24 = in_R9;
                pcVar27 = in_R11;
                if ((*(char *)&pFVar26->_flags == '\\') + min_digest_line_length <=
                    (ulong)((long)puVar21 - (long)argv)) {
                  digest_hex_bytes = 0;
                  ppuVar11 = __ctype_b_loc();
                  local_128 = (char)pcVar28;
                  pFVar22 = (FILE *)0x0;
                  bVar18 = 0;
                  do {
                    bVar23 = bVar18;
                    length_00 = (option *)pFVar22;
                    pFVar22 = (FILE *)((long)&((FILE *)length_00)->_flags + 1);
                    bVar18 = local_13e;
                  } while ((*(byte *)((long)*ppuVar11 +
                                     (ulong)*(byte *)((long)&((FILE *)length_00)->_flags +
                                                     (long)&pFVar26->_flags) * 2 + 1) & 0x10) != 0);
                  pcVar27 = pcVar28;
                  if (((bVar23 != 0) &&
                      (digest_hex_bytes = (size_t)length_00,
                      ((FILE *)((long)length_00 + -0xd8))->_unused2 + 0x12 < (char *)0x7f)) &&
                     (((ulong)length_00 & 1) == 0)) {
                    argv = (char **)((long)&((FILE *)length_00)->_flags + (long)(int *)argv);
                    digest_length = (long)length_00 * 4;
                    cVar6 = in_R9[(long)argv];
                    if ((cVar6 == ' ') || (cVar6 == '\t')) {
                      in_R9[(long)argv] = '\0';
                      _Var5 = hex_digits((uchar *)pFVar26);
                      if (_Var5 != false) {
                        pcVar12 = (char *)((long)(int *)argv + 1);
                        length_00 = (option *)(ulong)(uint)bsd_reversed;
                        if (((long)puVar21 - (long)pcVar12 != 1) &&
                           (((in_R9 + 1)[(long)argv] == ' ' || ((in_R9 + 1)[(long)argv] == '*')))) {
                          length_00 = (option *)(ulong)(bsd_reversed - 1U);
                          if (bsd_reversed - 1U != 0) {
                            bsd_reversed = 0;
                            pcVar12 = (char *)((long)(int *)argv + 2);
                          }
                          goto LAB_00102fb4;
                        }
                        local_138 = pFVar26;
                        pcVar24 = in_R9;
                        pcVar27 = pcVar28;
                        if (bsd_reversed != 0) goto code_r0x00102faa;
                      }
                    }
                  }
                }
              }
              else {
LAB_00102cd8:
                length_00 = (option *)__stream;
                puVar21 = (uint *)__getdelim(__lineptr,__n,10,__stream);
                pcVar12 = line;
                if ((long)puVar21 < 1) goto LAB_001030d4;
                if (*line == '#') goto LAB_00102e28;
                lVar9 = (long)puVar21 - (ulong)((line + -1)[(long)puVar21] == '\n');
                length_00 = (option *)(lVar9 - (ulong)(0 < lVar9));
                puVar21 = (uint *)(lVar9 - (ulong)(line[(long)length_00] == '\r'));
                if ((FILE *)puVar21 == (FILE *)0x0) goto LAB_00102e28;
                line[(long)puVar21] = '\0';
                argv = (char **)0x0;
                bVar18 = *line;
                if ((bVar18 == 9) || (bVar18 == 0x20)) {
                  do {
                    do {
                      argv = (char **)((long)(int *)argv + 1);
                      bVar18 = line[(long)argv];
                    } while (bVar18 == 0x20);
                  } while (bVar18 == 9);
                }
                in_R11 = (char *)0x0;
                bVar30 = bVar18 < 0x5c;
                bVar32 = bVar18 == 0x5c;
                if (bVar32) {
                  in_R11 = (char *)(ulong)local_13e;
                  bVar30 = (FILE *)0xfffffffffffffffe < argv;
                  argv = (char **)((long)(int *)argv + 1);
                  bVar32 = (FILE *)argv == (FILE *)0x0;
                }
                local_138 = (FILE *)(line + (long)argv);
                length_00 = (option *)0x7;
                pFVar26 = local_138;
                pbVar25 = (byte *)"BLAKE2b";
                do {
                  if ((FILE *)length_00 == (FILE *)0x0) break;
                  length_00 = (option *)(((FILE *)((long)length_00 + -0xd8))->_unused2 + 0x13);
                  bVar30 = *(byte *)&pFVar26->_flags < *pbVar25;
                  bVar32 = *(byte *)&pFVar26->_flags == *pbVar25;
                  pFVar26 = (FILE *)((long)pFVar26 + (ulong)bVar33 * -2 + 1);
                  pbVar25 = pbVar25 + (ulong)bVar33 * -2 + 1;
                } while (bVar32);
                bVar31 = false;
                bVar30 = (!bVar30 && !bVar32) == bVar30;
                pFVar26 = local_138;
                in_R9 = line;
                if (!bVar30) goto LAB_00102e80;
                ppcVar13 = (char **)((long)argv + 7);
                uVar19 = 8;
                pcVar28 = line + (long)ppcVar13;
                cVar6 = *pcVar28;
                *pcVar28 = '\0';
                pbVar25 = (byte *)"BLAKE2b";
                do {
                  if (uVar19 == 0) break;
                  uVar19 = uVar19 - 1;
                  bVar31 = *(byte *)&pFVar26->_flags < *pbVar25;
                  bVar30 = *(byte *)&pFVar26->_flags == *pbVar25;
                  pFVar26 = (FILE *)((long)pFVar26 + (ulong)bVar33 * -2 + 1);
                  pbVar25 = pbVar25 + (ulong)bVar33 * -2 + 1;
                } while (bVar30);
                bVar18 = (!bVar31 && !bVar30) - bVar31;
                length_00 = (option *)(uVar19 & 0xffffffffffffff00 | (ulong)bVar18);
                pcVar24 = pcVar12;
                pcVar27 = in_R11;
                if (bVar18 != 0) goto LAB_00102e10;
                if (cVar6 == '(') {
                  *pcVar28 = '(';
                  digest_length = 0x200;
                }
                else {
                  digest_length = 0x200;
                  ppcVar13 = (char **)((long)argv + 8);
                  if (cVar6 == '-') {
                    local_138 = (FILE *)0x0;
                    length_00 = (option *)&length;
                    pcVar24 = line;
                    sVar8 = xstrtoumax(line + (long)ppcVar13,(char **)&missing,0,
                                       (uintmax_t *)length_00,(char *)0x0);
                    if ((((sVar8 != LONGINT_OK) || (length == 0)) || (digest_length < length)) ||
                       ((length & 7) != 0)) goto LAB_00102e10;
                    ppcVar13 = (char **)(CONCAT71(uStack223,missing) - (long)pcVar12);
                    digest_length = length;
                  }
                }
                digest_hex_bytes = digest_length >> 2;
                puVar10 = (undefined *)((long)ppcVar13 + (ulong)(pcVar12[(long)ppcVar13] == ' '));
                pcVar24 = pcVar12;
                pcVar27 = in_R11;
                if (pcVar12[(long)puVar10] == '(') {
                  ppcVar13 = (char **)(puVar10 + 1);
                  puVar21 = (uint *)((long)puVar21 - (long)ppcVar13);
                  if ((FILE *)puVar21 != (FILE *)0x0) {
                    puVar21 = (uint *)(((FILE *)((long)puVar21 + -0xd8))->_unused2 + 0x13);
                    argv = (char **)(pcVar12 + (long)ppcVar13);
                    pFVar26 = (FILE *)argv;
                    pFVar22 = (FILE *)puVar21;
                    if ((FILE *)puVar21 != (FILE *)0x0) goto LAB_001034ca;
                    goto LAB_0010386c;
                  }
                }
              }
LAB_00102e10:
              local_148 = (FILE *)((long)&local_148->_flags + 1);
              in_R9 = pcVar24;
              in_R11 = pcVar27;
              if (warn != false) {
                puVar21 = (uint *)quotearg_n_style_colon(0,3,local_150);
                uVar34 = dcgettext(0,"%s: %lu: improperly formatted %s checksum line",5);
                in_R9 = "BLAKE2b";
                length_00 = (option *)puVar21;
                local_138 = pFVar29;
                error(0,0,uVar34);
                in_R11 = pcVar27;
              }
LAB_00102e28:
              pFVar26 = local_138;
              if ((*(byte *)&__stream->_flags & 0x30) != 0) goto LAB_001030d4;
              goto LAB_00102e33;
            }
LAB_001030d4:
            rpl_free(line);
            uVar20 = __stream->_flags & 0x20;
            puVar21 = (uint *)(ulong)uVar20;
            argv = (char **)(ulong)-(uint)(uVar20 == 0);
            if (local_13c != 0) {
              iVar7 = rpl_fclose((FILE *)__stream);
              if (iVar7 == 0) goto LAB_00103100;
              if (uVar20 == 0) {
                puVar16 = (uint *)__errno_location();
                argv = (char **)(ulong)*puVar16;
                goto LAB_00103100;
              }
              length_00 = (option *)quotearg_n_style_colon(0,3,local_150);
LAB_0010331d:
              argv = (char **)0x0;
              pcVar12 = (char *)dcgettext(0,"%s: read error",5);
LAB_0010355c:
              error(0,argv,pcVar12);
              bVar18 = 0;
              goto LAB_00103187;
            }
            clearerr_unlocked(__stream);
LAB_00103100:
            if (-1 < (int)argv) {
              length_00 = (option *)quotearg_n_style_colon(0,3,local_150);
              pcVar12 = "%s";
              if ((int)argv == 0) goto LAB_0010331d;
              goto LAB_0010355c;
            }
            if (local_100 == 0) {
              length_00 = (option *)quotearg_n_style_colon(0,3,local_150);
              pcVar12 = "%s: no properly formatted checksum lines found";
LAB_001032c2:
              uVar34 = dcgettext(0,pcVar12,5);
              error(0,0,uVar34);
LAB_001032da:
              bVar18 = 0;
            }
            else if (status_only == false) {
              if (local_148 != (FILE *)0x0) {
                local_138 = (FILE *)0x5;
                uVar34 = dcngettext(0,"WARNING: %lu line is improperly formatted",
                                    "WARNING: %lu lines are improperly formatted",local_148);
                length_00 = (option *)local_148;
                error(0,0,uVar34);
                puVar21 = (uint *)local_148;
              }
              if (local_118 != (FILE *)0x0) {
                local_138 = (FILE *)0x5;
                uVar34 = dcngettext(0,"WARNING: %lu listed file could not be read",
                                    "WARNING: %lu listed files could not be read",local_118);
                length_00 = (option *)local_118;
                error(0,0,uVar34);
                puVar21 = (uint *)local_118;
              }
              if (local_110 != (FILE *)0x0) {
                local_138 = (FILE *)0x5;
                uVar34 = dcngettext(0,"WARNING: %lu computed checksum did NOT match",
                                    "WARNING: %lu computed checksums did NOT match",local_110);
                length_00 = (option *)local_110;
                error(0,0,uVar34);
                puVar21 = (uint *)local_110;
              }
              if (ignore_missing == false) goto LAB_00103418;
              if (local_fe == '\0') {
                length_00 = (option *)quotearg_n_style_colon(0,3,local_150);
                pcVar12 = "%s: no file was verified";
                goto LAB_001032c2;
              }
LAB_0010315c:
              if (((ulong)local_118 | (ulong)local_110) != 0) goto LAB_001032da;
              bVar18 = strict ^ 1U | local_148 == (FILE *)0x0;
            }
            else {
LAB_00103418:
              if (local_fe != '\0') goto LAB_0010315c;
              bVar18 = 0;
            }
            bVar18 = bVar18 & 1;
LAB_00103187:
            local_ff = local_ff & bVar18;
          }
        } while( true );
      }
      goto LAB_00102b75;
    }
  }
  else {
    pcVar12 = quote((char *)__stream);
    uVar34 = dcgettext(0,"invalid length: %s",5);
    error(0,0,uVar34,pcVar12);
    pcVar12 = quote("BLAKE2b");
    uVar34 = dcgettext(0,"maximum digest length for %s is %d bits",5);
    error(1,0,uVar34,pcVar12,0x200);
  }
  pcVar24 = "--tag does not support --text mode";
LAB_00102b75:
  uVar34 = dcgettext(0,pcVar24,5);
  error(0,0,uVar34);
switchD_001028ff_caseD_64:
                    /* WARNING: Subroutine does not return */
  usage(1);
LAB_001034ca:
  pFVar26 = (FILE *)((long)&pFVar22->_flags + (long)(int *)argv);
  if (*(char *)((long)&pFVar22->_flags + (long)(int *)argv) == ')') goto LAB_001034d7;
  pFVar22 = (FILE *)(pFVar22[-1]._unused2 + 0x13);
  puVar21 = (uint *)pFVar26;
  pFVar26 = (FILE *)argv;
  if (pFVar22 == (FILE *)0x0) goto LAB_0010386c;
  goto LAB_001034ca;
code_r0x00102faa:
  bsd_reversed = 1;
LAB_00102fb4:
  argv = (char **)(in_R9 + (long)pcVar12);
  local_138 = pFVar26;
  if (local_128 != '\0') goto LAB_00103985;
  goto LAB_00102fc1;
LAB_00103985:
  pcVar12 = filename_unescape((char *)argv,(long)puVar21 - (long)pcVar12);
  cVar6 = pcVar12 != (char *)0x0;
  goto LAB_0010352c;
switchD_001028ff_caseD_82:
  status_only = false;
  warn = false;
  quiet = true;
  goto LAB_001028b3;
}

