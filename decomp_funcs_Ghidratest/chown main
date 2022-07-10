
int main(int argc,char **argv)

{
  long lVar1;
  bool bVar2;
  _Bool _Var3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  uint uVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  undefined8 uVar10;
  _Bool warn;
  uid_t uid;
  gid_t gid;
  uid_t required_uid;
  gid_t required_gid;
  Chown_option chopt;
  stat ref_stats;
  
  iVar5 = -1;
  pcVar9 = (char *)(long)argc;
  uVar8 = 0x10;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uid = 0xffffffff;
  gid = 0xffffffff;
  required_uid = 0xffffffff;
  required_gid = 0xffffffff;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  chopt_init(&chopt);
  bVar2 = false;
  while( true ) {
    uVar10 = 0x102a52;
    iVar4 = getopt_long((ulong)pcVar9 & 0xffffffff,argv,"HLPRcfhv");
    pcVar6 = reference_file;
    if (iVar4 == -1) break;
    if (0x84 < iVar4) goto switchD_00102a83_caseD_49;
    if (iVar4 < 0x48) {
      if (iVar4 == -0x83) {
        version_etc(stdout,"chown","GNU coreutils",Version,"David MacKenzie","Jim Meyering",0,uVar10
                   );
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00102a83_caseD_49;
    }
    switch(iVar4) {
    case 0x48:
      uVar8 = 0x11;
      break;
    default:
      goto switchD_00102a83_caseD_49;
    case 0x4c:
      uVar8 = 2;
      break;
    case 0x50:
      uVar8 = 0x10;
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
      pcVar6 = parse_user_spec_warn
                         (optarg,&required_uid,&required_gid,(char **)0x0,(char **)0x0,&warn);
      if (pcVar6 != (char *)0x0) {
        quote(optarg);
        error(warn ^ 1,0,"%s: %s",pcVar6);
      }
      break;
    case 0x82:
      bVar2 = false;
      break;
    case 0x83:
      bVar2 = true;
      break;
    case 0x84:
      reference_file = optarg;
    }
  }
  if (chopt.recurse == false) {
    uVar8 = 0x10;
  }
  else if (uVar8 == 0x10) {
    if (iVar5 == 1) {
      uVar10 = dcgettext(0,"-R --dereference requires either -H or -L",5);
      error(1,0,uVar10);
      goto LAB_00102e1d;
    }
    iVar5 = 0;
  }
  chopt.affect_symlink_referent = iVar5 != 0;
  iVar5 = optind;
  if (reference_file == (char *)0x0) {
    if (1 < argc - optind) {
      pcVar9 = parse_user_spec_warn(argv[optind],&uid,&gid,&chopt.user_name,&chopt.group_name,&warn)
      ;
      if (pcVar9 != (char *)0x0) {
        quote(argv[optind]);
        error(warn ^ 1,0,"%s: %s");
      }
      if ((chopt.user_name == (char *)0x0) && (chopt.group_name != (char *)0x0)) {
        chopt.user_name = xstrdup("");
      }
      optind = optind + 1;
LAB_00102c3e:
      if (((chopt.recurse == false) || (!bVar2)) ||
         (chopt.root_dev_ino = get_root_dev_ino(&main::lexical_block_4::dev_ino_buf),
         chopt.root_dev_ino != (dev_ino *)0x0)) {
        _Var3 = chown_files(argv + optind,uVar8 | 0x400,uid,gid,required_uid,required_gid,&chopt);
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          return (int)(_Var3 ^ 1);
        }
LAB_00102e1d:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      pcVar9 = quotearg_style(shell_escape_always_quoting_style,"/");
      argv = (char **)dcgettext(0,"failed to get attributes of %s",5);
      piVar7 = __errno_location();
      iVar5 = error(1,*piVar7,argv,pcVar9);
    }
LAB_00102da3:
    if ((int)pcVar9 <= iVar5) {
      uVar10 = dcgettext(0,"missing operand",5);
      error(0,0,uVar10);
      goto switchD_00102a83_caseD_49;
    }
  }
  else {
    if (argc - optind < 1) goto LAB_00102da3;
    iVar5 = __xstat(1,reference_file,(stat *)&ref_stats);
    if (iVar5 == 0) {
      uid = ref_stats.st_uid;
      gid = ref_stats.st_gid;
      chopt.user_name = uid_to_name(ref_stats.st_uid);
      chopt.group_name = gid_to_name(ref_stats.st_gid);
      goto LAB_00102c3e;
    }
    pcVar9 = quotearg_style(shell_escape_always_quoting_style,pcVar6);
    argv = (char **)dcgettext(0,"failed to get attributes of %s",5);
    piVar7 = __errno_location();
    error(1,*piVar7,argv,pcVar9);
  }
  pcVar9 = quote(argv[(long)(pcVar9 + -1)]);
  uVar10 = dcgettext(0,"missing operand after %s",5);
  error(0,0,uVar10,pcVar9);
switchD_00102a83_caseD_49:
                    /* WARNING: Subroutine does not return */
  usage(1);
}

