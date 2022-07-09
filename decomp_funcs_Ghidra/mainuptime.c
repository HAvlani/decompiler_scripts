
int main(int argc,char **argv)

{
  char *pcVar1;
  undefined8 uVar2;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  uVar2 = 0x102961;
  atexit(close_stdout);
  parse_gnu_standard_options_only
            (argc,argv,"uptime","GNU coreutils",Version,true,usage,"Joseph Arceneaux",
             "David MacKenzie","Kaveh Ghazi",0,uVar2);
  if (argc == optind) {
                    /* WARNING: Subroutine does not return */
    uptime("/var/run/utmp",1);
  }
  if (argc - optind != 1) {
    pcVar1 = quote(argv[(long)optind + 1]);
    uVar2 = dcgettext(0,"extra operand %s",5);
    error(0,0,uVar2,pcVar1);
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
                    /* WARNING: Subroutine does not return */
  uptime(argv[optind],0);
}

