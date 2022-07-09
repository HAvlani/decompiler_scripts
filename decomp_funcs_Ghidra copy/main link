
int main(int argc,char **argv)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  char *pcVar5;
  long lVar6;
  long extraout_RDX;
  char *pcVar7;
  undefined8 uVar8;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  uVar8 = 0x102607;
  atexit(close_stdout);
  parse_gnu_standard_options_only
            (argc,argv,"link","GNU coreutils",Version,true,usage,"Michael Stone",0,uVar8);
  if (optind + 1 < argc) {
    lVar6 = (long)optind;
    if (argc <= optind + 2) {
      iVar1 = link(argv[lVar6],argv[lVar6 + 1]);
      if (iVar1 == 0) {
        return 0;
      }
      uVar8 = quotearg_n_style(1,4,argv[optind]);
      uVar2 = quotearg_n_style(0,4,argv[(long)optind + 1]);
      uVar3 = dcgettext(0,"cannot create link %s to %s",5);
      piVar4 = __errno_location();
      error(1,*piVar4,uVar3,uVar2,uVar8);
      lVar6 = extraout_RDX;
    }
    pcVar5 = quote(argv[lVar6 + 2]);
    pcVar7 = "extra operand %s";
  }
  else {
    if (argc <= optind) {
      uVar8 = dcgettext(0,"missing operand",5);
      error(0,0,uVar8);
      goto LAB_001026b0;
    }
    pcVar5 = quote(argv[optind]);
    pcVar7 = "missing operand after %s";
  }
  uVar8 = dcgettext(0,pcVar7,5);
  error(0,0,uVar8,pcVar5);
LAB_001026b0:
                    /* WARNING: Subroutine does not return */
  usage(1);
}

