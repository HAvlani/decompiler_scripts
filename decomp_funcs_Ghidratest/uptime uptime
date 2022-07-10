
void uptime(char *filename,int options)

{
  FILE *pFVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  char *pcVar7;
  undefined *puVar8;
  char *pcVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  long in_FS_OFFSET;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  undefined *puStack208;
  char *pcStack200;
  byte *apbStack192 [5];
  char *pcStack152;
  char *pcStack144;
  char *pcStack136;
  char *pcStack128;
  char *pcStack120;
  undefined8 uStack112;
  undefined8 uStack104;
  undefined8 uStack88;
  size_t n_users;
  STRUCT_UTMP *utmp_buf;
  undefined8 local_10;
  
  bVar15 = 0;
  local_10 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  utmp_buf = (STRUCT_UTMP *)0x0;
  iVar3 = read_utmp(filename,&n_users,&utmp_buf,options);
  if (iVar3 == 0) {
    print_uptime(n_users,utmp_buf);
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  uVar5 = quotearg_n_style_colon(0,3,filename);
  piVar6 = __errno_location();
  iVar3 = 1;
  error(1,*piVar6,"%s",uVar5);
  pcVar7 = program_name;
  uStack88 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (iVar3 != 0) {
    uVar5 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar5,pcVar7);
    goto LAB_0010305a;
  }
  uVar5 = dcgettext(0,"Usage: %s [OPTION]... [FILE]\n",5);
  __printf_chk(1,uVar5,pcVar7);
  uVar5 = dcgettext(0,
                    "Print the current time, the length of time the system has been up,\nthe number of users on the system, and the average number of jobs\nin the run queue over the last 1, 5 and 15 minutes."
                    ,5);
  __printf_chk(1,uVar5);
  uVar5 = dcgettext(0,
                    "  Processes in\nan uninterruptible sleep state also contribute to the load average.\n"
                    ,5);
  __printf_chk(1,uVar5);
  uVar5 = dcgettext(0,"If FILE is not specified, use %s.  %s as FILE is common.\n\n",5);
  __printf_chk(1,uVar5,"/var/run/utmp","/var/log/wtmp");
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  pFVar1 = stdout;
  pcVar7 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar7,pFVar1);
  apbStack192[4] = (byte *)0x10913f;
  puStack208 = &DAT_001090fe;
  pcStack200 = "test invocation";
  apbStack192[0] = (byte *)0x109178;
  apbStack192[1] = (byte *)0x109110;
  uStack112 = 0;
  uStack104 = 0;
  apbStack192[2] = (byte *)0x109126;
  pcStack144 = "sha384sum";
  apbStack192[3] = (byte *)0x109130;
  pcStack152 = "sha2 utilities";
  pcStack136 = "sha2 utilities";
  pcStack128 = "sha512sum";
  pcStack120 = "sha2 utilities";
  ppuVar2 = &puStack208;
  do {
    puVar8 = (undefined *)ppuVar2;
    bVar13 = false;
    bVar14 = *(byte **)(puVar8 + 0x10) == (byte *)0x0;
    if (bVar14) break;
    lVar10 = 7;
    pbVar11 = (byte *)0x10900a;
    pbVar12 = *(byte **)(puVar8 + 0x10);
    do {
      if (lVar10 == 0) break;
      lVar10 = lVar10 + -1;
      bVar13 = *pbVar11 < *pbVar12;
      bVar14 = *pbVar11 == *pbVar12;
      pbVar11 = pbVar11 + (ulong)bVar15 * -2 + 1;
      pbVar12 = pbVar12 + (ulong)bVar15 * -2 + 1;
    } while (bVar14);
    ppuVar2 = (undefined **)(puVar8 + 0x10);
  } while ((!bVar13 && !bVar14) != bVar13);
  pcVar7 = *(char **)(puVar8 + 0x18);
  if (pcVar7 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar7 = setlocale(5,(char *)0x0);
    if (pcVar7 != (char *)0x0) {
      iVar4 = strncmp(pcVar7,"en_",3);
      if (iVar4 != 0) {
        pcVar7 = "uptime";
        goto LAB_0010336a;
      }
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar7 = "uptime";
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/","uptime");
    pcVar9 = " invocation";
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar9 = setlocale(5,(char *)0x0);
    if (pcVar9 != (char *)0x0) {
      iVar4 = strncmp(pcVar9,"en_",3);
      if (iVar4 != 0) {
LAB_0010336a:
        pFVar1 = stdout;
        pcVar9 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar9,pFVar1);
      }
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar9 = " invocation";
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/","uptime");
    if (pcVar7 != "uptime") {
      pcVar9 = "";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar5,pcVar7,pcVar9);
LAB_0010305a:
                    /* WARNING: Subroutine does not return */
  exit(iVar3);
}

