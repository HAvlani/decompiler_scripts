
int main(int argc,char **argv)

{
  long lVar1;
  bool bVar2;
  char *pcVar3;
  _Bool _Var4;
  int iVar5;
  backup_type bVar6;
  char *pcVar7;
  ptrdiff_t pVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined uVar11;
  long in_FS_OFFSET;
  char *local_c8;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  cp_options x;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdin);
  selinux_enabled = false;
  cp_options_default(&x);
  x.explicit_no_preserve_mode = false;
  x.reflink_mode = REFLINK_AUTO;
  x.interactive = I_UNSPECIFIED;
  x.sparse_mode = SPARSE_AUTO;
  x._28_4_ = 0;
  x.dereference = DEREF_UNDEFINED;
  x._16_8_ = 0x100000000;
  x._24_2_ = 0;
  x.set_security_context = (selabel_handle *)0x0;
  x.preserve_links = false;
  x.data_copy_required = true;
  x.require_preserve = false;
  x.preserve_security_context = false;
  x.require_preserve_context = false;
  x.preserve_xattr = false;
  x.require_preserve_xattr = false;
  x.reduce_diagnostics = false;
  x.recursive = false;
  x.set_mode = false;
  x.symbolic_link = false;
  x.update = false;
  x.verbose = false;
  x.stdin_tty = false;
  pcVar7 = getenv("POSIXLY_CORRECT");
  local_c8 = (char *)0x0;
  x.dest_info = (Hash_table *)0x0;
  x.open_dangling_dest_symlink = pcVar7 != (char *)0x0;
  x.src_info = (Hash_table *)0x0;
  local_a8 = (char *)0x0;
  local_b8 = (char *)0x0;
  local_b0 = (char *)0x0;
  bVar2 = false;
  _Var4 = false;
  uVar11 = 0;
  pcVar7 = local_b8;
  pcVar3 = local_a8;
LAB_00103e8b:
  local_a8 = pcVar3;
  local_b8 = pcVar7;
  iVar5 = getopt_long(argc,argv,"abdfHilLnprst:uvxPRS:TZ",long_opts,0);
  if (iVar5 != -1) {
    if (0x88 < iVar5) goto switchD_00103ed7_caseD_49;
    if (iVar5 < 0x48) {
      if (iVar5 == -0x83) {
        version_etc(stdout,"cp","GNU coreutils",Version,"Torbjorn Granlund","David MacKenzie",
                    "Jim Meyering",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar5 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00103ed7_caseD_49;
    }
    pcVar7 = local_b8;
    pcVar3 = local_a8;
    switch(iVar5) {
    case 0x48:
      x.dereference = DEREF_COMMAND_LINE_ARGUMENTS;
      break;
    default:
      goto switchD_00103ed7_caseD_49;
    case 0x4c:
      x.dereference = DEREF_ALWAYS;
      break;
    case 0x50:
      x.dereference = DEREF_NEVER;
      break;
    case 0x52:
    case 0x72:
      x.recursive = true;
      break;
    case 0x53:
      local_b0 = optarg;
      bVar2 = true;
      break;
    case 0x54:
      _Var4 = true;
      break;
    case 0x5a:
      if (selinux_enabled == false) {
        if (optarg != (char *)0x0) {
          uVar9 = dcgettext(0,"warning: ignoring --context; it requires an SELinux-enabled kernel",5
                           );
          error(0,0,uVar9);
        }
      }
      else {
        pcVar3 = optarg;
        if (optarg == (char *)0x0) {
          piVar10 = __errno_location();
          *piVar10 = 0x5f;
          x.set_security_context = (selabel_handle *)0x0;
          uVar9 = dcgettext(0,"warning: ignoring --context",5);
          error(0,*piVar10,uVar9);
          pcVar3 = local_a8;
        }
      }
      break;
    case 0x61:
      x.dereference = DEREF_NEVER;
      x.preserve_links = true;
      x._28_2_ = CONCAT11(1,x.one_file_system);
      x._28_4_ = CONCAT22(0x101,x._28_2_);
      x.require_preserve = true;
      if (selinux_enabled != false) {
        x.preserve_security_context = true;
      }
      x.preserve_xattr = true;
      x.reduce_diagnostics = true;
      x.recursive = true;
      break;
    case 0x62:
      bVar2 = true;
      pcVar7 = optarg;
      if (optarg == (char *)0x0) {
        pcVar7 = local_b8;
      }
      break;
    case 100:
      x.preserve_links = true;
      x.dereference = DEREF_NEVER;
      break;
    case 0x66:
      x._16_7_ = CONCAT16(1,x._16_6_);
      x._16_8_ = x._16_8_ & 0xff00000000000000 | (ulong)x._16_7_;
      break;
    case 0x69:
      x.interactive = I_ASK_USER;
      break;
    case 0x6c:
      x._16_8_ = CONCAT17(1,x._16_7_);
      break;
    case 0x6e:
      x.interactive = I_ALWAYS_NO;
      break;
    case 0x73:
      x.symbolic_link = true;
      break;
    case 0x74:
      if (local_c8 != (char *)0x0) goto LAB_001044c6;
      local_c8 = optarg;
      break;
    case 0x75:
      x.update = true;
      break;
    case 0x76:
      x.verbose = true;
      break;
    case 0x78:
      x._28_4_ = CONCAT31(x._29_3_,1);
      break;
    case 0x80:
      x.data_copy_required = false;
      break;
    case 0x81:
      uVar11 = 1;
      break;
    case 0x82:
      decode_preserve_arg(optarg,&x,0);
      break;
    case 0x83:
      parents_option = true;
      break;
    case 0x84:
      if (optarg != (char *)0x0) {
        decode_preserve_arg(optarg,&x,1);
        x.require_preserve = true;
        break;
      }
    case 0x70:
      x._28_2_ = CONCAT11(1,x.one_file_system);
      x._28_4_ = CONCAT22(0x101,x._28_2_);
      x.require_preserve = true;
      break;
    case 0x85:
      if (optarg == (char *)0x0) {
        x.reflink_mode = REFLINK_ALWAYS;
      }
      else {
        pVar8 = __xargmatch_internal
                          ("--reflink",optarg,reflink_type_string,reflink_type,4,argmatch_die,true);
        x.reflink_mode = reflink_type[pVar8];
      }
      break;
    case 0x86:
      pVar8 = __xargmatch_internal
                        ("--sparse",optarg,sparse_type_string,sparse_type,4,argmatch_die,true);
      x.sparse_mode = sparse_type[pVar8];
      break;
    case 0x87:
      remove_trailing_slashes = true;
      break;
    case 0x88:
      goto switchD_00103ed7_caseD_88;
    }
    goto LAB_00103e8b;
  }
  if ((x.hard_link != false) && (x.symbolic_link != false)) {
    pcVar7 = "cannot make both hard and symbolic links";
    goto LAB_00104312;
  }
  if (x.interactive == I_ALWAYS_NO) {
    x.update = false;
    if (bVar2) goto LAB_001044ea;
LAB_0010435a:
    bVar6 = no_backups;
    if ((x.reflink_mode != REFLINK_ALWAYS) || (x.sparse_mode == SPARSE_AUTO)) {
LAB_00104249:
      x.backup_type = bVar6;
      set_simple_backup_suffix(local_b0);
      if (x.dereference == DEREF_UNDEFINED) goto LAB_001043ad;
      do {
        if (x.recursive != false) goto LAB_001043c3;
        while (((ulong)local_a8 | (ulong)x.set_security_context) == 0) {
          if ((x.require_preserve_context == false) || (selinux_enabled != false))
          goto LAB_0010429b;
LAB_00104389:
          uVar9 = dcgettext(0,"cannot preserve security context without an SELinux-enabled kernel",5
                           );
          error(1,0,uVar9);
LAB_001043ad:
          if ((x.recursive == false) || (x.hard_link != false)) goto LAB_001043f8;
          x.dereference = DEREF_NEVER;
LAB_001043c3:
          x._16_5_ = CONCAT14(uVar11,x.mode);
          x._16_8_ = x._16_8_ & 0xffffff0000000000 | (ulong)x._16_5_;
        }
        if (x.require_preserve_context == false) {
          x.preserve_security_context = false;
LAB_0010428f:
          if (local_a8 == (char *)0x0) {
LAB_0010429b:
            if (x.require_preserve_xattr == false) {
              hash_init();
              _Var4 = do_copy(argc - optind,argv + optind,local_c8,_Var4,&x);
              if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                return (int)(_Var4 ^ 1);
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            uVar9 = dcgettext(0,
                              "cannot preserve extended attributes, cp is built without xattr support"
                              ,5);
            error(1,0,uVar9);
          }
          piVar10 = __errno_location();
          *piVar10 = 0x5f;
          pcVar7 = quote(local_a8);
          uVar9 = dcgettext(0,"failed to set default file creation context to %s",5);
          error(1,*piVar10,uVar9,pcVar7);
          goto LAB_001044c6;
        }
        if (x.preserve_security_context == false) {
          if (selinux_enabled == false) goto LAB_00104389;
          goto LAB_0010428f;
        }
        uVar9 = dcgettext(0,"cannot set target context and preserve it",5);
        error(1,0,uVar9);
LAB_001043f8:
        x.dereference = DEREF_ALWAYS;
      } while( true );
    }
  }
  else {
    if (!bVar2) goto LAB_0010435a;
    if ((x.reflink_mode != REFLINK_ALWAYS) || (x.sparse_mode == SPARSE_AUTO)) {
      pcVar7 = (char *)dcgettext(0,"backup type",5);
      bVar6 = xget_version(pcVar7,local_b8);
      goto LAB_00104249;
    }
  }
  pcVar7 = "--reflink can be used only with --sparse=auto";
LAB_00104312:
  uVar9 = dcgettext(0,pcVar7,5);
  error(0,0,uVar9);
switchD_00103ed7_caseD_49:
                    /* WARNING: Subroutine does not return */
  usage(1);
switchD_00103ed7_caseD_88:
  x._16_6_ = CONCAT15(1,x._16_5_);
  x._16_8_ = x._16_8_ & 0xffff000000000000 | (ulong)x._16_6_;
  goto LAB_00103e8b;
LAB_001044c6:
  uVar9 = dcgettext(0,"multiple target directories specified",5);
  error(1,0,uVar9);
LAB_001044ea:
  pcVar7 = "options --backup and --no-clobber are mutually exclusive";
  goto LAB_00104312;
}

