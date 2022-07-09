
/* WARNING: Could not reconcile some variable overlaps */

int main(int argc,char **argv)

{
  byte *pbVar1;
  uchar *puVar2;
  bool bVar3;
  uchar uVar4;
  _Bool _Var5;
  _Bool _Var6;
  byte bVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  __ssize_t _Var11;
  long lVar12;
  char *pcVar13;
  FILE *__stream;
  long lVar14;
  undefined7 extraout_var;
  __int32_t **pp_Var15;
  size_t s_len;
  uint *puVar16;
  char *pcVar17;
  FILE *pFVar18;
  ulong uVar19;
  ulong uVar20;
  int *piVar21;
  char *s;
  char *pcVar22;
  int *binary;
  int *binary_00;
  ulong uVar23;
  uint uVar24;
  size_t *__n;
  char cVar25;
  char **ppcVar26;
  char **ppcVar27;
  long in_FS_OFFSET;
  char cVar28;
  char **local_f8;
  FILE *local_f0;
  option *local_d8;
  char **local_d0;
  FILE *local_c0;
  FILE *local_b8;
  char local_b0;
  byte local_9f;
  char local_9e;
  _Bool missing_1;
  char *line;
  _Bool missing;
  uchar bin_buffer_unaligned [20];
  uchar bin_buffer_unaligned_1 [20];
  char *local_40;
  
  ppcVar26 = (char **)0x0;
  __n = (size_t *)0xffffffff;
  s = (char *)(ulong)(uint)argc;
  local_40 = *(char **)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils");
  textdomain("coreutils");
  atexit(close_stdout);
  setvbuf(stdout,(char *)0x0,1,0);
  bVar3 = false;
  while( true ) {
    binary_00 = (int *)0x0;
    local_d8 = long_options;
    iVar8 = getopt_long(s,argv,"bctwz");
    if (iVar8 == -1) break;
    if (0x84 < iVar8) goto switchD_00102856_caseD_64;
    if (iVar8 < 0x62) {
      if (iVar8 == -0x83) {
        version_etc((FILE *)stdout,"md5sum","GNU coreutils",Version,"Ulrich Drepper","Scott Miller",
                    "David Madore",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar8 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00102856_caseD_64;
    }
    switch(iVar8) {
    case 99:
      ppcVar26 = (char **)0x1;
      break;
    default:
      goto switchD_00102856_caseD_64;
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
      bVar3 = true;
    case 0x62:
      __n = (size_t *)0x1;
    }
  }
  min_digest_line_length = 0x22;
  digest_hex_bytes = 0x20;
  if ((bool)(bVar3 & (int)__n == 0)) {
    pcVar22 = "--tag does not support --text mode";
    goto LAB_001029f4;
  }
  cVar25 = (char)ppcVar26;
  ppcVar27 = ppcVar26;
  if (digest_delim == '\n') {
    if (((cVar25 != '\0') &&
        (pcVar22 = "the --tag option is meaningless when verifying checksums", bVar3)) ||
       ((-1 < (int)__n &&
        (pcVar22 = "the --binary and --text options are meaningless when verifying checksums",
        cVar25 != '\0')))) goto LAB_001029f4;
    if (ignore_missing == false) {
      if (status_only == false) goto LAB_0010299d;
      if (cVar25 == '\0') goto LAB_00103720;
    }
    else if (cVar25 == '\0') goto LAB_00103736;
    if (warn == false) goto LAB_00102a32;
  }
  else {
    pcVar22 = "the --zero option is not supported when verifying checksums";
    if (cVar25 != '\0') goto LAB_001029f4;
    if (ignore_missing != false) {
LAB_00103736:
      pcVar22 = "the --ignore-missing option is meaningful only when verifying checksums";
      goto LAB_001029f4;
    }
    if (status_only != false) {
LAB_00103720:
      pcVar22 = "the --status option is meaningful only when verifying checksums";
      goto LAB_001029f4;
    }
LAB_0010299d:
    if (warn != false) goto LAB_00103511;
    if ((quiet == true) &&
       (pcVar22 = "the --quiet option is meaningful only when verifying checksums", cVar25 == '\0'))
    goto LAB_001029f4;
LAB_00102a32:
    if ((strict != false) &&
       (pcVar22 = "the --strict option is meaningful only when verifying checksums", cVar25 == '\0')
       ) goto LAB_001029f4;
  }
  do {
    local_d0 = (char **)((int *)argv + (long)(int)s * 2);
    if (optind == (int)s) {
      *local_d0 = "-";
      local_d0 = local_d0 + 1;
    }
    local_f8 = (char **)((int *)argv + (long)optind * 2);
    ppcVar26 = ppcVar27;
    if (local_f8 < local_d0) {
      uVar24 = (int)__n - 1;
      __n = (size_t *)(ulong)uVar24;
      local_9f = 1;
      iVar8 = 0x20;
      if (uVar24 == 0) {
        iVar8 = 0x2a;
      }
      do {
        pcVar22 = *local_f8;
        if ((char)ppcVar27 == '\0') {
          __n = (size_t *)&missing;
          argv = (char **)bin_buffer_unaligned;
          _Var5 = digest_file(pcVar22,(uchar *)argv,(_Bool *)__n,(uintmax_t *)local_d8,binary_00);
          uVar4 = digest_delim;
          if (_Var5 == false) {
            local_9f = 0;
          }
          else {
            uVar24 = (uint)digest_delim;
            s = (char *)(ulong)uVar24;
            _Var5 = false;
            if ((digest_delim == '\n') &&
               (((pcVar13 = strchr(pcVar22,0x5c), pcVar13 != (char *)0x0 ||
                 (pcVar13 = strchr(pcVar22,10), pcVar13 != (char *)0x0)) ||
                (pcVar13 = strchr(pcVar22,0xd), pcVar13 != (char *)0x0)))) {
              pcVar13 = stdout->_IO_write_ptr;
              if (pcVar13 < stdout->_IO_write_end) {
                _Var5 = true;
                stdout->_IO_write_ptr = pcVar13 + 1;
                *pcVar13 = '\\';
              }
              else {
                _Var5 = true;
                __overflow(stdout,0x5c);
              }
            }
            if (bVar3) {
              fwrite_unlocked(&DAT_00109014,1,3,stdout);
              fwrite_unlocked(&DAT_00109166,1,2,stdout);
              print_filename(pcVar22,_Var5);
              local_d8 = (option *)stdout;
              fwrite_unlocked(&DAT_00109169,1,4,stdout);
              if (digest_hex_bytes >> 1 != 0) goto LAB_0010326d;
            }
            else {
              if (digest_hex_bytes >> 1 != 0) {
LAB_0010326d:
                __n = (size_t *)0x0;
                do {
                  puVar2 = (uchar *)((long)(int *)argv + (long)__n);
                  __n = (size_t *)((long)__n + 1);
                  __printf_chk(1,&DAT_0010916e,*puVar2);
                } while (__n < (size_t *)(digest_hex_bytes >> 1));
                if (bVar3) goto LAB_001032f1;
              }
              pcVar13 = stdout->_IO_write_ptr;
              if (pcVar13 < stdout->_IO_write_end) {
                stdout->_IO_write_ptr = pcVar13 + 1;
                *pcVar13 = ' ';
              }
              else {
                __overflow(stdout,0x20);
              }
              pbVar1 = (byte *)stdout->_IO_write_ptr;
              if (pbVar1 < stdout->_IO_write_end) {
                argv = (char **)(ulong)(byte)iVar8;
                stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
                *pbVar1 = (byte)iVar8;
              }
              else {
                __overflow(stdout,iVar8);
              }
              print_filename(pcVar22,_Var5);
            }
LAB_001032f1:
            puVar2 = (uchar *)stdout->_IO_write_ptr;
            if (puVar2 < stdout->_IO_write_end) {
              stdout->_IO_write_ptr = (char *)(puVar2 + 1);
              *puVar2 = uVar4;
            }
            else {
              __overflow(stdout,uVar24);
            }
          }
        }
        else {
          iVar9 = strcmp(pcVar22,"-");
          if (iVar9 == 0) {
            have_read_stdin = true;
            pcVar22 = (char *)dcgettext(0,"standard input",5);
            __stream = stdin;
LAB_00102b09:
            local_9e = '\0';
            piVar21 = (int *)0x1;
            __n = (size_t *)&missing;
            ppcVar26 = &line;
            line = (char *)0x0;
            _missing = 0;
            cVar25 = '\0';
            local_b8 = (FILE *)0x0;
            local_c0 = (FILE *)0x0;
            local_f0 = (FILE *)0x0;
LAB_00102b58:
            local_d8 = (option *)__stream;
            _Var11 = __getdelim(ppcVar26,__n,10,__stream);
            if (0 < _Var11) {
              if (*line == '#') goto LAB_00102c4a;
              lVar12 = _Var11 - (ulong)(line[_Var11 + -1] == '\n');
              local_d8 = (option *)(ulong)(line[lVar12 - (ulong)(0 < lVar12)] == '\r');
              pcVar13 = (char *)(lVar12 - (long)local_d8);
              if (pcVar13 == (char *)0x0) goto LAB_00102c4a;
              line[(long)pcVar13] = '\0';
              lVar12 = 0;
              cVar28 = *line;
              if ((cVar28 == '\t') || (cVar28 == ' ')) {
                do {
                  do {
                    lVar12 = lVar12 + 1;
                    cVar28 = line[lVar12];
                  } while (cVar28 == ' ');
                } while (cVar28 == '\t');
              }
              binary = (int *)0x0;
              if (cVar28 == '\\') {
                binary = (int *)((ulong)ppcVar27 & 0xff);
                lVar12 = lVar12 + 1;
              }
              pFVar18 = (FILE *)(line + lVar12);
              s = line;
              binary_00 = binary;
              if (*(char *)&pFVar18->_flags != 'M') goto LAB_00102ca0;
              if (*(char *)((long)&pFVar18->_flags + 1) != 'D') goto LAB_00102ca0;
              if (*(char *)((long)&pFVar18->_flags + 2) != '5') goto LAB_00102ca0;
              cVar28 = line[lVar12 + 3];
              local_d8 = (option *)(lVar12 + 3);
              if (cVar28 == ' ') {
                cVar28 = line[lVar12 + 4];
                local_d8 = (option *)(lVar12 + 4);
              }
              if (cVar28 == '(') {
                local_d8 = (option *)((long)&((FILE *)local_d8)->_flags + 1);
                s_len = (long)pcVar13 - (long)local_d8;
                if (s_len != 0) {
                  s = line + (long)local_d8;
                  do {
                    s_len = s_len - 1;
                    if (s_len == 0) {
                      if (*s != ')') goto LAB_00102c37;
                      s_len = 0;
                      pcVar13 = s;
                      break;
                    }
                    pcVar13 = s + s_len;
                  } while (s[s_len] != ')');
                  if (((char)binary == '\0') ||
                     (pcVar17 = filename_unescape(s,s_len), binary_00 = binary,
                     pcVar17 != (char *)0x0)) {
                    *pcVar13 = '\0';
                    cVar28 = s[s_len + 1];
                    lVar12 = s_len + 1;
                    if (cVar28 != ' ') goto LAB_00103206;
                    do {
                      do {
                        lVar12 = lVar12 + 1;
                        cVar28 = s[lVar12];
                      } while (cVar28 == ' ');
LAB_00103206:
                    } while (cVar28 == '\t');
                    binary_00 = binary;
                    if (cVar28 == '=') {
                      pFVar18 = (FILE *)(s + lVar12 + 1);
                      do {
                        do {
                          local_d8 = (option *)pFVar18;
                          pFVar18 = (FILE *)((long)&((FILE *)local_d8)->_flags + 1);
                        } while (*(char *)&((FILE *)local_d8)->_flags == ' ');
                      } while (*(char *)&((FILE *)local_d8)->_flags == '\t');
                      cVar28 = hex_digits((uchar *)local_d8);
                      goto LAB_001034c3;
                    }
                  }
                }
              }
LAB_00102c37:
              do {
                local_f0 = (FILE *)((long)&local_f0->_flags + 1);
                if (warn != false) {
                  local_d8 = (option *)quotearg_n_style_colon(0,3,pcVar22);
                  uVar10 = dcgettext(0,"%s: %lu: improperly formatted %s checksum line",5);
                  binary_00 = piVar21;
                  error(0,0,uVar10,local_d8,piVar21,&DAT_00109014);
                }
LAB_00102c4a:
                bVar7 = *(byte *)&__stream->_flags;
                while( true ) {
                  if ((bVar7 & 0x30) != 0) goto LAB_00102e59;
                  piVar21 = (int *)((long)piVar21 + 1);
                  if (piVar21 != (int *)0x0) goto LAB_00102b58;
                  __stream = (FILE *)quotearg_n_style_colon(0,3,pcVar22);
                  uVar10 = dcgettext(0,"%s: too many checksum lines",5);
                  pFVar18 = __stream;
                  lVar12 = error(1,0,uVar10);
                  pcVar13 = pcVar22;
LAB_00102ca0:
                  local_d8 = (option *)pFVar18;
                  if ((ulong)((long)pcVar13 - lVar12) <
                      (*(char *)&pFVar18->_flags == '\\') + min_digest_line_length) break;
                  lVar12 = lVar12 + digest_hex_bytes;
                  cVar28 = s[lVar12];
                  if ((cVar28 != ' ') && (cVar28 != '\t')) break;
                  s[lVar12] = '\0';
                  binary = (int *)((ulong)binary_00 & 0xff);
                  _Var5 = hex_digits((uchar *)pFVar18);
                  if (_Var5 == false) break;
                  local_b0 = (char)binary;
                  lVar14 = lVar12 + 1;
                  if (((long)pcVar13 - lVar14 == 1) ||
                     ((s[lVar12 + 1] != ' ' && (s[lVar12 + 1] != '*')))) {
                    local_d8 = (option *)pFVar18;
                    binary_00 = binary;
                    if (bsd_reversed == 0) break;
                    bsd_reversed = 1;
                  }
                  else if (bsd_reversed != 1) {
                    bsd_reversed = 0;
                    lVar14 = lVar12 + 2;
                  }
                  s = s + lVar14;
                  local_d8 = (option *)pFVar18;
                  if (local_b0 != '\0') {
                    pcVar13 = filename_unescape(s,(long)pcVar13 - lVar14);
                    cVar28 = pcVar13 != (char *)0x0;
LAB_001034c3:
                    binary_00 = binary;
                    if (cVar28 == '\0') break;
                  }
                  if (((iVar9 == 0) && (*s == '-')) && (binary_00 = binary, s[1] == '\0')) break;
                  _Var5 = false;
                  if (status_only == false) {
                    pcVar13 = strchr(s,10);
                    _Var5 = pcVar13 != (char *)0x0;
                  }
                  _Var6 = digest_file(s,bin_buffer_unaligned_1,&missing_1,(uintmax_t *)local_d8,
                                      binary);
                  binary_00 = (int *)(CONCAT71(extraout_var,_Var6) & 0xffffffff);
                  if (_Var6 == false) {
                    local_c0 = (FILE *)((long)&local_c0->_flags + 1);
                    if (status_only == false) {
                      if (_Var5 != false) {
                        pcVar13 = stdout->_IO_write_ptr;
                        if (pcVar13 < stdout->_IO_write_end) {
                          stdout->_IO_write_ptr = pcVar13 + 1;
                          *pcVar13 = '\\';
                        }
                        else {
                          __overflow(stdout,0x5c);
                        }
                      }
                      print_filename(s,_Var5);
                      pcVar13 = "FAILED open or read";
LAB_00102e28:
                      uVar10 = dcgettext(0,pcVar13,5);
                      __printf_chk(1,": %s\n",uVar10);
                    }
                  }
                  else if ((ignore_missing == false) || (missing_1 == false)) {
                    uVar23 = digest_hex_bytes >> 1;
                    if (uVar23 == 0) {
                      uVar20 = 0;
                    }
                    else {
                      binary_00 = (int *)(ulong)_Var6;
                      pp_Var15 = __ctype_tolower_loc();
                      uVar19 = 0;
                      do {
                        bVar7 = bin_buffer_unaligned_1[uVar19];
                        if (((*pp_Var15)[*(byte *)((long)&local_d8->name + uVar19 * 2)] !=
                             (int)"0123456789abcdef9.1"[bVar7 >> 4]) ||
                           ((*pp_Var15)[*(byte *)((long)&local_d8->name + uVar19 * 2 + 1)] !=
                            (int)"0123456789abcdef9.1"[bVar7 & 0xf])) {
                          local_b8 = (FILE *)((long)&local_b8->_flags + 1);
                          if (status_only != false) goto LAB_00102e45;
                          uVar20 = uVar19;
                          if (_Var5 == false) goto LAB_00103092;
                          goto LAB_00103409;
                        }
                        uVar19 = uVar19 + 1;
                        uVar20 = uVar23;
                      } while (uVar23 != uVar19);
                    }
                    local_9e = status_only;
                    if ((status_only == false) && (local_9e = quiet, quiet == false)) {
                      local_9e = (char)binary_00;
                      if (_Var5 == false) {
                        print_filename(s,false);
                        binary_00 = (int *)((ulong)binary_00 & 0xff);
                      }
                      else {
LAB_00103409:
                        pcVar13 = stdout->_IO_write_ptr;
                        if (pcVar13 < stdout->_IO_write_end) {
                          local_d8 = (option *)(pcVar13 + 1);
                          stdout->_IO_write_ptr = (char *)local_d8;
                          *pcVar13 = '\\';
                        }
                        else {
                          __overflow(stdout,0x5c);
                        }
LAB_00103092:
                        print_filename(s,_Var5);
                        if (uVar23 != uVar20) {
                          pcVar13 = "FAILED";
                          goto LAB_00102e28;
                        }
                      }
                      if (quiet == false) {
                        pcVar13 = "OK";
                        goto LAB_00102e28;
                      }
                    }
                  }
LAB_00102e45:
                  bVar7 = *(byte *)&__stream->_flags;
                  cVar25 = (char)ppcVar27;
                }
              } while( true );
            }
LAB_00102e59:
            rpl_free(line);
            uVar24 = __stream->_flags & 0x20;
            argv = (char **)(ulong)uVar24;
            s = (char *)(ulong)-(uint)(uVar24 == 0);
            if (iVar9 == 0) {
              clearerr_unlocked(__stream);
LAB_00102e8a:
              if ((int)s < 0) {
                if (cVar25 == '\0') {
                  local_d8 = (option *)quotearg_n_style_colon(0,3,pcVar22);
                  pcVar22 = "%s: no properly formatted checksum lines found";
LAB_00103138:
                  uVar10 = dcgettext(0,pcVar22,5);
                  error(0,0,uVar10);
LAB_00103150:
                  bVar7 = 0;
                }
                else if (status_only == false) {
                  if (local_f0 != (FILE *)0x0) {
                    binary_00 = (int *)0x5;
                    uVar10 = dcngettext(0,"WARNING: %lu line is improperly formatted",
                                        "WARNING: %lu lines are improperly formatted",local_f0);
                    local_d8 = (option *)local_f0;
                    error(0,0,uVar10);
                    argv = (char **)local_f0;
                  }
                  if (local_c0 != (FILE *)0x0) {
                    binary_00 = (int *)0x5;
                    uVar10 = dcngettext(0,"WARNING: %lu listed file could not be read",
                                        "WARNING: %lu listed files could not be read",local_c0);
                    local_d8 = (option *)local_c0;
                    error(0,0,uVar10);
                    argv = (char **)local_c0;
                  }
                  if (local_b8 != (FILE *)0x0) {
                    binary_00 = (int *)0x5;
                    uVar10 = dcngettext(0,"WARNING: %lu computed checksum did NOT match",
                                        "WARNING: %lu computed checksums did NOT match",local_b8);
                    local_d8 = (option *)local_b8;
                    error(0,0,uVar10);
                    argv = (char **)local_b8;
                  }
                  if (ignore_missing == false) goto LAB_00103316;
                  if (local_9e == '\0') {
                    local_d8 = (option *)quotearg_n_style_colon(0,3,pcVar22);
                    pcVar22 = "%s: no file was verified";
                    goto LAB_00103138;
                  }
LAB_00102ee6:
                  if (((ulong)local_c0 | (ulong)local_b8) != 0) goto LAB_00103150;
                  bVar7 = strict ^ 1U | local_f0 == (FILE *)0x0;
                }
                else {
LAB_00103316:
                  if (local_9e != '\0') goto LAB_00102ee6;
                  bVar7 = 0;
                }
                bVar7 = bVar7 & 1;
                goto LAB_00102f11;
              }
              local_d8 = (option *)quotearg_n_style_colon(0,3,pcVar22);
              pcVar22 = "%s";
              if ((int)s == 0) goto LAB_0010317e;
            }
            else {
              iVar9 = rpl_fclose((FILE *)__stream);
              if (iVar9 == 0) goto LAB_00102e8a;
              if (uVar24 == 0) {
                puVar16 = (uint *)__errno_location();
                s = (char *)(ulong)*puVar16;
                goto LAB_00102e8a;
              }
              local_d8 = (option *)quotearg_n_style_colon(0,3,pcVar22);
LAB_0010317e:
              s = (char *)0x0;
              pcVar22 = (char *)dcgettext(0,"%s: read error",5);
            }
            error(0,s,pcVar22);
            bVar7 = 0;
          }
          else {
            __stream = (FILE *)fopen_safer(pcVar22,"r");
            if (__stream != (FILE *)0x0) goto LAB_00102b09;
            local_d8 = (option *)quotearg_n_style_colon(0,3,pcVar22);
            piVar21 = __errno_location();
            error(0,*piVar21,"%s");
            bVar7 = 0;
          }
LAB_00102f11:
          local_9f = local_9f & bVar7;
        }
        local_f8 = local_f8 + 1;
      } while (local_f8 < local_d0);
    }
    else {
      local_9f = 1;
    }
    if ((have_read_stdin == false) || (iVar8 = rpl_fclose((FILE *)stdin), iVar8 != -1)) {
      if (local_40 == *(char **)(in_FS_OFFSET + 0x28)) {
        return (int)(local_9f ^ 1);
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar10 = dcgettext(0,"standard input",5);
    piVar21 = __errno_location();
    error(1,*piVar21,uVar10);
LAB_00103511:
    pcVar22 = "the --warn option is meaningful only when verifying checksums";
    ppcVar27 = ppcVar26;
  } while ((char)ppcVar26 != '\0');
LAB_001029f4:
  uVar10 = dcgettext(0,pcVar22,5);
  error(0,0,uVar10);
switchD_00102856_caseD_64:
                    /* WARNING: Subroutine does not return */
  usage(1);
}

