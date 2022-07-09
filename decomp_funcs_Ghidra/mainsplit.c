
int main(int argc,char **argv)

{
  uint uVar1;
  size_t bytes;
  byte bVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  strtol_error sVar9;
  byte *pbVar10;
  ushort **ppuVar11;
  size_t sVar12;
  char *pcVar13;
  __off_t _Var14;
  size_t sVar15;
  void *pvVar16;
  __off_t _Var17;
  undefined8 uVar18;
  int *piVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  char *pcVar24;
  long lVar25;
  char *pcVar26;
  char *pcVar27;
  char *bp;
  int iVar28;
  byte *pbVar29;
  byte *pbVar30;
  long in_FS_OFFSET;
  bool new_file_flag;
  bool bVar31;
  byte bVar32;
  undefined8 uVar33;
  ulong local_178;
  _Bool local_170;
  char *local_168;
  size_t local_160;
  uintmax_t local_158;
  uintmax_t local_138;
  uintmax_t n_start;
  sigaction act;
  char buffer [21];
  
  bVar32 = 0;
  iVar28 = 0;
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  local_178 = 0;
  infile = "-";
  outbase = "x";
  local_138 = 0;
  local_158 = 0;
  iVar8 = 0;
  iVar7 = eolchar;
  pbVar29 = (byte *)additional_suffix;
  uVar21 = local_178;
LAB_00102ae8:
  local_178 = uVar21;
  additional_suffix = (char *)pbVar29;
  eolchar = iVar7;
  iVar5 = optind;
  if (optind == 0) {
    iVar5 = 1;
  }
  uVar33 = 0x102b17;
  iVar6 = getopt_long(argc,argv,"0123456789C:a:b:del:n:t:ux");
  pbVar30 = optarg;
  if (iVar6 == -1) {
    if ((local_138 != 0) && (filter_command != (char *)0x0)) {
      pcVar26 = "--filter does not process a chunk extracted to stdout";
      goto LAB_00103514;
    }
    if (iVar28 == 0) {
      local_178 = 1000;
      iVar28 = 3;
    }
    else if (local_178 == 0) {
      pcVar26 = quote("0");
      uVar33 = dcgettext(0,"invalid number of lines",5);
                    /* WARNING: Subroutine does not return */
      error(0,0,"%s: %s",uVar33,pcVar26);
    }
    if (eolchar < 0) {
      eolchar = 10;
    }
    uVar1 = iVar28 - 5;
    if (numeric_suffix_start == (char *)0x0) {
      uVar21 = local_178 - 1;
      if (uVar1 < 3) goto LAB_001033b5;
    }
    else {
      suffix_auto = false;
      if (uVar1 < 3) {
        uVar21 = local_178 - 1;
        sVar9 = xstrtoumax(numeric_suffix_start,(char **)0x0,10,&n_start,"");
        if (((sVar9 == LONGINT_OK) && (n_start <= ~local_178)) && (n_start < local_178)) {
          uVar21 = uVar21 + n_start;
        }
LAB_001033b5:
        uVar22 = 0xffffffffffffffff;
        sVar15 = 0;
        pcVar26 = suffix_alphabet;
        goto code_r0x001033c5;
      }
    }
    sVar15 = suffix_length;
    if (suffix_length != 0) goto LAB_00103043;
    goto LAB_0010338b;
  }
  if (0x83 < iVar6) {
switchD_00102b4c_caseD_a:
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  if (iVar6 < 0x30) {
    if (iVar6 == -0x83) {
      version_etc(stdout,"split","GNU coreutils",Version,"Torbjorn Granlund","Richard M. Stallman",0
                  ,uVar33);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar6 == -0x82) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
    goto switchD_00102b4c_caseD_a;
  }
  iVar23 = iVar6 + -0x30;
  iVar7 = eolchar;
  pbVar29 = (byte *)additional_suffix;
  uVar21 = local_178;
  switch(iVar23) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    if (iVar28 != 0) {
      if (iVar28 != 4) break;
      if ((iVar8 == 0) || (iVar8 == iVar5)) {
        if ((0x1999999999999999 < local_178) ||
           (uVar21 = (long)iVar23 + local_178 * 10, iVar8 = iVar5, uVar21 < local_178)) {
          pcVar26 = umaxtostr(local_178,buffer);
          uVar33 = dcgettext(0,"line count option -%s%c... is too large",5);
                    /* WARNING: Subroutine does not return */
          error(1,0,uVar33,pcVar26,iVar6);
        }
        goto LAB_00102ae8;
      }
    }
    iVar28 = 4;
    iVar8 = iVar5;
    uVar21 = (long)iVar23;
    goto LAB_00102ae8;
  default:
    goto switchD_00102b4c_caseD_a;
  case 0x13:
    if (iVar28 == 0) {
      iVar28 = 2;
      pcVar26 = (char *)dcgettext(0,"invalid number of bytes",5);
      uVar21 = xdectoumax((char *)optarg,1,0x7fffffffffffffff,"bEGKkMmPTYZ0",pcVar26,0);
      iVar7 = eolchar;
      pbVar29 = (byte *)additional_suffix;
      goto LAB_00102ae8;
    }
    break;
  case 0x31:
    pcVar26 = (char *)dcgettext(0,"invalid suffix length",5);
    suffix_length = xdectoumax((char *)optarg,0,0x1fffffffffffffff,"",pcVar26,0);
    iVar7 = eolchar;
    pbVar29 = (byte *)additional_suffix;
    goto LAB_00102ae8;
  case 0x32:
    if (iVar28 == 0) {
      iVar28 = 1;
      pcVar26 = (char *)dcgettext(0,"invalid number of bytes",5);
      uVar21 = xdectoumax((char *)optarg,1,0x7fffffffffffffff,"bEGKkMmPTYZ0",pcVar26,0);
      iVar7 = eolchar;
      pbVar29 = (byte *)additional_suffix;
      goto LAB_00102ae8;
    }
    break;
  case 0x34:
  case 0x48:
    suffix_alphabet = "0123456789";
    if (iVar6 != 100) {
      suffix_alphabet = "0123456789abcdef";
    }
    if (optarg != (byte *)0x0) {
      uVar22 = 0xffffffffffffffff;
      pbVar29 = optarg;
      do {
        if (uVar22 == 0) break;
        uVar22 = uVar22 - 1;
        bVar2 = *pbVar29;
        pbVar29 = pbVar29 + (ulong)bVar32 * -2 + 1;
      } while (bVar2 != 0);
      sVar12 = strspn((char *)optarg,suffix_alphabet);
      if (~uVar22 - 1 != sVar12) {
        pcVar26 = quote((char *)pbVar30);
        pcVar27 = "%s: invalid start value for hexadecimal suffix";
        if (iVar6 != 100) goto LAB_00104481;
        uVar33 = dcgettext(0,"%s: invalid start value for numerical suffix",5);
        goto LAB_0010448b;
      }
      while ((iVar7 = eolchar, pbVar29 = (byte *)additional_suffix,
             numeric_suffix_start = (char *)pbVar30, *pbVar30 == 0x30 && (pbVar30[1] != 0))) {
        pbVar30 = pbVar30 + 1;
        optarg = pbVar30;
      }
    }
    goto LAB_00102ae8;
  case 0x35:
    elide_empty_files = true;
    goto LAB_00102ae8;
  case 0x3c:
    if (iVar28 == 0) {
      iVar28 = 3;
      pcVar26 = (char *)dcgettext(0,"invalid number of lines",5);
      uVar21 = xdectoumax((char *)optarg,1,0xffffffffffffffff,"",pcVar26,0);
      iVar7 = eolchar;
      pbVar29 = (byte *)additional_suffix;
      goto LAB_00102ae8;
    }
    break;
  case 0x3e:
    if (iVar28 == 0) {
      ppuVar11 = __ctype_b_loc();
      pbVar29 = optarg;
      do {
        optarg = pbVar29;
        pbVar30 = optarg;
        pbVar29 = optarg + 1;
      } while ((*(byte *)((long)*ppuVar11 + (ulong)*optarg * 2 + 1) & 0x20) != 0);
      if ((*optarg == 0x72) && (optarg[1] == 0x2f)) {
        optarg = optarg + 2;
        iVar28 = 7;
      }
      else {
        iVar28 = 5;
        iVar7 = strncmp((char *)optarg,"l/",2);
        if (iVar7 == 0) {
          optarg = pbVar30 + 2;
          iVar28 = 6;
        }
      }
      pbVar30 = (byte *)strchr((char *)optarg,0x2f);
      if (pbVar30 == (byte *)0x0) {
        pcVar26 = (char *)dcgettext(0,"invalid number of chunks",5);
        uVar21 = xdectoumax((char *)optarg,1,0xffffffffffffffff,"",pcVar26,0);
        iVar7 = eolchar;
        pbVar29 = (byte *)additional_suffix;
      }
      else {
        pcVar26 = (char *)dcgettext(0,"invalid number of chunks",5);
        uVar21 = xdectoumax((char *)(pbVar30 + 1),1,0xffffffffffffffff,"",pcVar26,0);
        iVar7 = eolchar;
        pbVar29 = (byte *)additional_suffix;
        if (pbVar30 != optarg) {
          *pbVar30 = 0;
          pcVar26 = (char *)dcgettext(0,"invalid chunk number",5);
          local_138 = xdectoumax((char *)optarg,1,uVar21,"",pcVar26,0);
          iVar7 = eolchar;
          pbVar29 = (byte *)additional_suffix;
        }
      }
      goto LAB_00102ae8;
    }
    break;
  case 0x44:
    iVar7 = (int)(char)*optarg;
    if (*optarg == 0) {
      uVar33 = dcgettext(0,"empty record separator",5);
                    /* WARNING: Subroutine does not return */
      error(1,0,uVar33);
    }
    if (optarg[1] != 0) {
      iVar7 = strcmp((char *)optarg,"\\0");
      if (iVar7 != 0) {
        pcVar26 = quote((char *)pbVar30);
        uVar33 = dcgettext(0,"multi-character separator %s",5);
                    /* WARNING: Subroutine does not return */
        error(1,0,uVar33,pcVar26);
      }
      iVar7 = 0;
    }
    pbVar29 = (byte *)additional_suffix;
    if ((-1 < eolchar) && (eolchar != iVar7)) {
      uVar33 = dcgettext(0,"multiple separator characters specified",5);
                    /* WARNING: Subroutine does not return */
      error(1,0,uVar33);
    }
    goto LAB_00102ae8;
  case 0x45:
    unbuffered = true;
    goto LAB_00102ae8;
  case 0x50:
    verbose = true;
    goto LAB_00102ae8;
  case 0x51:
    filter_command = (char *)optarg;
    goto LAB_00102ae8;
  case 0x52:
    pcVar26 = (char *)dcgettext(0,"invalid IO block size",5);
    local_158 = xdectoumax((char *)optarg,1,0x7ffffffffffffffe,"bEGKkMmPTYZ0",pcVar26,0);
    iVar7 = eolchar;
    pbVar29 = (byte *)additional_suffix;
    goto LAB_00102ae8;
  case 0x53:
    goto switchD_00102b4c_caseD_53;
  }
  pcVar26 = "cannot split in more than one way";
  goto LAB_00103514;
switchD_00102b4c_caseD_53:
  pbVar29 = optarg;
  pbVar10 = (byte *)last_component((char *)optarg);
  iVar7 = eolchar;
  if (pbVar30 != pbVar10) goto LAB_00104559;
  goto LAB_00102ae8;
LAB_00104559:
  pcVar26 = quote((char *)pbVar30);
  pcVar27 = "invalid suffix %s, contains directory separator";
LAB_00104481:
  uVar33 = dcgettext(0,pcVar27,5);
LAB_0010448b:
                    /* WARNING: Subroutine does not return */
  error(0,0,uVar33,pcVar26);
  while( true ) {
    uVar22 = uVar22 - 1;
    cVar3 = *pcVar26;
    pcVar26 = pcVar26 + (ulong)bVar32 * -2 + 1;
    if (cVar3 == '\0') break;
code_r0x001033c5:
    if (uVar22 == 0) break;
  }
  do {
    sVar15 = sVar15 + 1;
    bVar31 = ~uVar22 - 1 <= uVar21;
    uVar21 = uVar21 / (~uVar22 - 1);
  } while (bVar31);
  suffix_auto = false;
  if (suffix_length == 0) {
LAB_0010338b:
    suffix_length = sVar15;
    if (sVar15 < 2) {
      suffix_length = 2;
    }
  }
  else {
    if (suffix_length < sVar15) {
      uVar33 = dcgettext(0,"the suffix length needs to be at least %lu",5);
                    /* WARNING: Subroutine does not return */
      error(1,0,uVar33,sVar15);
    }
LAB_00103043:
    suffix_auto = false;
  }
  iVar8 = optind;
  if (optind < argc) {
    lVar20 = (long)optind;
    infile = argv[lVar20];
    iVar8 = optind + 1;
    if (optind + 1 < argc) {
      outbase = argv[lVar20 + 1];
      optind = optind + 2;
      iVar8 = optind;
      if (optind < argc) {
        pcVar26 = quote(argv[lVar20 + 2]);
        pcVar27 = "extra operand %s";
        goto LAB_00104481;
      }
    }
  }
  optind = iVar8;
  pcVar27 = infile;
  if (numeric_suffix_start != (char *)0x0) {
    uVar21 = 0xffffffffffffffff;
    pcVar26 = numeric_suffix_start;
    do {
      if (uVar21 == 0) break;
      uVar21 = uVar21 - 1;
      cVar3 = *pcVar26;
      pcVar26 = pcVar26 + (ulong)bVar32 * -2 + 1;
    } while (cVar3 != '\0');
    pcVar26 = "numerical suffix start value is too large for the suffix length";
    if (suffix_length < ~uVar21 - 1) {
LAB_00103514:
      uVar33 = dcgettext(0,pcVar26,5);
                    /* WARNING: Subroutine does not return */
      error(0,0,uVar33);
    }
  }
  iVar8 = strcmp(infile,"-");
  if ((iVar8 != 0) && (iVar8 = fd_reopen(0,pcVar27,0,0), iVar8 < 0)) {
    pcVar26 = quotearg_style(shell_escape_always_quoting_style,infile);
    uVar33 = dcgettext(0,"cannot open %s for reading",5);
    piVar19 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(1,*piVar19,uVar33,pcVar26);
  }
  iVar8 = __fxstat(1,0,(stat *)&in_stat_buf);
  if (iVar8 != 0) {
    uVar33 = quotearg_n_style_colon(0,3,infile);
    piVar19 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(1,*piVar19,"%s",uVar33);
  }
  if ((local_158 == 0) &&
     (local_158 = 0x20000, in_stat_buf.st_blksize - 0x20000U < 0x1ffffffffffe0001)) {
    local_158 = in_stat_buf.st_blksize;
  }
  iVar8 = getpagesize();
  pcVar26 = (char *)xalignalloc((long)iVar8,local_158 + 1);
  if (1 < uVar1) {
LAB_0010317d:
    if (filter_command != (char *)0x0) {
      sigemptyset((sigset_t *)&newblocked);
      sigaction(0xd,(sigaction *)0x0,(sigaction *)&act);
      if (act.__sigaction_handler != 1) {
        sigaddset((sigset_t *)&newblocked,0xd);
      }
      sigprocmask(0,(sigset_t *)&newblocked,(sigset_t *)&oldblocked);
    }
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(iVar28) {
    case 4:
      bVar31 = false;
      uVar21 = 0;
      lVar20 = 0;
      local_160 = 0;
      local_168 = (char *)0x0;
      do {
        sVar15 = safe_read(0,pcVar26,local_158);
        if (sVar15 == 0xffffffffffffffff) {
          uVar33 = quotearg_n_style_colon(0,3,infile);
          piVar19 = __errno_location();
                    /* WARNING: Subroutine does not return */
          error(1,*piVar19,"%s",uVar33);
        }
        pcVar27 = pcVar26;
        if (sVar15 == 0) {
          if (uVar21 != 0) {
            cwrite(lVar20 == 0,local_168,uVar21);
          }
          rpl_free(local_168);
          break;
        }
        do {
          lVar25 = lVar20 + uVar21;
          uVar22 = local_178 - lVar25;
          if (sVar15 < uVar22) {
            pcVar13 = (char *)0x0;
            uVar22 = 0;
            pvVar16 = memrchr(pcVar27,eolchar,sVar15);
            if (uVar21 == 0) goto LAB_00103863;
LAB_001037d4:
            if ((pvVar16 == (void *)0x0) && (lVar20 != 0)) goto LAB_001037ed;
            cwrite(lVar20 == 0,local_168,uVar21);
            local_160 = local_158;
            lVar20 = lVar25;
            if (uVar21 <= local_158) goto LAB_00103863;
            local_168 = (char *)xrealloc(local_168,local_158);
            if (pvVar16 == (void *)0x0) goto LAB_00103bf0;
LAB_0010386c:
            bytes = (long)pvVar16 + (1 - (long)pcVar27);
            lVar20 = lVar25 + bytes;
            sVar15 = sVar15 - bytes;
            pcVar24 = pcVar27 + bytes;
            cwrite(lVar25 == 0,pcVar27,bytes);
            pcVar27 = pcVar24;
            if (pcVar13 == (char *)0x0) {
              uVar21 = 0;
              bVar31 = sVar15 != 0;
              uVar22 = sVar15;
              if (bVar31) goto LAB_001038aa;
              bVar31 = true;
            }
            else {
              uVar22 = uVar22 - bytes;
              bVar31 = uVar22 != 0;
              if (uVar22 == 0) {
                bVar31 = true;
                uVar21 = 0;
              }
              else {
                uVar21 = 0;
LAB_001038aa:
                if (local_160 - uVar21 < uVar22) {
                  if (~local_158 < local_160) {
                    /* WARNING: Subroutine does not return */
                    xalloc_die();
                  }
                  local_160 = local_160 + local_158;
                  local_168 = (char *)xrealloc(local_168,local_160);
                }
                sVar15 = sVar15 - uVar22;
                pcVar24 = local_168 + uVar21;
                uVar21 = uVar21 + uVar22;
                memcpy(pcVar24,pcVar27,uVar22);
                pcVar24 = pcVar27 + uVar22;
              }
LAB_00103905:
              if (pcVar13 != (char *)0x0) {
                bVar31 = false;
                lVar20 = 0;
              }
            }
          }
          else {
            pcVar13 = pcVar27 + (uVar22 - 1);
            pvVar16 = memrchr(pcVar27,eolchar,uVar22);
            if (uVar21 != 0) goto LAB_001037d4;
LAB_00103863:
            lVar25 = lVar20;
            if (pvVar16 != (void *)0x0) goto LAB_0010386c;
LAB_00103bf0:
            uVar21 = 0;
            lVar20 = lVar25;
LAB_001037ed:
            if (bVar31) {
              pcVar24 = pcVar27;
              if (pcVar13 == (char *)0x0) {
LAB_00104344:
                uVar22 = sVar15;
                if (sVar15 == 0) goto LAB_00103905;
                goto LAB_001038aa;
              }
              if (uVar22 != 0) goto LAB_001038aa;
              if (pcVar13 == (char *)0x0) goto LAB_00104344;
              goto LAB_00103905;
            }
            new_file_flag = lVar20 == 0;
            if (pcVar13 == (char *)0x0) {
              lVar20 = lVar20 + sVar15;
              cwrite(new_file_flag,pcVar27,sVar15);
              break;
            }
            sVar15 = sVar15 - uVar22;
            pcVar24 = pcVar27 + uVar22;
            cwrite(new_file_flag,pcVar27,uVar22);
            lVar20 = 0;
          }
          pcVar27 = pcVar24;
        } while (sVar15 != 0);
      } while( true );
    case 5:
      uVar21 = 0;
      local_170 = true;
      do {
        sVar15 = safe_read(0,pcVar26,local_158);
        iVar8 = eolchar;
        if (sVar15 == 0xffffffffffffffff) {
          uVar33 = quotearg_n_style_colon(0,3,infile);
          piVar19 = __errno_location();
                    /* WARNING: Subroutine does not return */
          error(1,*piVar19,"%s",uVar33);
        }
        pcVar24 = pcVar26 + sVar15;
        *pcVar24 = (char)eolchar;
        pcVar27 = pcVar26;
        pcVar13 = pcVar26;
        while (bp = pcVar27, pcVar13 = (char *)rawmemchr(pcVar13,iVar8), pcVar27 = bp,
              pcVar24 != pcVar13) {
          while( true ) {
            uVar21 = uVar21 + 1;
            bp = pcVar13 + 1;
            pcVar13 = bp;
            if (uVar21 < local_178) break;
            uVar21 = 0;
            cwrite(local_170,pcVar27,(long)bp - (long)pcVar27);
            iVar8 = eolchar;
            local_170 = true;
            pcVar13 = (char *)rawmemchr(bp,eolchar);
            pcVar27 = bp;
            if (pcVar24 == pcVar13) goto LAB_0010330f;
          }
        }
LAB_0010330f:
        if (pcVar24 != bp) {
          cwrite(local_170,bp,(long)pcVar24 - (long)bp);
          local_170 = false;
        }
      } while (sVar15 != 0);
      break;
    default:
      bytes_split(local_178,pcVar26,local_158,0xffffffffffffffff,0);
    }
    iVar8 = close(0);
    if (iVar8 != 0) {
      uVar33 = quotearg_n_style_colon(0,3,infile);
      piVar19 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar19,"%s",uVar33);
    }
    closeout((FILE *)0x0,output_desc,filter_pid,outfile);
    if (lVar4 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar21 = 0;
  _Var14 = lseek(0,0,1);
  if (_Var14 < 0) {
    piVar19 = __errno_location();
    if (*piVar19 == 0x1d) {
      *piVar19 = 0;
    }
    goto LAB_00104067;
  }
  do {
    sVar15 = safe_read(0,pcVar26 + uVar21,local_158 - uVar21);
    if (sVar15 == 0) goto LAB_001034d5;
    if (sVar15 == 0xffffffffffffffff) goto LAB_00104067;
    uVar21 = sVar15 + uVar21;
  } while (uVar21 < local_158);
  if (in_stat_buf.st_size != 0) {
    lVar20 = uVar21 + _Var14;
    if (((in_stat_buf.st_mode & 0xd000) != 0x8000) ||
       (_Var17 = in_stat_buf.st_size, in_stat_buf.st_size < lVar20)) {
      _Var17 = lseek(0,0,2);
      if (_Var17 < 0) goto LAB_00104067;
      if (lVar20 != _Var17) {
        _Var14 = lseek(0,lVar20,0);
        if (_Var14 < 0) goto LAB_00104067;
        if (_Var17 < lVar20) {
          _Var17 = lVar20;
        }
      }
    }
    uVar21 = (_Var17 - lVar20) + uVar21;
    if (uVar21 != 0x7fffffffffffffff) {
LAB_001034d5:
      if (-1 < (long)uVar21) {
        if ((long)local_178 < 0) {
          pcVar26 = umaxtostr(local_178,buffer);
          pcVar26 = quote(pcVar26);
          uVar33 = dcgettext(0,"invalid number of chunks",5);
                    /* WARNING: Subroutine does not return */
          error(1,0x4b,"%s: %s",uVar33,pcVar26);
        }
        goto LAB_0010317d;
      }
      goto LAB_00104067;
    }
  }
  piVar19 = __errno_location();
  *piVar19 = 0x4b;
LAB_00104067:
  uVar33 = quotearg_n_style_colon(0,3,infile);
  uVar18 = dcgettext(0,"%s: cannot determine file size",5);
  piVar19 = __errno_location();
                    /* WARNING: Subroutine does not return */
  error(1,*piVar19,uVar18,uVar33);
}

