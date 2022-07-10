
/* WARNING: Could not reconcile some variable overlaps */

int main(int argc,char **argv)

{
  SIGNAL_MODE *pSVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  SIGNAL_MODE *pSVar7;
  char **ppcVar8;
  char **ppcVar9;
  size_t sVar10;
  splitbuf *ss_00;
  ulong uVar11;
  char *pcVar12;
  undefined8 uVar13;
  int *piVar14;
  char **extraout_RDX;
  undefined8 extraout_RDX_00;
  byte bVar15;
  size_t n;
  long lVar16;
  char **ppcVar17;
  char *pcVar18;
  char *pcVar19;
  byte bVar20;
  int iVar21;
  char **ppcVar22;
  long in_FS_OFFSET;
  bool bVar23;
  undefined auVar24 [16];
  undefined8 uStack344;
  undefined8 local_150;
  undefined8 local_148;
  char **local_140;
  char *local_138;
  int local_12c;
  char **local_128;
  char **local_120;
  splitbuf ss;
  sigaction act;
  char signame [19];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  exit_failure = 0x7d;
  atexit(close_stdout);
  pSVar7 = (SIGNAL_MODE *)xmalloc(0x104);
  pSVar1 = pSVar7 + 0x41;
  signals = pSVar7;
  do {
    *pSVar7 = UNCHANGED;
    pSVar7 = pSVar7 + 1;
  } while (pSVar1 != pSVar7);
  local_140 = (char **)0x0;
  local_148 = (char **)((ulong)local_148 & 0xffffffffffffff00);
  local_150 = (int *)((ulong)local_150 & 0xffffffffffffff00);
LAB_0010292d:
  while (uVar4 = getopt_long(argc,argv,"+C:iS:u:v0 \t\n\v\f\r",longopts,0), ppcVar22 = optarg,
        uVar6 = optind, uVar4 != 0xffffffff) {
    if (0x83 < (int)uVar4) goto switchD_00102983_caseD_44;
    if ((int)uVar4 < 0x43) {
      if (0xd < (int)uVar4) {
        if (uVar4 == 0x20) goto LAB_001037df;
        if (uVar4 == 0x30) goto code_r0x00102d22;
        goto switchD_00102983_caseD_44;
      }
      if (8 < (int)uVar4) {
LAB_001037df:
        local_150 = (int *)((ulong)local_150 & 0xffffffff00000000 | (ulong)uVar4);
        uVar13 = dcgettext(0,"invalid option -- \'%c\'",5);
        error(0,0,uVar13,(ulong)local_150 & 0xffffffff);
        pcVar18 = "use -[v]S to pass options in shebang lines";
        goto LAB_001031da;
      }
      if (uVar4 == 0xffffff7d) {
        version_etc(stdout,"env","GNU coreutils",Version,"Richard Mlynarik","David MacKenzie",
                    "Assaf Gordon",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (uVar4 == 0xffffff7e) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00102983_caseD_44;
    }
    switch(uVar4) {
    case 0x43:
      local_140 = optarg;
      break;
    default:
      goto switchD_00102983_caseD_44;
    case 0x53:
      iVar5 = argc - optind;
      n = (size_t)(iVar5 + 2);
      local_120 = optarg;
      local_12c = iVar5;
      ss.argv = (char **)xnmalloc(n,0x10);
      ss.argc = 1;
      ss.sep = true;
      ss.argv[1] = (char *)0x0;
      cVar3 = *(char *)ppcVar22;
      ppcVar17 = argv;
      ss.half_alloc = n;
      ss.extra_argc = iVar5;
      if (cVar3 != '\0') {
        uVar6 = 0;
        argc = 0;
        ss_00 = &ss;
        local_128 = argv;
LAB_00102a08:
        ppcVar17 = local_128;
        bVar20 = (byte)uVar6;
        bVar15 = (byte)argc;
        if (cVar3 < '(') {
          if (cVar3 < '\t') goto LAB_00102a3d;
          switch(cVar3) {
          case '\t':
          case '\n':
          case '\v':
          case '\f':
          case '\r':
          case ' ':
            if ((bVar15 | bVar20) != 0) break;
            uVar6 = 0;
            argc = 0;
            ss.sep = true;
            sVar10 = strspn((char *)ppcVar22," \t\n\v\f\r");
            ppcVar22 = (char **)((long)ppcVar22 + sVar10);
            goto LAB_00102a58;
          default:
            break;
          case '\"':
            cVar3 = '\"';
            if (bVar20 != 0) break;
            argc = argc ^ 1;
joined_r0x00102b36:
            if (ss.sep != false) {
              check_start_new_arg(ss_00);
            }
            goto LAB_00102a54;
          case '#':
            if (ss.sep == false) {
              cVar3 = '#';
              goto LAB_00102a49;
            }
            goto eos;
          case '$':
            if (bVar20 == 0) {
              if (*(char *)((long)ppcVar22 + 1) == '{') {
                cVar3 = *(char *)((long)ppcVar22 + 2);
                if ('Z' < cVar3) goto LAB_00102daf;
                if ('@' < cVar3) goto LAB_00102dbb;
              }
LAB_00102d88:
              do {
                uVar13 = dcgettext(0,"only ${VARNAME} expansion is supported, error at: %s",5);
                cVar3 = error(0x7d,0,uVar13);
LAB_00102daf:
              } while ((0x19 < (byte)(cVar3 + 0x9fU)) && (cVar3 != '_'));
LAB_00102dbb:
              pcVar18 = (char *)((long)ppcVar22 + 3);
              do {
                cVar3 = *pcVar18;
                if (cVar3 < '[') {
                  if ((cVar3 < 'A') && (9 < (byte)(cVar3 - 0x30U))) goto LAB_00102d88;
                }
                else if ((0x19 < (byte)(cVar3 + 0x9fU)) && (cVar3 != '_')) goto code_r0x00102eb4;
                pcVar18 = pcVar18 + 1;
              } while( true );
            }
            cVar3 = '$';
            break;
          case '\'':
            cVar3 = '\'';
            if (bVar15 == 0) {
              uVar6 = uVar6 ^ 1;
              goto joined_r0x00102b36;
            }
          }
        }
        else {
          if (cVar3 != '\\') goto LAB_00102a3d;
          cVar3 = *(char *)((long)ppcVar22 + 1);
          if (((bVar20 != 0) && (cVar3 != '\'')) && (cVar3 != '\\')) {
            cVar3 = '\\';
            goto LAB_00102a3d;
          }
          ppcVar8 = (char **)((long)ppcVar22 + 1);
          if (cVar3 == '\0') {
            uVar13 = dcgettext(0,"invalid backslash at end of string in -S",5);
            error(0x7d,0,uVar13);
            goto LAB_0010383d;
          }
          switch(cVar3) {
          case '\"':
          case '#':
          case '$':
          case '\'':
          case '\\':
            ppcVar22 = ppcVar8;
            break;
          default:
            uVar13 = dcgettext(0,"invalid sequence \'\\%c\' in -S",5);
            error(0x7d,0,uVar13,(int)cVar3);
            goto LAB_00103489;
          case '_':
            goto switchD_00102d6c_caseD_5f;
          case 'c':
            if (bVar15 != 0) {
              uVar13 = dcgettext(0,"\'\\c\' must not appear in double-quoted -S string",5);
              error(0x7d,0,uVar13);
              ppcVar8 = extraout_RDX;
              ppcVar22 = ppcVar17;
switchD_00102d6c_caseD_5f:
              if (bVar15 != 0) {
                cVar3 = ' ';
                ppcVar22 = ppcVar8;
                break;
              }
              ss.sep = true;
              ppcVar22 = (char **)((long)ppcVar22 + 2);
              goto LAB_00102a58;
            }
            goto eos;
          case 'f':
            cVar3 = '\f';
            ppcVar22 = ppcVar8;
            break;
          case 'n':
            cVar3 = '\n';
            ppcVar22 = ppcVar8;
            break;
          case 'r':
            cVar3 = '\r';
            ppcVar22 = ppcVar8;
            break;
          case 't':
            cVar3 = '\t';
            ppcVar22 = ppcVar8;
            break;
          case 'v':
            cVar3 = '\v';
            ppcVar22 = ppcVar8;
          }
        }
LAB_00102a3d:
        if (ss.sep != false) {
          check_start_new_arg(ss_00);
        }
LAB_00102a49:
        splitbuf_append_byte(ss_00,cVar3);
LAB_00102a54:
        ppcVar22 = (char **)((long)ppcVar22 + 1);
        goto LAB_00102a58;
      }
      goto eos;
    case 0x69:
      local_150 = (int *)CONCAT71(local_150._1_7_,1);
      break;
    case 0x75:
      if (usvars_used == usvars_alloc) {
        usvars = (char **)x2nrealloc(usvars,&usvars_alloc,8);
      }
      ppcVar17 = usvars + usvars_used;
      usvars_used = usvars_used + 1;
      *ppcVar17 = (char *)ppcVar22;
      break;
    case 0x76:
      dev_debug = true;
      break;
    case 0x80:
      parse_signal_action_params((char *)optarg,true);
      parse_block_signal_params((char *)optarg,false);
      break;
    case 0x81:
      parse_signal_action_params((char *)optarg,false);
      break;
    case 0x82:
      parse_block_signal_params((char *)optarg,true);
      break;
    case 0x83:
      report_signal_handling = true;
    }
  }
  ppcVar22 = argv;
  if (((int)optind < argc) && (iVar5 = strcmp(argv[(int)optind],"-"), iVar5 == 0)) {
LAB_00103489:
    optind = uVar6 + 1;
LAB_00102f6f:
    if (dev_debug != false) {
      fwrite("cleaning environ\n",1,0x11,stderr);
    }
    environ = main::lexical_block_0::dummy_environ;
    uVar6 = optind;
    ppcVar17 = environ;
  }
  else {
    if ((char)local_150 != '\0') goto LAB_00102f6f;
    ppcVar17 = environ;
    if (0 < usvars_used) {
      lVar16 = 0;
      ppcVar8 = usvars;
      do {
        if (dev_debug != false) {
          __fprintf_chk(stderr,1,"unset:    %s\n",ppcVar8[lVar16]);
        }
        ppcVar8 = usvars;
        ppcVar17 = usvars + lVar16;
        iVar5 = unsetenv(*ppcVar17);
        if (iVar5 != 0) {
          pcVar18 = quote(*ppcVar17);
          uVar13 = dcgettext(0,"cannot unset %s",5);
          piVar14 = __errno_location();
          error(0x7d,*piVar14,uVar13,pcVar18);
LAB_0010396a:
          uVar13 = dcgettext(0,"no terminating quote in -S string",5);
          auVar24 = error(0x7d,0,uVar13);
          uVar13 = uStack344;
          uStack344 = SUB168(auVar24,0);
          (*(code *)PTR___libc_start_main_0010cfc8)
                    (main,uVar13,&local_150,__libc_csu_init,__libc_csu_fini,
                     SUB168(auVar24 >> 0x40,0),&uStack344);
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        lVar16 = lVar16 + 1;
        uVar6 = optind;
        ppcVar17 = environ;
      } while (lVar16 < usvars_used);
    }
  }
  while (environ = ppcVar17, (int)uVar6 < argc) {
    ss_00 = (splitbuf *)strchr(ppcVar22[(int)uVar6],0x3d);
    if (ss_00 == (splitbuf *)0x0) {
      if ((argc <= (int)uVar6) || ((char)local_148 == '\0')) {
        local_150 = (int *)((ulong)local_150 & 0xffffffff00000000 | (ulong)(uint)argc);
        pcVar18 = (char *)0x1;
        lVar16 = 4;
        local_148 = ppcVar22;
        goto LAB_00103244;
      }
      pcVar18 = "cannot specify --null (-0) with command";
      goto LAB_001031da;
    }
    if (dev_debug != false) {
      __fprintf_chk(stderr,1,"setenv:   %s\n");
    }
    iVar5 = putenv(ppcVar22[(int)optind]);
    if (iVar5 != 0) goto LAB_0010383d;
    optind = optind + 1;
    ppcVar17 = environ;
    uVar6 = optind;
  }
  if (local_140 != (char **)0x0) {
LAB_0010391e:
    pcVar18 = "must specify command with --chdir (-C)";
LAB_001031da:
    uVar13 = dcgettext(0,pcVar18,5);
    error(0,0,uVar13);
switchD_00102983_caseD_44:
                    /* WARNING: Subroutine does not return */
    usage(0x7d);
  }
  pcVar18 = *ppcVar17;
  if (pcVar18 != (char *)0x0) {
    do {
      ppcVar17 = ppcVar17 + 1;
      __printf_chk(1,&DAT_001081fa,pcVar18,-((char)local_148 == '\0') & 10);
      pcVar18 = *ppcVar17;
    } while (pcVar18 != (char *)0x0);
  }
  iVar5 = 0;
  goto LAB_001033f8;
code_r0x00102d22:
  local_148 = (char **)CONCAT71(local_148._1_7_,1);
  goto LAB_0010292d;
code_r0x00102eb4:
  if (cVar3 == '}') goto code_r0x00102ebc;
  goto LAB_00102d88;
code_r0x00102ebc:
  pcVar12 = pcVar18 + (-2 - (long)ppcVar22);
  if (vnlen <= (long)pcVar12) {
    vnlen = (idx_t)(pcVar18 + (-1 - (long)ppcVar22));
    local_138 = pcVar12;
    varname = (char *)xrealloc(varname,vnlen);
    pcVar12 = local_138;
  }
  local_138 = (char *)memcpy(varname,(void *)((long)ppcVar22 + 2),(size_t)pcVar12);
  local_138[(long)(pcVar18 + (-2 - (long)ppcVar22))] = '\0';
  pcVar18 = getenv(local_138);
  if (pcVar18 == (char *)0x0) {
    if (dev_debug != false) {
      __fprintf_chk(stderr,1,"replacing ${%s} with null string\n");
    }
  }
  else {
    if (ss.sep != false) {
      check_start_new_arg(ss_00);
    }
    if (dev_debug != false) {
      quote(pcVar18);
      __fprintf_chk(stderr,1,"expanding ${%s} into %s\n");
    }
    cVar3 = *pcVar18;
    while (cVar3 != '\0') {
      pcVar18 = pcVar18 + 1;
      splitbuf_append_byte(ss_00,cVar3);
      cVar3 = *pcVar18;
    }
  }
  pcVar18 = strchr((char *)ppcVar22,0x7d);
  ppcVar22 = (char **)(pcVar18 + 1);
LAB_00102a58:
  cVar3 = *(char *)ppcVar22;
  if (cVar3 == '\0') goto code_r0x00102a60;
  goto LAB_00102a08;
code_r0x00102a60:
  if (((char)uVar6 != '\0') || (ppcVar17 = local_128, (char)argc != '\0')) goto LAB_0010396a;
eos:
  splitbuf_append_byte(&ss,'\0');
  iVar5 = ss.argc;
  argv = ss.argv;
  if (ss.argc < 2) {
    *ss.argv = *ppcVar17;
  }
  else {
    ppcVar22 = ss.argv + 2;
    ppcVar8 = ss.argv + 1;
    do {
      ppcVar9 = ppcVar8 + 1;
      *ppcVar8 = *ppcVar8 + ss.half_alloc * 8 + (long)ss.argv;
      ppcVar8 = ppcVar9;
    } while (ppcVar22 + (ss.argc - 2) != ppcVar9);
    bVar23 = dev_debug != false;
    *ss.argv = *ppcVar17;
    if (bVar23) {
      pcVar18 = quote((char *)local_120);
      __fprintf_chk(stderr,1,"split -S:  %s\n",pcVar18);
      if (dev_debug != false) {
        pcVar18 = quote(argv[1]);
        __fprintf_chk(stderr,1," into:    %s\n",pcVar18);
      }
      if (iVar5 != 2) {
        do {
          if (dev_debug != false) {
            pcVar18 = quote(*ppcVar22);
            __fprintf_chk(stderr,1,"     &    %s\n",pcVar18);
          }
          ppcVar22 = ppcVar22 + 1;
        } while (argv + (ulong)(iVar5 - 3) + 3 != ppcVar22);
      }
    }
  }
  argc = iVar5 + local_12c;
  memcpy(argv + iVar5,ppcVar17 + (int)optind,(long)(local_12c + 1) << 3);
  optind = 0;
  goto LAB_0010292d;
LAB_0010383d:
  *(undefined *)&ss_00->argv = 0;
  pcVar18 = quote(ppcVar22[(int)optind]);
  uVar13 = dcgettext(0,"cannot set %s",5);
  piVar14 = __errno_location();
  error(0x7d,*piVar14,uVar13,pcVar18);
LAB_00103883:
  uVar13 = dcgettext(0,"failed to get signal action for signal %d",5);
  piVar14 = __errno_location();
  error(0x7d,*piVar14,uVar13,(ulong)pcVar18 & 0xffffffff);
  goto LAB_001038b2;
LAB_00103244:
  do {
    iVar5 = *(int *)((long)signals + lVar16);
    iVar21 = (int)pcVar18;
    if (iVar5 != 0) {
      uVar6 = sigaction(iVar21,(sigaction *)0x0,(sigaction *)&act);
      bVar23 = (iVar5 - 2U & 0xfffffffd) != 0;
      uVar11 = (ulong)uVar6;
      if (uVar6 == 0) {
LAB_00103279:
        act.__sigaction_handler = (ulong)(1 < iVar5 - 1U);
        uVar6 = sigaction(iVar21,(sigaction *)&act,(sigaction *)0x0);
        uVar11 = (ulong)uVar6;
        if ((uVar6 == 0) || (!bVar23)) goto LAB_00103225;
        uVar11 = dcgettext(0,"failed to set signal action for signal %d",5);
        piVar14 = __errno_location();
        error(0x7d,*piVar14,uVar11,pcVar18);
      }
      else {
        if (bVar23) goto LAB_00103883;
        if (uVar6 == 0) goto LAB_00103279;
LAB_00103225:
        if (dev_debug == false) goto LAB_00103232;
      }
      sig2str(iVar21,signame);
      if (dev_debug != false) {
        pcVar12 = "";
        pcVar19 = "IGNORE";
        if ((int)uVar11 != 0) {
          pcVar12 = " (failure ignored)";
        }
        if (iVar5 - 1U < 2) {
          pcVar19 = "DEFAULT";
        }
        __fprintf_chk(stderr,1,"Reset signal %s (%d) to %s%s\n",signame,pcVar18,pcVar19,pcVar12,
                      extraout_RDX_00);
      }
    }
LAB_00103232:
    pcVar18 = (char *)(ulong)(iVar21 + 1U);
    lVar16 = lVar16 + 4;
  } while (iVar21 + 1U != 0x41);
  piVar14 = __errno_location();
  ppcVar22 = local_148;
  local_150 = piVar14;
  if (sig_mask_changed == false) {
LAB_00103364:
    if (report_signal_handling != false) {
      list_signal_handling();
    }
    if (local_140 != (char **)0x0) {
      if (dev_debug != false) {
        pcVar18 = quotearg_style(shell_escape_always_quoting_style,(char *)local_140);
        __fprintf_chk(stderr,1,"chdir:    %s\n",pcVar18);
      }
      iVar5 = chdir((char *)local_140);
      if (iVar5 != 0) {
        pcVar18 = quotearg_style(shell_escape_always_quoting_style,(char *)local_140);
        uVar13 = dcgettext(0,"cannot change directory to %s",5);
        error(0x7d,*local_150,uVar13,pcVar18);
        goto LAB_001038f5;
      }
    }
    if (dev_debug != false) {
      __fprintf_chk(stderr,1,"executing: %s\n",ppcVar22[(int)optind]);
      for (lVar16 = (long)(int)optind; (int)lVar16 < (int)local_150; lVar16 = lVar16 + 1) {
        if (dev_debug != false) {
          pcVar18 = quote(ppcVar22[lVar16]);
          __fprintf_chk(stderr,1,"   arg[%d]= %s\n",(int)lVar16 - optind,pcVar18);
        }
      }
    }
    execvp(ppcVar22[(int)optind],ppcVar22 + (int)optind);
    if (*local_150 == 2) {
      pcVar18 = quote(ppcVar22[(int)optind]);
      error(0,*local_150,"%s",pcVar18);
      pcVar18 = strpbrk(ppcVar22[(int)optind]," \t\n\v\f\r");
      if (pcVar18 == (char *)0x0) goto LAB_001037d5;
      uVar13 = dcgettext(0,"use -[v]S to pass options in shebang lines",5);
      error(0,0,uVar13);
      iVar5 = 0x7f;
    }
    else {
      pcVar18 = quote(ppcVar22[(int)optind]);
      error(0,*local_150,"%s",pcVar18);
      iVar5 = 0x7e;
    }
  }
  else {
    iVar21 = 1;
    sigemptyset((sigset_t *)&act);
    iVar5 = sigprocmask(0,(sigset_t *)0x0,(sigset_t *)&act);
    if (iVar5 != 0) {
LAB_001038f5:
      uVar13 = dcgettext(0,"failed to get signal process mask",5);
      error(0x7d,*local_150,uVar13);
      goto LAB_0010391e;
    }
    do {
      iVar5 = sigismember((sigset_t *)&block_signals,iVar21);
      if (iVar5 == 0) {
        iVar5 = sigismember((sigset_t *)&unblock_signals,iVar21);
        if (iVar5 != 0) {
          pcVar18 = "UNBLOCK";
          sigdelset((sigset_t *)&act,iVar21);
          goto LAB_0010370f;
        }
      }
      else {
        pcVar18 = "BLOCK";
        sigaddset((sigset_t *)&act,iVar21);
LAB_0010370f:
        if ((dev_debug != false) && (sig2str(iVar21,signame), dev_debug != false)) {
          __fprintf_chk(stderr,1,"signal %s (%d) mask set to %s\n",signame,iVar21,pcVar18);
        }
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 != 0x41);
    iVar5 = sigprocmask(2,(sigset_t *)&act,(sigset_t *)0x0);
    if (iVar5 == 0) goto LAB_00103364;
    uVar13 = dcgettext(0,"failed to set signal process mask",5);
    error(0x7d,*local_150,uVar13);
LAB_001037d5:
    iVar5 = 0x7f;
  }
LAB_001033f8:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
LAB_001038b2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

