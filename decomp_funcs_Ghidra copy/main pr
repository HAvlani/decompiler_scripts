
int main(int argc,char **argv)

{
  _Bool _Var1;
  int iVar2;
  char *pcVar3;
  intmax_t iVar4;
  char *pcVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  ulong uVar9;
  char **ppcVar10;
  char **av;
  char **ppcVar11;
  ulong uVar12;
  uint uVar13;
  long in_FS_OFFSET;
  undefined auVar14 [16];
  ulong local_78;
  undefined auStack112 [4];
  int local_6c;
  char **file_names;
  uint local_60;
  char local_5b;
  char local_5a;
  char local_59;
  int oi;
  size_t n_alloc;
  long local_40;
  
  uVar6 = (ulong)(uint)argc;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  n_alloc = 0;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  file_names = (char **)0x0;
  if (1 < argc) {
    file_names = (char **)xnmalloc((long)(argc + -1),8);
  }
  local_59 = '\0';
  local_5a = '\0';
  local_5b = '\0';
  local_60 = 0;
  uVar12 = 0;
  pcVar5 = (char *)0x0;
LAB_00102a38:
  oi = -1;
  iVar2 = getopt_long(uVar6,argv,"-0123456789D:FJN:S::TW:abcde::fh:i::l:mn::o:rs::tvw:",long_options
                      ,&oi);
  if (iVar2 != -1) {
    if (iVar2 - 0x30U < 10) {
      uVar9 = uVar12 + 1;
      if (n_alloc <= uVar9) {
        local_78 = uVar9;
        local_6c = iVar2;
        pcVar5 = (char *)x2realloc(pcVar5,&n_alloc);
        uVar9 = local_78;
        iVar2 = local_6c;
      }
      pcVar5[uVar12] = (char)iVar2;
      pcVar5[uVar9] = '\0';
      uVar12 = uVar9;
      goto LAB_00102a38;
    }
    if (0x81 < iVar2) goto switchD_00102a9a_caseD_2;
    switch(iVar2) {
    case 1:
      if (((first_page_number != 0) || (*optarg != '+')) ||
         (_Var1 = first_last_page(-2,'+',optarg + 1), _Var1 == false)) {
        uVar12 = 0;
        file_names[local_60] = optarg;
        local_60 = local_60 + 1;
        goto LAB_00102a38;
      }
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x45:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x55:
    case 0x56:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x60:
    case 0x67:
    case 0x6a:
    case 0x6b:
    case 0x70:
    case 0x71:
    case 0x75:
    case 0x78:
    case 0x79:
    case 0x7a:
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x7e:
    case 0x7f:
      goto switchD_00102a9a_caseD_2;
    case 0x44:
      date_format = optarg;
      uVar12 = 0;
      goto LAB_00102a38;
    case 0x46:
    case 0x66:
      use_form_feed = true;
      uVar12 = 0;
      goto LAB_00102a38;
    case 0x4a:
      join_lines = true;
      uVar12 = 0;
      goto LAB_00102a38;
    case 0x4e:
      uVar12 = 0;
      skip_count = false;
      pcVar3 = (char *)dcgettext(0,"\'-N NUMBER\' invalid starting line number",5);
      iVar4 = xdectoimax(optarg,-0x80000000,0x7fffffff,"",pcVar3,0);
      start_line_num = (int)iVar4;
      goto LAB_00102a38;
    case 0x53:
      col_sep_length = 0;
      col_sep_string = "";
      use_col_separator = true;
      local_59 = '\0';
      if (optarg != (char *)0x0) {
        separator_string(optarg);
        uVar12 = 0;
        goto LAB_00102a38;
      }
      break;
    case 0x54:
      extremities = false;
      uVar12 = 0;
      keep_FF = false;
      goto LAB_00102a38;
    case 0x57:
      uVar12 = 0;
      truncate_lines = true;
      pcVar3 = (char *)dcgettext(0,"\'-W PAGE_WIDTH\' invalid number of characters",5);
      iVar4 = xdectoimax(optarg,1,0x7fffffff,"",pcVar3,0);
      local_5a = '\0';
      chars_per_line = (int)iVar4;
      goto LAB_00102a38;
    case 0x61:
      print_across_flag = true;
      uVar12 = 0;
      storing_columns = false;
      goto LAB_00102a38;
    case 0x62:
      balance_columns = true;
      uVar12 = 0;
      goto LAB_00102a38;
    case 99:
      use_cntrl_prefix = true;
      uVar12 = 0;
      goto LAB_00102a38;
    case 100:
      double_space = true;
      uVar12 = 0;
      goto LAB_00102a38;
    case 0x65:
      if (optarg != (char *)0x0) {
        getoptarg(optarg,'e',&input_tab_char,&chars_per_input_tab);
      }
      untabify_input = true;
      uVar12 = 0;
      goto LAB_00102a38;
    case 0x68:
      custom_header = optarg;
      uVar12 = 0;
      goto LAB_00102a38;
    case 0x69:
      if (optarg != (char *)0x0) {
        getoptarg(optarg,'i',&output_tab_char,&chars_per_output_tab);
      }
      tabify_output = true;
      uVar12 = 0;
      goto LAB_00102a38;
    case 0x6c:
      uVar12 = 0;
      pcVar3 = (char *)dcgettext(0,"\'-l PAGE_LENGTH\' invalid number of lines",5);
      iVar4 = xdectoimax(optarg,1,0x7fffffff,"",pcVar3,0);
      lines_per_page = (int)iVar4;
      goto LAB_00102a38;
    case 0x6d:
      parallel_files = true;
      uVar12 = 0;
      storing_columns = false;
      goto LAB_00102a38;
    case 0x6e:
      numbered_lines = true;
      if (optarg != (char *)0x0) {
        uVar12 = 0;
        getoptarg(optarg,'n',&number_separator,&chars_per_number);
        goto LAB_00102a38;
      }
      break;
    case 0x6f:
      uVar12 = 0;
      pcVar3 = (char *)dcgettext(0,"\'-o MARGIN\' invalid line offset",5);
      iVar4 = xdectoimax(optarg,0,0x7fffffff,"",pcVar3,0);
      chars_per_margin = (int)iVar4;
      goto LAB_00102a38;
    case 0x72:
      ignore_failed_opens = true;
      uVar12 = 0;
      goto LAB_00102a38;
    case 0x73:
      local_5b = use_col_separator;
      local_59 = use_col_separator;
      if (use_col_separator == false) {
        if (optarg == (char *)0x0) {
          local_59 = '\x01';
          uVar12 = 0;
          local_5b = '\x01';
        }
        else {
          separator_string(optarg);
          uVar12 = 0;
          local_59 = '\x01';
          local_5b = '\x01';
        }
        goto LAB_00102a38;
      }
      break;
    case 0x74:
      extremities = false;
      uVar12 = 0;
      keep_FF = true;
      goto LAB_00102a38;
    case 0x76:
      use_esc_sequence = true;
      uVar12 = 0;
      goto LAB_00102a38;
    case 0x77:
      pcVar3 = (char *)dcgettext(0,"\'-w PAGE_WIDTH\' invalid number of characters",5);
      iVar4 = xdectoimax(optarg,1,0x7fffffff,"",pcVar3,0);
      local_5b = truncate_lines;
      local_5a = local_5b;
      if (truncate_lines == false) {
        chars_per_line = (int)iVar4;
        uVar12 = 0;
        local_5a = '\x01';
        local_5b = '\x01';
        goto LAB_00102a38;
      }
      break;
    case 0x80:
      goto switchD_00102a9a_caseD_80;
    case 0x81:
      if (optarg == (char *)0x0) goto LAB_001032bf;
      _Var1 = first_last_page(oi,'\0',optarg);
      if (_Var1 == false) goto LAB_00103289;
      break;
    default:
      if (iVar2 == -0x83) {
        version_etc(stdout,"pr","GNU coreutils",Version,"Pete TerMaat","Roland Huebner",0,
                    (ulong)(iVar2 - 0x30U));
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar2 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
switchD_00102a9a_caseD_2:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    uVar12 = 0;
    goto LAB_00102a38;
  }
  if (pcVar5 != (char *)0x0) {
    parse_column_count(pcVar5);
    rpl_free(pcVar5);
  }
  if (date_format == (char *)0x0) goto LAB_001031eb;
  do {
    pcVar5 = getenv("TZ");
    localtz = tzalloc(pcVar5);
    _Var1 = parallel_files;
    if (first_page_number == 0) {
      first_page_number = 1;
    }
    if (parallel_files != false) {
      if (explicit_columns != false) {
        uVar8 = dcgettext(0,"cannot specify number of columns when printing in parallel",5);
        error(1,0,uVar8);
LAB_00103265:
        uVar8 = dcgettext(0,"cannot specify both printing across and printing in parallel",5);
        error(1,0,uVar8);
LAB_00103289:
        pcVar5 = quote(optarg);
        uVar8 = dcgettext(0,"invalid page range %s",5);
        error(1,0,uVar8,pcVar5);
LAB_001032bf:
        uVar8 = dcgettext(0,"\'--pages=FIRST_PAGE[:LAST_PAGE]\' missing argument",5);
        auVar14 = error(1,0,uVar8);
        uVar6 = local_78;
        local_78 = SUB168(auVar14,0);
        (*(code *)PTR___libc_start_main_00113fc8)
                  (main,uVar6,auStack112,__libc_csu_init,__libc_csu_fini,SUB168(auVar14 >> 0x40,0),
                   &local_78);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      if (print_across_flag != false) goto LAB_00103265;
    }
    if (local_5b != '\0') {
      if (local_5a == '\0') {
        if ((((use_col_separator != true) && (local_59 != '\0')) &&
            ((parallel_files != false || (explicit_columns != false)))) &&
           ((truncate_lines != false || (join_lines = true, 0 < col_sep_length)))) {
LAB_0010317d:
          use_col_separator = true;
        }
      }
      else if ((parallel_files == false) && (explicit_columns == false)) {
        join_lines = true;
      }
      else {
        truncate_lines = true;
        if (local_59 != '\0') goto LAB_0010317d;
      }
    }
    iVar2 = (int)uVar6;
    if (optind < iVar2) {
      ppcVar10 = argv + optind;
      uVar13 = (iVar2 - optind) + local_60;
      do {
        pcVar5 = *ppcVar10;
        uVar6 = (ulong)local_60;
        local_60 = local_60 + 1;
        ppcVar10 = ppcVar10 + 1;
        file_names[uVar6] = pcVar5;
        optind = iVar2;
      } while (local_60 != uVar13);
    }
    if (local_60 == 0) {
      print_files(0,(char **)0x0);
    }
    else if (_Var1 == false) {
      ppcVar10 = file_names + (ulong)(local_60 - 1) + 1;
      av = file_names;
      do {
        ppcVar11 = av + 1;
        print_files(1,av);
        av = ppcVar11;
      } while (ppcVar10 != ppcVar11);
    }
    else {
      print_files(local_60,file_names);
    }
    rpl_free(number_buff);
    rpl_free(clump_buff);
    rpl_free(column_vector);
    rpl_free(line_vector);
    rpl_free(end_vector);
    rpl_free(buff);
    if ((have_read_stdin == false) || (iVar2 = rpl_fclose(stdin), iVar2 != -1)) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return (uint)failed_opens;
    }
    uVar6 = dcgettext(0,"standard input",5);
    piVar7 = __errno_location();
    error(1,*piVar7,uVar6);
LAB_001031eb:
    pcVar5 = getenv("POSIXLY_CORRECT");
    if ((pcVar5 == (char *)0x0) || (_Var1 = hard_locale(2), _Var1 != false)) {
      date_format = "%Y-%m-%d %H:%M";
    }
    else {
      date_format = "%b %e %H:%M %Y";
    }
  } while( true );
switchD_00102a9a_caseD_80:
  uVar12 = 0;
  parse_column_count(optarg);
  rpl_free(pcVar5);
  n_alloc = 0;
  pcVar5 = (char *)0x0;
  goto LAB_00102a38;
}

