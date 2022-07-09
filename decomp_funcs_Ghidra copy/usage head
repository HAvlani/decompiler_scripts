
void usage(int status)

{
  FILE *pFVar1;
  infomap *piVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined *puVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  infomap infomap [7];
  
  pcVar5 = program_name;
  bVar13 = 0;
  if (status != 0) {
    uVar4 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar4,pcVar5);
    goto LAB_001040ca;
  }
  uVar4 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(1,uVar4,pcVar5);
  uVar4 = dcgettext(0,
                    "Print the first %d lines of each FILE to standard output.\nWith more than one FILE, precede each with a header giving the file name.\n"
                    ,5);
  __printf_chk(1,uVar4,10);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  uVar4 = dcgettext(0,
                    "  -c, --bytes=[-]NUM       print the first NUM bytes of each file;\n                             with the leading \'-\', print all but the last\n                             NUM bytes of each file\n  -n, --lines=[-]NUM       print the first NUM lines instead of the first %d;\n                             with the leading \'-\', print all but the last\n                             NUM lines of each file\n"
                    ,5);
  __printf_chk(1,uVar4,10);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  -q, --quiet, --silent    never print headers giving file names\n  -v, --verbose            always print headers giving file names\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"  -z, --zero-terminated    line delimiter is NUL, not newline\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "\nNUM may have a multiplier suffix:\nb 512, kB 1000, K 1024, MB 1000*1000, M 1024*1024,\nGB 1000*1000*1000, G 1024*1024*1024, and so on for T, P, E, Z, Y.\nBinary prefixes can be used, too: KiB=K, MiB=M, and so on.\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  infomap[3].program = "sha256sum";
  infomap[0].program = "[";
  infomap[0].node = "test invocation";
  infomap[1].program = "coreutils";
  infomap[1].node = "Multi-call invocation";
  infomap[6].program = (char *)0x0;
  infomap[6].node = (char *)0x0;
  infomap[2].program = "sha224sum";
  infomap[4].program = "sha384sum";
  infomap[2].node = "sha2 utilities";
  infomap[3].node = "sha2 utilities";
  infomap[4].node = "sha2 utilities";
  infomap[5].program = "sha512sum";
  infomap[5].node = "sha2 utilities";
  piVar2 = infomap;
  do {
    puVar6 = (undefined *)piVar2;
    bVar11 = false;
    bVar12 = *(byte **)(puVar6 + 0x10) == (byte *)0x0;
    if (bVar12) break;
    lVar7 = 5;
    pbVar8 = &DAT_001080ad;
    pbVar9 = *(byte **)(puVar6 + 0x10);
    do {
      if (lVar7 == 0) break;
      lVar7 = lVar7 + -1;
      bVar11 = *pbVar8 < *pbVar9;
      bVar12 = *pbVar8 == *pbVar9;
      pbVar8 = pbVar8 + (ulong)bVar13 * -2 + 1;
      pbVar9 = pbVar9 + (ulong)bVar13 * -2 + 1;
    } while (bVar12);
    piVar2 = (infomap *)(puVar6 + 0x10);
  } while ((!bVar11 && !bVar12) != bVar11);
  puVar10 = *(undefined1 **)(puVar6 + 0x18);
  if (puVar10 == (undefined1 *)0x0) {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar5 = setlocale(5,(char *)0x0);
    if (pcVar5 != (char *)0x0) {
      iVar3 = strncmp(pcVar5,"en_",3);
      if (iVar3 != 0) {
        puVar10 = &DAT_001080ad;
        goto LAB_00104472;
      }
    }
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    puVar10 = &DAT_001080ad;
    __printf_chk(1,uVar4,"https://www.gnu.org/software/coreutils/",&DAT_001080ad);
    pcVar5 = " invocation";
  }
  else {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar5 = setlocale(5,(char *)0x0);
    if (pcVar5 != (char *)0x0) {
      iVar3 = strncmp(pcVar5,"en_",3);
      if (iVar3 != 0) {
LAB_00104472:
        pFVar1 = stdout;
        pcVar5 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar5,pFVar1);
      }
    }
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar5 = " invocation";
    __printf_chk(1,uVar4,"https://www.gnu.org/software/coreutils/",&DAT_001080ad);
    if (puVar10 != &DAT_001080ad) {
      pcVar5 = "";
    }
  }
  uVar4 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar4,puVar10,pcVar5);
LAB_001040ca:
                    /* WARNING: Subroutine does not return */
  exit(status);
}

