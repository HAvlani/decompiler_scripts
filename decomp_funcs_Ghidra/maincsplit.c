
/* WARNING: Could not reconcile some variable overlaps */

int main(int argc,char **argv)

{
  char cVar1;
  _Bool _Var2;
  bool bVar3;
  control *pcVar4;
  control *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  strtol_error sVar9;
  intmax_t iVar10;
  byte *pbVar11;
  byte *pbVar12;
  regoff_t rVar13;
  cstring *pcVar14;
  long lVar15;
  ushort **ppuVar16;
  char *pcVar17;
  char *pcVar18;
  ulong uVar19;
  int *piVar20;
  long lVar21;
  control *unaff_RBP;
  int *piVar22;
  byte bVar23;
  sigset_t *psVar24;
  uint uVar25;
  __sigset_t *p_Var26;
  long lVar27;
  char **unaff_R14;
  char *unaff_R15;
  control *p;
  long lVar28;
  long in_FS_OFFSET;
  bool bVar29;
  byte bVar30;
  undefined auVar31 [16];
  undefined8 uVar32;
  ulong local_128;
  long local_120;
  uint local_114;
  uintmax_t *local_110;
  uintmax_t val;
  sigaction act;
  char buf [21];
  long local_40;
  
  bVar30 = 0;
  local_128 = local_128 & 0xffffffff00000000 | (ulong)(uint)argc;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  remove_files = true;
  controls = (control *)0x0;
  control_used = 0;
  suppress_count = false;
  suppress_matched = false;
  prefix = "xx";
  global_argv = argv;
  while( true ) {
    uVar32 = 0x102b6c;
    iVar6 = getopt_long(local_128 & 0xffffffff,argv,"f:b:kn:sqz");
    if (iVar6 == -1) break;
    if (0x80 < iVar6) goto switchD_00102b9c_caseD_63;
    if (iVar6 < 0x62) {
      if (iVar6 == -0x83) {
        version_etc(stdout,"csplit","GNU coreutils",Version,"Stuart Kemp","David MacKenzie",0,uVar32
                   );
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar6 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00102b9c_caseD_63;
    }
    switch(iVar6) {
    case 0x62:
      suffix = optarg;
      break;
    default:
      goto switchD_00102b9c_caseD_63;
    case 0x66:
      prefix = optarg;
      break;
    case 0x6b:
      remove_files = false;
      break;
    case 0x6e:
      pcVar17 = (char *)dcgettext(0,"invalid number",5);
      iVar10 = xdectoimax(optarg,0,0x7fffffff,"",pcVar17,0);
      digits = (int)iVar10;
      break;
    case 0x71:
    case 0x73:
      suppress_count = true;
      break;
    case 0x7a:
      elide_empty_files = true;
      break;
    case 0x80:
      suppress_matched = true;
    }
  }
  iVar6 = optind;
  if ((int)local_128 - optind < 2) {
LAB_001034fc:
    if (iVar6 < (int)local_128) {
      pcVar17 = quote(argv[(long)(int)local_128 + -1]);
      uVar32 = dcgettext(0,"missing operand after %s",5);
      error(0,0,uVar32,pcVar17);
    }
    else {
      uVar32 = dcgettext(0,"missing operand",5);
      error(0,0,uVar32);
    }
switchD_00102b9c_caseD_63:
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  uVar19 = 0xffffffffffffffff;
  pcVar17 = prefix;
  do {
    if (uVar19 == 0) break;
    uVar19 = uVar19 - 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar17 + (ulong)bVar30 * -2 + 1;
  } while (cVar1 != '\0');
  if (suffix != (char *)0x0) {
    bVar3 = false;
    bVar23 = *suffix;
    pbVar11 = (byte *)suffix;
    if (bVar23 == 0) goto LAB_0010363c;
LAB_00102cf6:
    pbVar12 = pbVar11 + 1;
    bVar29 = bVar23 == 0x25;
    bVar23 = pbVar11[1];
    if (bVar29) {
      if (pbVar11[1] == 0x25) {
        pbVar12 = pbVar11 + 2;
        bVar23 = pbVar11[2];
        goto LAB_00102ced;
      }
      if (!bVar3) {
        uVar25 = 0;
        do {
          bVar23 = *pbVar12;
          if (bVar23 == 0x27) {
            uVar25 = uVar25 | 1;
          }
          else if ((char)bVar23 < '(') {
            if (bVar23 != 0x23) goto LAB_00102d7c;
            uVar25 = uVar25 | 2;
          }
          else if ((bVar23 != 0x2d) && (bVar23 != 0x30)) goto joined_r0x00102d55;
          pbVar12 = pbVar12 + 1;
        } while( true );
      }
      goto LAB_001038fe;
    }
    goto LAB_00102ced;
  }
  lVar27 = 0xb;
  if (10 < (uint)digits) {
    lVar27 = (long)digits;
  }
LAB_00102de7:
  if (SCARRY8(lVar27 + 1,~uVar19 - 1)) {
LAB_0010349e:
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
  filename_space = (char *)ximalloc(lVar27 + 1 + (~uVar19 - 1));
  pcVar17 = argv[optind];
  iVar6 = optind + 1;
  optind = iVar6;
  iVar8 = strcmp(pcVar17,"-");
  if ((iVar8 == 0) || (iVar8 = fd_reopen(0,pcVar17,0,0), iVar6 = optind, -1 < iVar8)) {
    if (iVar6 < (int)local_128) {
      local_120 = (long)iVar6;
      unaff_R15 = argv[local_120];
      local_110 = &val;
      do {
        cVar1 = *unaff_R15;
        if ((cVar1 == '/') || (cVar1 == '%')) {
          unaff_R14 = (char **)(unaff_R15 + 1);
          local_114 = local_114 & 0xffffff00 | (uint)(cVar1 == '%');
          pcVar17 = strrchr((char *)unaff_R14,(int)cVar1);
          if (pcVar17 == (char *)0x0) {
            uVar32 = dcgettext(0,"%s: closing delimiter \'%c\' missing",5);
            error(1,0,uVar32,unaff_R15,(int)cVar1);
            goto LAB_00103788;
          }
          unaff_RBP = new_control_record();
          unaff_RBP->argnum = iVar6;
          unaff_RBP->ignore = local_114._0_1_;
          unaff_RBP->regexpr = true;
          (unaff_RBP->re_compiled).buffer = (re_dfa_t *)0x0;
          (unaff_RBP->re_compiled).allocated = 0;
          pcVar18 = (char *)xmalloc(0x100);
          (unaff_RBP->re_compiled).fastmap = pcVar18;
          (unaff_RBP->re_compiled).translate = (uchar *)0x0;
          rpl_re_syntax_options = 0x2c6;
          unaff_R14 = (char **)rpl_re_compile_pattern
                                         ((char *)unaff_R14,
                                          (size_t)(pcVar17 + (-1 - (long)unaff_R15)),
                                          &unaff_RBP->re_compiled);
          if (unaff_R14 != (char **)0x0) {
            pcVar17 = quote(unaff_R15);
            uVar32 = dcgettext(0,"%s: invalid regular expression: %s",5);
            error(0,0,uVar32,pcVar17,unaff_R14);
                    /* WARNING: Subroutine does not return */
            cleanup_fatal();
          }
          if ((pcVar17[1] == '\0') ||
             (sVar9 = xstrtoimax(pcVar17 + 1,(char **)0x0,10,&unaff_RBP->offset,""),
             sVar9 == LONGINT_OK)) goto LAB_00102f0c;
          pcVar17 = quote(unaff_R15);
          iVar6 = (int)pcVar17;
          uVar32 = dcgettext(0,"%s: integer expected after delimiter",5);
          error(1,0,uVar32);
LAB_001030c5:
          uVar19 = 0xffffffffffffffff;
          pcVar17 = unaff_R15;
          do {
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            cVar1 = *pcVar17;
            pcVar17 = pcVar17 + (ulong)bVar30 * -2 + 1;
          } while (cVar1 != '\0');
          pcVar17 = unaff_R15 + (~uVar19 - 2);
          if (*pcVar17 != '}') goto LAB_001038bd;
          *pcVar17 = '\0';
          if ((unaff_R15 + 1 == pcVar17 + -1) && (unaff_R15[1] == '*')) {
            unaff_RBP->repeat_forever = true;
          }
          else {
            sVar9 = xstrtoumax(unaff_R15 + 1,(char **)0x0,10,local_110,"");
            if ((sVar9 != LONGINT_OK) || ((long)val < 0)) {
LAB_00103788:
              pcVar17 = quote(*(char **)((long)global_argv + (long)unaff_R14));
              uVar32 = dcgettext(0,"%s}: integer required between \'{\' and \'}\'",5);
              error(1,0,uVar32,pcVar17);
LAB_001037c2:
              pcVar17 = global_argv[(int)local_114];
LAB_001037d2:
              pcVar17 = quote(pcVar17);
              uVar32 = dcgettext(0,"%s: line number out of range",5);
              error(0,0,uVar32,pcVar17);
                    /* WARNING: Subroutine does not return */
              cleanup_fatal();
            }
            unaff_RBP->repeat = val;
          }
          *pcVar17 = '}';
          iVar8 = iVar6 + 2;
          if ((int)local_128 <= iVar8) break;
          unaff_R15 = *(char **)((long)(argv + 1) + (long)unaff_R14);
        }
        else {
          unaff_R14 = argv + local_120;
          unaff_RBP = new_control_record();
          pcVar17 = *unaff_R14;
          unaff_RBP->argnum = iVar6;
          sVar9 = xstrtoumax(pcVar17,(char **)0x0,10,local_110,"");
          if ((sVar9 != LONGINT_OK) || ((long)val < 0)) goto LAB_00103660;
          if (val == 0) goto LAB_001036d7;
          uVar19 = last_val_7678;
          if (val < last_val_7678) goto LAB_00103692;
          if (val == last_val_7678) {
            quote(*unaff_R14);
            uVar32 = dcgettext(0,"warning: line number %s is the same as preceding line number",5);
            error(0,0,uVar32);
          }
          last_val_7678 = val;
          unaff_RBP->lines_required = val;
LAB_00102f0c:
          iVar8 = iVar6 + 1;
          if ((int)local_128 <= iVar8) break;
          unaff_R15 = argv[local_120 + 1];
          unaff_R14 = (char **)((local_120 + 1) * 8);
          if (*unaff_R15 == '{') goto LAB_001030c5;
        }
        local_120 = (long)iVar8;
        iVar6 = iVar8;
      } while( true );
    }
    piVar22 = main::lexical_block_0::sig;
    sigemptyset((sigset_t *)&caught_signals);
    piVar20 = main::lexical_block_0::sig;
    do {
      iVar6 = *piVar20;
      sigaction(iVar6,(sigaction *)0x0,(sigaction *)&act);
      if (act.__sigaction_handler != (code *)0x1) {
        sigaddset((sigset_t *)&caught_signals,iVar6);
      }
      piVar20 = piVar20 + 1;
    } while (piVar20 != (int *)&DAT_00118cac);
    act.sa_flags = 0;
    act.__sigaction_handler = interrupt_handler;
    psVar24 = &caught_signals;
    p_Var26 = &act.sa_mask;
    for (lVar27 = 0x20; lVar27 != 0; lVar27 = lVar27 + -1) {
      *(undefined4 *)p_Var26->__val = *(undefined4 *)psVar24->__val;
      psVar24 = (sigset_t *)((long)psVar24 + ((ulong)bVar30 * -2 + 1) * 4);
      p_Var26 = (__sigset_t *)((long)p_Var26 + (ulong)bVar30 * -8 + 4);
    }
    do {
      iVar6 = *piVar22;
      iVar8 = sigismember((sigset_t *)&caught_signals,iVar6);
      if (iVar8 != 0) {
        sigaction(iVar6,(sigaction *)&act,(sigaction *)0x0);
      }
      piVar22 = piVar22 + 1;
    } while (piVar22 != (int *)&DAT_00118cac);
    local_120 = 0;
    do {
      if (control_used <= local_120) {
        create_output_file();
        dump_rest_of_file();
        close_output_file();
        iVar6 = close(0);
        if (iVar6 != 0) {
          uVar32 = dcgettext(0,"read error",5);
          piVar20 = __errno_location();
          error(0,*piVar20,uVar32);
                    /* WARNING: Subroutine does not return */
          cleanup_fatal();
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      local_128 = local_120 * 0x60;
      pcVar5 = (control *)0x0;
      if (controls[local_120].regexpr == false) {
        while ((p = pcVar5, uVar19 = local_128, pcVar4 = controls,
               (&controls->repeat_forever)[local_128] != false ||
               ((long)p <= *(long *)((long)&controls->repeat + local_128)))) {
          lVar27 = *(long *)((long)&controls->lines_required + local_128);
          pcVar5 = (control *)((long)&p->offset + 1);
          create_output_file();
          lVar27 = lVar27 * (long)pcVar5;
          pcVar14 = find_line(current_line + 1);
          if ((pcVar14 == (cstring *)0x0) && (suppress_matched != false)) goto LAB_001033b0;
          lVar21 = get_first_line_in_buffer();
          lVar28 = lVar21 + 1;
          if (lVar27 - lVar21 == 0 || lVar27 < lVar21) {
            close_output_file();
          }
          else {
            do {
              lVar21 = remove_line();
              if (lVar21 == 0) goto LAB_001033b0;
              lVar28 = lVar28 + 1;
              save_line_to_file();
            } while (lVar28 != lVar27 + 1);
            close_output_file();
          }
          if (suppress_matched != false) {
            remove_line();
          }
          pcVar14 = find_line(current_line + 1);
          if (pcVar14 == (cstring *)0x0) {
            while (suppress_matched == false) {
LAB_001033b0:
              handle_line_error(*(intmax_t *)((long)&pcVar4->lines_required + uVar19),p);
            }
          }
        }
      }
      else {
        for (unaff_R14 = (char **)0x0;
            (unaff_RBP = (control *)((long)&controls->offset + local_128),
            unaff_RBP->repeat_forever != false || ((long)unaff_R14 <= unaff_RBP->repeat));
            unaff_R14 = (char **)((long)unaff_R14 + 1)) {
          _Var2 = unaff_RBP->ignore;
          pcVar17 = (char *)(ulong)_Var2;
          if (_Var2 == false) {
            create_output_file();
          }
          if (unaff_RBP->offset < 0) {
            do {
              current_line = current_line + 1;
              pcVar14 = find_line(current_line);
              if (pcVar14 == (cstring *)0x0) goto LAB_00103268;
              lVar27 = pcVar14->len;
              if (pcVar14->str[lVar27 + -1] == '\n') {
                lVar27 = lVar27 + -1;
              }
              rVar13 = rpl_re_search(&unaff_RBP->re_compiled,pcVar14->str,lVar27,0,lVar27,
                                     (re_registers *)0x0);
              if (rVar13 == -2) goto LAB_00103701;
            } while (rVar13 == -1);
          }
          else {
            while( true ) {
              current_line = current_line + 1;
              pcVar14 = find_line(current_line);
              if (pcVar14 == (cstring *)0x0) goto LAB_00103268;
              lVar27 = pcVar14->len;
              if (pcVar14->str[lVar27 + -1] == '\n') {
                lVar27 = lVar27 + -1;
              }
              rVar13 = rpl_re_search(&unaff_RBP->re_compiled,pcVar14->str,lVar27,0,lVar27,
                                     (re_registers *)0x0);
              if (rVar13 == -2) goto LAB_00103701;
              if (rVar13 != -1) break;
              remove_line();
              if (_Var2 == false) {
                save_line_to_file();
              }
            }
          }
          local_114 = unaff_RBP->argnum;
          lVar28 = current_line + unaff_RBP->offset;
          lVar27 = get_first_line_in_buffer();
          if (lVar28 < lVar27) {
            pcVar17 = global_argv[(int)local_114];
            goto LAB_001037d2;
          }
          lVar21 = 0;
          if (lVar28 != lVar27) {
            do {
              lVar15 = remove_line();
              if (lVar15 == 0) goto LAB_001037c2;
              if (_Var2 == false) {
                save_line_to_file();
              }
              lVar21 = lVar21 + 1;
            } while (lVar28 - lVar27 != lVar21);
          }
          if (_Var2 == false) {
            close_output_file();
          }
          if (0 < unaff_RBP->offset) {
            current_line = lVar28;
          }
          if (suppress_matched != false) {
            remove_line();
          }
        }
      }
      local_120 = local_120 + 1;
    } while( true );
  }
  pcVar17 = quotearg_style(shell_escape_always_quoting_style,pcVar17);
  uVar32 = dcgettext(0,"cannot open %s for reading",5);
  piVar20 = __errno_location();
  error(1,*piVar20,uVar32,pcVar17);
LAB_001035ae:
  dump_rest_of_file();
  close_output_file();
LAB_0010327b:
                    /* WARNING: Subroutine does not return */
  exit(0);
joined_r0x00102d55:
  while ((int)(char)bVar23 - 0x30U < 10) {
    pbVar11 = pbVar12 + 1;
    pbVar12 = pbVar12 + 1;
    bVar23 = *pbVar11;
  }
  if (bVar23 == 0x2e) {
    do {
      pbVar11 = pbVar12 + 1;
      pbVar12 = pbVar12 + 1;
    } while ((int)(char)*pbVar11 - 0x30U < 10);
  }
LAB_00102d7c:
  bVar23 = *pbVar12;
  unaff_R14 = (char **)(ulong)bVar23;
  if (bVar23 == 0) goto LAB_00103922;
  switch(bVar23) {
  case 0x58:
  case 0x6f:
  case 0x78:
    uVar7 = 2;
    break;
  default:
    ppuVar16 = __ctype_b_loc();
    if ((*(byte *)((long)*ppuVar16 + (long)unaff_R14 * 2 + 1) & 0x40) != 0) {
      uVar32 = dcgettext(0,"invalid conversion specifier in suffix: %c",5);
      iVar6 = error(1,0,uVar32,bVar23);
      goto LAB_001034fc;
    }
    uVar32 = dcgettext(0,"invalid conversion specifier in suffix: \\%.3o",5);
    error(1,0,uVar32,bVar23);
    goto LAB_0010363c;
  case 100:
  case 0x69:
    uVar7 = 1;
    break;
  case 0x75:
    *pbVar12 = 100;
    uVar7 = 1;
  }
  if ((~uVar7 & uVar25) != 0) {
    uVar32 = dcgettext(0,"invalid flags in conversion specification: %%%c%c",5);
    error(1,0,uVar32,(-((~uVar7 & uVar25 & 2) == 0) & 4U) + 0x23,bVar23);
    goto LAB_001038bd;
  }
  pbVar11 = pbVar12 + 1;
  pbVar12 = pbVar12 + 1;
  bVar3 = true;
  bVar23 = *pbVar11;
LAB_00102ced:
  pbVar11 = pbVar12;
  if (bVar23 == 0) goto LAB_00103470;
  goto LAB_00102cf6;
LAB_00103470:
  if (!bVar3) {
LAB_0010363c:
    uVar32 = dcgettext(0,"missing %% conversion specification in suffix",5);
    error(1,0,uVar32);
LAB_00103660:
    pcVar17 = quote(*unaff_R14);
    uVar32 = dcgettext(0,"%s: invalid pattern",5);
    uVar19 = 1;
    error(1,0,uVar32,pcVar17);
LAB_00103692:
    pcVar17 = imaxtostr(uVar19,buf);
    pcVar18 = quote(*unaff_R14);
    uVar32 = dcgettext(0,"line number %s is smaller than preceding line number, %s",5);
    error(1,0,uVar32,pcVar18,pcVar17);
LAB_001036d7:
    pcVar17 = *unaff_R14;
    uVar32 = dcgettext(0,"%s: line number must be greater than zero",5);
    error(1,0,uVar32,pcVar17);
LAB_00103701:
    uVar32 = dcgettext(0,"error in regular expression search",5);
    error(0,0,uVar32);
                    /* WARNING: Subroutine does not return */
    cleanup_fatal();
  }
  iVar6 = __snprintf_chk(0,0,1);
  lVar27 = (long)iVar6;
  if (iVar6 < 0) goto LAB_0010349e;
  goto LAB_00102de7;
LAB_001038bd:
  pcVar17 = quote(unaff_R15);
  uVar32 = dcgettext(0,"%s: \'}\' is required in repeat count",5);
  error(1,0,uVar32,pcVar17);
LAB_001038ef:
  regexp_error(unaff_RBP,(intmax_t)unaff_R14,SUB81(pcVar17,0));
LAB_001038fe:
  uVar32 = dcgettext(0,"too many %% conversion specifications in suffix",5);
  error(1,0,uVar32);
LAB_00103922:
  uVar32 = dcgettext(0,"missing conversion specifier in suffix",5);
  auVar31 = error(1,0,uVar32);
  uVar19 = local_128;
  local_128 = SUB168(auVar31,0);
  (*(code *)PTR___libc_start_main_0011efd0)
            (main,uVar19,&local_120,__libc_csu_init,__libc_csu_fini,SUB168(auVar31 >> 0x40,0),
             &local_128);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
LAB_00103268:
  if (unaff_RBP->repeat_forever == false) goto LAB_001038ef;
  if (_Var2 != false) goto LAB_0010327b;
  goto LAB_001035ae;
}

