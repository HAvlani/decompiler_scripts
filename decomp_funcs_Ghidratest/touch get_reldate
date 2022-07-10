
void get_reldate(timespec *result,char *flex_date,timespec *now)

{
  FILE *pFVar1;
  undefined **ppuVar2;
  _Bool _Var3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  char *pcVar8;
  long lVar9;
  byte *pbVar10;
  int __status;
  byte *pbVar11;
  long in_FS_OFFSET;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  undefined *puStack192;
  char *pcStack184;
  byte *apbStack176 [5];
  char *pcStack136;
  char *pcStack128;
  char *pcStack120;
  char *pcStack112;
  char *pcStack104;
  undefined8 uStack96;
  undefined8 uStack88;
  undefined8 uStack72;
  
  bVar14 = 0;
  _Var3 = parse_datetime(result,flex_date,now);
  if (_Var3 != false) {
    return;
  }
  pcVar5 = quote(flex_date);
  uVar6 = dcgettext(0,"invalid date format %s",5);
  __status = 1;
  error(1,0,uVar6,pcVar5);
  pcVar5 = program_name;
  uStack72 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (__status != 0) {
    uVar6 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar6,pcVar5);
    goto LAB_0010442a;
  }
  uVar6 = dcgettext(0,"Usage: %s [OPTION]... FILE...\n",5);
  __printf_chk(1,uVar6,pcVar5);
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
  apbStack176[4] = (byte *)0x112062;
  puStack192 = &DAT_00112021;
  pcStack184 = "test invocation";
  apbStack176[0] = (byte *)0x11209b;
  apbStack176[1] = (byte *)0x112033;
  uStack96 = 0;
  uStack88 = 0;
  apbStack176[2] = (byte *)0x112049;
  pcStack128 = "sha384sum";
  apbStack176[3] = (byte *)0x112053;
  pcStack136 = "sha2 utilities";
  pcStack120 = "sha2 utilities";
  pcStack112 = "sha512sum";
  pcStack104 = "sha2 utilities";
  ppuVar2 = &puStack192;
  do {
    puVar7 = (undefined *)ppuVar2;
    bVar12 = false;
    bVar13 = *(byte **)(puVar7 + 0x10) == (byte *)0x0;
    if (bVar13) break;
    lVar9 = 6;
    pbVar10 = (byte *)"touch";
    pbVar11 = *(byte **)(puVar7 + 0x10);
    do {
      if (lVar9 == 0) break;
      lVar9 = lVar9 + -1;
      bVar12 = *pbVar10 < *pbVar11;
      bVar13 = *pbVar10 == *pbVar11;
      pbVar10 = pbVar10 + (ulong)bVar14 * -2 + 1;
      pbVar11 = pbVar11 + (ulong)bVar14 * -2 + 1;
    } while (bVar13);
    ppuVar2 = (undefined **)(puVar7 + 0x10);
  } while ((!bVar12 && !bVar13) != bVar12);
  pcVar5 = *(char **)(puVar7 + 0x18);
  if (pcVar5 == (char *)0x0) {
    uVar6 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar6,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar5 = setlocale(5,(char *)0x0);
    if (pcVar5 != (char *)0x0) {
      iVar4 = strncmp(pcVar5,"en_",3);
      if (iVar4 != 0) {
        pcVar5 = "touch";
        goto LAB_001047a2;
      }
    }
    uVar6 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar5 = "touch";
    __printf_chk(1,uVar6,"https://www.gnu.org/software/coreutils/","touch");
    pcVar8 = " invocation";
  }
  else {
    uVar6 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar6,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) {
      iVar4 = strncmp(pcVar8,"en_",3);
      if (iVar4 != 0) {
LAB_001047a2:
        pFVar1 = stdout;
        pcVar8 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar8,pFVar1);
      }
    }
    uVar6 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(1,uVar6,"https://www.gnu.org/software/coreutils/","touch");
    if (pcVar5 != "touch") {
      pcVar8 = "";
    }
  }
  uVar6 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar6,pcVar5,pcVar8);
LAB_0010442a:
                    /* WARNING: Subroutine does not return */
  exit(__status);
}

