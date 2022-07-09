
int main(int argc,char **argv)

{
  char *__s1;
  int iVar1;
  
  if (argc != 2) {
    return 1;
  }
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  __s1 = argv[1];
  iVar1 = strcmp(__s1,"--help");
  if (iVar1 != 0) {
    iVar1 = strcmp(__s1,"--version");
    if (iVar1 == 0) {
      version_etc(stdout,"false","GNU coreutils",Version,"Jim Meyering",0);
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  usage(1);
}

