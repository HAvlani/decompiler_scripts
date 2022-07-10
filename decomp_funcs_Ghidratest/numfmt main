
/* WARNING: Could not reconcile some variable overlaps */

int main(int argc,char **argv)

{
  int iVar1;
  strtol_error sVar2;
  uint uVar3;
  char *pcVar4;
  size_t sVar5;
  ptrdiff_t pVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  __ssize_t _Var10;
  int *piVar11;
  ushort **ppuVar12;
  char cVar13;
  long lVar14;
  uint uVar15;
  undefined *puVar16;
  char *pcVar17;
  int iVar18;
  char *pcVar19;
  long s;
  long in_FS_OFFSET;
  bool bVar20;
  undefined auVar21 [16];
  undefined8 uStack120;
  undefined8 local_70;
  int *local_68;
  int *local_60;
  char *line;
  size_t line_allocated;
  long local_40;
  
  pcVar17 = (char *)(ulong)(uint)argc;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  pcVar4 = setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  decimal_point = nl_langinfo(0x10000);
  if ((decimal_point == (char *)0x0) || (*decimal_point == '\0')) {
    decimal_point = ".";
  }
  sVar5 = strlen(decimal_point);
  decimal_point_length = (int)sVar5;
  atexit(close_stdout);
  iVar18 = delimiter;
LAB_001028c8:
  while( true ) {
    delimiter = iVar18;
    iVar18 = (int)pcVar17;
    iVar1 = getopt_long((ulong)pcVar17 & 0xffffffff,argv,&DAT_0010b1e8,longopts,0);
    if (iVar1 == -1) break;
    if (0x8d < iVar1) {
switchD_00102914_caseD_65:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    if (iVar1 < 100) {
      if (iVar1 == -0x83) {
        version_etc((FILE *)stdout,"numfmt","GNU coreutils",Version,"Assaf Gordon",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar1 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00102914_caseD_65;
    }
    iVar18 = delimiter;
    switch(iVar1) {
    case 100:
      goto switchD_00102914_caseD_64;
    default:
      goto switchD_00102914_caseD_65;
    case 0x7a:
      line_delim = '\0';
      break;
    case 0x80:
      pVar6 = __xargmatch_internal
                        ("--from",optarg,scale_from_args,scale_from_types,4,argmatch_die,true);
      scale_from = scale_from_types[pVar6];
      iVar18 = delimiter;
      break;
    case 0x81:
      from_unit_size = unit_to_umax(optarg);
      iVar18 = delimiter;
      break;
    case 0x82:
      pVar6 = __xargmatch_internal("--to",optarg,scale_to_args,scale_to_types,4,argmatch_die,true);
      scale_to = scale_to_types[pVar6];
      iVar18 = delimiter;
      break;
    case 0x83:
      to_unit_size = unit_to_umax(optarg);
      iVar18 = delimiter;
      break;
    case 0x84:
      pVar6 = __xargmatch_internal("--round",optarg,round_args,round_types,4,argmatch_die,true);
      round_style = round_types[pVar6];
      iVar18 = delimiter;
      break;
    case 0x85:
      suffix = optarg;
      break;
    case 0x86:
      grouping = 1;
      break;
    case 0x87:
      sVar2 = xstrtol(optarg,(char **)0x0,10,&padding_width,"");
      if ((sVar2 != LONGINT_OK) || ((padding_width & 0x7fffffffffffffffU) == 0)) goto LAB_0010341a;
      iVar18 = delimiter;
      if (padding_width < 0) {
        padding_alignment = MBS_ALIGN_LEFT;
        padding_width = -padding_width;
      }
      break;
    case 0x88:
      if (n_frp != 0) goto LAB_001034a6;
      set_fields(optarg,1);
      iVar18 = delimiter;
      break;
    case 0x8a:
      dev_debug = true;
    case 0x89:
      debug = true;
      break;
    case 0x8b:
      if (optarg == (char *)0x0) {
        header = 1;
      }
      else {
        sVar2 = xstrtoumax(optarg,(char **)0x0,10,&header,"");
        if ((sVar2 != LONGINT_OK) || (iVar18 = delimiter, header == 0)) {
          pcVar17 = quote(optarg);
          uVar7 = dcgettext(0,"invalid header value %s",5);
          error(1,0,uVar7,pcVar17);
        }
      }
      break;
    case 0x8c:
      format_str = optarg;
      iVar18 = delimiter;
      break;
    case 0x8d:
      pVar6 = __xargmatch_internal("--invalid",optarg,inval_args,inval_types,4,argmatch_die,true);
      inval_style = inval_types[pVar6];
      iVar18 = delimiter;
    }
  }
  if ((format_str != (char *)0x0) && (grouping != 0)) goto LAB_00103565;
  if ((debug != false) && (pcVar4 == (char *)0x0)) {
    uVar7 = dcgettext(0,"failed to set locale",5);
    error(0,0,uVar7);
  }
  if ((debug == false) || ((scale_from | scale_to) != scale_none)) {
LAB_00102cea:
    pcVar4 = format_str;
    if (format_str == (char *)0x0) goto LAB_00102e36;
  }
  else if (grouping == 0) {
    if (padding_width == 0) {
      if (format_str == (char *)0x0) {
        uVar7 = dcgettext(0,"no conversion option specified",5);
        error(0,0,uVar7);
        goto LAB_00102cea;
      }
    }
    else if (format_str == (char *)0x0) goto LAB_00102e43;
  }
  else if (format_str == (char *)0x0) goto LAB_0010301b;
  pcVar4 = format_str;
  line_allocated = 0;
  s = 0;
  lVar8 = 0;
LAB_00102d24:
  if (format_str[lVar8] != '%') {
    if (format_str[lVar8] != '\0') {
      lVar14 = 1;
      goto LAB_00102d1d;
    }
    pcVar17 = quote(format_str);
    uVar7 = dcgettext(0,"format %s has no %% directive",5);
    error(1,0,uVar7,pcVar17);
LAB_0010341a:
    pcVar17 = quote(optarg);
    uVar7 = dcgettext(0,"invalid padding value %s",5);
    error(1,0,uVar7,pcVar17);
    goto LAB_00103450;
  }
  lVar14 = lVar8 + 1;
  if (format_str[lVar8 + 1] != '%') goto LAB_00103061;
  lVar14 = 2;
LAB_00102d1d:
  lVar8 = lVar8 + lVar14;
  s = s + 1;
  goto LAB_00102d24;
switchD_00102914_caseD_64:
  cVar13 = *optarg;
  iVar18 = (int)cVar13;
  if ((cVar13 == '\0') || (optarg[1] == '\0')) goto LAB_001028c8;
  goto LAB_00103482;
LAB_00103061:
  local_70 = (int *)((ulong)local_70 & 0xffffffffffffff00);
  local_68 = (int *)(format_str + lVar14);
  do {
    while( true ) {
      while( true ) {
        sVar5 = strspn((char *)local_68," ");
        lVar14 = lVar14 + sVar5;
        local_68 = (int *)(pcVar4 + lVar14);
        if (*(char *)local_68 != '\'') break;
        grouping = 1;
        lVar14 = lVar14 + 1;
        local_68 = (int *)(pcVar4 + lVar14);
      }
      if (*(char *)local_68 != '0') break;
      lVar14 = lVar14 + 1;
      local_70 = (int *)CONCAT71(local_70._1_7_,1);
      local_68 = (int *)(pcVar4 + lVar14);
    }
  } while (sVar5 != 0);
  local_60 = __errno_location();
  *local_60 = 0;
  lVar8 = strtol((char *)local_68,(char **)&line_allocated,10);
  if ((*local_60 == 0x22) || (lVar8 == -0x8000000000000000)) {
LAB_001034ca:
    pcVar4 = quote(pcVar4);
    uVar7 = dcgettext(0,"invalid format %s (width overflow)",5);
    error(1,0,uVar7,pcVar4);
    goto LAB_001034fc;
  }
  piVar11 = local_60;
  lVar14 = padding_width;
  if (((int *)line_allocated != local_68) && (lVar8 != 0)) {
    if ((debug == false) || (padding_width == 0)) {
LAB_0010331a:
      if (lVar8 < 0) {
        padding_alignment = MBS_ALIGN_LEFT;
        lVar14 = -lVar8;
      }
      else {
        lVar14 = lVar8;
        if ((char)local_70 != '\0') goto LAB_00103131;
      }
    }
    else {
      if (((char)local_70 == '\0') || (lVar8 < 1)) {
        local_68 = local_60;
        uVar7 = dcgettext(0,"--format padding overriding --padding",5);
        error(0,0,uVar7);
        piVar11 = local_68;
        goto LAB_0010331a;
      }
LAB_00103131:
      zero_padding_width = lVar8;
      lVar14 = padding_width;
    }
  }
  padding_width = lVar14;
  lVar8 = line_allocated - (long)pcVar4;
  if (*(char *)line_allocated == '\0') {
    pcVar17 = quote(pcVar4);
    uVar7 = dcgettext(0,"format %s ends in %%",5);
    error(1,0,uVar7,pcVar17);
LAB_00103533:
    pcVar17 = quote(pcVar4);
    uVar7 = dcgettext(0,"invalid format %s, directive must be %%[0][\'][-][N][.][N]f",5);
    error(1,0,uVar7,pcVar17);
LAB_00103565:
    uVar7 = dcgettext(0,"--grouping cannot be combined with --format",5);
    error(1,0,uVar7);
LAB_00103589:
    uVar7 = dcgettext(0,"grouping cannot be combined with --to",5);
    error(1,0,uVar7);
LAB_001035ad:
    pcVar4 = quote(pcVar4);
    uVar7 = dcgettext(0,"format %s has too many %% directives",5);
    auVar21 = error(1,0,uVar7,pcVar4);
    uVar7 = uStack120;
    uStack120 = SUB168(auVar21,0);
    (*(code *)PTR___libc_start_main_00110fe0)
              (main,uVar7,&local_70,__libc_csu_init,__libc_csu_fini,SUB168(auVar21 >> 0x40,0),
               &uStack120);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (*(char *)line_allocated == '.') {
    *piVar11 = 0;
    local_70 = piVar11;
    user_precision = strtol(pcVar4 + lVar8 + 1,(char **)&line_allocated,10);
    if ((*local_70 != 0x22) && (-1 < user_precision)) {
      ppuVar12 = __ctype_b_loc();
      cVar13 = pcVar4[lVar8 + 1];
      if (((*(byte *)(*ppuVar12 + cVar13) & 1) == 0) && (cVar13 != '+')) {
        lVar8 = line_allocated - (long)pcVar4;
        goto LAB_00103157;
      }
    }
LAB_00103450:
    pcVar17 = quote(pcVar4);
    uVar7 = dcgettext(0,"invalid precision in format %s",5);
    error(1,0,uVar7,pcVar17);
LAB_00103482:
    uVar7 = dcgettext(0,"the delimiter must be a single character",5);
    error(1,0,uVar7);
LAB_001034a6:
    uVar7 = dcgettext(0,"multiple field specifications",5);
    error(1,0,uVar7);
    goto LAB_001034ca;
  }
LAB_00103157:
  if (pcVar4[lVar8] != 'f') goto LAB_00103533;
  pcVar17 = pcVar4 + lVar8 + 1;
  cVar13 = *pcVar17;
  lVar8 = lVar8 + 1;
  if (cVar13 == '\0') {
    if (s != 0) {
LAB_00102d4f:
      format_str_prefix = ximemdup0(pcVar4,s);
      if (*pcVar17 != '\0') goto LAB_0010329d;
    }
    if (dev_debug != false) {
      pcVar17 = format_str_suffix;
      if (format_str_suffix == (char *)0x0) {
        pcVar17 = "";
      }
LAB_00102d8b:
      local_68 = (int *)quote_n(2,pcVar17);
      pcVar17 = format_str_prefix;
      if (format_str_prefix == (char *)0x0) {
        pcVar17 = "";
      }
      pcVar19 = "Left";
      puVar16 = &DAT_0010b1df;
      pcVar17 = quote_n(1,pcVar17);
      if (padding_alignment != MBS_ALIGN_LEFT) {
        pcVar19 = "Right";
      }
      local_70 = (int *)padding_width;
      if (grouping == 0) {
        puVar16 = &DAT_0010b1e3;
      }
      pcVar9 = quote_n(0,pcVar4);
      __fprintf_chk(stderr,1,
                    "format String:\n  input: %s\n  grouping: %s\n  padding width: %ld\n  alignment: %s\n  prefix: %s\n  suffix: %s\n"
                    ,pcVar9,puVar16,local_70,pcVar19,pcVar17,local_68,pcVar9);
    }
  }
  else {
    do {
      lVar14 = lVar8 + 1;
      bVar20 = cVar13 == '%';
      cVar13 = pcVar4[lVar8 + 1];
      if (bVar20) {
        if (pcVar4[lVar8 + 1] != '%') goto LAB_001035ad;
        lVar14 = lVar8 + 2;
        cVar13 = pcVar4[lVar14];
      }
      lVar8 = lVar14;
    } while (cVar13 != '\0');
    if (s != 0) goto LAB_00102d4f;
LAB_0010329d:
    pcVar17 = xstrdup(pcVar17);
    format_str_suffix = pcVar17;
    if (dev_debug != false) goto LAB_00102d8b;
  }
LAB_00102e36:
  if (grouping != 0) {
    if (scale_to != scale_none) goto LAB_00103589;
LAB_0010301b:
    if ((debug != false) && (pcVar4 = nl_langinfo(0x10001), *pcVar4 == '\0')) {
      uVar7 = dcgettext(0,"grouping has no effect in this locale",5);
      error(0,0,uVar7);
    }
  }
LAB_00102e43:
  if (padding_buffer_size <= (ulong)padding_width) {
    setup_padding_buffer(padding_width);
  }
  auto_padding = 0;
  if (padding_width == 0) {
    auto_padding = (int)(delimiter == 0x80);
  }
  if (inval_style != inval_abort) {
    conv_exit_code = 0;
  }
  if (optind < iVar18) {
    if ((debug == false) || (header == 0)) {
LAB_00102fce:
      uVar15 = 1;
      do {
        uVar3 = process_line(argv[optind],true);
        uVar15 = uVar15 & uVar3;
        optind = optind + 1;
      } while (optind < iVar18);
      goto LAB_00102f7d;
    }
    uVar7 = dcgettext(0,"--header ignored with command-line input",5);
    error(0,0,uVar7);
    if (optind < iVar18) goto LAB_00102fce;
LAB_00102f92:
    iVar18 = 0;
  }
  else {
    line = (char *)0x0;
    line_allocated = 0;
    while ((bVar20 = header != 0, header = header - 1, bVar20 &&
           (_Var10 = getdelim(&line,&line_allocated,(uint)line_delim,stdin), 0 < _Var10))) {
      fputs_unlocked(line,stdout);
    }
    uVar15 = 1;
    while (_Var10 = getdelim(&line,&line_allocated,(uint)line_delim,stdin), 0 < _Var10) {
      bVar20 = (int)line[_Var10 + -1] == (uint)line_delim;
      if (bVar20) {
        line[_Var10 + -1] = '\0';
      }
      uVar3 = process_line(line,bVar20);
      uVar15 = uVar15 & uVar3;
    }
    if ((*(byte *)&stdin->_flags & 0x20) != 0) {
      uVar7 = dcgettext(0,"error reading input",5);
      piVar11 = __errno_location();
      error(0,*piVar11,uVar7);
    }
LAB_00102f7d:
    if (debug == false) {
      if (uVar15 == 0) goto LAB_001031eb;
      goto LAB_00102f92;
    }
    if (uVar15 != 0) goto LAB_00102f92;
    uVar7 = dcgettext(0,"failed to convert some of the input numbers",5);
    error(0,0,uVar7);
LAB_001031eb:
    if (inval_style + ~inval_fail < 2) goto LAB_00102f92;
    iVar18 = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar18;
  }
LAB_001034fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

