
int main(int argc,char **argv)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  uVar3 = 0x102601;
  atexit(close_stdout);
  parse_gnu_standard_options_only
            (argc,argv,"hostid","GNU coreutils",Version,true,usage,"Jim Meyering",0,uVar3);
  if (argc <= optind) {
    lVar1 = gethostid();
    __printf_chk(1,"%08x\n",lVar1);
    return 0;
  }
  pcVar2 = quote(argv[optind]);
  uVar3 = dcgettext(0,"extra operand %s",5);
  error(0,0,uVar3,pcVar2);
                    /* WARNING: Subroutine does not return */
  usage(1);
}

