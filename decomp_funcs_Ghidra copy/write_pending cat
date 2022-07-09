
void write_pending(char **bpout,char *outbuf)

{
  FILE *pFVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  char *pcVar6;
  undefined *puVar7;
  long lVar8;
  byte *pbVar9;
  int __status;
  byte *pbVar10;
  undefined1 *puVar11;
  long in_FS_OFFSET;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  undefined *puStack176;
  char *pcStack168;
  byte *apbStack160 [5];
  char *pcStack120;
  char *pcStack112;
  char *pcStack104;
  char *pcStack96;
  char *pcStack88;
  undefined8 uStack80;
  undefined8 uStack72;
  undefined8 uStack56;
  
  bVar14 = 0;
  uVar4 = dcgettext(0,"write error",5);
  piVar5 = __errno_location();
  __status = 1;
  error(1,*piVar5,uVar4);
  pcVar6 = program_name;
  uStack56 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (__status != 0) {
    uVar4 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar4,pcVar6);
    goto LAB_0010364a;
  }
  uVar4 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(1,uVar4,pcVar6);
  pFVar1 = stdout;
  pcVar6 = (char *)dcgettext(0,"Concatenate FILE(s) to standard output.\n",5);
  fputs_unlocked(pcVar6,pFVar1);
  pFVar1 = stdout;
  pcVar6 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar6,pFVar1);
  pFVar1 = stdout;
  pcVar6 = (char *)dcgettext(0,
                             "\n  -A, --show-all           equivalent to -vET\n  -b, --number-nonblank    number nonempty output lines, overrides -n\n  -e                       equivalent to -vE\n  -E, --show-ends          display $ at end of each line\n  -n, --number             number all output lines\n  -s, --squeeze-blank      suppress repeated empty output lines\n"
                             ,5);
  fputs_unlocked(pcVar6,pFVar1);
  pFVar1 = stdout;
  pcVar6 = (char *)dcgettext(0,
                             "  -t                       equivalent to -vT\n  -T, --show-tabs          display TAB characters as ^I\n  -u                       (ignored)\n  -v, --show-nonprinting   use ^ and M- notation, except for LFD and TAB\n"
                             ,5);
  fputs_unlocked(pcVar6,pFVar1);
  pFVar1 = stdout;
  pcVar6 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar6,pFVar1);
  pFVar1 = stdout;
  pcVar6 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar6,pFVar1);
  pcVar6 = program_name;
  uVar4 = dcgettext(0,
                    "\nExamples:\n  %s f - g  Output f\'s contents, then standard input, then g\'s contents.\n  %s        Copy standard input to standard output.\n"
                    ,5);
  __printf_chk(1,uVar4,pcVar6,pcVar6);
  apbStack160[4] = (byte *)0x107055;
  puStack176 = &DAT_00107014;
  pcStack168 = "test invocation";
  apbStack160[0] = (byte *)0x10708e;
  apbStack160[1] = (byte *)0x107026;
  uStack80 = 0;
  uStack72 = 0;
  apbStack160[2] = (byte *)0x10703c;
  pcStack112 = "sha384sum";
  apbStack160[3] = (byte *)0x107046;
  pcStack120 = "sha2 utilities";
  pcStack104 = "sha2 utilities";
  pcStack96 = "sha512sum";
  pcStack88 = "sha2 utilities";
  ppuVar2 = &puStack176;
  do {
    puVar7 = (undefined *)ppuVar2;
    bVar12 = false;
    bVar13 = *(byte **)(puVar7 + 0x10) == (byte *)0x0;
    if (bVar13) break;
    lVar8 = 4;
    pbVar9 = &DAT_00107010;
    pbVar10 = *(byte **)(puVar7 + 0x10);
    do {
      if (lVar8 == 0) break;
      lVar8 = lVar8 + -1;
      bVar12 = *pbVar9 < *pbVar10;
      bVar13 = *pbVar9 == *pbVar10;
      pbVar9 = pbVar9 + (ulong)bVar14 * -2 + 1;
      pbVar10 = pbVar10 + (ulong)bVar14 * -2 + 1;
    } while (bVar13);
    ppuVar2 = (undefined **)(puVar7 + 0x10);
  } while ((!bVar12 && !bVar13) != bVar12);
  puVar11 = *(undefined1 **)(puVar7 + 0x18);
  if (puVar11 == (undefined1 *)0x0) {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
      iVar3 = strncmp(pcVar6,"en_",3);
      if (iVar3 != 0) {
        puVar11 = &DAT_00107010;
        goto LAB_001039aa;
      }
    }
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    puVar11 = &DAT_00107010;
    __printf_chk(1,uVar4,"https://www.gnu.org/software/coreutils/",&DAT_00107010);
    pcVar6 = " invocation";
  }
  else {
    uVar4 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar4,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
      iVar3 = strncmp(pcVar6,"en_",3);
      if (iVar3 != 0) {
LAB_001039aa:
        pFVar1 = stdout;
        pcVar6 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar6,pFVar1);
      }
    }
    uVar4 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(1,uVar4,"https://www.gnu.org/software/coreutils/",&DAT_00107010);
    if (puVar11 != &DAT_00107010) {
      pcVar6 = "";
    }
  }
  uVar4 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar4,puVar11,pcVar6);
LAB_0010364a:
                    /* WARNING: Subroutine does not return */
  exit(__status);
}

