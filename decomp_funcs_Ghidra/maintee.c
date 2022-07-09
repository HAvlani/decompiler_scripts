
int main(int argc,char **argv)

{
  _Bool _Var1;
  int iVar2;
  ptrdiff_t pVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  append = false;
  ignore_interrupts = false;
  while( true ) {
    while( true ) {
      iVar2 = getopt_long(argc,argv,&DAT_00107109,long_options,0);
      if (iVar2 == -1) {
        if (ignore_interrupts != false) {
          signal(2,(__sighandler_t)0x1);
        }
        if (output_error != output_error_sigpipe) {
          signal(0xd,(__sighandler_t)0x1);
        }
        _Var1 = tee_files(argc - optind,argv + optind);
        iVar2 = close(0);
        if (iVar2 == 0) {
          return (int)(_Var1 ^ 1);
        }
        uVar4 = dcgettext(0,"standard input",5);
        piVar5 = __errno_location();
        error(1,*piVar5,&DAT_001076bb,uVar4);
        (*(code *)PTR___libc_start_main_0010afd0)
                  (main,unaff_RBX,&stack0xfffffffffffffff0,__libc_csu_init,__libc_csu_fini,
                   extraout_RDX,&stack0xffffffffffffffe8);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      if (iVar2 != 0x61) break;
      append = true;
    }
    if (iVar2 < 0x62) break;
    if (iVar2 == 0x69) {
      ignore_interrupts = true;
    }
    else {
      if (iVar2 != 0x70) goto LAB_001028eb;
      if (optarg == (char *)0x0) {
        output_error = output_error_warn_nopipe;
      }
      else {
        pVar3 = __xargmatch_internal
                          ("--output-error",optarg,output_error_args,output_error_types,4,
                           argmatch_die,true);
        output_error = output_error_types[pVar3];
      }
    }
  }
  if (iVar2 == -0x83) {
    version_etc(stdout,"tee","GNU coreutils",Version,"Mike Parker","Richard M. Stallman",
                "David MacKenzie",0);
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  if (iVar2 == -0x82) {
                    /* WARNING: Subroutine does not return */
    usage(0);
  }
LAB_001028eb:
                    /* WARNING: Subroutine does not return */
  usage(1);
}

