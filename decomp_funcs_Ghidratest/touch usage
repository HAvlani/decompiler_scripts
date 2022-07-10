
void usage(int status)

{
  FILE *pFVar1;
  infomap *piVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined *puVar6;
  char *pcVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  infomap infomap [7];
  
  pcVar5 = program_name;
  bVar13 = 0;
  if (status != 0) {
    uVar4 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar4,pcVar5);
    goto LAB_0010442a;
  }
  uVar4 = dcgettext(0,"Usage: %s [OPTION]... FILE...\n",5);
  __printf_chk(1,uVar4,pcVar5);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "Update the access and modification times of each FILE to the current time.\n\nA FILE argument that does not exist is created empty, unless -c or -h\nis supplied.\n\nA FILE argument string of - is handled specially and causes touch to\nchange the times of the file associated with standard output.\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  -a                     change only the access time\n  -c, --no-create        do not create any files\n  -d, --date=STRING      parse STRING and use it instead of current time\n  -f                     (ignored)\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  -h, --no-dereference   affect each symbolic link instead of any referenced\n                         file (useful only on systems that can change the\n                         timestamps of a symlink)\n  -m                     change only the modification time\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  -r, --reference=FILE   use this file\'s times instead of current time\n  -t STAMP               use [[CC]YY]MMDDhhmm[.ss] instead of current time\n      --time=WORD        change the specified time:\n                           WORD is access, atime, or use: equivalent to -a\n                           WORD is modify or mtime: equivalent to -m\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "\nNote that the -d and -t options accept different time-date formats.\n"
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
    lVar8 = 6;
    pbVar9 = (byte *)"touch";
    pbVar10 = *(byte **)(puVar6 + 0x10);
    do {
      if (lVar8 == 0) break;
      lVar8 = lVar8 + -1;
      bVar11 = *pbVar9 < *pbVar10;
      bVar12 = *pbVar9 == *pbVar10;
      pbVar9 = pbVar9 + (ulong)bVar13 * -2 + 1;
      pbVar10 = pbVar10 + (ulong)bVar13 * -2 + 1;
    } while (bVar12);
    piVar2 = (infomap *)(puVar6 + 0x10);
  } while ((!bVar11 && !bVar12) != bVar11);
  pcVar5 = *(char **)(puVar6 + 0x18);
  if (pcVar5 == (char *)0x0) {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar5 = setlocale(5,(char *)0x0);
    if (pcVar5 != (char *)0x0) {
      iVar3 = strncmp(pcVar5,"en_",3);
      if (iVar3 != 0) {
        pcVar5 = "touch";
        goto LAB_001047a2;
      }
    }
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar5 = "touch";
    __printf_chk(1,uVar4,"https://www.gnu.org/software/coreutils/","touch");
    pcVar7 = " invocation";
  }
  else {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar7 = setlocale(5,(char *)0x0);
    if (pcVar7 != (char *)0x0) {
      iVar3 = strncmp(pcVar7,"en_",3);
      if (iVar3 != 0) {
LAB_001047a2:
        pFVar1 = stdout;
        pcVar7 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar7,pFVar1);
      }
    }
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar7 = " invocation";
    __printf_chk(1,uVar4,"https://www.gnu.org/software/coreutils/","touch");
    if (pcVar5 != "touch") {
      pcVar7 = "";
    }
  }
  uVar4 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar4,pcVar5,pcVar7);
LAB_0010442a:
                    /* WARNING: Subroutine does not return */
  exit(status);
}

