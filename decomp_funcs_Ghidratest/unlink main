
int main(int argc,char **argv)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  long lVar4;
  long extraout_RDX;
  undefined8 uVar5;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  uVar5 = 0x102607;
  atexit(close_stdout);
  parse_gnu_standard_options_only
            (argc,argv,"unlink","GNU coreutils",Version,true,usage,"Michael Stone",0,uVar5);
  if (argc <= optind) {
    uVar5 = dcgettext(0,"missing operand",5);
    error(0,0,uVar5);
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  lVar4 = (long)optind;
  if (argc <= optind + 1) {
    iVar1 = unlink(argv[lVar4]);
    if (iVar1 == 0) {
      return 0;
    }
    pcVar2 = quotearg_style(shell_escape_always_quoting_style,argv[optind]);
    uVar5 = dcgettext(0,"cannot unlink %s",5);
    piVar3 = __errno_location();
    error(1,*piVar3,uVar5,pcVar2);
    lVar4 = extraout_RDX;
  }
  pcVar2 = quote(argv[lVar4 + 1]);
  uVar5 = dcgettext(0,"extra operand %s",5);
  error(0,0,uVar5,pcVar2);
                    /* WARNING: Subroutine does not return */
  usage(1);
}

