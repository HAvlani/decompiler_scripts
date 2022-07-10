
int main(int argc,char **argv)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  exit_failure = 3;
  atexit(close_stdout);
  silent = false;
  do {
    iVar1 = getopt_long(argc,argv,"s",longopts,0);
    if (iVar1 == -1) {
      if (argc <= optind) {
        piVar2 = __errno_location();
        bVar5 = silent == false;
        *piVar2 = 2;
        if (bVar5) {
          pcVar3 = ttyname(0);
          bVar5 = pcVar3 == (char *)0x0;
          if (bVar5) {
            pcVar3 = (char *)dcgettext(0,"not a tty",5);
          }
          puts(pcVar3);
        }
        else {
          iVar1 = isatty(0);
          bVar5 = iVar1 == 0;
        }
        return (uint)bVar5;
      }
      pcVar3 = quote(argv[optind]);
      uVar4 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar4,pcVar3);
LAB_00102697:
                    /* WARNING: Subroutine does not return */
      usage(2);
    }
    if (iVar1 == -0x82) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
    if (iVar1 != 0x73) {
      if (iVar1 == -0x83) {
        version_etc(stdout,"tty","GNU coreutils",Version,"David MacKenzie",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      goto LAB_00102697;
    }
    silent = true;
  } while( true );
}

