
int main(int margc,char **margv)

{
  uint uVar1;
  char *pcVar2;
  char *format;
  
  set_program_name(*margv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  exit_failure = 2;
  atexit(close_stdout);
  pos = 1;
  argv = margv;
  argc = margc;
  if (margc < 2) {
    uVar1 = 1;
  }
  else {
    uVar1 = posixtest(margc + -1);
    if (pos != argc) {
      pcVar2 = quote(argv[pos]);
      format = (char *)dcgettext(0,"extra argument %s",5);
                    /* WARNING: Subroutine does not return */
      test_syntax_error(format,pcVar2);
    }
    uVar1 = (uVar1 ^ 1) & 0xff;
  }
  return uVar1;
}

