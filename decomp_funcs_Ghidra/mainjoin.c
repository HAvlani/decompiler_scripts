
int main(int argc,char **argv)

{
  line **pplVar1;
  byte bVar2;
  long lVar3;
  char cVar4;
  _Bool _Var5;
  int iVar6;
  strtol_error sVar7;
  uint uVar8;
  size_t sVar9;
  long lVar10;
  FILE *fp;
  FILE *fp_00;
  undefined8 uVar11;
  int *piVar12;
  char *pcVar13;
  line *plVar14;
  byte *pbVar15;
  line *line1;
  byte *pbVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  char **in_stack_ffffffffffffff48;
  ulong uVar21;
  ulong uVar22;
  int optc_status;
  int prev_optc_status;
  int nfiles;
  line *line;
  seq seq1;
  ulong val;
  size_t local_60;
  line **local_58;
  int operand_status [2];
  int joption_count [2];
  
  bVar20 = 0;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  prev_optc_status = 0;
  joption_count = 0;
  nfiles = 0;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  hard_LC_COLLATE = hard_locale(3);
  atexit(close_stdout);
  atexit(free_spareline);
  print_pairables = true;
  seen_unpairable = false;
  issued_disorder_warning = 0;
  check_input_order = CHECK_ORDER_DEFAULT;
  while (iVar6 = getopt_long((long)argc & 0xffffffff,argv,"-a:e:i1:2:j:o:t:v:z",longopts,0),
        pbVar16 = optarg, iVar6 != -1) {
    optc_status = 0;
    if (0x82 < iVar6) {
switchD_001028dc_caseD_33:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    if (iVar6 < 0x31) {
      if (iVar6 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      if (iVar6 != 1) {
        if (iVar6 == -0x83) {
          version_etc(stdout,"join","GNU coreutils",Version,"Mike Haertel",0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        goto switchD_001028dc_caseD_33;
      }
      add_file_name((char *)optarg,operand_status,joption_count,&nfiles,&prev_optc_status,
                    &optc_status,in_stack_ffffffffffffff48);
      prev_optc_status = optc_status;
    }
    else {
      bVar18 = 0xffef62cf < (&switchD_001028dc::switchdataD_00109d30)[iVar6 - 0x31];
      bVar19 = (&switchD_001028dc::switchdataD_00109d30)[iVar6 - 0x31] == 0xffef62d0;
      switch(iVar6) {
      case 0x31:
        sVar9 = string_to_join_field((char *)optarg);
        set_join_field(&join_field_1,sVar9);
        prev_optc_status = optc_status;
        break;
      case 0x32:
        sVar9 = string_to_join_field((char *)optarg);
        set_join_field(&join_field_2,sVar9);
        prev_optc_status = optc_status;
        break;
      default:
        goto switchD_001028dc_caseD_33;
      case 0x65:
        if ((empty_filler != (char *)0x0) &&
           (iVar6 = strcmp(empty_filler,(char *)optarg), iVar6 != 0)) {
          uVar11 = dcgettext(0,"conflicting empty-field replacement strings",5);
                    /* WARNING: Subroutine does not return */
          error(1,0,uVar11);
        }
        prev_optc_status = 0;
        empty_filler = (char *)pbVar16;
        break;
      case 0x69:
        ignore_case = true;
        prev_optc_status = 0;
        break;
      case 0x6a:
        bVar2 = *optarg;
        if ((((byte)(bVar2 - 0x31) < 2) && (optarg[1] == 0)) &&
           (optarg == (byte *)(argv[(long)optind + -1] + 2))) {
          optc_status = (bVar2 == 0x32) + 1;
          joption_count[bVar2 == 0x32] = joption_count[bVar2 == 0x32] + 1;
          prev_optc_status = optc_status;
        }
        else {
          sVar9 = string_to_join_field((char *)optarg);
          set_join_field(&join_field_1,sVar9);
          set_join_field(&join_field_2,join_field_1);
          prev_optc_status = optc_status;
        }
        break;
      case 0x6f:
        lVar10 = 5;
        pbVar15 = &DAT_00109c58;
        do {
          if (lVar10 == 0) break;
          lVar10 = lVar10 + -1;
          bVar18 = *pbVar16 < *pbVar15;
          bVar19 = *pbVar16 == *pbVar15;
          pbVar16 = pbVar16 + (ulong)bVar20 * -2 + 1;
          pbVar15 = pbVar15 + (ulong)bVar20 * -2 + 1;
        } while (bVar19);
        cVar4 = (!bVar18 && !bVar19) - bVar18;
        if (cVar4 == '\0') {
          autoformat = true;
          prev_optc_status = (int)cVar4;
        }
        else {
          add_field_list((char *)optarg);
          optc_status = 3;
          prev_optc_status = 3;
        }
        break;
      case 0x74:
        uVar8 = (uint)*optarg;
        if (*optarg == 0) {
          uVar8 = 10;
        }
        else if (optarg[1] != 0) {
          iVar6 = strcmp((char *)optarg,"\\0");
          if (iVar6 != 0) {
            pcVar13 = quote((char *)pbVar16);
            uVar11 = dcgettext(0,"multi-character tab %s",5);
                    /* WARNING: Subroutine does not return */
            error(1,0,uVar11,pcVar13);
          }
          uVar8 = 0;
        }
        if ((-1 < tab) && (tab != uVar8)) {
          uVar11 = dcgettext(0,"incompatible tabs",5);
                    /* WARNING: Subroutine does not return */
          error(1,0,uVar11);
        }
        tab = uVar8;
        prev_optc_status = 0;
        break;
      case 0x76:
        print_pairables = false;
      case 0x61:
        sVar7 = xstrtoul((char *)optarg,(char **)0x0,10,&val,"");
        if ((sVar7 != LONGINT_OK) || (1 < val - 1)) {
          pcVar13 = quote((char *)optarg);
          uVar11 = dcgettext(0,"invalid field number: %s",5);
                    /* WARNING: Subroutine does not return */
          error(1,0,uVar11,pcVar13);
        }
        prev_optc_status = optc_status;
        if (val == 1) {
          print_unpairables_1 = true;
        }
        else {
          print_unpairables_2 = true;
        }
        break;
      case 0x7a:
        eolchar = '\0';
        prev_optc_status = 0;
        break;
      case 0x80:
        check_input_order = CHECK_ORDER_ENABLED;
        prev_optc_status = 0;
        break;
      case 0x81:
        check_input_order = CHECK_ORDER_DISABLED;
        prev_optc_status = 0;
        break;
      case 0x82:
        join_header_lines = true;
        prev_optc_status = 0;
      }
    }
  }
  prev_optc_status = 0;
  if (optind < argc) {
    piVar12 = &nfiles;
    do {
      lVar10 = (long)optind;
      optind = optind + 1;
      add_file_name(argv[lVar10],operand_status,joption_count,piVar12,&prev_optc_status,&optc_status
                    ,(char **)piVar12);
    } while (optind < argc);
  }
  if (nfiles != 2) {
    if (nfiles != 0) {
      pcVar13 = quote(argv[(long)argc - 1]);
      uVar11 = dcgettext(0,"missing operand after %s",5);
                    /* WARNING: Subroutine does not return */
      error(0,0,uVar11,pcVar13);
    }
    uVar11 = dcgettext(0,"missing operand",5);
                    /* WARNING: Subroutine does not return */
    error(0,0,uVar11);
  }
  if (joption_count[0] != 0) {
    set_join_field(&join_field_1,0);
    set_join_field(&join_field_2,0);
  }
  if (joption_count[1] != 0) {
    set_join_field(&join_field_1,1);
    set_join_field(&join_field_2,1);
  }
  pcVar13 = g_names[0];
  if (join_field_1 == 0xffffffffffffffff) {
    join_field_1 = 0;
  }
  if (join_field_2 == 0xffffffffffffffff) {
    join_field_2 = 0;
  }
  iVar6 = strcmp(g_names[0],"-");
  fp = stdin;
  if (iVar6 != 0) {
    fp = fopen_safer(pcVar13,"r");
  }
  pcVar13 = g_names[1];
  if (fp == (FILE *)0x0) {
    uVar11 = quotearg_n_style_colon(0,3,g_names[0]);
    piVar12 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(1,*piVar12,"%s",uVar11);
  }
  iVar6 = strcmp(g_names[1],"-");
  fp_00 = stdin;
  if (iVar6 != 0) {
    fp_00 = fopen_safer(pcVar13,"r");
  }
  if (fp_00 == (FILE *)0x0) {
    uVar11 = quotearg_n_style_colon(0,3,g_names[1]);
    piVar12 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(1,*piVar12,"%s",uVar11);
  }
  if (fp == fp_00) {
    uVar11 = dcgettext(0,"both files cannot be standard input",5);
    piVar12 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(1,*piVar12,uVar11);
  }
  fadvise(fp,FADVISE_SEQUENTIAL);
  fadvise(fp_00,FADVISE_SEQUENTIAL);
  seq1.count = 0;
  seq1.alloc = 0;
  seq1.lines = (line **)0x0;
  getseq(fp,&seq1,1);
  val = 0;
  local_60 = 0;
  local_58 = (line **)0x0;
  getseq(fp_00,(seq *)&val,2);
  if (autoformat != false) {
    autocount_1 = seq1.count;
    if (seq1.count != 0) {
      autocount_1 = (*seq1.lines)->nfields;
    }
    autocount_2 = val;
    if (val != 0) {
      autocount_2 = (*local_58)->nfields;
    }
  }
  if (join_header_lines == false) {
LAB_00102d78:
    if (seq1.count != 0) {
      while( true ) {
        sVar9 = seq1.count;
        if (val == 0) goto LAB_00102e08;
        iVar6 = keycmp();
        if (iVar6 < 0) {
          if (print_unpairables_1 != false) {
            prjoin(*seq1.lines,&uni_blank);
          }
          seq1.count = 0;
          getseq(fp,&seq1,1);
          seen_unpairable = true;
          goto LAB_00102d78;
        }
        if (iVar6 == 0) break;
        if (print_unpairables_2 != false) {
          prjoin(&uni_blank,*local_58);
        }
        val = 0;
        getseq(fp_00,(seq *)&val,2);
        seen_unpairable = true;
        if (seq1.count == 0) goto LAB_00102e06;
      }
      do {
        _Var5 = getseq(fp,&seq1,1);
        if (_Var5 == false) {
          seq1.count = seq1.count + 1;
          bVar18 = true;
          goto LAB_00102f8a;
        }
        iVar6 = keycmp();
      } while (iVar6 == 0);
      bVar18 = false;
LAB_00102f8a:
      do {
        _Var5 = getseq(fp_00,(seq *)&val,2);
        if (_Var5 == false) {
          val = val + 1;
          bVar19 = true;
          goto LAB_00102fa9;
        }
        iVar6 = keycmp();
      } while (iVar6 == 0);
      bVar19 = false;
LAB_00102fa9:
      if ((print_pairables != false) && (uVar21 = 0, seq1.count != 1)) {
        do {
          uVar17 = 0;
          uVar22 = uVar21;
          if (val != 1) {
            do {
              pplVar1 = local_58 + uVar17;
              uVar17 = uVar17 + 1;
              prjoin(seq1.lines[uVar21],*pplVar1);
            } while (uVar17 < val - 1);
          }
          uVar21 = uVar22 + 1;
        } while (uVar21 < seq1.count - 1);
      }
      if (!bVar18) {
        plVar14 = *seq1.lines;
        *seq1.lines = seq1.lines[seq1.count - 1];
        seq1.lines[seq1.count - 1] = plVar14;
      }
      seq1.count = (size_t)!bVar18;
      if (bVar19) {
        val = 0;
      }
      else {
        plVar14 = *local_58;
        *local_58 = local_58[val - 1];
        local_58[val - 1] = plVar14;
        val = 1;
      }
      goto LAB_00102d78;
    }
  }
  else {
    if (seq1.count != 0) {
      plVar14 = &uni_blank;
      line1 = *seq1.lines;
      if (val != 0) goto LAB_001030ae;
LAB_001030b6:
      prjoin(line1,plVar14);
      prevline[0] = (line *)0x0;
      prevline[1] = (line *)0x0;
      if (seq1.count != 0) {
        seq1.count = 0;
        getseq(fp,&seq1,1);
      }
      if (val != 0) {
        val = 0;
        getseq(fp_00,(seq *)&val,2);
      }
      goto LAB_00102d78;
    }
    if (val != 0) {
      line1 = &uni_blank;
LAB_001030ae:
      plVar14 = *local_58;
      goto LAB_001030b6;
    }
  }
LAB_00102e06:
  sVar9 = 0;
LAB_00102e08:
  line = (line *)0x0;
  if ((check_input_order == CHECK_ORDER_DISABLED) ||
     ((issued_disorder_warning[0] != false && (issued_disorder_warning[1] != false)))) {
    if ((print_unpairables_1 != false) && (cVar4 = '\0', sVar9 != 0)) {
LAB_001033c1:
      prjoin(*seq1.lines,&uni_blank);
      goto LAB_001031dc;
    }
    if (print_unpairables_2 == false) goto LAB_00102e55;
LAB_001032f5:
    if (val == 0) goto LAB_00102e55;
LAB_00103306:
    if (print_unpairables_2 != false) {
      prjoin(&uni_blank,*local_58);
    }
    if (seq1.count != 0) {
      seen_unpairable = true;
    }
LAB_00103320:
    do {
      _Var5 = get_line(fp_00,&line,2);
      if (_Var5 == false) break;
      if (print_unpairables_2 == false) {
      }
      else {
        prjoin(&uni_blank,line);
        bVar18 = issued_disorder_warning[1] == false;
        issued_disorder_warning[1] = print_unpairables_2;
        if (bVar18) goto LAB_00103320;
      }
    } while (issued_disorder_warning[1] != false);
  }
  else {
    if (sVar9 == 0) goto LAB_001032f5;
    cVar4 = print_unpairables_1;
    if (print_unpairables_1 != false) goto LAB_001033c1;
    cVar4 = '\x01';
LAB_001031dc:
    if (val != 0) {
      seen_unpairable = true;
    }
LAB_00103200:
    do {
      _Var5 = get_line(fp,&line,1);
      if (_Var5 == false) break;
      if (print_unpairables_1 == false) {
      }
      else {
        prjoin(line,&uni_blank);
        bVar18 = issued_disorder_warning[0] == false;
        issued_disorder_warning[0] = print_unpairables_1;
        if (bVar18) goto LAB_00103200;
      }
    } while (issued_disorder_warning[0] != false);
    if (((print_unpairables_2 != false) || (cVar4 != '\0')) && (val != 0)) goto LAB_00103306;
  }
  if (line != (line *)0x0) {
    freeline(line);
  }
LAB_00102e55:
  rpl_free(line);
  delseq();
  delseq();
  iVar6 = rpl_fclose(fp);
  if (iVar6 != 0) {
    uVar11 = quotearg_n_style_colon(0,3,g_names[0]);
    piVar12 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(1,*piVar12,"%s",uVar11);
  }
  iVar6 = rpl_fclose(fp_00);
  if (iVar6 != 0) {
    uVar11 = quotearg_n_style_colon(0,3,g_names[1]);
    piVar12 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(1,*piVar12,"%s",uVar11);
  }
  if ((issued_disorder_warning[0] == false) && (issued_disorder_warning[1] == false)) {
    if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return 0;
  }
  uVar11 = dcgettext(0,"input is not in sorted order",5);
                    /* WARNING: Subroutine does not return */
  error(1,0,uVar11);
}

