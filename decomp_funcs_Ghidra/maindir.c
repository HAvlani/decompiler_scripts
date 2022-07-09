
/* WARNING: Could not reconcile some variable overlaps */

int main(int argc,char **argv)

{
  char cVar1;
  long lVar2;
  FILE *pFVar3;
  Hash_table *table;
  _Bool _Var4;
  byte bVar5;
  int iVar6;
  quoting_style qVar7;
  strtol_error sVar8;
  int iVar9;
  void *p_00;
  size_t sVar10;
  undefined *puVar11;
  ignore_pattern *piVar12;
  ptrdiff_t pVar13;
  undefined8 uVar14;
  ulong uVar15;
  color_ext_type *pcVar16;
  char *pcVar17;
  long lVar18;
  char **ppcVar19;
  color_ext_type *pcVar20;
  code *inode;
  char *pcVar21;
  long lVar22;
  pending *p_01;
  format fVar23;
  char *pcVar24;
  long in_FS_OFFSET;
  bool bVar25;
  byte bVar26;
  undefined auVar27 [16];
  undefined8 local_98;
  sort_type local_90;
  int local_8c;
  ulong local_88;
  char *local_80;
  size_t local_78;
  char *local_70;
  char *p;
  dev_ino di;
  char label [3];
  
  bVar26 = 0;
  bVar25 = false;
  fVar23 = ~long_format;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  exit_failure = 2;
  atexit(close_stdout);
  print_dir_name = true;
  exit_status = 0;
  pending_dirs = (pending *)0x0;
  current_time.tv_sec = -0x8000000000000000;
  current_time.tv_nsec = -1;
  local_88 = 0xffffffffffffffff;
  local_78 = 0xffffffffffffffff;
  local_90 = ~sort_name;
  local_98 = (char **)CONCAT44(local_98._4_4_,0xffffffff);
  local_8c = -1;
  local_80 = (char *)0x0;
LAB_00104e45:
  di.st_ino = CONCAT44(di.st_ino._4_4_,0xffffffff);
  inode = (code *)&di;
  iVar6 = getopt_long(argc,argv,"abcdfghiklmnopqrstuvw:xABCDFGHI:LNQRST:UXZ1");
  if (iVar6 != -1) {
    switch(iVar6) {
    case 0x31:
      fVar23 = (format)(fVar23 != long_format);
      break;
    case 0x41:
      ignore_mode = DT_FIFO;
      break;
    case 0x42:
      piVar12 = (ignore_pattern *)xmalloc(0x10);
      piVar12->pattern = "*~";
      piVar12->next = ignore_patterns;
      ignore_patterns = piVar12;
      piVar12 = (ignore_pattern *)xmalloc(0x10);
      piVar12->pattern = ".*~";
      piVar12->next = ignore_patterns;
      ignore_patterns = piVar12;
      break;
    case 0x43:
      fVar23 = many_per_line;
      break;
    case 0x44:
      dired = true;
      break;
    case 0x46:
      if (optarg != (char *)0x0) {
        pVar13 = __xargmatch_internal("--classify",optarg,when_args,when_types,4,argmatch_die,true);
        if ((when_types[pVar13] != when_always) &&
           ((when_types[pVar13] != when_if_tty || (_Var4 = stdout_isatty(), _Var4 == false))))
        break;
      }
      indicator_style = classify;
      break;
    case 0x47:
      print_group = false;
      break;
    case 0x48:
      dereference = DEREF_COMMAND_LINE_ARGUMENTS;
      break;
    case 0x49:
      local_70 = optarg;
      piVar12 = (ignore_pattern *)xmalloc(0x10);
      piVar12->pattern = local_70;
      piVar12->next = ignore_patterns;
      ignore_patterns = piVar12;
      break;
    case 0x4c:
      dereference = DEREF_ALWAYS;
      break;
    case 0x4e:
      local_98 = (char **)((ulong)local_98._4_4_ << 0x20);
      break;
    case 0x51:
      local_98 = (char **)CONCAT44(local_98._4_4_,5);
      break;
    case 0x52:
      recursive = true;
      break;
    case 0x53:
      local_90 = sort_size;
      break;
    case 0x54:
      pcVar21 = (char *)dcgettext(0,"invalid tab size",5);
      local_78 = xnumtoumax(optarg,0,0,0x7fffffffffffffff,"",pcVar21,2);
      break;
    case 0x55:
      local_90 = sort_none;
      break;
    case 0x58:
      local_90 = sort_extension;
      break;
    case 0x5a:
      print_scontext = true;
      break;
    case 0x61:
      ignore_mode = DT_CHR;
      break;
    case 0x62:
      local_98 = (char **)CONCAT44(local_98._4_4_,7);
      break;
    case 99:
      time_type = time_ctime;
      break;
    case 100:
      immediate_dirs = true;
      break;
    case 0x66:
      ignore_mode = DT_CHR;
      if (fVar23 == long_format) {
        fVar23 = ~long_format;
      }
      print_with_color = false;
      print_hyperlink = false;
      print_block_size = false;
      local_90 = sort_none;
      break;
    case 0x67:
      print_owner = false;
      fVar23 = long_format;
      break;
    case 0x68:
      human_output_opts = 0xb0;
      file_human_output_opts = 0xb0;
      output_block_size = 1;
      file_output_block_size = 1;
      break;
    case 0x69:
      print_inode = true;
      break;
    case 0x6b:
      bVar25 = true;
      break;
    case 0x6c:
      fVar23 = long_format;
      break;
    case 0x6d:
      fVar23 = with_commas;
      break;
    case 0x6e:
      numeric_ids = true;
      fVar23 = long_format;
      break;
    case 0x6f:
      print_group = false;
      fVar23 = long_format;
      break;
    case 0x70:
      indicator_style = slash;
      break;
    case 0x71:
      local_8c = 1;
      break;
    case 0x72:
      sort_reverse = true;
      break;
    case 0x73:
      print_block_size = true;
      break;
    case 0x74:
      local_90 = sort_time;
      break;
    case 0x75:
      time_type = time_atime;
      break;
    case 0x76:
      local_90 = sort_version;
      break;
    case 0x77:
      local_88 = decode_line_length(optarg);
      if (-1 < (long)local_88) break;
      argv = (char **)quote(optarg);
      uVar14 = dcgettext(0,"invalid line width",5);
      error(2,0,"%s: %s",uVar14,argv);
    case 0x80:
      print_author = true;
      break;
    case 0x78:
      fVar23 = horizontal;
      break;
    case 0x81:
      sVar8 = human_options(optarg,&human_output_opts,&output_block_size);
      if (sVar8 != LONGINT_OK) {
        xstrtol_fatal(sVar8,di.st_ino & 0xffffffff,0,long_options,optarg);
        goto LAB_0010679f;
      }
      file_human_output_opts = human_output_opts;
      file_output_block_size = output_block_size;
      break;
    case 0x82:
      if (optarg == (char *)0x0) {
LAB_00105add:
        bVar5 = 1;
      }
      else {
        pVar13 = __xargmatch_internal("--color",optarg,when_args,when_types,4,argmatch_die,true);
        if (when_types[pVar13] == when_always) goto LAB_00105add;
        bVar5 = 0;
        if (when_types[pVar13] == when_if_tty) {
          bVar5 = stdout_isatty();
        }
      }
      print_with_color = (_Bool)(bVar5 & 1);
      break;
    case 0x83:
      dereference = DEREF_COMMAND_LINE_SYMLINK_TO_DIR;
      break;
    case 0x84:
      indicator_style = file_type;
      break;
    case 0x85:
      pVar13 = __xargmatch_internal("--format",optarg,format_args,format_types,4,argmatch_die,true);
      fVar23 = format_types[pVar13];
      break;
    case 0x86:
      fVar23 = long_format;
      local_80 = "full-iso";
      break;
    case 0x87:
      directories_first = true;
      break;
    case 0x88:
      piVar12 = (ignore_pattern *)xmalloc(0x10);
      piVar12->pattern = optarg;
      piVar12->next = hide_patterns;
      hide_patterns = piVar12;
      break;
    case 0x89:
      if (optarg == (char *)0x0) {
LAB_00105ac6:
        bVar5 = 1;
      }
      else {
        pVar13 = __xargmatch_internal("--hyperlink",optarg,when_args,when_types,4,argmatch_die,true)
        ;
        if (when_types[pVar13] == when_always) goto LAB_00105ac6;
        bVar5 = 0;
        if (when_types[pVar13] == when_if_tty) {
          bVar5 = stdout_isatty();
        }
      }
      print_hyperlink = (_Bool)(bVar5 & 1);
      break;
    case 0x8a:
      pVar13 = __xargmatch_internal
                         ("--indicator-style",optarg,indicator_style_args,indicator_style_types,4,
                          argmatch_die,true);
      indicator_style = indicator_style_types[pVar13];
      break;
    case 0x8b:
      pVar13 = __xargmatch_internal
                         ("--quoting-style",optarg,(char **)quoting_style_args,quoting_style_vals,4,
                          argmatch_die,true);
      local_98 = (char **)((ulong)local_98 & 0xffffffff00000000 |
                          (ulong)*(uint *)(quoting_style_vals + pVar13 * 4));
      break;
    case 0x8c:
      goto switchD_00104e85_caseD_8c;
    case 0x8d:
      human_output_opts = 0x90;
      file_human_output_opts = 0x90;
      output_block_size = 1;
      file_output_block_size = 1;
      break;
    case 0x8e:
      pVar13 = __xargmatch_internal("--sort",optarg,sort_args,sort_types,4,argmatch_die,true);
      local_90 = sort_types[pVar13];
      break;
    case 0x8f:
      pVar13 = __xargmatch_internal("--time",optarg,time_args,time_types,4,argmatch_die,true);
      time_type = time_types[pVar13];
      break;
    case 0x90:
      goto switchD_00104e85_caseD_90;
    case 0x91:
      eolbyte = '\0';
      print_with_color = false;
      local_98 = (char **)((ulong)local_98._4_4_ << 0x20);
      fVar23 = (format)(fVar23 != long_format);
switchD_00104e85_caseD_8c:
      local_8c = 0;
      break;
    case -0x83:
      puVar11 = (undefined *)(ulong)(uint)ls_mode;
      pcVar21 = "ls";
      if (ls_mode != 1) {
        pcVar21 = "dir";
        puVar11 = &DAT_00118b70;
        if (ls_mode != 2) {
          pcVar21 = "vdir";
        }
      }
      version_etc((FILE *)stdout,pcVar21,"GNU coreutils",Version,"Richard M. Stallman",
                  "David MacKenzie",0,puVar11);
                    /* WARNING: Subroutine does not return */
      exit(0);
    case -0x82:
                    /* WARNING: Subroutine does not return */
      usage(0);
    default:
      goto switchD_00104e85_caseD_ffffff7f;
    }
    goto LAB_00104e45;
  }
  if (output_block_size == 0) {
    pcVar21 = getenv("LS_BLOCK_SIZE");
    human_options(pcVar21,&human_output_opts,&output_block_size);
    if ((pcVar21 != (char *)0x0) || (pcVar21 = getenv("BLOCK_SIZE"), pcVar21 != (char *)0x0)) {
      file_human_output_opts = human_output_opts;
      file_output_block_size = output_block_size;
    }
    if (bVar25) {
      human_output_opts = 0;
      output_block_size = 0x400;
    }
  }
  if ((int)fVar23 < 0) {
    if (ls_mode == 1) {
      _Var4 = stdout_isatty();
      if (_Var4 != false) goto LAB_001063b1;
      format = one_per_line;
    }
    else {
      if (ls_mode == 2) {
LAB_001063b1:
        format = many_per_line;
        goto LAB_00104eeb;
      }
      format = long_format;
    }
LAB_00105a9f:
    if (print_with_color != false) goto LAB_00104eeb;
    uVar15 = local_88;
    if (local_88 != 0xffffffffffffffff) goto LAB_00104ef7;
  }
  else {
    format = fVar23;
    if (2 < fVar23 + ~one_per_line) goto LAB_00105a9f;
LAB_00104eeb:
    uVar15 = local_88;
    if (local_88 != 0xffffffffffffffff) goto LAB_00104ef7;
    _Var4 = stdout_isatty();
    if ((_Var4 != false) && (iVar6 = ioctl(1,0x5413,&di), -1 < iVar6)) {
      uVar15 = (ulong)di.st_ino._2_2_;
      if (di.st_ino._2_2_ != 0) goto LAB_00104ef7;
    }
    pcVar21 = getenv("COLUMNS");
    if ((pcVar21 != (char *)0x0) && (*pcVar21 != '\0')) {
      local_88 = decode_line_length(pcVar21);
      uVar15 = local_88;
      if (-1 < (long)local_88) goto LAB_00104ef7;
      pcVar21 = quote(pcVar21);
      uVar14 = dcgettext(0,"ignoring invalid width in environment variable COLUMNS: %s",5);
      error(0,0,uVar14,pcVar21);
    }
  }
  local_88 = 0x50;
  uVar15 = local_88;
LAB_00104ef7:
  local_88 = uVar15;
  line_length = local_88;
  max_idx = (ulong)(local_88 % 3 != 0) + local_88 / 3;
  sVar10 = tabsize;
  if ((format + ~one_per_line < 3) && (sVar10 = local_78, (long)local_78 < 0)) {
    tabsize = 8;
    pcVar21 = getenv("TABSIZE");
    sVar10 = tabsize;
    if (pcVar21 != (char *)0x0) {
      inode = (code *)&DAT_00118a9f;
      sVar8 = xstrtoumax(pcVar21,(char **)0x0,0,&di.st_ino,"");
      sVar10 = di.st_ino;
      if (sVar8 != LONGINT_OK) {
        quote(pcVar21);
        uVar14 = dcgettext(0,"ignoring invalid tab size in environment variable TABSIZE: %s",5);
        error(0,0,uVar14);
        sVar10 = tabsize;
      }
    }
  }
  tabsize = sVar10;
  bVar5 = (byte)local_8c;
  if ((local_8c == -1) && (bVar5 = 0, ls_mode == 1)) {
    bVar5 = stdout_isatty();
  }
  qmark_funny_chars = (_Bool)(bVar5 & 1);
  if ((int)(quoting_style)local_98 < 0) {
    pcVar21 = getenv("QUOTING_STYLE");
    if (pcVar21 == (char *)0x0) goto LAB_00106195;
    pVar13 = argmatch(pcVar21,(char **)quoting_style_args,quoting_style_vals,4);
    if ((int)pVar13 < 0) goto LAB_0010672c;
    local_98 = (char **)((ulong)local_98 & 0xffffffff00000000 |
                        (ulong)*(uint *)(quoting_style_vals + (long)(int)pVar13 * 4));
    if ((int)*(uint *)(quoting_style_vals + (long)(int)pVar13 * 4) < 0) goto LAB_00106195;
  }
LAB_00104f65:
  do {
    set_quoting_style((quoting_options *)0x0,(quoting_style)local_98);
    do {
      qVar7 = get_quoting_style((quoting_options *)0x0);
      if ((format == long_format) ||
         ((align_variable_outer_quotes = false, format + ~one_per_line < 2 && (line_length != 0))))
      {
        align_variable_outer_quotes = (qVar7 & 0xfffffffd) == 1 || qVar7 == c_maybe_quoting_style;
      }
      filename_quoting_options = clone_quoting_options((quoting_options *)0x0);
      if (qVar7 == escape_quoting_style) {
        set_char_quoting(filename_quoting_options,' ',1);
      }
      if (slash < indicator_style) {
        pcVar21 = &DAT_00118cfe + (indicator_style + ~slash);
        cVar1 = (&DAT_00118cfe)[indicator_style + ~slash];
        while (cVar1 != '\0') {
          pcVar21 = pcVar21 + 1;
          set_char_quoting(filename_quoting_options,cVar1,1);
          cVar1 = *pcVar21;
        }
      }
      dirname_quoting_options = clone_quoting_options((quoting_options *)0x0);
      set_char_quoting(dirname_quoting_options,':',1);
      dired = (_Bool)((print_hyperlink ^ 1U) & format == long_format & dired);
      if ((int)eolbyte < (int)(uint)dired) {
        uVar14 = dcgettext(0,"--dired and --zero are incompatible",5);
        auVar27 = error(2,0,uVar14);
        ppcVar19 = local_98;
        local_98 = SUB168(auVar27,0);
        (*(code *)PTR___libc_start_main_00122fd0)
                  (main,ppcVar19,&local_90,__libc_csu_init,__libc_csu_fini,SUB168(auVar27 >> 0x40,0)
                   ,&local_98);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      sort_type = local_90;
      if ((int)local_90 < 0) {
        if (format == long_format) {
          sort_type = sort_name;
          goto LAB_00105b31;
        }
        if (2 < time_type + ~time_mtime) {
          sort_type = sort_name;
          goto LAB_00105062;
        }
        sort_type = sort_time;
LAB_00105070:
        iVar6 = optind;
        lVar22 = (long)optind;
        if (print_with_color == false) goto LAB_00105084;
        p = getenv("LS_COLORS");
        if ((p != (char *)0x0) && (*p != '\0')) {
          label._0_2_ = 0x3f3f;
          label[2] = '\0';
          color_buf = xstrdup(p);
          local_98 = argv;
          di.st_ino = (ino_t)color_buf;
          goto LAB_00105eb6;
        }
        pcVar21 = getenv("COLORTERM");
        if ((pcVar21 != (char *)0x0) && (*pcVar21 != '\0')) goto LAB_00106267;
        pcVar21 = getenv("TERM");
        if ((pcVar21 == (char *)0x0) || (*pcVar21 == '\0')) goto LAB_00106578;
        pcVar24 = "# Configuration file for dircolors, a utility to help you set the";
        goto LAB_0010632d;
      }
LAB_00105062:
      if (format != long_format) goto LAB_00105070;
LAB_00105b31:
      pcVar21 = local_80;
      if ((local_80 == (char *)0x0) &&
         (pcVar21 = getenv("TIME_STYLE"), local_80 = pcVar21, pcVar21 == (char *)0x0)) {
        local_80 = "locale";
LAB_00105b8a:
        pVar13 = argmatch(local_80,time_style_args,time_style_types,4);
        if (pVar13 < 0) {
          ppcVar19 = time_style_args;
          argmatch_invalid("time style",local_80,pVar13);
          pFVar3 = stderr;
          pcVar21 = (char *)dcgettext(0,"Valid arguments are:\n",5);
          fputs_unlocked(pcVar21,pFVar3);
          pcVar21 = "full-iso";
          do {
            ppcVar19 = ppcVar19 + 1;
            __fprintf_chk(stderr,1,"  - [posix-]%s\n",pcVar21);
            pFVar3 = stderr;
            pcVar21 = *ppcVar19;
          } while (pcVar21 != (char *)0x0);
          pcVar21 = (char *)dcgettext(0,"  - +FORMAT (e.g., +%H:%M) for a \'date\'-style format\n",5
                                     );
          fputs_unlocked(pcVar21,pFVar3);
          goto switchD_00104e85_caseD_ffffff7f;
        }
        if (pVar13 == 2) {
          long_time_format[0] = "%Y-%m-%d ";
          long_time_format[1] = "%m-%d %H:%M";
          pcVar21 = long_time_format[0];
          pcVar24 = long_time_format[1];
        }
        else {
          pcVar21 = long_time_format[0];
          pcVar24 = long_time_format[1];
          if (pVar13 < 3) {
            if (pVar13 == 0) {
              long_time_format[1] = "%Y-%m-%d %H:%M:%S.%N %z";
              long_time_format[0] = "%Y-%m-%d %H:%M:%S.%N %z";
              pcVar21 = long_time_format[0];
              pcVar24 = long_time_format[1];
            }
            else if (pVar13 == 1) {
              long_time_format[1] = "%Y-%m-%d %H:%M";
              long_time_format[0] = "%Y-%m-%d %H:%M";
              pcVar21 = long_time_format[0];
              pcVar24 = long_time_format[1];
            }
          }
          else if ((pVar13 == 3) &&
                  (_Var4 = hard_locale(2), pcVar21 = long_time_format[0],
                  pcVar24 = long_time_format[1], _Var4 != false)) {
            long_time_format[0] = (char *)dcgettext(0,long_time_format[0],2);
            pcVar24 = (char *)dcgettext(0,long_time_format[1],2);
            pcVar21 = long_time_format[0];
          }
        }
LAB_00105be4:
        long_time_format[1] = pcVar24;
        long_time_format[0] = pcVar21;
        abformat_init();
        goto LAB_00105070;
      }
      while (iVar6 = strncmp(pcVar21,"posix-",6), iVar6 == 0) {
        _Var4 = hard_locale(2);
        if (_Var4 == false) goto LAB_00105070;
        pcVar21 = pcVar21 + 6;
      }
      local_80 = pcVar21;
      if (*pcVar21 != '+') goto LAB_00105b8a;
      pcVar21 = pcVar21 + 1;
      pcVar17 = strchr(pcVar21,10);
      pcVar24 = pcVar21;
      if (pcVar17 == (char *)0x0) goto LAB_00105be4;
      pcVar24 = strchr(pcVar17 + 1,10);
      if (pcVar24 == (char *)0x0) {
        *pcVar17 = '\0';
        pcVar24 = pcVar17 + 1;
        goto LAB_00105be4;
      }
      pcVar21 = quote(pcVar21);
      uVar14 = dcgettext(0,"invalid time style format %s",5);
      error(2,0,uVar14,pcVar21);
LAB_0010672c:
      quote(pcVar21);
      uVar14 = dcgettext(0,"ignoring invalid value of environment variable QUOTING_STYLE: %s",5);
      error(0,0,uVar14);
LAB_00106195:
      local_98 = (char **)CONCAT44(local_98._4_4_,7);
      if (ls_mode != 1) goto LAB_00104f65;
      _Var4 = stdout_isatty();
    } while (_Var4 == false);
    local_98 = (char **)CONCAT44(local_98._4_4_,3);
  } while( true );
switchD_00104e85_caseD_90:
  local_80 = optarg;
  goto LAB_00104e45;
LAB_00105eb6:
  cVar1 = *p;
  if (cVar1 == '*') {
    pcVar16 = (color_ext_type *)xmalloc(0x28);
    ppcVar19 = &p;
    p = p + 1;
    pcVar20 = pcVar16;
    pcVar16->next = color_ext_list;
    color_ext_list = pcVar20;
    (pcVar16->ext).string = (char *)di.st_ino;
    _Var4 = get_funky_string((char **)&di,ppcVar19,true,(size_t *)pcVar16);
    argv = local_98;
    pcVar21 = p;
    if ((_Var4 == false) || (pcVar21 = p + 1, *p != '=')) goto done;
    (pcVar16->seq).string = (char *)di.st_ino;
    p = p + 1;
    _Var4 = get_funky_string((char **)&di,ppcVar19,false,&(pcVar16->seq).len);
    argv = local_98;
    pcVar21 = p;
    if (_Var4 == false) goto done;
    goto LAB_00105eb6;
  }
  if (cVar1 == ':') {
    p = p + 1;
    goto LAB_00105eb6;
  }
  argv = local_98;
  if (cVar1 == '\0') goto LAB_001064e3;
  label._0_2_ = label._0_2_ & 0xff00 | (ushort)(byte)*p;
  pcVar21 = p + 1;
  if (p[1] == '\0') goto done;
  label._0_2_ = CONCAT11(p[1],*p);
  pcVar21 = p + 3;
  if (p[2] != '=') goto done;
  lVar18 = 0;
  pcVar21 = "lc";
  p = p + 3;
  while (iVar9 = strcmp(label,pcVar21), iVar9 != 0) {
    lVar18 = lVar18 + 1;
    pcVar21 = indicator_name[lVar18];
    if (pcVar21 == (char *)0x0) goto LAB_00105f81;
  }
  color_indicator[(int)lVar18].string = (char *)di.st_ino;
  _Var4 = get_funky_string((char **)&di,&p,false,&color_indicator[(int)lVar18].len);
  if (_Var4 != false) goto LAB_00105eb6;
LAB_00105f81:
  argv = local_98;
  quote(label);
  uVar14 = dcgettext(0,"unrecognized prefix: %s",5);
  error(0,0,uVar14);
  pcVar21 = p;
done:
  p = pcVar21;
  uVar14 = dcgettext(0,"unparsable value for LS_COLORS environment variable",5);
  error(0,0,uVar14);
  rpl_free(color_buf);
  pcVar20 = color_ext_list;
  while (pcVar20 != (color_ext_type *)0x0) {
    pcVar16 = pcVar20->next;
    rpl_free(pcVar20);
    pcVar20 = pcVar16;
  }
  print_with_color = false;
LAB_001064e3:
  if ((color_indicator[7].len == 6) &&
     (iVar9 = strncmp(color_indicator[7].string,"target",6), iVar9 == 0)) {
    color_symlink_as_referent = true;
  }
  goto LAB_00106267;
switchD_00104e85_caseD_ffffff7f:
                    /* WARNING: Subroutine does not return */
  usage(2);
LAB_0010632d:
  do {
    iVar9 = strncmp(pcVar24,"TERM ",5);
    if ((iVar9 == 0) && (iVar9 = fnmatch(pcVar24 + 5,pcVar21,0), iVar9 == 0)) goto LAB_00106267;
    uVar15 = 0xffffffffffffffff;
    pcVar17 = pcVar24;
    do {
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar17 + (ulong)bVar26 * -2 + 1;
    } while (cVar1 != '\0');
    pcVar24 = pcVar24 + ~uVar15;
  } while (pcVar24 + -0x1177a0 < (char *)0x12c8);
LAB_00106578:
  print_with_color = false;
LAB_00106267:
  if (print_with_color == false) {
LAB_00105084:
    if (directories_first != false) goto LAB_0010508d;
  }
  else {
    tabsize = 0;
    if ((((directories_first != false) || (_Var4 = is_colored(C_ORPHAN), _Var4 != false)) ||
        ((_Var4 = is_colored(C_EXEC), _Var4 != false && (color_symlink_as_referent != false)))) ||
       ((_Var4 = is_colored(C_MISSING), _Var4 != false && (format == long_format)))) {
LAB_0010508d:
      check_symlink_mode = true;
    }
  }
  if (((dereference == DEREF_UNDEFINED) && (dereference = DEREF_NEVER, immediate_dirs == false)) &&
     (indicator_style != classify)) {
    dereference = (-(uint)(format == long_format) & 0xfffffffe) + DEREF_COMMAND_LINE_SYMLINK_TO_DIR;
  }
  if (recursive != false) {
    active_dir_set =
         hash_initialize(0x1e,(Hash_tuning *)0x0,dev_ino_hash,dev_ino_compare,dev_ino_free);
    if (active_dir_set == (Hash_table *)0x0) {
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
    inode = rpl_free;
    _obstack_begin(&dev_ino_obstack,0,0,(anon_subr_void_ptr_size_t *)PTR_malloc_00122fe8,rpl_free);
  }
  pcVar21 = getenv("TZ");
  localtz = tzalloc(pcVar21);
  puVar11 = PTR_malloc_00122fe8;
  if ((((sort_type + ~sort_width & 0xfffffffd) == 0) || (format == long_format)) ||
     ((print_scontext != false || (print_block_size != false)))) {
    format_needs_stat = true;
    bVar26 = 0;
  }
  else {
    format_needs_stat = false;
    bVar26 = 1;
    if (((recursive == false) && (print_with_color == false)) && (indicator_style == none)) {
      bVar26 = directories_first;
    }
  }
  format_needs_type = (_Bool)(bVar26 & 1);
  if (dired != false) {
    _obstack_begin(&dired_obstack,0,0,(anon_subr_void_ptr_size_t *)PTR_malloc_00122fe8,rpl_free);
    inode = rpl_free;
    _obstack_begin(&subdired_obstack,0,0,(anon_subr_void_ptr_size_t *)puVar11,rpl_free);
  }
  if (print_hyperlink != false) {
    uVar15 = 0;
LAB_001060af:
    do {
      iVar9 = (int)uVar15;
      if (uVar15 < 0x5b) {
        bVar25 = true;
        if ((iVar9 < 0x41) && (9 < iVar9 - 0x30U)) goto joined_r0x00106088;
      }
      else {
        bVar25 = true;
        if (0x19 < iVar9 - 0x61U) {
joined_r0x00106088:
          if ((iVar9 - 0x2dU < 2) || (iVar9 == 0x7e)) {
            RFC3986[uVar15] = RFC3986[uVar15] | 1;
            uVar15 = uVar15 + 1;
            if (uVar15 == 0x100) break;
            goto LAB_001060af;
          }
          bVar25 = iVar9 == 0x5f;
        }
      }
      RFC3986[uVar15] = RFC3986[uVar15] | bVar25;
      uVar15 = uVar15 + 1;
    } while (uVar15 != 0x100);
    hostname = xgethostname();
    if (hostname == (char *)0x0) {
      hostname = "";
    }
  }
  cwd_n_alloc = 100;
  cwd_file = (fileinfo *)xnmalloc(100,0xd0);
  cwd_n_used = 0;
  clear_files();
  if (argc - iVar6 < 1) {
    if (immediate_dirs == false) {
      queue_directory(".",(char *)0x0,true);
    }
    else {
      gobble_file(".",directory,true,"",(ino_t)inode);
    }
    if (cwd_n_used != 0) goto LAB_00105e2d;
  }
  else {
    do {
      ppcVar19 = argv + lVar22;
      lVar22 = lVar22 + 1;
      gobble_file(*ppcVar19,unknown,true,"",(ino_t)inode);
    } while ((int)lVar22 < argc);
    if (cwd_n_used != 0) {
LAB_00105e2d:
      sort_files();
      if (immediate_dirs == false) {
        extract_dirs_from_files((char *)0x0,true);
      }
      if (cwd_n_used != 0) {
        print_current_files();
        if (pending_dirs != (pending *)0x0) {
          dired_outbyte('\n');
          goto LAB_0010522a;
        }
        goto LAB_001052da;
      }
    }
    if (1 < argc - iVar6) goto LAB_0010522a;
  }
  if (pending_dirs != (pending *)0x0) {
    p_01 = pending_dirs;
    if (pending_dirs->next == (pending *)0x0) {
      print_dir_name = false;
    }
    do {
      while( true ) {
        pending_dirs = p_01->next;
        if ((active_dir_set == (Hash_table *)0x0) || (p_01->name != (char *)0x0)) break;
        if ((ulong)((long)dev_ino_obstack.next_free - (long)dev_ino_obstack.object_base) < 0x10) {
LAB_0010679f:
                    /* WARNING: Subroutine does not return */
          __assert_fail("dev_ino_size <= obstack_object_size (&dev_ino_obstack)","src/ls.c",0x41d,
                        "dev_ino_pop");
        }
        di.st_ino = *(ino_t *)(dev_ino_obstack.next_free + -0x10);
        di.st_dev = *(dev_t *)(dev_ino_obstack.next_free + -8);
        dev_ino_obstack.next_free = dev_ino_obstack.next_free + -0x10;
        p_00 = hash_remove(active_dir_set,&di);
        if (p_00 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("found","src/ls.c",0x70d,"main");
        }
        rpl_free(p_00);
        rpl_free(p_01->name);
        rpl_free(p_01->realname);
        rpl_free(p_01);
        p_01 = pending_dirs;
        if (pending_dirs == (pending *)0x0) goto LAB_001052da;
      }
      print_dir(p_01->name,p_01->realname,p_01->command_line_arg);
      rpl_free(p_01->name);
      rpl_free(p_01->realname);
      rpl_free(p_01);
      print_dir_name = true;
LAB_0010522a:
      p_01 = pending_dirs;
    } while (pending_dirs != (pending *)0x0);
  }
LAB_001052da:
  if ((print_with_color != false) && (used_color != false)) {
    if ((color_indicator[0].len != 2) ||
       (((*(short *)color_indicator[0].string != 0x5b1b || (color_indicator[1].len != 1)) ||
        (*color_indicator[1].string != 'm')))) {
      restore_default_color();
    }
    fflush_unlocked(stdout);
    signal_setup(false);
    for (iVar6 = stop_signal_count; iVar6 != 0; iVar6 = iVar6 + -1) {
      raise(0x13);
    }
    if (interrupt_signal != 0) {
      raise(interrupt_signal);
    }
  }
  if (dired != false) {
    dired_dump_obstack("//DIRED//",&dired_obstack);
    dired_dump_obstack("//SUBDIRED//",&subdired_obstack);
    qVar7 = get_quoting_style(filename_quoting_options);
    __printf_chk(1,"//DIRED-OPTIONS// --quoting-style=%s\n",
                 *(undefined8 *)(quoting_style_args + (ulong)qVar7 * 8));
  }
  table = active_dir_set;
  if (active_dir_set != (Hash_table *)0x0) {
    sVar10 = hash_get_n_entries(active_dir_set);
    if (sVar10 != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("hash_get_n_entries (active_dir_set) == 0","src/ls.c",0x741,"main");
    }
    hash_free(table);
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return exit_status;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

