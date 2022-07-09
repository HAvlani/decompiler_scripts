
/* WARNING: Could not reconcile some variable overlaps */

int main(int argc,char **argv)

{
  long lVar1;
  _Bool _Var2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  strtol_error sVar7;
  long lVar8;
  long lVar9;
  size_t sVar10;
  ulong uVar11;
  ptrdiff_t pVar12;
  __int32_t **pp_Var13;
  FILE *__stream;
  undefined8 uVar14;
  ushort **ppuVar15;
  ulong uVar16;
  size_t s_len;
  int *piVar17;
  byte *pbVar18;
  ulong extraout_RDX;
  undefined *puVar19;
  uint uVar20;
  byte *pbVar21;
  char **ppcVar22;
  byte *pbVar23;
  byte *pbVar24;
  char *pcVar25;
  int *piVar26;
  int *binary;
  size_t sVar27;
  char **__lineptr;
  byte *pbVar28;
  long in_FS_OFFSET;
  undefined auVar29 [16];
  undefined8 uVar30;
  undefined8 uStack376;
  int *local_170;
  size_t *local_168;
  byte *local_160;
  char **local_158;
  byte *local_150;
  byte *local_148;
  char *local_140;
  byte *local_138;
  ulong local_130;
  long local_128;
  char **local_120;
  ulong local_118;
  ulong local_110;
  int local_108;
  byte local_104;
  byte local_103;
  byte local_102;
  byte local_101;
  uint local_100;
  int local_fc;
  char *line;
  size_t line_chars_allocated;
  _Bool missing;
  undefined7 uStack231;
  uintmax_t length;
  uchar bin_buffer_unaligned [72];
  uchar bin_buffer_unaligned_1 [72];
  
  __lineptr = (char **)(ulong)(uint)argc;
  pbVar21 = (byte *)0x1;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils");
  textdomain("coreutils");
  atexit(close_stdout);
  setvbuf(stdout,(char *)0x0,1,0);
  local_104 = 0;
  pcVar25 = "";
  do {
    binary = (int *)0x0;
    uVar30 = 0x10296b;
    iVar5 = getopt_long(__lineptr,argv,"a:l:bctwz");
    if (iVar5 == -1) {
      uVar11 = (ulong)cksum_algorithm;
      min_digest_line_length = 3;
      if (digest_length == 0) goto LAB_00102f12;
      if (cksum_algorithm != blake2b) {
LAB_00103b05:
        uVar30 = dcgettext(0,"--length is only supported with --algorithm=blake2b",5);
        error(1,0,uVar30);
        goto LAB_00103b29;
      }
      if (0x200 < digest_length) {
        pcVar25 = quote(pcVar25);
        uVar30 = dcgettext(0,"invalid length: %s",5);
        error(0,0,uVar30,pcVar25);
        argv = (char **)quote(algorithm_tags[cksum_algorithm]);
        uVar30 = dcgettext(0,"maximum digest length for %s is %d bits",5);
        binary = (int *)0x200;
        error(1,0,uVar30,argv);
        goto LAB_00103b05;
      }
      digest_hex_bytes = digest_length >> 2;
LAB_00102bc0:
      if (digest_delim == '\n') {
        if (ignore_missing == false) goto LAB_00102be5;
        if (local_104 != 0) goto LAB_00102f6c;
LAB_00103a3a:
        pcVar25 = "the --ignore-missing option is meaningful only when verifying checksums";
      }
      else {
        if (local_104 == 0) {
LAB_00102bd8:
          if (ignore_missing == false) {
LAB_00102be5:
            if (status_only == false) goto LAB_00103774;
            if (local_104 != 0) {
LAB_00102bfd:
              if (warn == false) goto LAB_00102fc1;
LAB_00102c0a:
              do {
                iVar5 = (int)__lineptr;
                local_120 = argv + iVar5;
                lVar8 = (long)optind;
                if (optind == iVar5) {
                  *local_120 = "-";
                  local_120 = local_120 + 1;
                }
                local_158 = argv + lVar8;
                local_102 = 1;
                if (local_120 <= local_158) goto LAB_0010339c;
                local_100 = (uint)pbVar21 & 0xff;
                local_fc = iVar5;
LAB_00102c60:
                pcVar25 = *local_158;
                local_140 = pcVar25;
                if (local_104 == 0) {
                  bVar3 = digest_file(pcVar25,bin_buffer_unaligned,&missing,&length,binary);
                  if ((_Bool)bVar3 == false) goto LAB_00103386;
                  binary = (int *)(ulong)digest_delim;
                  (*cksum_output_fns[cksum_algorithm])
                            (pcVar25,1,bin_buffer_unaligned,SUB41(local_100,0),digest_delim,
                             optind != local_fc,length);
                  bVar3 = local_102;
                  goto LAB_00103386;
                }
                local_108 = strcmp(pcVar25,"-");
                if (local_108 != 0) {
                  __stream = (FILE *)fopen_safer(local_140,"r");
                  if (__stream != (FILE *)0x0) goto LAB_00102cb6;
                  uVar30 = quotearg_n_style_colon(0,3,local_140);
                  piVar17 = __errno_location();
                  error(0,*piVar17,&DAT_0011e11b,uVar30);
                  bVar3 = 0;
                  goto LAB_00103246;
                }
                have_read_stdin = true;
                local_140 = (char *)dcgettext(0,"standard input",5);
                __stream = stdin;
LAB_00102cb6:
                local_168 = &line_chars_allocated;
                local_101 = 0;
                __lineptr = &line;
                line = (char *)0x0;
                line_chars_allocated = 0;
                local_103 = 0;
                local_110 = 0;
                local_118 = 0;
                local_128 = 0;
                local_170 = (int *)0x1;
                do {
                  pbVar21 = (byte *)__getdelim(__lineptr,local_168,10,__stream);
                  pbVar24 = local_148;
                  if ((long)pbVar21 < 1) goto LAB_00103190;
                  if (*line == '#') {
LAB_00102ec0:
                    bVar3 = *(byte *)&__stream->_flags;
                  }
                  else {
                    lVar8 = (long)pbVar21 - (ulong)((line + -1)[(long)pbVar21] == '\n');
                    local_160 = (byte *)(lVar8 - (ulong)(line[lVar8 - (ulong)(0 < lVar8)] == '\r'));
                    pbVar21 = local_160;
                    if (local_160 == (byte *)0x0) goto LAB_00102ec0;
                    line[(long)local_160] = '\0';
                    lVar8 = 0;
                    cVar4 = *line;
                    if ((cVar4 == '\t') || (cVar4 == ' ')) {
                      do {
                        do {
                          lVar8 = lVar8 + 1;
                          cVar4 = line[lVar8];
                        } while (cVar4 == ' ');
                      } while (cVar4 == '\t');
                    }
                    local_148 = (byte *)((ulong)local_148 & 0xffffffffffffff00);
                    if (cVar4 == '\\') {
                      lVar8 = lVar8 + 1;
                      local_148 = (byte *)((ulong)pbVar24 & 0xffffffffffffff00 | (ulong)local_104);
                    }
                    pbVar24 = (byte *)(line + lVar8);
                    pbVar21 = (byte *)line;
                    if (algorithm_specified == false) {
                      if (max_tag_len_7679 == 0) {
                        local_150 = (byte *)line;
                        pcVar25 = "BSD";
                        ppcVar22 = algorithm_tags;
                        do {
                          uVar11 = max_tag_len_7679;
                          sVar10 = strlen(pcVar25);
                          ppcVar22 = ppcVar22 + 1;
                          pcVar25 = *ppcVar22;
                          max_tag_len_7679 = uVar11;
                          if (uVar11 < sVar10) {
                            max_tag_len_7679 = sVar10;
                          }
                          pbVar21 = local_150;
                        } while (pcVar25 != (char *)0x0);
                      }
                      uVar11 = 0;
                      do {
                        bVar3 = pbVar24[uVar11];
                        if ((bVar3 < 0x2e) && ((0x210100000201U >> ((ulong)bVar3 & 0x3f) & 1) != 0))
                        {
                          pbVar24[uVar11] = 0;
                          local_150 = pbVar24 + uVar11;
                          pVar12 = argmatch_exact((char *)pbVar24,algorithm_tags);
                          *local_150 = bVar3;
                          if (2 < pVar12) {
                            cksum_algorithm = (Algorithm)pVar12;
                            goto LAB_00102dd8;
                          }
                          break;
                        }
                        uVar11 = uVar11 + 1;
                      } while (uVar11 <= max_tag_len_7679);
LAB_00102ea8:
                      local_128 = local_128 + 1;
                      if (warn != false) {
                        pbVar21 = (byte *)algorithm_tags[cksum_algorithm];
                        uVar30 = quotearg_n_style_colon(0,3,local_140);
                        uVar14 = dcgettext(0,"%s: %lu: improperly formatted %s checksum line",5);
                        binary = local_170;
                        error(0,0,uVar14,uVar30);
                      }
                      goto LAB_00102ec0;
                    }
LAB_00102dd8:
                    local_130 = (ulong)cksum_algorithm;
                    pcVar25 = algorithm_tags[local_130];
                    local_150 = (byte *)((ulong)local_150 & 0xffffffff00000000 |
                                        (ulong)cksum_algorithm);
                    local_138 = (byte *)strlen(pcVar25);
                    iVar5 = strncmp((char *)pbVar24,pcVar25,(size_t)local_138);
                    if (iVar5 == 0) {
                      pbVar28 = local_138 + lVar8;
                      local_138 = pbVar21 + (long)pbVar28;
                      bVar3 = *local_138;
                      *local_138 = 0;
                      local_150 = (byte *)((ulong)local_150 & 0xffffffffffffff00 | (ulong)bVar3);
                      iVar5 = strcmp((char *)pbVar24,pcVar25);
                      if (iVar5 == 0) {
                        digest_length = (uintmax_t)algorithm_bits[local_130];
                        if ((byte)local_150 == '(') {
                          *local_138 = 0x28;
                        }
                        else {
                          pbVar28 = pbVar28 + 1;
                          if ((byte)local_150 == '-') {
                            binary = (int *)0x0;
                            sVar7 = xstrtoumax((char *)(pbVar21 + (long)pbVar28),(char **)&length,0,
                                               (uintmax_t *)&missing,(char *)0x0);
                            if ((((sVar7 != LONGINT_OK) ||
                                 (uVar11 = CONCAT71(uStack231,missing), uVar11 == 0)) ||
                                (digest_length < uVar11)) || ((missing & 7U) != 0))
                            goto LAB_00102ea8;
                            pbVar28 = (byte *)(length - (long)pbVar21);
                            digest_length = uVar11;
                          }
                        }
                        digest_hex_bytes = digest_length >> 2;
                        if (pbVar21[(long)pbVar28] == 0x20) {
                          pbVar28 = pbVar28 + 1;
                        }
                        if (pbVar21[(long)pbVar28] == 0x28) {
                          s_len = (long)local_160 - (long)(pbVar28 + 1);
                          if (s_len != 0) {
                            pbVar28 = pbVar21 + (long)(pbVar28 + 1);
                            do {
                              s_len = s_len - 1;
                              if (s_len == 0) {
                                if (*pbVar28 != 0x29) goto LAB_00102ea8;
                                s_len = 0;
                                pbVar24 = pbVar28;
                                break;
                              }
                              pbVar24 = pbVar28 + s_len;
                            } while (pbVar28[s_len] != 0x29);
                            if (((char)local_148 == '\0') ||
                               (pcVar25 = filename_unescape((char *)pbVar28,s_len),
                               pcVar25 != (char *)0x0)) {
                              *pbVar24 = 0;
                              do {
                                do {
                                  sVar27 = s_len;
                                  s_len = sVar27 + 1;
                                  bVar3 = pbVar28[s_len];
                                } while (bVar3 == 0x20);
                              } while (bVar3 == 9);
                              if (bVar3 == 0x3d) {
                                pbVar18 = pbVar28 + sVar27 + 2;
                                do {
                                  do {
                                    pbVar24 = pbVar18;
                                    pbVar18 = pbVar24 + 1;
                                  } while (*pbVar24 == 0x20);
                                } while (*pbVar24 == 9);
                                cVar4 = hex_digits(pbVar24);
                                goto LAB_00103767;
                              }
                            }
                          }
                        }
                      }
                      goto LAB_00102ea8;
                    }
                    if ((ulong)((long)local_160 - lVar8) <
                        (*pbVar24 == 0x5c) + min_digest_line_length) goto LAB_00102ea8;
                    if ((int)local_150 == 9) {
                      digest_hex_bytes = 0;
                      ppuVar15 = __ctype_b_loc();
                      binary = (int *)(ulong)local_104;
                      uVar11 = 0;
                      piVar17 = (int *)0x0;
                      do {
                        piVar26 = piVar17;
                        uVar16 = uVar11;
                        uVar11 = uVar16 + 1;
                        piVar17 = binary;
                      } while ((*(byte *)((long)*ppuVar15 + (ulong)pbVar24[uVar16] * 2 + 1) & 0x10)
                               != 0);
                      if ((((char)piVar26 == '\0') || (digest_hex_bytes = uVar16, 0x7e < uVar16 - 2)
                          ) || ((uVar16 & 1) != 0)) goto LAB_00102ea8;
                      digest_length = uVar16 << 2;
                    }
                    lVar8 = lVar8 + digest_hex_bytes;
                    bVar3 = pbVar21[lVar8];
                    if ((bVar3 != 0x20) && (bVar3 != 9)) goto LAB_00102ea8;
                    pbVar21[lVar8] = 0;
                    _Var2 = hex_digits(pbVar24);
                    if (_Var2 == false) goto LAB_00102ea8;
                    lVar9 = lVar8 + 1;
                    if (((long)local_160 - lVar9 == 1) ||
                       ((pbVar21[lVar8 + 1] != 0x20 && (pbVar21[lVar8 + 1] != 0x2a)))) {
                      if (bsd_reversed == 0) goto LAB_00102ea8;
                      bsd_reversed = 1;
                    }
                    else if (bsd_reversed != 1) {
                      bsd_reversed = 0;
                      lVar9 = lVar8 + 2;
                    }
                    pbVar28 = pbVar21 + lVar9;
                    if ((char)local_148 != '\0') {
                      pcVar25 = filename_unescape((char *)pbVar28,(long)local_160 - lVar9);
                      cVar4 = pcVar25 != (char *)0x0;
LAB_00103767:
                      if (cVar4 == '\0') goto LAB_00102ea8;
                    }
                    if ((local_108 == 0) && (iVar5 = strcmp((char *)pbVar28,"-"), iVar5 == 0))
                    goto LAB_00102ea8;
                    local_160 = (byte *)((ulong)local_160 & 0xffffffff00000000);
                    if (status_only == false) {
                      pcVar25 = strchr((char *)pbVar28,10);
                      local_160 = (byte *)((ulong)local_160 & 0xffffffff00000000 |
                                          (ulong)(pcVar25 != (char *)0x0));
                    }
                    local_150._0_1_ =
                         digest_file((char *)pbVar28,bin_buffer_unaligned_1,&missing,&length,binary)
                    ;
                    if ((_Bool)(byte)local_150 == false) {
                      local_118 = local_118 + 1;
                      if (status_only == false) {
                        if ((int)local_160 != 0) {
                          pcVar25 = stdout->_IO_write_ptr;
                          if (pcVar25 < stdout->_IO_write_end) {
                            stdout->_IO_write_ptr = pcVar25 + 1;
                            *pcVar25 = '\\';
                          }
                          else {
                            __overflow(stdout,0x5c);
                          }
                        }
                        print_filename((char *)pbVar28,SUB81(local_160,0));
                        pcVar25 = "FAILED open or read";
LAB_0010315f:
                        uVar30 = dcgettext(0,pcVar25,5);
                        __printf_chk(1,": %s\n",uVar30);
                      }
                    }
                    else if ((ignore_missing == false) || (missing == false)) {
                      pbVar18 = (byte *)(digest_hex_bytes >> 1);
                      if (pbVar18 == (byte *)0x0) {
                        pbVar21 = (byte *)0x0;
                      }
                      else {
                        pbVar23 = (byte *)0x0;
                        local_150 = (byte *)((ulong)local_150 & 0xffffffffffffff00 |
                                            (ulong)(byte)local_150);
                        local_148 = pbVar18;
                        pp_Var13 = __ctype_tolower_loc();
                        do {
                          bVar3 = bin_buffer_unaligned_1[(long)pbVar23];
                          pbVar18 = local_148;
                          if (((*pp_Var13)[pbVar24[(long)pbVar23 * 2]] !=
                               (int)"0123456789abcdef"[bVar3 >> 4]) ||
                             ((*pp_Var13)[pbVar24[(long)pbVar23 * 2 + 1]] !=
                              (int)"0123456789abcdef"[bVar3 & 0xf])) {
                            local_110 = local_110 + 1;
                            pbVar21 = pbVar23;
                            if (status_only != false) goto LAB_0010317c;
                            bVar3 = local_101;
                            if ((int)local_160 == 0) goto LAB_001034e4;
                            goto LAB_0010381d;
                          }
                          pbVar23 = pbVar23 + 1;
                          pbVar21 = local_148;
                        } while (local_148 != pbVar23);
                      }
                      local_101 = status_only;
                      if ((status_only == false) && (local_101 = quiet, quiet == false)) {
                        bVar3 = (byte)local_150;
                        if ((int)local_160 == 0) {
                          local_160 = (byte *)((ulong)local_160 & 0xffffffffffffff00 |
                                              (ulong)(byte)local_150);
                          print_filename((char *)pbVar28,false);
                          local_101 = (byte)local_160;
                        }
                        else {
LAB_0010381d:
                          local_101 = bVar3;
                          pcVar25 = stdout->_IO_write_ptr;
                          if (pcVar25 < stdout->_IO_write_end) {
                            stdout->_IO_write_ptr = pcVar25 + 1;
                            *pcVar25 = '\\';
                          }
                          else {
                            local_150 = pbVar18;
                            __overflow(stdout,0x5c);
                            pbVar18 = local_150;
                          }
LAB_001034e4:
                          local_150 = pbVar18;
                          print_filename((char *)pbVar28,SUB81(local_160,0));
                          if (local_150 != pbVar21) {
                            pcVar25 = "FAILED";
                            goto LAB_0010315f;
                          }
                        }
                        if (quiet == false) {
                          pcVar25 = "OK";
                          goto LAB_0010315f;
                        }
                      }
                    }
LAB_0010317c:
                    bVar3 = *(byte *)&__stream->_flags;
                    local_103 = local_104;
                  }
                  if ((bVar3 & 0x30) != 0) goto LAB_00103190;
                  local_170 = (int *)((long)local_170 + 1);
                } while (local_170 != (int *)0x0);
                argv = (char **)quotearg_n_style_colon(0,3,local_140);
                uVar30 = dcgettext(0,"%s: too many checksum lines",5);
                error(1,0,uVar30);
                uVar11 = extraout_RDX;
LAB_00102f12:
                digest_length = (uintmax_t)algorithm_bits[uVar11 & 0xffffffff];
                digest_hex_bytes = digest_length >> 2;
                if (2 < (uint)uVar11) goto LAB_00102bc0;
                if (local_104 == 0) {
                  if (digest_delim == '\n') {
                    if (ignore_missing == false) {
                      if (status_only == false) {
                        if (warn == false) goto LAB_00102f86;
LAB_00103876:
                        pcVar25 = "the --warn option is meaningful only when verifying checksums";
                        goto LAB_00102fa2;
                      }
                      break;
                    }
                    goto LAB_00103a3a;
                  }
                  goto LAB_00102bd8;
                }
                if (algorithm_specified != false) {
                  uVar30 = dcgettext(0,"--check is not supported with --algorithm={bsd,sysv,crc}",5)
                  ;
                  auVar29 = error(1,0,uVar30);
                  uVar30 = uStack376;
                  uStack376 = SUB168(auVar29,0);
                  (*(code *)PTR___libc_start_main_00123fd8)
                            (main,uVar30,&local_170,__libc_csu_init,__libc_csu_fini,
                             SUB168(auVar29 >> 0x40,0),&uStack376);
                  do {
                    /* WARNING: Do nothing block with infinite loop */
                  } while( true );
                }
                if (digest_delim != '\n') goto LAB_00103b3b;
                if (ignore_missing == false) {
LAB_00103b29:
                  if (status_only == false) {
LAB_00102f79:
                    if (warn == false) {
LAB_00102f86:
                      if ((quiet == true) &&
                         (pcVar25 = "the --quiet option is meaningful only when verifying checksums"
                         , local_104 == 0)) goto LAB_00102fa2;
LAB_00102fc1:
                      if ((strict != false) &&
                         (pcVar25 = 
                          "the --strict option is meaningful only when verifying checksums",
                         local_104 == 0)) goto LAB_00102fa2;
                    }
                    goto LAB_00102c0a;
                  }
                  goto LAB_00102bfd;
                }
LAB_00102f6c:
                if (status_only != false) goto LAB_00102f79;
LAB_00103774:
                if (warn == false) goto LAB_00102f86;
                if (local_104 == 0) goto LAB_00103876;
              } while( true );
            }
            pcVar25 = "the --status option is meaningful only when verifying checksums";
            goto LAB_00102fa2;
          }
          goto LAB_00103a3a;
        }
LAB_00103b3b:
        pcVar25 = "the --zero option is not supported when verifying checksums";
      }
LAB_00102fa2:
      uVar30 = dcgettext(0,pcVar25,5);
      error(0,0,uVar30);
      goto switchD_0010299c_caseD_62;
    }
    if (0x86 < iVar5) goto switchD_0010299c_caseD_62;
    if (iVar5 < 0x61) goto LAB_00102b28;
    switch(iVar5) {
    case 0x61:
      pVar12 = __xargmatch_internal
                         ("--algorithm",optarg,algorithm_args,algorithm_types,4,argmatch_die,false);
      algorithm_specified = true;
      cksum_algorithm = algorithm_types[pVar12];
      break;
    default:
      goto switchD_0010299c_caseD_62;
    case 99:
      local_104 = 1;
      break;
    case 0x6c:
      pcVar25 = (char *)dcgettext(0,"invalid length",5);
      digest_length = xdectoumax(optarg,0,0xffffffffffffffff,"",pcVar25,0);
      pcVar25 = optarg;
      if ((digest_length & 7) != 0) {
        pcVar25 = quote(optarg);
        uVar30 = dcgettext(0,"invalid length: %s",5);
        error(0,0,uVar30,pcVar25);
        uVar14 = dcgettext(0,"length is not a multiple of 8",5);
        uVar30 = 0x102b21;
        iVar5 = error(1,0,uVar14);
LAB_00102b28:
        if (iVar5 == -0x83) {
          version_etc((FILE *)stdout,"cksum","GNU coreutils",Version,"Padraig Brady","Q. Frank Xia",
                      0,uVar30);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar5 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
switchD_0010299c_caseD_62:
                    /* WARNING: Subroutine does not return */
        usage(1);
      }
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
      status_only = false;
      warn = false;
      quiet = true;
      break;
    case 0x83:
      strict = true;
      break;
    case 0x84:
      pbVar21 = (byte *)0x1;
      break;
    case 0x85:
      pbVar21 = (byte *)0x0;
      break;
    case 0x86:
      cksum_debug = true;
    }
  } while( true );
LAB_00103190:
  rpl_free(line);
  uVar20 = __stream->_flags & 0x20;
  iVar5 = -(uint)(uVar20 == 0);
  if (local_108 == 0) {
    clearerr_unlocked(__stream);
LAB_001031bf:
    lVar8 = local_128;
    if (iVar5 < 0) {
      if (local_103 == 0) {
        uVar30 = quotearg_n_style_colon(0,3,local_140);
        pcVar25 = "%s: no properly formatted checksum lines found";
        goto LAB_00103586;
      }
      if (status_only == false) {
        if (local_128 != 0) {
          binary = (int *)0x5;
          uVar30 = dcngettext(0,"WARNING: %lu line is improperly formatted",
                              "WARNING: %lu lines are improperly formatted",local_128);
          error(0,0,uVar30,lVar8);
        }
        uVar11 = local_118;
        if (local_118 != 0) {
          binary = (int *)0x5;
          uVar30 = dcngettext(0,"WARNING: %lu listed file could not be read",
                              "WARNING: %lu listed files could not be read",local_118);
          error(0,0,uVar30,uVar11);
        }
        uVar11 = local_110;
        if (local_110 != 0) {
          binary = (int *)0x5;
          uVar30 = dcngettext(0,"WARNING: %lu computed checksum did NOT match",
                              "WARNING: %lu computed checksums did NOT match",local_110);
          error(0,0,uVar30,uVar11);
        }
        if (ignore_missing != false) {
          if (local_101 == 0) goto LAB_001038c8;
          goto LAB_0010321b;
        }
      }
      if (local_101 == 0) {
        bVar3 = 0;
        goto LAB_00103243;
      }
LAB_0010321b:
      if ((local_118 | local_110) != 0) goto LAB_0010359e;
      bVar3 = strict ^ 1U | local_128 == 0;
      goto LAB_00103243;
    }
    uVar30 = quotearg_n_style_colon(0,3,local_140);
    puVar19 = &DAT_0011e11b;
    if (iVar5 != 0) goto LAB_001037b4;
  }
  else {
    iVar6 = rpl_fclose((FILE *)__stream);
    if (iVar6 == 0) goto LAB_001031bf;
    if (uVar20 == 0) {
      piVar17 = __errno_location();
      iVar5 = *piVar17;
      goto LAB_001031bf;
    }
    uVar30 = quotearg_n_style_colon(0,3,local_140);
  }
  iVar5 = 0;
  puVar19 = (undefined *)dcgettext(0,"%s: read error",5);
LAB_001037b4:
  error(0,iVar5,puVar19,uVar30);
  bVar3 = 0;
LAB_00103246:
  while( true ) {
    bVar3 = local_102 & bVar3;
LAB_00103386:
    local_102 = bVar3;
    local_158 = local_158 + 1;
    if (local_158 < local_120) break;
LAB_0010339c:
    if ((have_read_stdin == false) || (iVar5 = rpl_fclose((FILE *)stdin), iVar5 != -1)) {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (int)(local_102 ^ 1);
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar30 = dcgettext(0,"standard input",5);
    piVar17 = __errno_location();
    error(1,*piVar17,uVar30);
LAB_001038c8:
    uVar30 = quotearg_n_style_colon(0,3,local_140);
    pcVar25 = "%s: no file was verified";
LAB_00103586:
    uVar14 = dcgettext(0,pcVar25,5);
    error(0,0,uVar14,uVar30);
LAB_0010359e:
    bVar3 = 0;
LAB_00103243:
    bVar3 = bVar3 & 1;
  }
  goto LAB_00102c60;
}

