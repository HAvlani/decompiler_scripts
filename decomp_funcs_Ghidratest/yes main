
int main(int argc,char **argv)

{
  bool bVar1;
  size_t sVar2;
  size_t __n;
  char *__src;
  char *pcVar3;
  char *pcVar4;
  size_t sVar5;
  int *piVar6;
  char **ppcVar7;
  long lVar8;
  ulong s;
  char **ppcVar9;
  undefined8 uVar10;
  char **local_48;
  
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  uVar10 = 0x10260c;
  atexit(close_stdout);
  parse_gnu_standard_options_only
            (argc,argv,"yes","GNU coreutils",Version,true,usage,"David MacKenzie",0,uVar10);
  ppcVar7 = argv + optind;
  local_48 = argv + argc;
  if (optind == argc) {
    *local_48 = "y";
    local_48 = local_48 + 1;
  }
  __src = *ppcVar7;
  bVar1 = true;
  s = 0;
  ppcVar9 = ppcVar7;
  pcVar4 = __src;
  while( true ) {
    ppcVar9 = ppcVar9 + 1;
    sVar2 = strlen(pcVar4);
    s = s + sVar2 + 1;
    if (local_48 <= ppcVar9) break;
    pcVar3 = pcVar4 + sVar2 + 1;
    pcVar4 = *ppcVar9;
    if (pcVar3 != pcVar4) {
      bVar1 = false;
    }
  }
  if (s < 0x1001) {
    s = 0x2000;
  }
  else if (bVar1) goto LAB_001026c7;
  bVar1 = false;
  __src = (char *)xmalloc(s);
LAB_001026c7:
  sVar2 = 0;
  do {
    pcVar4 = *ppcVar7;
    __n = strlen(pcVar4);
    if (!bVar1) {
      memcpy(__src + sVar2,pcVar4,__n);
    }
    lVar8 = sVar2 + __n;
    ppcVar7 = ppcVar7 + 1;
    sVar2 = lVar8 + 1;
    __src[lVar8] = ' ';
  } while (ppcVar7 < local_48);
  __src[lVar8] = '\n';
  lVar8 = s / sVar2 - 1;
  pcVar4 = __src;
  if (lVar8 != 0) {
    do {
      pcVar4 = (char *)memcpy(pcVar4 + sVar2,__src,sVar2);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    sVar2 = sVar2 * (s / sVar2);
  }
  do {
    sVar5 = full_write(1,__src,sVar2);
  } while (sVar2 == sVar5);
  uVar10 = dcgettext(0,"standard output",5);
  piVar6 = __errno_location();
  error(0,*piVar6,uVar10);
  return 1;
}

