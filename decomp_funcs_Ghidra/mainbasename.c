
int main(int argc,char **argv)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  _Bool use_nuls;
  char *pcVar6;
  
  bVar1 = false;
  use_nuls = false;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  pcVar5 = (char *)0x0;
LAB_00102610:
  do {
    iVar2 = getopt_long(argc,argv,"+as:z",longopts,0);
    if (iVar2 == -1) {
      if (optind < argc) {
        if (bVar1) {
          do {
            perform_basename(argv[optind],pcVar5,use_nuls);
            optind = optind + 1;
          } while (optind < argc);
        }
        else {
          lVar4 = (long)optind;
          if (optind + 2 < argc) {
            pcVar5 = quote(argv[lVar4 + 2]);
            uVar3 = dcgettext(0,"extra operand %s",5);
            error(0,0,uVar3,pcVar5);
                    /* WARNING: Subroutine does not return */
            usage(1);
          }
          pcVar5 = (char *)0x0;
          if (optind + 2 == argc) {
            pcVar5 = argv[lVar4 + 1];
          }
          perform_basename(argv[lVar4],pcVar5,use_nuls);
        }
        return 0;
      }
      uVar3 = dcgettext(0,"missing operand",5);
      error(0,0,uVar3);
LAB_0010273b:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    pcVar6 = pcVar5;
    if (iVar2 != 0x61) {
      if (iVar2 < 0x62) {
        if (iVar2 == -0x83) {
          version_etc(stdout,"basename","GNU coreutils",Version,"David MacKenzie",0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar2 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
        goto LAB_0010273b;
      }
      pcVar6 = optarg;
      if (iVar2 != 0x73) {
        if (iVar2 != 0x7a) goto LAB_0010273b;
        use_nuls = true;
        goto LAB_00102610;
      }
    }
    bVar1 = true;
    pcVar5 = pcVar6;
  } while( true );
}

