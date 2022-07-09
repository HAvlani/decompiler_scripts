
int main(int argc,char **argv)

{
  __uid_t __uid;
  long lVar1;
  int *piVar2;
  passwd *ppVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  uVar5 = 0x102641;
  atexit(close_stdout);
  parse_gnu_standard_options_only
            (argc,argv,"whoami","GNU coreutils",Version,true,usage,"Richard Mlynarik",0,uVar5);
  lVar1 = (long)optind;
  if (optind == argc) {
    piVar2 = __errno_location();
    *piVar2 = 0;
    __uid = geteuid();
    argv = (char **)(ulong)__uid;
    if ((__uid != 0xffffffff) || (*piVar2 == 0)) {
      ppVar3 = getpwuid(__uid);
      if (ppVar3 != (passwd *)0x0) {
        puts(ppVar3->pw_name);
        return 0;
      }
    }
    uVar5 = dcgettext(0,"cannot find name for user ID %lu",5);
    lVar1 = error(1,*piVar2,uVar5,argv);
  }
  pcVar4 = quote(argv[lVar1]);
  uVar5 = dcgettext(0,"extra operand %s",5);
  error(0,0,uVar5,pcVar4);
                    /* WARNING: Subroutine does not return */
  usage(1);
}

