
/* WARNING: Could not reconcile some variable overlaps */

int main(int argc,char **argv)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  uchar uVar4;
  _Bool _Var5;
  _Bool _Var6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  FILE *bin_result;
  ulong uVar10;
  FILE *__stream;
  FILE *length;
  __int32_t **pp_Var11;
  uchar *puVar12;
  uint *puVar13;
  char *pcVar14;
  byte bVar15;
  option *poVar16;
  char extraout_DL;
  ulong uVar17;
  ulong uVar18;
  int *piVar19;
  char *s;
  char *pcVar20;
  byte *pbVar21;
  int *piVar22;
  uint uVar23;
  size_t *__n;
  long lVar24;
  long in_FS_OFFSET;
  bool bVar25;
  bool bVar26;
  char cVar27;
  byte bVar28;
  char local_151;
  char **local_150;
  char *local_148;
  FILE *local_140;
  int *local_130;
  char **local_128;
  FILE *local_120;
  FILE *local_118;
  byte local_ff;
  char local_fe;
  _Bool missing_1;
  char *line;
  _Bool missing;
  uchar bin_buffer_unaligned [72];
  uchar bin_buffer_unaligned_1 [72];
  char *local_40;
  
  bVar28 = 0;
  __n = (size_t *)0xffffffff;
  s = (char *)(ulong)(uint)argc;
  local_40 = *(char **)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils");
  textdomain("coreutils");
  atexit(close_stdout);
  setvbuf(stdout,(char *)0x0,1,0);
  bVar2 = false;
  local_151 = '\0';
  while( true ) {
    piVar22 = (int *)0x0;
    poVar16 = long_options;
    iVar7 = getopt_long(s,argv,"bctwz");
    if (iVar7 == -1) break;
    if (0x84 < iVar7) goto switchD_00102858_caseD_64;
    if (iVar7 < 0x62) {
      if (iVar7 == -0x83) {
        version_etc((FILE *)stdout,"sha512sum","GNU coreutils",Version,"Ulrich Drepper",
                    "Scott Miller","David Madore",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar7 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00102858_caseD_64;
    }
    switch(iVar7) {
    case 99:
      local_151 = '\x01';
      break;
    default:
      goto switchD_00102858_caseD_64;
    case 0x74:
      __n = (size_t *)0x0;
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
      bVar2 = true;
    case 0x62:
      __n = (size_t *)0x1;
    }
  }
  min_digest_line_length = 0x82;
  digest_hex_bytes = 0x80;
  if ((bool)(bVar2 & (int)__n == 0)) {
    pcVar20 = "--tag does not support --text mode";
    goto LAB_00102a00;
  }
  if (digest_delim == '\n') {
    if (((local_151 != '\0') &&
        (pcVar20 = "the --tag option is meaningless when verifying checksums", bVar2)) ||
       ((-1 < (int)__n &&
        (pcVar20 = "the --binary and --text options are meaningless when verifying checksums",
        local_151 != '\0')))) goto LAB_00102a00;
    if (ignore_missing == false) {
      if (status_only == false) goto LAB_0010299f;
      if (local_151 == '\0') goto LAB_00103742;
    }
    else if (local_151 == '\0') goto LAB_00103758;
    if (warn == false) goto LAB_00102a40;
  }
  else {
    pcVar20 = "the --zero option is not supported when verifying checksums";
    if (local_151 != '\0') goto LAB_00102a00;
    if (ignore_missing != false) {
LAB_00103758:
      pcVar20 = "the --ignore-missing option is meaningful only when verifying checksums";
      goto LAB_00102a00;
    }
    if (status_only != false) {
LAB_00103742:
      pcVar20 = "the --status option is meaningful only when verifying checksums";
      goto LAB_00102a00;
    }
LAB_0010299f:
    if (warn != false) goto LAB_00103529;
    if ((quiet == true) &&
       (pcVar20 = "the --quiet option is meaningful only when verifying checksums",
       local_151 == '\0')) goto LAB_00102a00;
LAB_00102a40:
    if ((strict != false) &&
       (pcVar20 = "the --strict option is meaningful only when verifying checksums",
       local_151 == '\0')) goto LAB_00102a00;
  }
  do {
    local_128 = (char **)((int *)argv + (long)(int)s * 2);
    if (optind == (int)s) {
      *local_128 = "-";
      local_128 = local_128 + 1;
    }
    local_150 = (char **)((int *)argv + (long)optind * 2);
    if (local_150 < local_128) {
      uVar23 = (int)__n - 1;
      __n = (size_t *)(ulong)uVar23;
      local_ff = 1;
      iVar7 = 0x20;
      if (uVar23 == 0) {
        iVar7 = 0x2a;
      }
      do {
        local_148 = *local_150;
        if (local_151 == '\0') {
          __n = (size_t *)&missing;
          argv = (char **)bin_buffer_unaligned;
          _Var5 = digest_file(local_148,(uchar *)argv,(_Bool *)__n,(uintmax_t *)poVar16,piVar22);
          uVar4 = digest_delim;
          if (_Var5 == false) {
            local_ff = 0;
          }
          else {
            uVar23 = (uint)digest_delim;
            s = (char *)(ulong)uVar23;
            _Var5 = false;
            if ((digest_delim == '\n') &&
               (((pcVar20 = strchr(local_148,0x5c), pcVar20 != (char *)0x0 ||
                 (pcVar20 = strchr(local_148,10), pcVar20 != (char *)0x0)) ||
                (pcVar20 = strchr(local_148,0xd), pcVar20 != (char *)0x0)))) {
              pcVar20 = stdout->_IO_write_ptr;
              if (pcVar20 < stdout->_IO_write_end) {
                _Var5 = true;
                stdout->_IO_write_ptr = pcVar20 + 1;
                *pcVar20 = '\\';
              }
              else {
                _Var5 = true;
                __overflow(stdout,0x5c);
              }
            }
            if (bVar2) {
              fwrite_unlocked("SHA512",1,6,stdout);
              fwrite_unlocked(&DAT_0010c164,1,2,stdout);
              print_filename(local_148,_Var5);
              poVar16 = (option *)stdout;
              fwrite_unlocked(&DAT_0010c167,1,4,stdout);
              if (digest_hex_bytes >> 1 != 0) goto LAB_0010327d;
            }
            else {
              if (digest_hex_bytes >> 1 != 0) {
LAB_0010327d:
                __n = (size_t *)0x0;
                do {
                  puVar12 = (uchar *)((long)(int *)argv + (long)__n);
                  __n = (size_t *)((long)__n + 1);
                  __printf_chk(1,&DAT_0010c16c,*puVar12);
                } while (__n < (size_t *)(digest_hex_bytes >> 1));
                if (bVar2) goto LAB_00103303;
              }
              pcVar20 = stdout->_IO_write_ptr;
              if (pcVar20 < stdout->_IO_write_end) {
                stdout->_IO_write_ptr = pcVar20 + 1;
                *pcVar20 = ' ';
              }
              else {
                __overflow(stdout,0x20);
              }
              pbVar21 = (byte *)stdout->_IO_write_ptr;
              if (pbVar21 < stdout->_IO_write_end) {
                argv = (char **)(ulong)(byte)iVar7;
                stdout->_IO_write_ptr = (char *)(pbVar21 + 1);
                *pbVar21 = (byte)iVar7;
              }
              else {
                __overflow(stdout,iVar7);
              }
              print_filename(local_148,_Var5);
            }
LAB_00103303:
            puVar12 = (uchar *)stdout->_IO_write_ptr;
            if (puVar12 < stdout->_IO_write_end) {
              stdout->_IO_write_ptr = (char *)(puVar12 + 1);
              *puVar12 = uVar4;
            }
            else {
              __overflow(stdout,uVar23);
            }
          }
        }
        else {
          iVar8 = strcmp(local_148,"-");
          if (iVar8 == 0) {
            have_read_stdin = true;
            local_148 = (char *)dcgettext(0,"standard input",5);
            __stream = stdin;
LAB_00102b16:
            local_fe = '\0';
            piVar19 = (int *)0x1;
            __n = (size_t *)&missing;
            line = (char *)0x0;
            _missing = 0;
            cVar3 = '\0';
            local_118 = (FILE *)0x0;
            local_120 = (FILE *)0x0;
            local_140 = (FILE *)0x0;
LAB_00102b60:
            poVar16 = (option *)__stream;
            bin_result = (FILE *)__getdelim(&line,__n,10,__stream);
            if (0 < (long)bin_result) {
              local_130 = piVar22;
              if (*line == '#') goto LAB_00102c5a;
              lVar24 = (long)bin_result - (ulong)((line + -1)[(long)bin_result] == '\n');
              bin_result = (FILE *)(lVar24 - (ulong)(line[lVar24 - (ulong)(0 < lVar24)] == '\r'));
              if (bin_result == (FILE *)0x0) goto LAB_00102c5a;
              line[(long)bin_result] = '\0';
              uVar10 = 0;
              bVar15 = *line;
              if ((bVar15 == 9) || (bVar15 == 0x20)) {
                do {
                  do {
                    uVar10 = uVar10 + 1;
                    bVar15 = line[uVar10];
                  } while (bVar15 == 0x20);
                } while (bVar15 == 9);
              }
              bVar25 = bVar15 < 0x5c;
              bVar26 = bVar15 == 0x5c;
              cVar27 = '\0';
              if (bVar26) {
                bVar25 = 0xfffffffffffffffe < uVar10;
                uVar10 = uVar10 + 1;
                bVar26 = uVar10 == 0;
                cVar27 = local_151;
              }
              local_130 = (int *)(line + uVar10);
              lVar24 = 6;
              piVar22 = local_130;
              pbVar21 = (byte *)"SHA512";
              do {
                if (lVar24 == 0) break;
                lVar24 = lVar24 + -1;
                bVar25 = *(byte *)piVar22 < *pbVar21;
                bVar26 = *(byte *)piVar22 == *pbVar21;
                piVar22 = (int *)((long)piVar22 + (ulong)bVar28 * -2 + 1);
                pbVar21 = pbVar21 + (ulong)bVar28 * -2 + 1;
              } while (bVar26);
              s = line;
              piVar22 = local_130;
              if ((!bVar25 && !bVar26) != bVar25) goto LAB_00102cb0;
              bVar15 = line[uVar10 + 6];
              lVar24 = uVar10 + 6;
              if (bVar15 == 0x20) {
                bVar15 = line[uVar10 + 7];
                lVar24 = uVar10 + 7;
              }
              length = (FILE *)(ulong)bVar15;
              poVar16 = (option *)length;
              if (bVar15 == 0x28) {
                bin_result = (FILE *)((long)bin_result - (lVar24 + 1));
                if (bin_result != (FILE *)0x0) {
                  s = line + lVar24 + 1;
                  do {
                    bin_result = (FILE *)(bin_result[-1]._unused2 + 0x13);
                    if (bin_result == (FILE *)0x0) {
                      if (*s != ')') goto LAB_00102c47;
                      bin_result = (FILE *)0x0;
                      pcVar20 = s;
                      break;
                    }
                    pcVar20 = s + (long)bin_result;
                  } while (s[(long)bin_result] != ')');
                  if ((cVar27 == '\0') ||
                     (pcVar14 = filename_unescape(s,(size_t)bin_result), poVar16 = (option *)length,
                     pcVar14 != (char *)0x0)) {
                    *pcVar20 = '\0';
                    cVar27 = (s + 1)[(long)bin_result];
                    puVar12 = (uchar *)((long)&bin_result->_flags + 1);
                    if (cVar27 != ' ') goto LAB_00103216;
                    do {
                      do {
                        puVar12 = puVar12 + 1;
                        cVar27 = s[(long)puVar12];
                      } while (cVar27 == ' ');
LAB_00103216:
                    } while (cVar27 == '\t');
                    poVar16 = (option *)length;
                    if (cVar27 == '=') {
                      piVar22 = (int *)(s + 1 + (long)puVar12);
                      do {
                        do {
                          local_130 = piVar22;
                          piVar22 = (int *)((long)local_130 + 1);
                        } while (*(byte *)local_130 == 0x20);
                      } while (*(byte *)local_130 == 9);
                      cVar27 = hex_digits((uchar *)local_130);
                      goto LAB_001034db;
                    }
                  }
                }
              }
LAB_00102c47:
              do {
                local_140 = (FILE *)((long)&local_140->_flags + 1);
                if (warn != false) {
                  bin_result = (FILE *)quotearg_n_style_colon(0,3,local_148);
                  uVar9 = dcgettext(0,"%s: %lu: improperly formatted %s checksum line",5);
                  poVar16 = (option *)bin_result;
                  local_130 = piVar19;
                  error(0,0,uVar9);
                }
LAB_00102c5a:
                bVar15 = *(byte *)&__stream->_flags;
                piVar22 = local_130;
                while( true ) {
                  if ((bVar15 & 0x30) != 0) goto LAB_00102e69;
                  piVar19 = (int *)((long)piVar19 + 1);
                  if (piVar19 != (int *)0x0) goto LAB_00102b60;
                  __stream = (FILE *)quotearg_n_style_colon(0,3,local_148);
                  uVar9 = dcgettext(0,"%s: too many checksum lines",5);
                  uVar10 = error(1,0,uVar9);
                  cVar27 = extraout_DL;
LAB_00102cb0:
                  poVar16 = (option *)((*(byte *)piVar22 == 0x5c) + min_digest_line_length);
                  local_130 = piVar22;
                  if ((FILE *)((long)bin_result - uVar10) < poVar16) break;
                  length = (FILE *)(uVar10 + digest_hex_bytes);
                  cVar1 = s[(long)length];
                  poVar16 = (option *)length;
                  if ((cVar1 != ' ') && (cVar1 != '\t')) break;
                  s[(long)length] = '\0';
                  _Var5 = hex_digits((uchar *)piVar22);
                  if (_Var5 == false) break;
                  puVar12 = (uchar *)((long)&length->_flags + 1);
                  if (((long)bin_result - (long)puVar12 == 1) ||
                     (((s + 1)[(long)length] != ' ' && ((s + 1)[(long)length] != '*')))) {
                    poVar16 = (option *)length;
                    local_130 = piVar22;
                    if (bsd_reversed == 0) break;
                    bsd_reversed = 1;
                  }
                  else if (bsd_reversed != 1) {
                    bsd_reversed = 0;
                    puVar12 = (uchar *)((long)&length->_flags + 2);
                  }
                  s = s + (long)puVar12;
                  local_130 = piVar22;
                  if (cVar27 != '\0') {
                    pcVar20 = filename_unescape(s,(long)bin_result - (long)puVar12);
                    cVar27 = pcVar20 != (char *)0x0;
LAB_001034db:
                    poVar16 = (option *)length;
                    if (cVar27 == '\0') break;
                  }
                  if (((iVar8 == 0) && (*s == '-')) && (poVar16 = (option *)length, s[1] == '\0'))
                  break;
                  _Var5 = false;
                  if (status_only == false) {
                    pcVar20 = strchr(s,10);
                    _Var5 = pcVar20 != (char *)0x0;
                  }
                  bin_result = (FILE *)bin_buffer_unaligned_1;
                  _Var6 = digest_file(s,(uchar *)bin_result,&missing_1,(uintmax_t *)length,local_130
                                     );
                  if (_Var6 == false) {
                    local_120 = (FILE *)((long)&local_120->_flags + 1);
                    if (status_only == false) {
                      if (_Var5 != false) {
                        pcVar20 = stdout->_IO_write_ptr;
                        if (pcVar20 < stdout->_IO_write_end) {
                          stdout->_IO_write_ptr = pcVar20 + 1;
                          *pcVar20 = '\\';
                        }
                        else {
                          __overflow(stdout,0x5c);
                        }
                      }
                      print_filename(s,_Var5);
                      pcVar20 = "FAILED open or read";
LAB_00102e38:
                      uVar9 = dcgettext(0,pcVar20,5);
                      __printf_chk(1,": %s\n",uVar9);
                    }
                  }
                  else if ((ignore_missing == false) || (missing_1 == false)) {
                    uVar10 = digest_hex_bytes >> 1;
                    if (uVar10 == 0) {
                      uVar18 = 0;
                    }
                    else {
                      pp_Var11 = __ctype_tolower_loc();
                      uVar17 = 0;
                      do {
                        bVar15 = *(byte *)((long)&bin_result->_flags + uVar17);
                        length = (FILE *)(ulong)(uint)(int)"0123456789abcdef9.1"[bVar15 >> 4];
                        if (((*pp_Var11)[*(byte *)((long)local_130 + uVar17 * 2)] !=
                             (int)"0123456789abcdef9.1"[bVar15 >> 4]) ||
                           (length = (FILE *)(ulong)*(byte *)((long)local_130 + uVar17 * 2 + 1),
                           (*pp_Var11)[(long)length] != (int)"0123456789abcdef9.1"[bVar15 & 0xf])) {
                          local_118 = (FILE *)((long)&local_118->_flags + 1);
                          if (status_only != false) goto LAB_00102e55;
                          uVar18 = uVar17;
                          if (_Var5 == false) goto LAB_001030a1;
                          goto LAB_0010341f;
                        }
                        uVar17 = uVar17 + 1;
                        uVar18 = uVar10;
                      } while (uVar10 != uVar17);
                    }
                    local_fe = status_only;
                    if ((status_only == false) && (local_fe = quiet, quiet == false)) {
                      local_fe = _Var6;
                      if (_Var5 == false) {
                        print_filename(s,false);
                      }
                      else {
LAB_0010341f:
                        pcVar20 = stdout->_IO_write_ptr;
                        if (pcVar20 < stdout->_IO_write_end) {
                          length = (FILE *)(pcVar20 + 1);
                          stdout->_IO_write_ptr = (char *)length;
                          *pcVar20 = '\\';
                        }
                        else {
                          __overflow(stdout,0x5c);
                        }
LAB_001030a1:
                        print_filename(s,_Var5);
                        if (uVar10 != uVar18) {
                          pcVar20 = "FAILED";
                          goto LAB_00102e38;
                        }
                      }
                      if (quiet == false) {
                        pcVar20 = "OK";
                        goto LAB_00102e38;
                      }
                    }
                  }
LAB_00102e55:
                  bVar15 = *(byte *)&__stream->_flags;
                  poVar16 = (option *)length;
                  piVar22 = local_130;
                  cVar3 = local_151;
                }
              } while( true );
            }
LAB_00102e69:
            rpl_free(line);
            uVar23 = __stream->_flags & 0x20;
            argv = (char **)(ulong)uVar23;
            s = (char *)(ulong)-(uint)(uVar23 == 0);
            if (iVar8 == 0) {
              clearerr_unlocked(__stream);
LAB_00102e95:
              if ((int)s < 0) {
                if (cVar3 == '\0') {
                  poVar16 = (option *)quotearg_n_style_colon(0,3,local_148);
                  pcVar20 = "%s: no properly formatted checksum lines found";
LAB_0010314d:
                  uVar9 = dcgettext(0,pcVar20,5);
                  error(0,0,uVar9);
LAB_00103165:
                  bVar15 = 0;
                }
                else if (status_only == false) {
                  if (local_140 != (FILE *)0x0) {
                    piVar22 = (int *)0x5;
                    uVar9 = dcngettext(0,"WARNING: %lu line is improperly formatted",
                                       "WARNING: %lu lines are improperly formatted",local_140);
                    poVar16 = (option *)local_140;
                    error(0,0,uVar9);
                    argv = (char **)local_140;
                  }
                  if (local_120 != (FILE *)0x0) {
                    piVar22 = (int *)0x5;
                    uVar9 = dcngettext(0,"WARNING: %lu listed file could not be read",
                                       "WARNING: %lu listed files could not be read",local_120);
                    poVar16 = (option *)local_120;
                    error(0,0,uVar9);
                    argv = (char **)local_120;
                  }
                  if (local_118 != (FILE *)0x0) {
                    piVar22 = (int *)0x5;
                    uVar9 = dcngettext(0,"WARNING: %lu computed checksum did NOT match",
                                       "WARNING: %lu computed checksums did NOT match",local_118);
                    poVar16 = (option *)local_118;
                    error(0,0,uVar9);
                    argv = (char **)local_118;
                  }
                  if (ignore_missing == false) goto LAB_00103328;
                  if (local_fe == '\0') {
                    poVar16 = (option *)quotearg_n_style_colon(0,3,local_148);
                    pcVar20 = "%s: no file was verified";
                    goto LAB_0010314d;
                  }
LAB_00102ef1:
                  if (((ulong)local_120 | (ulong)local_118) != 0) goto LAB_00103165;
                  bVar15 = strict ^ 1U | local_140 == (FILE *)0x0;
                }
                else {
LAB_00103328:
                  if (local_fe != '\0') goto LAB_00102ef1;
                  bVar15 = 0;
                }
                bVar15 = bVar15 & 1;
                goto LAB_00102f1c;
              }
              poVar16 = (option *)quotearg_n_style_colon(0,3,local_148);
              pcVar20 = "%s";
              if ((int)s == 0) goto LAB_00103195;
            }
            else {
              iVar8 = rpl_fclose((FILE *)__stream);
              if (iVar8 == 0) goto LAB_00102e95;
              if (uVar23 == 0) {
                puVar13 = (uint *)__errno_location();
                s = (char *)(ulong)*puVar13;
                goto LAB_00102e95;
              }
              poVar16 = (option *)quotearg_n_style_colon(0,3,local_148);
LAB_00103195:
              s = (char *)0x0;
              pcVar20 = (char *)dcgettext(0,"%s: read error",5);
            }
            error(0,s,pcVar20);
            bVar15 = 0;
          }
          else {
            __stream = (FILE *)fopen_safer(local_148,"r");
            if (__stream != (FILE *)0x0) goto LAB_00102b16;
            poVar16 = (option *)quotearg_n_style_colon(0,3,local_148);
            piVar19 = __errno_location();
            error(0,*piVar19,"%s");
            bVar15 = 0;
          }
LAB_00102f1c:
          local_ff = local_ff & bVar15;
        }
        local_150 = local_150 + 1;
      } while (local_150 < local_128);
    }
    else {
      local_ff = 1;
    }
    if ((have_read_stdin == false) || (iVar7 = rpl_fclose((FILE *)stdin), iVar7 != -1)) {
      if (local_40 == *(char **)(in_FS_OFFSET + 0x28)) {
        return (int)(local_ff ^ 1);
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar9 = dcgettext(0,"standard input",5);
    piVar19 = __errno_location();
    error(1,*piVar19,uVar9);
LAB_00103529:
    pcVar20 = "the --warn option is meaningful only when verifying checksums";
  } while (local_151 != '\0');
LAB_00102a00:
  uVar9 = dcgettext(0,pcVar20,5);
  error(0,0,uVar9);
switchD_00102858_caseD_64:
                    /* WARNING: Subroutine does not return */
  usage(1);
}

