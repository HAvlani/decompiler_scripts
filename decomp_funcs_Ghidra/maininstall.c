
/* WARNING: Could not reconcile some variable overlaps */

int main(int argc,char **argv)

{
  long lVar1;
  char **ppcVar2;
  bool bVar3;
  bool bVar4;
  _Bool _Var5;
  int iVar6;
  backup_type bVar7;
  uint uVar8;
  uint uVar9;
  strtol_error sVar10;
  mode_change *changes;
  passwd *ppVar11;
  group *pgVar12;
  char *base;
  char **ppcVar13;
  undefined8 uVar14;
  int *piVar15;
  uint *puVar16;
  char *pcVar17;
  char *pcVar18;
  char **file;
  long in_FS_OFFSET;
  bool bVar19;
  undefined8 local_180;
  char **local_178;
  char **local_170;
  char **local_168;
  undefined8 local_160;
  char **local_150;
  char *to_relname;
  cp_options x;
  stat sb;
  
  bVar3 = false;
  puVar16 = &switchD_00104187::switchdataD_00118368;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  selinux_enabled = 0;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdin);
  cp_options_default(&x);
  x._0_8_ = 0x400000000;
  x._8_8_ = 0x200000004;
  x.verbose = false;
  x.stdin_tty = false;
  x.reflink_mode = REFLINK_AUTO;
  x._28_4_ = 0;
  x.explicit_no_preserve_mode = false;
  x._16_8_ = 0x10100000180;
  x._24_2_ = 0x100;
  x.set_security_context = (selabel_handle *)0x0;
  x._48_8_ = 0x100;
  x._56_4_ = 0x100;
  x.open_dangling_dest_symlink = false;
  x.dest_info = (Hash_table *)0x0;
  x.src_info = (Hash_table *)0x0;
  owner_name = (char *)0x0;
  group_name = (char *)0x0;
  strip_files = false;
  dir_arg = false;
  umask(0);
  local_160 = (cp_options *)((ulong)local_160 & 0xffffffffffffff00);
  local_150 = (char **)0x0;
  bVar4 = false;
  local_178 = (char **)0x0;
  local_168 = (char **)0x0;
  local_180 = (char **)((ulong)local_180 & 0xffffffffffffff00);
  local_170 = (char **)0x0;
  file = (char **)0x0;
  ppcVar13 = local_178;
  ppcVar2 = local_150;
switchD_00104187_caseD_63:
  local_150 = ppcVar2;
  local_178 = ppcVar13;
  iVar6 = getopt_long(argc,argv,"bcCsDdg:m:o:pt:TvS:Z");
  if (iVar6 == -1) {
    if (dir_arg != false) {
      if (strip_files != false) {
        uVar14 = dcgettext(0,"the strip option may not be used when installing a directory",5);
        error(1,0,uVar14);
        goto LAB_00104ab3;
      }
      if (file != (char **)0x0) goto LAB_00104a66;
    }
    bVar7 = no_backups;
    if ((char)local_180 != '\0') goto LAB_00104589;
    goto LAB_00104385;
  }
  if (0x81 < iVar6) goto switchD_00104187_caseD_45;
  if (iVar6 < 0x43) {
    if (iVar6 == -0x83) {
      version_etc(stdout,"install","GNU coreutils",Version,"David MacKenzie",0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar6 == -0x82) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
    goto switchD_00104187_caseD_45;
  }
  ppcVar13 = local_178;
  ppcVar2 = local_150;
  switch(iVar6) {
  case 0x43:
    copy_only_if_needed = true;
    goto switchD_00104187_caseD_63;
  case 0x44:
    bVar4 = true;
    goto switchD_00104187_caseD_63;
  default:
    goto switchD_00104187_caseD_45;
  case 0x53:
    local_168 = optarg;
    local_180 = (char **)CONCAT71(local_180._1_7_,1);
    goto switchD_00104187_caseD_63;
  case 0x54:
    bVar3 = true;
    goto switchD_00104187_caseD_63;
  case 0x5a:
    if (selinux_enabled != 0) {
      use_default_selinux_context = false;
      ppcVar2 = optarg;
      if (optarg == (char **)0x0) {
        x.set_security_context = get_labeling_handle();
        ppcVar2 = local_150;
      }
      goto switchD_00104187_caseD_63;
    }
    if (optarg == (char **)0x0) goto switchD_00104187_caseD_63;
    pcVar17 = "warning: ignoring --context; it requires an SELinux-enabled kernel";
    break;
  case 0x62:
    local_180 = (char **)CONCAT71(local_180._1_7_,1);
    ppcVar13 = optarg;
    if (optarg == (char **)0x0) {
      ppcVar13 = local_178;
    }
  case 99:
    goto switchD_00104187_caseD_63;
  case 100:
    dir_arg = true;
    goto switchD_00104187_caseD_63;
  case 0x67:
    group_name = (char *)optarg;
    goto switchD_00104187_caseD_63;
  case 0x6d:
    local_170 = optarg;
    goto switchD_00104187_caseD_63;
  case 0x6f:
    owner_name = (char *)optarg;
    goto switchD_00104187_caseD_63;
  case 0x70:
    x._28_4_ = CONCAT13(1,x._28_3_);
    goto switchD_00104187_caseD_63;
  case 0x73:
    strip_files = true;
    signal(0x11,(__sighandler_t)0x0);
    goto switchD_00104187_caseD_63;
  case 0x74:
    bVar19 = file != (char **)0x0;
    file = optarg;
    if (bVar19) goto LAB_00104a42;
    goto switchD_00104187_caseD_63;
  case 0x76:
    x.verbose = true;
    goto switchD_00104187_caseD_63;
  case 0x80:
    pcVar17 = "WARNING: ignoring --preserve-context; this kernel is not SELinux-enabled";
    if (selinux_enabled != 0) {
      x._48_4_ = CONCAT13(1,x._48_3_);
      x._48_8_ = x._48_8_ & 0xffffffff00000000 | (ulong)x._48_4_;
      use_default_selinux_context = false;
      goto switchD_00104187_caseD_63;
    }
    break;
  case 0x81:
    strip_program = xstrdup((char *)optarg);
    local_160 = (cp_options *)CONCAT71(local_160._1_7_,1);
    goto switchD_00104187_caseD_63;
  }
  uVar14 = dcgettext(0,pcVar17,5);
  error(0,0,uVar14);
  goto switchD_00104187_caseD_63;
LAB_00104385:
  x._0_8_ = x._0_8_ & 0xffffffff00000000 | (ulong)bVar7;
  set_simple_backup_suffix((char *)local_168);
  if (x.preserve_security_context == false) goto code_r0x001043a1;
  if (((ulong)local_150 | (ulong)x.set_security_context) == 0) goto LAB_001043ad;
  uVar14 = dcgettext(0,"cannot set target context and preserve it",5);
  error(1,0,uVar14);
LAB_00104589:
  pcVar17 = (char *)dcgettext(0,"backup type",5);
  bVar7 = xget_version(pcVar17,(char *)local_178);
  goto LAB_00104385;
code_r0x001043a1:
  if (local_150 != (char **)0x0) {
LAB_00104b14:
    piVar15 = __errno_location();
    *piVar15 = 0x5f;
    pcVar17 = quote((char *)local_150);
    uVar14 = dcgettext(0,"failed to set default file creation context to %s",5);
    error(1,*piVar15,uVar14,pcVar17);
LAB_00104b56:
    pcVar17 = quotearg_style(shell_escape_always_quoting_style,*local_180);
    pcVar18 = "missing destination file operand after %s";
LAB_001047ce:
    uVar14 = dcgettext(0,pcVar18,5);
    error(0,0,uVar14,pcVar17);
    goto switchD_00104187_caseD_45;
  }
LAB_001043ad:
  argc = argc - optind;
  ppcVar13 = (char **)(ulong)(uint)argc;
  local_180 = argv + optind;
  if (argc <= (int)((uint)(file == (char **)0x0) & (dir_arg ^ 1))) {
LAB_00104ab3:
    if (argc == 1) goto LAB_00104b56;
    pcVar17 = "missing file operand";
    goto LAB_00104ac8;
  }
  if (bVar3) {
    if (file != (char **)0x0) {
      uVar14 = dcgettext(0,"cannot combine --target-directory (-t) and --no-target-directory (-T)",5
                        );
      error(1,0,uVar14);
      goto LAB_00104b14;
    }
    pcVar18 = (char *)0xffffff9c;
    if (argc < 3) goto LAB_001043ff;
    pcVar17 = quotearg_style(shell_escape_always_quoting_style,local_180[2]);
    pcVar18 = "extra operand %s";
    goto LAB_001047ce;
  }
  if (file == (char **)0x0) {
    pcVar18 = (char *)0xffffff9c;
    if (dir_arg == false) {
      ppcVar2 = (char **)local_180[(long)argc + -1];
      uVar8 = target_directory_operand((char *)ppcVar2,&sb);
      pcVar18 = (char *)(ulong)uVar8;
      if (uVar8 == 0xffffffff) {
        pcVar18 = (char *)0xffffff9c;
        if (2 < argc) {
          pcVar18 = quotearg_style(shell_escape_always_quoting_style,(char *)ppcVar2);
          uVar14 = dcgettext(0,"target %s",5);
          piVar15 = __errno_location();
          error(1,*piVar15,uVar14,pcVar18);
          goto LAB_001049cd;
        }
      }
      else {
        ppcVar13 = (char **)(ulong)(argc - 1);
        file = ppcVar2;
      }
    }
LAB_001043ff:
    if (local_170 != (char **)0x0) {
      changes = mode_compile((char *)local_170);
      if (changes == (mode_change *)0x0) {
        pcVar17 = quote((char *)local_170);
        uVar14 = dcgettext(0,"invalid mode %s",5);
        error(1,0,uVar14,pcVar17);
LAB_00104a42:
        uVar14 = dcgettext(0,"multiple target directories specified",5);
        error(1,0,uVar14);
LAB_00104a66:
        uVar14 = dcgettext(0,"target directory not allowed when installing a directory",5);
        error(1,0,uVar14);
        goto LAB_00104a8a;
      }
      mode = mode_adjust(0,false,0,changes,(mode_t *)0x0);
      dir_mode = mode_adjust(0,true,0,changes,&dir_mode_bits);
      rpl_free(changes);
    }
    if (((char)local_160 != '\0') && (strip_files == false)) {
      uVar14 = dcgettext(0,"WARNING: ignoring --strip-program option as -s option was not specified"
                         ,5);
      error(0,0,uVar14);
    }
    if (copy_only_if_needed != false) {
      if (x.preserve_timestamps == false) {
        pcVar17 = "options --compare (-C) and --strip are mutually exclusive";
        if (strip_files == false) {
          if ((mode & 0xffff0e00) != 0) {
            uVar14 = dcgettext(0,
                               "the --compare (-C) option is ignored when you specify a mode with non-permission bits"
                               ,5);
            error(0,0,uVar14);
          }
          goto LAB_001044ab;
        }
      }
      else {
        pcVar17 = "options --compare (-C) and --preserve-timestamps are mutually exclusive";
      }
LAB_00104ac8:
      uVar14 = dcgettext(0,pcVar17,5);
      error(0,0,uVar14);
switchD_00104187_caseD_45:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
LAB_001044ab:
    if (owner_name != (char *)0x0) {
      ppVar11 = getpwnam(owner_name);
      if (ppVar11 != (passwd *)0x0) {
        pcVar17 = (char *)(ulong)ppVar11->pw_uid;
LAB_001044cc:
        owner_id = (uid_t)pcVar17;
        endpwent();
        goto LAB_001044d7;
      }
      sVar10 = xstrtoumax(owner_name,(char **)0x0,0,(uintmax_t *)&to_relname,"");
      if ((sVar10 == LONGINT_OK) && (pcVar17 = to_relname, to_relname < (char *)0x100000000))
      goto LAB_001044cc;
      pcVar17 = quote(owner_name);
      uVar14 = dcgettext(0,"invalid user %s",5);
      error(1,0,uVar14,pcVar17);
LAB_001048ec:
      sVar10 = xstrtoumax(group_name,(char **)0x0,0,(uintmax_t *)&to_relname,"");
      if ((sVar10 == LONGINT_OK) && (pcVar17 = to_relname, to_relname < (char *)0x100000000)) {
LAB_001044f8:
        group_id = (gid_t)pcVar17;
        endgrent();
        goto LAB_00104503;
      }
      pcVar17 = quote(group_name);
      uVar14 = dcgettext(0,"invalid group %s",5);
      error(1,0,uVar14,pcVar17);
LAB_00104958:
      _Var5 = install_file_in_file(pcVar18,(char *)ppcVar13,-100,(char *)ppcVar13,&x);
      uVar8 = (uint)_Var5;
      goto LAB_0010474e;
    }
    owner_id = 0xffffffff;
LAB_001044d7:
    if (group_name != (char *)0x0) {
      pgVar12 = getgrnam(group_name);
      if (pgVar12 == (group *)0x0) goto LAB_001048ec;
      pcVar17 = (char *)(ulong)pgVar12->gr_gid;
      goto LAB_001044f8;
    }
    group_id = 0xffffffff;
LAB_00104503:
    if (dir_arg == false) goto LAB_00104622;
    uVar8 = savewd_process_files((int)ppcVar13,local_180,process_dir,&x);
  }
  else {
    uVar8 = target_directory_operand((char *)file,&sb);
    pcVar18 = (char *)(ulong)uVar8;
    if ((uVar8 != 0xffffffff) || ((piVar15 = __errno_location(), bVar4 && (*piVar15 == 2))))
    goto LAB_001043ff;
    quotearg_style(shell_escape_always_quoting_style,(char *)file);
    uVar14 = dcgettext(0,"failed to access %s",5);
    error(1,*piVar15,uVar14);
LAB_00104622:
    hash_init();
    if (file == (char **)0x0) {
      ppcVar13 = (char **)local_180[1];
      pcVar18 = *local_180;
      if (bVar4) {
        _Var5 = mkancesdirs_safe_wd(pcVar18,(char *)ppcVar13,&x,false);
        uVar8 = 0;
        if (_Var5 != false) goto LAB_00104958;
LAB_0010474e:
        uVar8 = uVar8 & 1;
      }
      else {
        _Var5 = install_file_in_file(pcVar18,(char *)ppcVar13,-100,(char *)ppcVar13,&x);
        uVar8 = (uint)_Var5;
      }
      uVar8 = uVar8 ^ 1;
    }
    else {
      dest_info_init(&x);
      if ((int)ppcVar13 == 0) {
        uVar8 = 0;
      }
      else {
        local_170 = &to_relname;
        puVar16 = (uint *)0x0;
        uVar8 = 0;
        local_168 = ppcVar13;
        local_160 = &x;
        do {
          pcVar17 = local_180[(long)puVar16];
          base = last_component(pcVar17);
          ppcVar13 = (char **)file_name_concat((char *)file,base,local_170);
          if ((int)pcVar18 == -1) {
            if ((((int)puVar16 == 0) && (bVar4)) &&
               (_Var5 = mkancesdirs_safe_wd(pcVar17,(char *)ppcVar13,local_160,true), _Var5 != false
               )) {
              uVar9 = open((char *)file,0x210000);
              if (-1 < (int)uVar9) {
                pcVar18 = (char *)(ulong)uVar9;
                goto LAB_0010465a;
              }
LAB_001049cd:
              pcVar17 = quotearg_style(shell_escape_always_quoting_style,(char *)ppcVar13);
              uVar14 = dcgettext(0,"cannot open %s",5);
              piVar15 = __errno_location();
              error(0,*piVar15,uVar14,pcVar17);
            }
            uVar8 = 1;
            rpl_free(ppcVar13);
          }
          else {
LAB_0010465a:
            _Var5 = install_file_in_file(pcVar17,(char *)ppcVar13,(int)pcVar18,to_relname,local_160)
            ;
            rpl_free(ppcVar13);
            if (_Var5 == false) {
              uVar8 = 1;
            }
          }
          puVar16 = (uint *)((long)puVar16 + 1);
        } while ((int)puVar16 < (int)local_168);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
LAB_00104a8a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

