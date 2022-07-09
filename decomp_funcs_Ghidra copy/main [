
int main(int margc,char **margv)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_var;
  char *pcVar3;
  char *pcVar4;
  
  set_program_name(*margv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  exit_failure = 2;
  atexit(close_stdout);
  argv = margv;
  if (margc == 2) {
    pcVar3 = margv[1];
    iVar1 = strcmp(pcVar3,"--help");
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
    iVar1 = strcmp(pcVar3,"--version");
    if (iVar1 == 0) {
      version_etc(stdout,"[","GNU coreutils",Version,"Kevin Braunsdorf","Matthew Bradburn",0,
                  CONCAT44(extraout_var,iVar1));
      return 0;
    }
    iVar1 = strcmp(pcVar3,"]");
    if (iVar1 == 0) {
      argc = 1;
      pos = 1;
      return 1;
    }
  }
  else if ((1 < margc) && (iVar1 = strcmp(margv[(long)margc + -1],"]"), iVar1 == 0)) {
    pos = 1;
    argc = margc + -1;
    uVar2 = posixtest(margc + -2);
    if (pos == argc) {
      return (uVar2 ^ 1) & 0xff;
    }
    pcVar3 = quote(argv[pos]);
    pcVar4 = "extra argument %s";
    goto LAB_00102840;
  }
  pcVar3 = quote("]");
  pcVar4 = "missing %s";
LAB_00102840:
  pcVar4 = (char *)dcgettext(0,pcVar4,5);
                    /* WARNING: Subroutine does not return */
  test_syntax_error(pcVar4,pcVar3);
}

