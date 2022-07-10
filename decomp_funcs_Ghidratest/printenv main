
int main(int argc,char **argv)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char **ppcVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  
  bVar2 = false;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  exit_failure = 2;
  atexit(close_stdout);
  while( true ) {
    uVar12 = 0x102633;
    iVar4 = getopt_long(argc,argv,"+iu:0",longopts);
    if (iVar4 == -1) break;
    if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
    bVar2 = true;
    if (iVar4 != 0x30) {
      if (iVar4 == -0x83) {
        version_etc(stdout,"printenv","GNU coreutils",Version,"David MacKenzie","Richard Mlynarik",0
                    ,uVar12);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
                    /* WARNING: Subroutine does not return */
      usage(2);
    }
  }
  lVar11 = (long)optind;
  if (optind < argc) {
    iVar4 = 0;
    do {
      pcVar6 = strchr(argv[lVar11],0x3d);
      if (pcVar6 == (char *)0x0) {
        iVar10 = 0;
        for (ppcVar9 = environ; pcVar6 = *ppcVar9, pcVar6 != (char *)0x0; ppcVar9 = ppcVar9 + 1) {
          cVar3 = *pcVar6;
          pcVar8 = argv[lVar11];
          while (cVar3 != '\0') {
            while( true ) {
              pcVar7 = pcVar6;
              cVar1 = *pcVar8;
              if (cVar1 == '\0') goto LAB_00102799;
              pcVar6 = pcVar7 + 1;
              pcVar8 = pcVar8 + 1;
              if (cVar3 != cVar1) goto LAB_00102799;
              cVar3 = pcVar7[1];
              if (cVar3 != '=') break;
              if (*pcVar8 == '\0') {
                __printf_chk(1,&DAT_001060d7,pcVar7 + 2,-!bVar2 & 10);
                iVar10 = 1;
                goto LAB_00102799;
              }
            }
          }
LAB_00102799:
        }
        iVar4 = iVar4 + iVar10;
      }
      lVar11 = lVar11 + 1;
    } while ((int)lVar11 < argc);
    uVar5 = (uint)(argc - optind == iVar4);
  }
  else {
    for (ppcVar9 = environ; *ppcVar9 != (char *)0x0; ppcVar9 = ppcVar9 + 1) {
      __printf_chk(1,&DAT_001060d7,*ppcVar9,-!bVar2 & 10);
    }
    uVar5 = 1;
  }
  return uVar5 ^ 1;
}

