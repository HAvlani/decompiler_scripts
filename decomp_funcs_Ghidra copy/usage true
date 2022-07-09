
void usage(int status)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  infomap *piVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  infomap infomap [7];
  
  pcVar4 = program_name;
  bVar12 = 0;
  uVar3 = dcgettext(0,"Usage: %s [ignored command line arguments]\n  or:  %s OPTION\n",5);
  __printf_chk(1,uVar3,pcVar4,pcVar4);
  uVar3 = dcgettext(0,"Exit with a status code indicating success.",5);
  __printf_chk(1,&DAT_00106009,uVar3);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar3 = dcgettext(0,
                    "\nNOTE: your shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell\'s documentation\nfor details about the options it supports.\n"
                    ,5);
  __printf_chk(1,uVar3,&DAT_00106004);
  infomap[3].program = "sha256sum";
  infomap[0].program = "[";
  pbVar8 = (byte *)0x106088;
  infomap[0].node = "test invocation";
  infomap[1].node = "Multi-call invocation";
  infomap[2].program = "sha224sum";
  infomap[4].program = "sha384sum";
  infomap[2].node = "sha2 utilities";
  infomap[3].node = "sha2 utilities";
  infomap[4].node = "sha2 utilities";
  infomap[5].program = "sha512sum";
  infomap[5].node = "sha2 utilities";
  infomap[1].program = "coreutils";
  infomap[6].program = (char *)0x0;
  infomap[6].node = (char *)0x0;
  piVar5 = infomap;
  while( true ) {
    bVar10 = false;
    bVar11 = pbVar8 == (byte *)0x0;
    if (bVar11) break;
    lVar6 = 5;
    pbVar7 = &DAT_00106004;
    do {
      if (lVar6 == 0) break;
      lVar6 = lVar6 + -1;
      bVar10 = *pbVar7 < *pbVar8;
      bVar11 = *pbVar7 == *pbVar8;
      pbVar7 = pbVar7 + (ulong)bVar12 * -2 + 1;
      pbVar8 = pbVar8 + (ulong)bVar12 * -2 + 1;
    } while (bVar11);
    if ((!bVar10 && !bVar11) == bVar10) break;
    pbVar8 = *(byte **)((long)piVar5 + 0x20);
    piVar5 = (infomap *)((long)piVar5 + 0x10);
  }
  puVar9 = *(undefined1 **)((long)piVar5 + 0x18);
  if (puVar9 == (undefined1 *)0x0) {
    uVar3 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar3,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
        puVar9 = &DAT_00106004;
        goto LAB_00102a21;
      }
    }
    uVar3 = dcgettext(0,"Full documentation <%s%s>\n",5);
    puVar9 = &DAT_00106004;
    __printf_chk(1,uVar3,"https://www.gnu.org/software/coreutils/",&DAT_00106004);
    pcVar4 = " invocation";
  }
  else {
    uVar3 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar3,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
LAB_00102a21:
        pFVar1 = stdout;
        pcVar4 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar4,pFVar1);
      }
    }
    uVar3 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(1,uVar3,"https://www.gnu.org/software/coreutils/",&DAT_00106004);
    if (puVar9 != &DAT_00106004) {
      pcVar4 = "";
    }
  }
  uVar3 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar3,puVar9,pcVar4);
                    /* WARNING: Subroutine does not return */
  exit(status);
}

