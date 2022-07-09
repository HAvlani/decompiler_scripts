
int main(int argc,char **argv)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  char **argv_00;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  exit_status = 0;
  pcVar3 = getenv("POSIXLY_CORRECT");
  posixly_correct = pcVar3 != (char *)0x0;
  if (argc == 2) {
    pcVar3 = argv[1];
    iVar1 = strcmp(pcVar3,"--help");
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
    iVar1 = strcmp(pcVar3,"--version");
    if (iVar1 == 0) {
      version_etc(stdout,"printf","GNU coreutils",Version,"David MacKenzie",0);
      return 0;
    }
    iVar1 = strcmp(pcVar3,"--");
    if (iVar1 == 0) goto LAB_001027c5;
  }
  else {
    if (argc < 2) {
LAB_001027c5:
      uVar4 = dcgettext(0,"missing operand",5);
      error(0,0,uVar4);
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    iVar1 = strcmp(argv[1],"--");
    if (iVar1 == 0) {
      argc = argc + -1;
      argv = argv + 1;
    }
  }
  pcVar3 = argv[1];
  iVar1 = argc + -2;
  argv_00 = argv + 2;
  do {
    iVar2 = print_formatted(pcVar3,iVar1,argv_00);
    iVar1 = iVar1 - iVar2;
    argv_00 = argv_00 + iVar2;
    if (iVar2 < 1) {
      if (iVar1 < 1) {
        return exit_status;
      }
      pcVar3 = quote(*argv_00);
      uVar4 = dcgettext(0,"warning: ignoring excess arguments, starting with %s",5);
      error(0,0,uVar4,pcVar3);
      return exit_status;
    }
  } while (0 < iVar1);
  return exit_status;
}

