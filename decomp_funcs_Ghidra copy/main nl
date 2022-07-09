
int main(int argc,char **argv)

{
  size_t sVar1;
  char cVar2;
  _Bool _Var3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  intmax_t iVar7;
  char *pcVar8;
  void *pvVar9;
  int *piVar10;
  ulong uVar11;
  char *pcVar12;
  size_t sVar13;
  byte bVar14;
  undefined8 uVar15;
  
  bVar14 = 0;
  bVar4 = 1;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  have_read_stdin = false;
  pcVar6 = section_del;
  while( true ) {
    section_del = pcVar6;
    uVar15 = 0x102962;
    iVar5 = getopt_long(argc,argv,"h:b:f:v:i:pl:s:w:n:d:",longopts);
    pcVar8 = optarg;
    if (iVar5 == -1) break;
    pcVar6 = section_del;
    if (iVar5 < 0x78) {
      if (iVar5 < 0x62) {
        if (iVar5 == -0x83) {
          version_etc(stdout,"nl","GNU coreutils",Version,"Scott Bartram","David MacKenzie",0,uVar15
                     );
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar5 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
        goto switchD_00102989_caseD_63;
      }
      switch(iVar5) {
      case 0x62:
        _Var3 = build_type_arg(&body_type,&body_regex,body_fastmap);
        pcVar6 = section_del;
        if (_Var3 == false) {
          pcVar6 = quote(optarg);
          pcVar8 = "invalid body numbering style: %s";
          goto LAB_00102c17;
        }
        break;
      default:
        goto switchD_00102989_caseD_63;
      case 100:
        pcVar6 = optarg;
        sVar13 = strlen(optarg);
        if (sVar13 - 1 < 2) {
          cVar2 = *pcVar8;
          pcVar12 = section_del;
          while (pcVar6 = section_del, cVar2 != '\0') {
            optarg = pcVar8 + 1;
            *pcVar12 = *pcVar8;
            pcVar12 = pcVar12 + 1;
            pcVar8 = optarg;
            cVar2 = *optarg;
          }
        }
        break;
      case 0x66:
        _Var3 = build_type_arg(&footer_type,&footer_regex,footer_fastmap);
        pcVar6 = section_del;
        if (_Var3 == false) {
          pcVar6 = quote(optarg);
          pcVar8 = "invalid footer numbering style: %s";
          goto LAB_00102c17;
        }
        break;
      case 0x68:
        _Var3 = build_type_arg(&header_type,&header_regex,header_fastmap);
        pcVar6 = section_del;
        if (_Var3 == false) {
          pcVar6 = quote(optarg);
          pcVar8 = "invalid header numbering style: %s";
LAB_00102c17:
          uVar15 = dcgettext(0,pcVar8,5);
                    /* WARNING: Subroutine does not return */
          error(0,0,uVar15,pcVar6);
        }
        break;
      case 0x69:
        pcVar6 = (char *)dcgettext(0,"invalid line number increment",5);
        page_incr = xdectoimax(optarg,-0x8000000000000000,0x7fffffffffffffff,"",pcVar6,0);
        pcVar6 = section_del;
        break;
      case 0x6c:
        pcVar6 = (char *)dcgettext(0,"invalid line number of blank lines",5);
        blank_join = xdectoimax(optarg,1,0x7fffffffffffffff,"",pcVar6,0);
        pcVar6 = section_del;
        break;
      case 0x6e:
        if (((*optarg == 'l') && (optarg[1] == 'n')) && (optarg[2] == '\0')) {
          lineno_format = "%-*ld%s";
        }
        else {
          iVar5 = strcmp(optarg,"rn");
          if (iVar5 == 0) {
            lineno_format = "%*ld%s";
            pcVar6 = section_del;
          }
          else {
            iVar5 = strcmp(pcVar8,"rz");
            if (iVar5 != 0) {
              pcVar6 = quote(pcVar8);
              pcVar8 = "invalid line numbering format: %s";
              goto LAB_00102c17;
            }
            lineno_format = "%0*ld%s";
            pcVar6 = section_del;
          }
        }
        break;
      case 0x70:
        reset_numbers = false;
        break;
      case 0x73:
        separator_str = optarg;
        break;
      case 0x76:
        pcVar6 = (char *)dcgettext(0,"invalid starting line number",5);
        starting_line_number = xdectoimax(optarg,-0x8000000000000000,0x7fffffffffffffff,"",pcVar6,0)
        ;
        pcVar6 = section_del;
        break;
      case 0x77:
        pcVar6 = (char *)dcgettext(0,"invalid line number field width",5);
        iVar7 = xdectoimax(optarg,1,0x7fffffff,"",pcVar6,0);
        lineno_width = (int)iVar7;
        pcVar6 = section_del;
      }
    }
    else {
switchD_00102989_caseD_63:
      bVar4 = 0;
    }
  }
  if (bVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  uVar11 = 0xffffffffffffffff;
  pcVar6 = section_del;
  do {
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + (ulong)bVar14 * -2 + 1;
  } while (cVar2 != '\0');
  sVar1 = ~uVar11 - 1;
  header_del_len = sVar1 * 3;
  header_del = (char *)xmalloc(header_del_len + 1);
  pcVar6 = section_del;
  pcVar12 = header_del + sVar1;
  pcVar8 = stpcpy(header_del,section_del);
  pcVar8 = stpcpy(pcVar8,pcVar6);
  strcpy(pcVar8,pcVar6);
  body_del_len = sVar1 * 2;
  footer_del = pcVar12 + sVar1;
  footer_del_len = sVar1;
  body_del = pcVar12;
  initbuffer(&line_buf);
  uVar11 = 0xffffffffffffffff;
  pcVar6 = separator_str;
  do {
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + (ulong)bVar14 * -2 + 1;
  } while (cVar2 != '\0');
  print_no_line_fmt = (char *)xmalloc(~uVar11 + (long)lineno_width);
  sVar13 = (~uVar11 - 1) + (long)lineno_width;
  pvVar9 = memset(print_no_line_fmt,0x20,sVar13);
  *(undefined *)((long)pvVar9 + sVar13) = 0;
  line_no = starting_line_number;
  current_type = body_type;
  current_regex = &body_regex;
  if (optind == argc) {
    bVar4 = nl_file("-");
  }
  else {
    for (; optind < argc; optind = optind + 1) {
      _Var3 = nl_file(argv[optind]);
      bVar4 = bVar4 & _Var3;
    }
  }
  if ((have_read_stdin != false) && (iVar5 = rpl_fclose(stdin), iVar5 == -1)) {
    piVar10 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(1,*piVar10,&DAT_00116134);
  }
  return (int)(bVar4 ^ 1);
}

