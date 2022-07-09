
int main(int argc,char **argv)

{
  long lVar1;
  anon_subr_int_char_ptr_char_ptr_void_ptr_for_make_ancestor_function *paVar2;
  int iVar3;
  mode_t mVar4;
  undefined8 uVar5;
  mode_change *changes;
  char *pcVar6;
  char *mode_string;
  long in_FS_OFFSET;
  undefined auVar7 [16];
  mkdir_options options;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  options.make_ancestor_function =
       (anon_subr_int_char_ptr_char_ptr_void_ptr_for_make_ancestor_function *)0x0;
  options._16_8_ = 0x1ff;
  options.set_security_context = (selabel_handle *)0x0;
  options.created_directory_format = (char *)0x0;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  pcVar6 = (char *)0x0;
  while (mode_string = pcVar6, iVar3 = getopt_long(argc,argv,"pm:vZ",longopts,0), iVar3 != -1) {
    pcVar6 = optarg;
    if (iVar3 != 0x6d) {
      pcVar6 = mode_string;
      if (iVar3 < 0x6e) {
        if (iVar3 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
        if (iVar3 != 0x5a) {
          if (iVar3 == -0x83) {
            version_etc(stdout,"mkdir","GNU coreutils",Version,"David MacKenzie",0);
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
          goto LAB_001029af;
        }
        if (optarg != (char *)0x0) {
          uVar5 = dcgettext(0,
                            "warning: ignoring --context; it requires an SELinux/SMACK-enabled kernel"
                            ,5);
          error(0,0,uVar5);
        }
      }
      else if (iVar3 == 0x70) {
        options.make_ancestor_function = make_ancestor;
      }
      else {
        if (iVar3 != 0x76) goto LAB_001029af;
        options.created_directory_format = (char *)dcgettext(0,"created directory %s",5);
      }
    }
  }
  if (optind == argc) {
    uVar5 = dcgettext(0,"missing operand",5);
    error(0,0,uVar5);
LAB_001029af:
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  if (options.make_ancestor_function ==
      (anon_subr_int_char_ptr_char_ptr_void_ptr_for_make_ancestor_function *)0x0) {
    if (mode_string == (char *)0x0) goto LAB_00102ac5;
    options.umask_self = umask(0);
    options.umask_ancestor = options.umask_self & 0xffffff3f;
LAB_00102a78:
    changes = mode_compile(mode_string);
    if (changes == (mode_change *)0x0) {
      pcVar6 = quote(mode_string);
      uVar5 = dcgettext(0,"invalid mode %s",5);
      auVar7 = error(1,0,uVar5,pcVar6);
      paVar2 = options.make_ancestor_function;
      options.make_ancestor_function = SUB168(auVar7,0);
      (*(code *)PTR___libc_start_main_0010efd0)
                (main,paVar2,&options.umask_ancestor,__libc_csu_init,__libc_csu_fini,
                 SUB168(auVar7 >> 0x40,0),&options);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    mVar4 = mode_adjust(0x1ff,true,options.umask_self,changes,&options.mode_bits);
    options._16_8_ = options._16_8_ & 0xffffffff00000000 | (ulong)mVar4;
    options.umask_self = options.umask_self & ~mVar4;
    rpl_free(changes);
  }
  else {
    options.umask_self = umask(0);
    options.umask_ancestor = options.umask_self & 0xffffff3f;
    if (mode_string != (char *)0x0) goto LAB_00102a78;
    options._16_8_ = CONCAT44(options.mode_bits,0x1ff);
  }
  umask(options.umask_self);
LAB_00102ac5:
  iVar3 = savewd_process_files(argc - optind,argv + optind,process_dir,&options);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}

