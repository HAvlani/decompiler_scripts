
int main(int argc,char **argv)

{
  interactive_type iVar1;
  bool bVar2;
  _Bool _Var3;
  int iVar4;
  uint uVar5;
  RM_status RVar6;
  ptrdiff_t pVar7;
  char *pcVar8;
  undefined8 uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  char *pcVar16;
  long in_FS_OFFSET;
  bool bVar17;
  bool bVar18;
  byte bVar19;
  undefined8 uVar20;
  rm_options x;
  stat st;
  
  bVar19 = 0;
  pcVar16 = (char *)0x1;
  lVar12 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils");
  textdomain("coreutils");
  atexit(close_stdin);
  x.ignore_missing_files = false;
  x.interactive = RMI_SOMETIMES;
  x.one_file_system = false;
  x.recursive = false;
  x.remove_empty_directories = false;
  x.root_dev_ino = (dev_ino *)0x0;
  x.preserve_all_root = false;
  iVar4 = isatty(0);
  x.stdin_tty = iVar4 != 0;
  bVar2 = false;
  x.verbose = false;
  x.require_restore_cwd = false;
LAB_001029b0:
  uVar20 = 0x1029cc;
  iVar4 = getopt_long(argc,argv,"dfirvIR",long_opts,0);
  pcVar8 = optarg;
  if (iVar4 != -1) {
    if (0x84 < iVar4) {
switchD_001029f4_caseD_4a:
      lVar12 = 1;
      goto LAB_00102a01;
    }
    if (iVar4 < 0x49) {
      if (iVar4 == -0x83) {
        version_etc(stdout,"rm","GNU coreutils",Version,"Paul Rubin","David MacKenzie",
                    "Richard M. Stallman","Jim Meyering",0,uVar20);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_001029f4_caseD_4a;
    }
    bVar17 = 0xffef34df < (&switchD_001029f4::switchdataD_0010cb20)[iVar4 - 0x49];
    bVar18 = (&switchD_001029f4::switchdataD_0010cb20)[iVar4 - 0x49] == 0xffef34e0;
    switch(iVar4) {
    case 0x49:
switchD_001029f4_caseD_49:
      x.interactive = RMI_SOMETIMES;
      bVar2 = true;
      x.ignore_missing_files = false;
      break;
    default:
      goto switchD_001029f4_caseD_4a;
    case 0x52:
    case 0x72:
      x.recursive = true;
      break;
    case 100:
      x.remove_empty_directories = true;
      break;
    case 0x66:
      x.interactive = RMI_NEVER;
      bVar2 = false;
      x.ignore_missing_files = true;
      break;
    case 0x76:
      x.verbose = true;
      break;
    case 0x80:
      if (optarg != (char *)0x0) {
        pVar7 = __xargmatch_internal
                          ("--interactive",optarg,interactive_args,interactive_types,4,argmatch_die,
                           true);
        iVar1 = interactive_types[pVar7];
        if (iVar1 == interactive_once) goto switchD_001029f4_caseD_49;
        if (iVar1 != interactive_always) {
          if (iVar1 == interactive_never) {
            x.interactive = RMI_NEVER;
            bVar2 = false;
          }
          break;
        }
      }
    case 0x69:
      x.interactive = RMI_ALWAYS;
      bVar2 = false;
      x.ignore_missing_files = false;
      break;
    case 0x81:
      x.one_file_system = true;
      break;
    case 0x82:
      lVar11 = 0x13;
      pbVar14 = (byte *)argv[(long)optind + -1];
      pbVar15 = (byte *)"--no-preserve-root";
      do {
        if (lVar11 == 0) break;
        lVar11 = lVar11 + -1;
        bVar17 = *pbVar14 < *pbVar15;
        bVar18 = *pbVar14 == *pbVar15;
        pbVar14 = pbVar14 + (ulong)bVar19 * -2 + 1;
        pbVar15 = pbVar15 + (ulong)bVar19 * -2 + 1;
      } while (bVar18);
      if ((!bVar17 && !bVar18) != bVar17) {
        uVar20 = dcgettext(0,"you may not abbreviate the --no-preserve-root option",5);
        error(1,0,uVar20);
        goto LAB_00102e28;
      }
      pcVar16 = (char *)0x0;
      break;
    case 0x83:
      if (optarg == (char *)0x0) {
        pcVar16 = (char *)0x1;
      }
      else {
        iVar4 = strcmp(optarg,"all");
        pcVar16 = pcVar8;
        if (iVar4 != 0) {
LAB_00102e28:
          pcVar16 = quotearg_style(shell_escape_always_quoting_style,pcVar16);
          uVar20 = dcgettext(0,"unrecognized --preserve-root argument: %s",5);
          error(1,0,uVar20,pcVar16);
          goto LAB_00102e5f;
        }
        x.preserve_all_root = true;
        pcVar16 = (char *)0x1;
      }
      break;
    case 0x84:
      goto switchD_001029f4_caseD_84;
    }
    goto LAB_001029b0;
  }
  if (optind < argc) {
    if (((x.recursive != false) && ((char)pcVar16 != '\0')) &&
       (x.root_dev_ino = get_root_dev_ino(&main::lexical_block_3::dev_ino_buf),
       x.root_dev_ino == (dev_ino *)0x0)) {
      pcVar16 = quotearg_style(shell_escape_always_quoting_style,"/");
      uVar20 = dcgettext(0,"failed to get attributes of %s",5);
      piVar10 = __errno_location();
      error(1,*piVar10,uVar20,pcVar16);
      goto LAB_00102dff;
    }
    pcVar16 = program_name;
    lVar11 = (long)optind;
    if (bVar2) {
      uVar13 = (ulong)(argc - optind);
      if (x.recursive == false) {
        if (uVar13 < 4) goto LAB_00102cae;
        uVar20 = dcngettext(0,"%s: remove %lu argument? ","%s: remove %lu arguments? ",uVar13,5);
      }
      else {
        uVar20 = dcngettext(0,"%s: remove %lu argument recursively? ",
                            "%s: remove %lu arguments recursively? ",uVar13,5);
      }
      __fprintf_chk(stderr,1,uVar20,pcVar16,uVar13);
      _Var3 = yesno();
      if (_Var3 == false) goto LAB_00102bfd;
    }
LAB_00102cae:
    RVar6 = rm(argv + lVar11,&x);
    uVar5 = (uint)(RVar6 == RM_ERROR);
    if (2 < RVar6 + 0xfffffffe) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("VALID_STATUS (status)","src/rm.c",0x173,"main");
    }
  }
  else {
    if (x.ignore_missing_files == false) {
LAB_00102e5f:
      uVar20 = dcgettext(0,"missing operand",5);
      error(0,0,uVar20);
LAB_00102d98:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
LAB_00102bfd:
    uVar5 = 0;
  }
  if (lVar12 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
LAB_00102dff:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_001029f4_caseD_84:
  x.stdin_tty = true;
  goto LAB_001029b0;
LAB_00102a01:
  if (argc <= (int)lVar12) goto LAB_00102d98;
  pcVar16 = argv[lVar12];
  if (((*pcVar16 == '-') && (pcVar16[1] != '\0')) &&
     (iVar4 = __lxstat(1,pcVar16,(stat *)&st), iVar4 == 0)) {
    pcVar8 = quotearg_style(shell_escape_always_quoting_style,pcVar16);
    uVar20 = quotearg_n_style(1,3,pcVar16);
    pcVar16 = *argv;
    uVar9 = dcgettext(0,"Try \'%s ./%s\' to remove the file %s.\n",5);
    __fprintf_chk(stderr,1,uVar9,pcVar16,uVar20,pcVar8);
    goto LAB_00102d98;
  }
  lVar12 = lVar12 + 1;
  goto LAB_00102a01;
}

