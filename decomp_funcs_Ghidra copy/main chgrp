
int main(int argc,char **argv)

{
  long lVar1;
  bool bVar2;
  _Bool _Var3;
  int iVar4;
  int iVar5;
  strtol_error sVar6;
  group *pgVar7;
  char *pcVar8;
  int *piVar9;
  char *pcVar10;
  ulong uVar11;
  uint uVar12;
  long in_FS_OFFSET;
  undefined8 uVar13;
  uintmax_t tmp;
  Chown_option chopt;
  stat ref_stats;
  
  uVar12 = 0x10;
  iVar5 = -1;
  uVar11 = (ulong)argc;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  chopt_init(&chopt);
  bVar2 = false;
  while( true ) {
    uVar13 = 0x1029f3;
    iVar4 = getopt_long(uVar11 & 0xffffffff,argv,"HLPRcfhv");
    pcVar8 = reference_file;
    if (iVar4 == -1) break;
    if (0x83 < iVar4) goto switchD_00102a23_caseD_49;
    if (iVar4 < 0x48) {
      if (iVar4 == -0x83) {
        version_etc(stdout,"chgrp","GNU coreutils",Version,"David MacKenzie","Jim Meyering",0,uVar13
                   );
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00102a23_caseD_49;
    }
    switch(iVar4) {
    case 0x48:
      uVar12 = 0x11;
      break;
    default:
      goto switchD_00102a23_caseD_49;
    case 0x4c:
      uVar12 = 2;
      break;
    case 0x50:
      uVar12 = 0x10;
      break;
    case 0x52:
      chopt.recurse = true;
      break;
    case 99:
      chopt.verbosity = V_changes_only;
      break;
    case 0x66:
      chopt.force_silent = true;
      break;
    case 0x68:
      iVar5 = 0;
      break;
    case 0x76:
      chopt.verbosity = V_high;
      break;
    case 0x80:
      iVar5 = 1;
      break;
    case 0x81:
      bVar2 = false;
      break;
    case 0x82:
      bVar2 = true;
      break;
    case 0x83:
      reference_file = optarg;
    }
  }
  if (chopt.recurse == false) {
    uVar12 = 0x10;
LAB_00102b08:
    chopt.affect_symlink_referent = iVar5 != 0;
    iVar5 = optind;
    if (reference_file == (char *)0x0) {
      if (1 < argc - optind) {
        pcVar8 = argv[optind];
        optind = optind + 1;
        pcVar10 = reference_file;
        if (*pcVar8 != '\0') goto LAB_00102d33;
        while (ref_stats.st_gid = 0xffffffff, chopt.group_name = pcVar10, *pcVar8 != '\0') {
          pgVar7 = getgrnam(pcVar8);
          if (pgVar7 != (group *)0x0) {
            ref_stats.st_gid = pgVar7->gr_gid;
LAB_00102c31:
            endgrent();
            break;
          }
          sVar6 = xstrtoumax(pcVar8,(char **)0x0,10,&tmp,"");
          if ((sVar6 == LONGINT_OK) && (ref_stats.st_gid = (__gid_t)tmp, tmp < 0x100000000))
          goto LAB_00102c31;
          quote(pcVar8);
          uVar13 = dcgettext(0,"invalid group: %s",5);
          error(1,0,uVar13);
LAB_00102d33:
          pcVar10 = xstrdup(pcVar8);
        }
        goto LAB_00102b60;
      }
    }
    else if (0 < argc - optind) {
      iVar5 = __xstat(1,reference_file,(stat *)&ref_stats);
      pcVar10 = pcVar8;
      if (iVar5 != 0) goto LAB_00102d6c;
      chopt.group_name = gid_to_name(ref_stats.st_gid);
LAB_00102b60:
      if (((chopt.recurse == false) || (!bVar2)) ||
         (chopt.root_dev_ino = get_root_dev_ino(&main::lexical_block_3::dev_ino_buf),
         chopt.root_dev_ino != (dev_ino *)0x0)) {
        _Var3 = chown_files(argv + optind,uVar12 | 0x400,0xffffffff,ref_stats.st_gid,0xffffffff,
                            0xffffffff,&chopt);
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          return (int)(_Var3 ^ 1);
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      pcVar8 = quotearg_style(shell_escape_always_quoting_style,"/");
      uVar11 = dcgettext(0,"failed to get attributes of %s",5);
      piVar9 = __errno_location();
      iVar5 = error(1,*piVar9,uVar11,pcVar8);
    }
    if ((int)uVar11 <= iVar5) {
      uVar13 = dcgettext(0,"missing operand",5);
      error(0,0,uVar13);
      goto switchD_00102a23_caseD_49;
    }
  }
  else {
    if (uVar12 != 0x10) goto LAB_00102b08;
    pcVar10 = (char *)(ulong)(iVar5 - 1U);
    if (iVar5 - 1U != 0) {
      iVar5 = 0;
      goto LAB_00102b08;
    }
    uVar13 = dcgettext(0,"-R --dereference requires either -H or -L",5);
    error(1,0,uVar13);
LAB_00102d6c:
    pcVar8 = quotearg_style(shell_escape_always_quoting_style,pcVar10);
    uVar11 = dcgettext(0,"failed to get attributes of %s",5);
    piVar9 = __errno_location();
    error(1,*piVar9,uVar11,pcVar8);
  }
  pcVar8 = quote(argv[uVar11 - 1]);
  uVar13 = dcgettext(0,"missing operand after %s",5);
  error(0,0,uVar13,pcVar8);
switchD_00102a23_caseD_49:
                    /* WARNING: Subroutine does not return */
  usage(1);
}

