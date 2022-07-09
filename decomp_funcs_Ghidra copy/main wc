
int main(int argc,char **argv)

{
  long lVar1;
  _Bool _Var2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  FILE *__stream;
  char *pcVar7;
  size_t sVar8;
  undefined8 uVar9;
  int *piVar10;
  ulong uVar11;
  fstatus *pfVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  stat *__stat_buf;
  long in_FS_OFFSET;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  fstatus *local_230;
  char **local_228;
  char local_211;
  argv_iter_err ai_err;
  Tokens tok;
  stat st;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils");
  textdomain("coreutils");
  atexit(close_stdout);
  iVar4 = getpagesize();
  page_size = (size_t)iVar4;
  setvbuf(stdout,(char *)0x0,1,0);
  pcVar6 = getenv("POSIXLY_CORRECT");
  print_bytes = false;
  print_chars = false;
  posixly_correct = pcVar6 != (char *)0x0;
  print_words = false;
  print_lines = false;
  print_linelength = false;
  max_line_length = 0;
  total_bytes = 0;
  total_chars = 0;
  total_words = 0;
  total_lines = 0;
  pcVar6 = (char *)0x0;
  while( true ) {
    uVar18 = 0x1029eb;
    iVar4 = getopt_long((ulong)(uint)argc,argv,"clLmw",longopts,0);
    if (iVar4 == -1) break;
    if (0x81 < iVar4) goto switchD_00102a18_caseD_4d;
    if (iVar4 < 0x4c) {
      if (iVar4 == -0x83) {
        version_etc((FILE *)stdout,"wc","GNU coreutils",Version,"Paul Rubin","David MacKenzie",0,
                    uVar18);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00102a18_caseD_4d;
    }
    switch(iVar4) {
    case 0x4c:
      print_linelength = true;
      break;
    default:
      goto switchD_00102a18_caseD_4d;
    case 99:
      print_bytes = true;
      break;
    case 0x6c:
      print_lines = true;
      break;
    case 0x6d:
      print_chars = true;
      break;
    case 0x77:
      print_words = true;
      break;
    case 0x80:
      debug = true;
      break;
    case 0x81:
      pcVar6 = optarg;
    }
  }
  if ((((print_lines == false) && (print_words == false)) && (print_chars == false)) &&
     ((print_bytes == false && (print_linelength == false)))) {
    print_bytes = true;
    print_words = true;
    print_lines = true;
  }
  iVar4 = optind;
  if (pcVar6 == (char *)0x0) goto LAB_00102f84;
  if (optind < argc) {
    pcVar6 = quotearg_style(shell_escape_always_quoting_style,argv[optind]);
    uVar18 = dcgettext(0,"extra operand %s",5);
    error(0,0,uVar18,pcVar6);
    uVar18 = dcgettext(0,"file operands cannot be combined with --files0-from",5);
    __fprintf_chk(stderr,1,"%s\n",uVar18);
switchD_00102a18_caseD_4d:
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  iVar4 = strcmp(pcVar6,"-");
  __stream = stdin;
  if ((iVar4 != 0) && (__stream = fopen(pcVar6,"r"), __stream == (FILE *)0x0)) {
    pcVar7 = quotearg_style(shell_escape_always_quoting_style,pcVar6);
    pcVar6 = (char *)dcgettext(0,"cannot open %s for reading",5);
    piVar10 = __errno_location();
    iVar4 = 1;
    uVar14 = error(1,*piVar10,pcVar6,pcVar7);
    tok.n_tok = (ulong)(uint)argc;
    goto LAB_001031ad;
  }
  iVar4 = fileno(__stream);
  iVar4 = __fxstat(1,iVar4,(stat *)&st);
  if ((iVar4 == 0) && ((st.st_mode & 0xf000) == 0x8000)) {
    dVar16 = (double)physmem_available();
    dVar17 = DAT_001099c8;
    if (DAT_001099d0 * dVar16 <= DAT_001099c8) {
      dVar17 = (double)physmem_available();
      dVar17 = dVar17 * DAT_001099d0;
    }
    if (dVar17 < (double)st.st_size) goto LAB_00102b3a;
    readtokens0_init(&tok);
    local_211 = readtokens0((FILE *)__stream,&tok);
    if (((_Bool)local_211 == false) || (iVar4 = rpl_fclose((FILE *)__stream), iVar4 != 0)) {
      pcVar6 = quotearg_style(shell_escape_always_quoting_style,pcVar6);
      uVar18 = dcgettext(0,"cannot read file names from %s",5);
      error(1,0,uVar18,pcVar6);
LAB_00103315:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_228 = tok.tok;
    __stream = (FILE *)argv_iter_init_argv(tok.tok);
    if (__stream == (FILE *)0x0) goto LAB_0010331a;
    sVar8 = 1;
    if (tok.n_tok != 0) {
      sVar8 = tok.n_tok;
    }
    local_230 = (fstatus *)xnmalloc(sVar8,0x98);
    if (tok.n_tok != 0) goto LAB_00102fca;
  }
  else {
LAB_00102b3a:
    __stream = (FILE *)argv_iter_init_stream((FILE *)__stream);
    if (__stream == (FILE *)0x0) goto LAB_0010331a;
    local_230 = (fstatus *)xnmalloc(1,0x98);
    local_211 = '\0';
  }
  tok.n_tok = 0;
  local_230->failed = 1;
  number_width = 1;
LAB_00102b79:
  argv = (char **)0x0;
  uVar15 = 1;
  while (pcVar7 = argv_iter((argv_iterator *)__stream,&ai_err), pcVar7 != (char *)0x0) {
    if (pcVar6 == (char *)0x0) {
      if (*pcVar7 == '\0') {
        dcgettext(0,"invalid zero-length file name",5);
        error(0,0,"%s");
LAB_00102da5:
        uVar15 = 0;
      }
      else {
LAB_00102c80:
        lVar13 = 0;
        if (tok.n_tok != 0) {
LAB_00102c87:
          lVar13 = (long)argv * 0x98;
        }
        pfVar12 = (fstatus *)((long)(local_230->st).__glibc_reserved + lVar13 + -0x80);
        iVar4 = strcmp(pcVar7,"-");
        if (iVar4 == 0) {
          have_read_stdin = true;
          _Var2 = wc(0,pcVar7,pfVar12,-1);
          uVar5 = (uint)_Var2;
        }
        else {
LAB_00102bd7:
          iVar4 = open(pcVar7,0);
          if (iVar4 != -1) {
            _Var2 = wc(iVar4,pcVar7,pfVar12,0);
            iVar4 = close(iVar4);
            uVar5 = (uint)_Var2;
            if (iVar4 == 0) goto LAB_00102c34;
          }
          quotearg_n_style_colon(0,3,pcVar7);
          piVar10 = __errno_location();
          error(0,*piVar10,"%s");
          uVar5 = 0;
        }
LAB_00102c34:
        uVar15 = uVar15 & uVar5;
      }
    }
    else {
      if ((*pcVar6 == '-') && (pcVar6[1] == '\0')) {
        iVar4 = strcmp(pcVar7,"-");
        if (iVar4 == 0) {
          quotearg_style(shell_escape_always_quoting_style,pcVar7);
          uVar18 = dcgettext(0,"when reading file names from stdin, no file name of %s allowed",5);
          error(0,0,uVar18);
          if (*pcVar7 != '\0') goto LAB_00102da5;
        }
        else if (*pcVar7 != '\0') {
          pfVar12 = local_230;
          if (tok.n_tok != 0) goto LAB_00102c87;
          goto LAB_00102bd7;
        }
      }
      else if (*pcVar7 != '\0') goto LAB_00102c80;
      sVar8 = argv_iter_n_args((argv_iterator *)__stream);
      uVar18 = dcgettext(0,"invalid zero-length file name",5);
      uVar9 = quotearg_n_style_colon(0,3,pcVar6);
      error(0,0,"%s:%lu: %s",uVar9,sVar8,uVar18);
      uVar15 = 0;
    }
    if (tok.n_tok == 0) {
      local_230->failed = 1;
    }
    argv = (char **)((long)argv + 1);
  }
  if (ai_err != AI_ERR_MEM) {
    if (ai_err == AI_ERR_READ) {
      argv = (char **)quotearg_n_style_colon(0,3,pcVar6);
      pcVar6 = (char *)dcgettext(0,"%s: read error",5);
      piVar10 = __errno_location();
      error(0,*piVar10,pcVar6);
      uVar15 = 0;
    }
    else {
      if (ai_err != AI_ERR_EOF) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("!\"unexpected error code from argv_iter\"","src/wc.c",0x3aa,"main");
      }
      bVar3 = pcVar6 == (char *)0x0 & (byte)uVar15;
      tok.n_tok = (size_t)(uint)bVar3;
      if ((bVar3 != 0) &&
         (sVar8 = argv_iter_n_args((argv_iterator *)__stream), uVar15 = (uint)bVar3, sVar8 == 0)) {
        have_read_stdin = true;
        _Var2 = wc(0,(char *)0x0,local_230,-1);
        uVar15 = (uint)_Var2;
      }
    }
    argc = (int)tok.n_tok;
    if (local_211 != '\0') {
      readtokens0_free(&tok);
    }
    sVar8 = argv_iter_n_args((argv_iterator *)__stream);
    if (1 < sVar8) {
      pcVar7 = (char *)dcgettext(0,"total",5);
      write_counts(total_lines,total_words,total_chars,total_bytes,max_line_length,pcVar7);
    }
    argv_iter_free((argv_iterator *)__stream);
    rpl_free(local_230);
    if ((have_read_stdin == false) || (iVar4 = close(0), iVar4 == 0)) {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar15 ^ 1;
      }
      goto LAB_00103315;
    }
    piVar10 = __errno_location();
    iVar4 = error(1,*piVar10,&DAT_00109145);
LAB_00102f84:
    if (iVar4 < argc) {
      local_228 = argv + iVar4;
      tok.n_tok = (size_t)(argc - iVar4);
    }
    else {
      tok.n_tok = 1;
      local_228 = main::lexical_block_1::stdin_only;
    }
    __stream = (FILE *)argv_iter_init_argv(local_228);
    if (__stream == (FILE *)0x0) goto LAB_0010331a;
    local_230 = (fstatus *)xnmalloc(tok.n_tok,0x98);
    local_211 = '\0';
LAB_00102fca:
    if ((tok.n_tok == 1) &&
       (iVar4 = (uint)print_lines + (uint)print_words + (uint)print_chars + (uint)print_bytes +
                (uint)print_linelength, iVar4 == 1)) {
      local_230->failed = 1;
      number_width = iVar4;
    }
    else {
      uVar14 = 0;
      pfVar12 = local_230;
      do {
        __stat_buf = &pfVar12->st;
        pcVar7 = local_228[uVar14];
        if ((pcVar7 == (char *)0x0) || (iVar4 = strcmp(pcVar7,"-"), iVar4 == 0)) {
          iVar4 = __fxstat(1,0,(stat *)__stat_buf);
        }
        else {
          iVar4 = __xstat(1,pcVar7,(stat *)__stat_buf);
        }
        uVar14 = uVar14 + 1;
        *(int *)((long)(__stat_buf + -1) + 0x88) = iVar4;
        pfVar12 = (fstatus *)(__stat_buf + 1);
      } while (uVar14 < tok.n_tok);
      number_width = 1;
      if (local_230->failed < 1) {
        iVar4 = 1;
        uVar14 = 0;
        uVar11 = 0;
        pfVar12 = local_230;
        do {
          if (pfVar12->failed == 0) {
            if (((pfVar12->st).st_mode & 0xf000) == 0x8000) {
              uVar14 = uVar14 + (pfVar12->st).st_size;
            }
            else {
              iVar4 = 7;
            }
          }
          uVar11 = uVar11 + 1;
          pfVar12 = pfVar12 + 1;
        } while (tok.n_tok != uVar11);
LAB_001031ad:
        number_width = 1;
        for (; 9 < uVar14; uVar14 = uVar14 / 10) {
          number_width = number_width + 1;
        }
        if (number_width < iVar4) {
          number_width = iVar4;
        }
      }
    }
    goto LAB_00102b79;
  }
LAB_0010331a:
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}

