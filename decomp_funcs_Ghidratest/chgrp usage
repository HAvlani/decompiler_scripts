
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
    goto LAB_00102f3a;
  }
  uVar4 = dcgettext(0,
                    "Usage: %s [OPTION]... GROUP FILE...\n  or:  %s [OPTION]... --reference=RFILE FILE...\n"
                    ,5);
  __printf_chk(1,uVar4,pcVar5,pcVar5);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "Change the group of each FILE to GROUP.\nWith --reference, change the group of each FILE to that of RFILE.\n\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  -c, --changes          like verbose but report only when a change is made\n  -f, --silent, --quiet  suppress most error messages\n  -v, --verbose          output a diagnostic for every file processed\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "      --dereference      affect the referent of each symbolic link (this is\n                         the default), rather than the symbolic link itself\n  -h, --no-dereference   affect symbolic links instead of any referenced file\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "                         (useful only on systems that can change the\n                         ownership of a symlink)\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "      --no-preserve-root  do not treat \'/\' specially (the default)\n      --preserve-root    fail to operate recursively on \'/\'\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "      --reference=RFILE  use RFILE\'s group rather than specifying a\n                         GROUP value\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "  -R, --recursive        operate on files and directories recursively\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,
                             "\nThe following options modify how a hierarchy is traversed when the -R\noption is also specified.  If more than one is specified, only the final\none takes effect.\n\n  -H                     if a command line argument is a symbolic link\n                         to a directory, traverse it\n  -L                     traverse every symbolic link to a directory\n                         encountered\n  -P                     do not traverse any symbolic links (default)\n\n"
                             ,5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pcVar5 = program_name;
  uVar4 = dcgettext(0,
                    "\nExamples:\n  %s staff /u      Change the group of /u to \"staff\".\n  %s -hR staff /u  Change the group of /u and subfiles to \"staff\".\n"
                    ,5);
  __printf_chk(1,uVar4,pcVar5,pcVar5);
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
    pbVar9 = (byte *)"chgrp";
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
        pcVar5 = "chgrp";
        goto LAB_00103332;
      }
    }
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar5 = "chgrp";
    __printf_chk(1,uVar4,"https://www.gnu.org/software/coreutils/","chgrp");
    pcVar7 = " invocation";
  }
  else {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar7 = setlocale(5,(char *)0x0);
    if (pcVar7 != (char *)0x0) {
      iVar3 = strncmp(pcVar7,"en_",3);
      if (iVar3 != 0) {
LAB_00103332:
        pFVar1 = stdout;
        pcVar7 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar7,pFVar1);
      }
    }
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar7 = " invocation";
    __printf_chk(1,uVar4,"https://www.gnu.org/software/coreutils/","chgrp");
    if (pcVar5 != "chgrp") {
      pcVar7 = "";
    }
  }
  uVar4 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar4,pcVar5,pcVar7);
LAB_00102f3a:
                    /* WARNING: Subroutine does not return */
  exit(status);
}

