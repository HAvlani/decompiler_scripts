
int main(int argc,char **argv)

{
  char *pcVar1;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  undefined8 uVar2;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  uVar2 = 0x102621;
  atexit(close_stdout);
  parse_gnu_standard_options_only
            (argc,argv,"logname","GNU coreutils",Version,true,usage,"FIXME: unknown",0,uVar2);
  if (optind < argc) {
    pcVar1 = quote(argv[optind]);
    uVar2 = dcgettext(0,"extra operand %s",5);
    error(0,0,uVar2,pcVar1);
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  pcVar1 = getlogin();
  if (pcVar1 != (char *)0x0) {
    puts(pcVar1);
    return 0;
  }
  uVar2 = dcgettext(0,"no login name",5);
  error(1,0,uVar2);
  (*(code *)PTR___libc_start_main_00109fe0)
            (main,unaff_RBX,&stack0xfffffffffffffff0,__libc_csu_init,__libc_csu_fini,extraout_RDX,
             &stack0xffffffffffffffe8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

