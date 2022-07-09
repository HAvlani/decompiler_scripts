
int main(int argc,char **argv)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  char cVar4;
  _Bool _Var5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  ptrdiff_t pVar9;
  char *pcVar10;
  timezone_t tzdefault;
  FILE *__stream;
  __ssize_t _Var11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  char *pcVar15;
  int *piVar16;
  undefined8 extraout_RDX;
  char *pcVar17;
  char cVar18;
  long in_FS_OFFSET;
  bool bVar19;
  undefined8 in_stack_fffffffffffffed8;
  undefined uVar20;
  undefined7 uVar21;
  char *local_118;
  char *local_110;
  char *local_108;
  byte local_fd;
  char *line;
  size_t buflen;
  timespec when;
  stat refstats;
  
  cVar18 = '\0';
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  local_fd = 0;
  local_110 = (char *)0x0;
  uVar20 = 0;
  uVar21 = 0;
  local_108 = (char *)0x0;
  local_118 = (char *)0x0;
  pcVar10 = (char *)0x0;
LAB_001039de:
  iVar7 = getopt_long(argc,argv,"d:f:I::r:Rs:u");
  if (iVar7 == -1) {
    bVar6 = (local_118 != (char *)0x0) + (CONCAT71(uVar21,uVar20) != 0) + (local_110 != (char *)0x0)
            + cVar18;
    if (bVar6 < 2) {
      if ((local_fd & bVar6) == 0) {
        if (optind < argc) {
          if (optind + 1 < argc) {
            pcVar10 = quote(argv[(long)optind + 1]);
            pcVar15 = "extra operand %s";
          }
          else {
            pcVar15 = argv[optind];
            if (*pcVar15 == '+') {
              if (pcVar10 != (char *)0x0) {
                uVar12 = dcgettext(0,"multiple output formats specified",5);
                error(1,0,uVar12);
                goto LAB_001041ad;
              }
              pcVar10 = pcVar15 + 1;
              optind = optind + 1;
              goto LAB_00103c3a;
            }
            if (((bVar6 & 1) == 0) && (local_fd == 0)) goto LAB_00103c31;
            pcVar10 = quote(pcVar15);
            pcVar15 = 
            "the argument %s lacks a leading \'+\';\nwhen using an option to specify date(s), any non-option\nargument must be a format string beginning with \'+\'"
            ;
          }
          uVar12 = dcgettext(0,pcVar15,5);
          error(0,0,uVar12,pcVar10);
          goto switchD_00103a2a_caseD_4a;
        }
LAB_00103c31:
        if (pcVar10 == (char *)0x0) {
          pcVar10 = "%s.%N";
          if ((cVar18 == '\0') && (pcVar10 = nl_langinfo(0x2006c), *pcVar10 == '\0')) {
            pcVar10 = "%a %b %e %H:%M:%S %Z %Y";
          }
          cVar4 = *pcVar10;
        }
        else {
LAB_00103c3a:
          cVar4 = *pcVar10;
          pcVar15 = pcVar10;
          if (cVar4 == '\0') goto LAB_00103c83;
        }
        pcVar15 = (char *)0x0;
        pcVar17 = pcVar10;
        do {
          cVar2 = pcVar17[1];
          bVar19 = cVar4 == '%';
          cVar4 = cVar2;
          if (bVar19) {
            if ((cVar2 == '-') && (pcVar17[2] == 'N')) {
              if (pcVar15 == (char *)0x0) {
                pcVar15 = xstrdup(pcVar10);
              }
              lVar13 = gettime_res();
              cVar4 = '\t';
              lVar14 = 1;
              while (SBORROW8(lVar13,lVar14 * 10) == lVar13 + lVar14 * -10 < 0) {
                cVar4 = cVar4 + -1;
                lVar14 = lVar14 * 10;
              }
              pcVar17[(long)(pcVar15 + (1 - (long)pcVar10))] = cVar4 + '0';
              pcVar1 = pcVar17 + 3;
              pcVar17 = pcVar17 + 2;
              cVar4 = *pcVar1;
            }
            else {
              pcVar17 = pcVar17 + (cVar2 == '%');
              cVar4 = pcVar17[1];
            }
          }
          pcVar17 = pcVar17 + 1;
        } while (cVar4 != '\0');
        if (pcVar15 == (char *)0x0) {
          pcVar15 = pcVar10;
        }
LAB_00103c83:
        pcVar10 = getenv("TZ");
        tzdefault = tzalloc(pcVar10);
        if ((char *)CONCAT71(uVar21,uVar20) == (char *)0x0) {
          bVar6 = (local_fd ^ 1) & (bVar6 ^ 1);
          if (bVar6 == 0) {
            if (local_110 == (char *)0x0) {
              if (cVar18 == '\0') {
                if (local_108 == (char *)0x0) {
                  local_108 = local_118;
                }
                _Var5 = parse_datetime2(&when,local_108,(timespec *)0x0,parse_datetime_flags,
                                        tzdefault,pcVar10);
                local_118 = local_108;
                if (_Var5 == false) goto LAB_00104094;
              }
              else {
LAB_001040c8:
                lVar14 = gettime_res();
                when.tv_sec = lVar14 / 1000000000;
                when.tv_nsec = lVar14 % 1000000000;
              }
            }
            else {
              iVar7 = __xstat(1,local_110,(stat *)&refstats);
              if (iVar7 != 0) goto LAB_00104153;
              when.tv_sec = refstats.st_mtim.tv_sec;
              when.tv_nsec = refstats.st_mtim.tv_nsec;
            }
            if (local_fd != 0) {
LAB_00103f7b:
              iVar7 = settime(&when);
              if (iVar7 != 0) {
                uVar12 = dcgettext(0,"cannot set date",5);
                piVar16 = __errno_location();
                error(0,*piVar16,uVar12);
                bVar6 = 0;
                goto LAB_00103e6b;
              }
            }
            bVar6 = 1;
          }
          else {
            if (optind < argc) {
              local_118 = argv[optind];
              _Var5 = posixtime(&when.tv_sec,local_118,7);
              when.tv_nsec = 0;
              if (_Var5 == false) {
LAB_00104094:
                pcVar10 = quote(local_118);
                uVar12 = dcgettext(0,"invalid date %s",5);
                error(1,0,uVar12,pcVar10);
                goto LAB_001040c8;
              }
              goto LAB_00103f7b;
            }
            gettime(&when);
          }
LAB_00103e6b:
          _Var5 = show_date(pcVar15,(timespec)
                                    CONCAT79(uVar21,CONCAT18(bVar6,in_stack_fffffffffffffed8)),
                            (timezone_t)when.tv_sec);
          local_fd = bVar6 & _Var5;
        }
        else {
          iVar7 = strcmp((char *)CONCAT71(uVar21,uVar20),"-");
          if (iVar7 == 0) {
            uVar12 = dcgettext(0,"standard input",5);
            uVar20 = (undefined)uVar12;
            uVar21 = (undefined7)((ulong)uVar12 >> 8);
            __stream = stdin;
          }
          else {
            __stream = fopen((char *)CONCAT71(uVar21,uVar20),"r");
            if (__stream == (FILE *)0x0) {
LAB_00104122:
              uVar12 = quotearg_n_style_colon(0,3,CONCAT71(uVar21,uVar20));
              piVar16 = __errno_location();
              error(1,*piVar16,&DAT_0011597f,uVar12);
LAB_00104153:
              uVar12 = quotearg_n_style_colon(0,3,local_110);
              piVar16 = __errno_location();
              error(1,*piVar16,&DAT_0011597f,uVar12);
              goto LAB_00104184;
            }
          }
          local_fd = 1;
          line = (char *)0x0;
          buflen = 0;
          while (_Var11 = __getdelim(&line,&buflen,10,__stream), -1 < _Var11) {
            _Var5 = parse_datetime2(&when,line,(timespec *)0x0,parse_datetime_flags,tzdefault,
                                    pcVar10);
            if (_Var5 == false) {
              if (line[_Var11 + -1] == '\n') {
                line[_Var11 + -1] = '\0';
              }
              pcVar17 = quote(line);
              uVar12 = dcgettext(0,"invalid date %s",5);
              error(0,0,uVar12,pcVar17);
              local_fd = 0;
            }
            else {
              _Var5 = show_date(pcVar15,(timespec)
                                        CONCAT79(uVar21,CONCAT18(uVar20,in_stack_fffffffffffffed8)),
                                (timezone_t)when.tv_sec);
              local_fd = local_fd & _Var5;
            }
          }
          iVar7 = rpl_fclose((FILE *)__stream);
          if (iVar7 == -1) {
            uVar12 = quotearg_n_style_colon(0,3,CONCAT71(uVar21,uVar20));
            piVar16 = __errno_location();
            error(1,*piVar16,&DAT_0011597f,uVar12);
            (*(code *)PTR___libc_start_main_0011cfd8)
                      (main,in_stack_fffffffffffffed8,&stack0xfffffffffffffee0,__libc_csu_init,
                       __libc_csu_fini,extraout_RDX,&stack0xfffffffffffffed8);
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          rpl_free(line);
        }
        if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
          return (int)(local_fd ^ 1);
        }
LAB_00104184:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
LAB_001041ad:
      pcVar10 = "the options to print and set the time may not be used together";
    }
    else {
      pcVar10 = "the options to specify dates for printing are mutually exclusive";
    }
    uVar12 = dcgettext(0,pcVar10,5);
    error(0,0,uVar12);
switchD_00103a2a_caseD_4a:
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  if (0x82 < iVar7) goto switchD_00103a2a_caseD_4a;
  if (iVar7 < 0x49) {
    if (iVar7 == -0x83) {
      version_etc(stdout,"date","GNU coreutils",Version,"David MacKenzie",0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar7 == -0x82) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
    goto switchD_00103a2a_caseD_4a;
  }
  switch(iVar7) {
  case 0x49:
    uVar8 = 0;
    if (optarg != (char *)0x0) {
      pVar9 = __xargmatch_internal
                        ("--iso-8601",optarg,time_spec_string,time_spec,4,argmatch_die,true);
      uVar8 = (ulong)time_spec[pVar9];
    }
    pcVar15 = (char *)main::lexical_block_0::lexical_block_0_1::iso_8601_format[uVar8];
    break;
  default:
    goto switchD_00103a2a_caseD_4a;
  case 0x52:
    pcVar15 = "%a, %d %b %Y %H:%M:%S %z";
    break;
  case 100:
    local_118 = optarg;
    goto LAB_001039de;
  case 0x66:
    uVar20 = SUB81(optarg,0);
    uVar21 = (undefined7)((ulong)optarg >> 8);
    goto LAB_001039de;
  case 0x72:
    local_110 = optarg;
    goto LAB_001039de;
  case 0x73:
    local_108 = optarg;
    local_fd = 1;
    goto LAB_001039de;
  case 0x75:
    goto switchD_00103a2a_caseD_75;
  case 0x80:
    parse_datetime_flags = parse_datetime_flags | 1;
    goto LAB_001039de;
  case 0x81:
    cVar18 = '\x01';
    goto LAB_001039de;
  case 0x82:
    pVar9 = __xargmatch_internal
                      ("--rfc-3339",optarg,time_spec_string + 2,time_spec + 2,4,argmatch_die,true);
    pcVar15 = (char *)main::lexical_block_0::lexical_block_0_0::rfc_3339_format
                      [time_spec[pVar9 + 2]];
  }
  bVar19 = pcVar10 != (char *)0x0;
  pcVar10 = pcVar15;
  if (bVar19) {
    uVar12 = dcgettext(0,"multiple output formats specified",5);
    error(1,0,uVar12);
    goto LAB_00104122;
  }
  goto LAB_001039de;
switchD_00103a2a_caseD_75:
  iVar7 = putenv("TZ=UTC0");
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
  goto LAB_001039de;
}

