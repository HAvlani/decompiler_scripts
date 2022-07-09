
int main(int argc,char **argv)

{
  int iVar1;
  char *pcVar2;
  uintmax_t uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  nproc_query query;
  
  query = NPROC_CURRENT_OVERRIDABLE;
  uVar3 = 0;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
LAB_001026f0:
  do {
    iVar1 = getopt_long(argc,argv,"",longopts,0);
    if (iVar1 == -1) {
      if (optind == argc) {
        uVar4 = num_processors(query);
        lVar6 = 1;
        if (uVar3 < uVar4) {
          lVar6 = uVar4 - uVar3;
        }
        __printf_chk(1,&DAT_001070f6,lVar6);
        return 0;
      }
      pcVar2 = quote(argv[optind]);
      uVar5 = dcgettext(0,"extra operand %s",5);
      error(0,0,uVar5,pcVar2);
LAB_00102839:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    if (iVar1 != 0x80) {
      if (iVar1 < 0x81) {
        if (iVar1 == -0x83) {
          version_etc(stdout,"nproc","GNU coreutils",Version,"Giuseppe Scrivano",0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar1 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
        goto LAB_00102839;
      }
      if (iVar1 != 0x81) goto LAB_00102839;
      pcVar2 = (char *)dcgettext(0,"invalid number",5);
      uVar3 = xdectoumax(optarg,0,0xffffffffffffffff,"",pcVar2,0);
      goto LAB_001026f0;
    }
    query = NPROC_ALL;
  } while( true );
}

