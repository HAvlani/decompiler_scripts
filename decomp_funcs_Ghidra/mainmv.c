
int main(int argc,char **argv)

{
  char **ppcVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  _Bool _Var6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 uVar11;
  int *piVar12;
  char *pcVar13;
  long lVar14;
  int iVar15;
  long in_FS_OFFSET;
  bool bVar16;
  char *local_168;
  char *local_158;
  int local_14c;
  char *dest_relname;
  cp_options x;
  stat sb;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdin);
  cp_options_default(&x);
  x._48_8_ = 0x10000000101;
  x._56_2_ = 1;
  x.reflink_mode = REFLINK_AUTO;
  x._28_4_ = 0x1010100;
  x.explicit_no_preserve_mode = false;
  x.set_security_context = (selabel_handle *)0x0;
  x.symbolic_link = false;
  x.dereference = DEREF_NEVER;
  x.interactive = I_UNSPECIFIED;
  x.sparse_mode = SPARSE_AUTO;
  x._16_8_ = 0;
  x._24_2_ = 1;
  iVar8 = isatty(0);
  x.open_dangling_dest_symlink = false;
  x.stdin_tty = iVar8 != 0;
  bVar5 = false;
  bVar3 = false;
  x.update = false;
  x.verbose = false;
  bVar4 = false;
  x.dest_info = (Hash_table *)0x0;
  x.src_info = (Hash_table *)0x0;
  local_168 = (char *)0x0;
  local_158 = (char *)0x0;
  pcVar13 = (char *)0x0;
  pcVar9 = local_168;
switchD_00103f40_caseD_5a:
  local_168 = pcVar9;
  iVar8 = getopt_long(argc,argv,"bfint:uvS:TZ",long_options,0);
  if (iVar8 != -1) {
    if (iVar8 < 0x81) {
      if (0x52 < iVar8) goto code_r0x00103f39;
      if (iVar8 == -0x83) {
        version_etc(stdout,"mv","GNU coreutils",Version,"Mike Parker","David MacKenzie",
                    "Jim Meyering",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar8 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
    }
    goto switchD_00103f40_caseD_55;
  }
  iVar8 = argc - optind;
  argv = argv + optind;
  if (iVar8 <= (int)(uint)(pcVar13 == (char *)0x0)) {
    if (iVar8 == 1) goto LAB_001043aa;
    pcVar13 = "missing file operand";
    goto LAB_0010427b;
  }
  sb.st_mode = 0;
  if (bVar3) {
    if (pcVar13 == (char *)0x0) {
      if (iVar8 < 3) goto LAB_001041be;
      pcVar13 = quotearg_style(shell_escape_always_quoting_style,argv[2]);
      pcVar9 = "extra operand %s";
      goto LAB_001043c7;
    }
    uVar11 = dcgettext(0,"cannot combine --target-directory (-t) and --no-target-directory (-T)",5);
    error(1,0,uVar11);
    goto LAB_00104439;
  }
  if (pcVar13 == (char *)0x0) {
    pcVar13 = argv[(long)iVar8 + -1];
    if ((iVar8 == 2) && (x.rename_errno = renameatu(-100,*argv,-100,pcVar13,1), x.rename_errno != 0)
       ) {
      piVar12 = __errno_location();
      x.rename_errno = *piVar12;
    }
    if (x.rename_errno == 0) {
LAB_001041be:
      local_14c = -100;
      pcVar13 = (char *)0x0;
      goto LAB_0010408a;
    }
    local_14c = target_directory_operand(pcVar13,&sb);
    if (local_14c == -1) {
      if (2 < iVar8) {
        piVar12 = __errno_location();
        iVar8 = *piVar12;
        pcVar9 = quotearg_style(shell_escape_always_quoting_style,pcVar13);
        uVar11 = dcgettext(0,"target %s",5);
        error(1,iVar8,uVar11,pcVar9);
        goto LAB_00104347;
      }
      goto LAB_001041be;
    }
    x.rename_errno = -1;
    iVar8 = iVar8 + -1;
    if ((bVar4) && (iVar8 != 0)) {
LAB_0010423c:
      lVar14 = 0;
      do {
        ppcVar1 = argv + lVar14;
        lVar14 = lVar14 + 1;
        strip_trailing_slashes(*ppcVar1);
      } while ((int)lVar14 < iVar8);
    }
  }
  else {
    local_14c = target_directory_operand(pcVar13,&sb);
    if (local_14c == -1) {
LAB_00104347:
      pcVar13 = quotearg_style(shell_escape_always_quoting_style,pcVar13);
      argv = (char **)dcgettext(0,"target directory %s",5);
      piVar12 = __errno_location();
      error(1,*piVar12,argv,pcVar13);
      goto LAB_00104386;
    }
LAB_0010408a:
    if (bVar4) goto LAB_0010423c;
  }
  if (x.interactive == I_ALWAYS_NO) {
    x.update = false;
    if (bVar5) {
      pcVar13 = "options --backup and --no-clobber are mutually exclusive";
LAB_0010427b:
      uVar11 = dcgettext(0,pcVar13,5);
      error(0,0,uVar11);
switchD_00103f40_caseD_55:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
LAB_001041de:
    x.backup_type = no_backups;
  }
  else {
    if (!bVar5) goto LAB_001041de;
    pcVar9 = (char *)dcgettext(0,"backup type",5);
    x.backup_type = xget_version(pcVar9,local_168);
  }
  set_simple_backup_suffix(local_158);
  hash_init();
  if (pcVar13 == (char *)0x0) {
    x.last_file = true;
    bVar7 = do_move(*argv,argv[1],-100,argv[1],&x);
  }
  else {
    if (iVar8 < 2) {
      if (iVar8 != 1) {
        bVar7 = 1;
        goto LAB_0010417b;
      }
    }
    else {
      dest_info_init(&x);
    }
    iVar15 = 0;
    bVar7 = 1;
    do {
      pcVar9 = *argv;
      iVar15 = iVar15 + 1;
      x.last_file = iVar15 == iVar8;
      argv = argv + 1;
      pcVar10 = last_component(pcVar9);
      pcVar10 = file_name_concat(pcVar13,pcVar10,&dest_relname);
      strip_trailing_slashes(dest_relname);
      _Var6 = do_move(pcVar9,pcVar10,local_14c,dest_relname,&x);
      bVar7 = bVar7 & _Var6;
      rpl_free(pcVar10);
    } while (iVar15 < iVar8);
  }
LAB_0010417b:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)(bVar7 ^ 1);
  }
LAB_00104439:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00103f39:
  pcVar9 = local_168;
  switch(iVar8) {
  case 0x53:
    local_158 = optarg;
    bVar5 = true;
    goto switchD_00103f40_caseD_5a;
  case 0x54:
    bVar3 = true;
    goto switchD_00103f40_caseD_5a;
  default:
    goto switchD_00103f40_caseD_55;
  case 0x5a:
    goto switchD_00103f40_caseD_5a;
  case 0x62:
    bVar5 = true;
    pcVar9 = optarg;
    if (optarg == (char *)0x0) {
      pcVar9 = local_168;
    }
    goto switchD_00103f40_caseD_5a;
  case 0x66:
    x.interactive = I_ALWAYS_YES;
    goto switchD_00103f40_caseD_5a;
  case 0x69:
    x.interactive = I_ASK_USER;
    goto switchD_00103f40_caseD_5a;
  case 0x6e:
    x.interactive = I_ALWAYS_NO;
    goto switchD_00103f40_caseD_5a;
  case 0x74:
    bVar16 = pcVar13 != (char *)0x0;
    pcVar13 = optarg;
    if (bVar16) {
LAB_00104386:
      uVar11 = dcgettext(0,"multiple target directories specified",5);
      error(1,0,uVar11);
LAB_001043aa:
      pcVar13 = quotearg_style(shell_escape_always_quoting_style,*argv);
      pcVar9 = "missing destination file operand after %s";
LAB_001043c7:
      uVar11 = dcgettext(0,pcVar9,5);
      error(0,0,uVar11,pcVar13);
      goto switchD_00103f40_caseD_55;
    }
    goto switchD_00103f40_caseD_5a;
  case 0x75:
    x.update = true;
    goto switchD_00103f40_caseD_5a;
  case 0x76:
    x.verbose = true;
    goto switchD_00103f40_caseD_5a;
  case 0x80:
    bVar4 = true;
    goto switchD_00103f40_caseD_5a;
  }
}

