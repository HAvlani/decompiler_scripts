
void users(char *filename,int options)

{
  void *p;
  FILE *pFVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  void **__base;
  char *pcVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined *puVar8;
  char *pcVar9;
  STRUCT_UTMP *ut;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  void **ppvVar13;
  size_t __nmemb;
  long lVar14;
  long in_FS_OFFSET;
  bool bVar15;
  bool bVar16;
  byte bVar17;
  undefined *puStack256;
  char *pcStack248;
  byte *apbStack240 [5];
  char *pcStack200;
  char *pcStack192;
  char *pcStack184;
  char *pcStack176;
  char *pcStack168;
  undefined8 uStack160;
  undefined8 uStack152;
  undefined8 uStack136;
  size_t n_users;
  STRUCT_UTMP *utmp_buf;
  long local_40;
  
  bVar17 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = read_utmp(filename,&n_users,&utmp_buf,options);
  ut = utmp_buf;
  if (iVar3 == 0) {
    lVar14 = n_users - 1;
    __base = (void **)xnmalloc(n_users,8);
    if (n_users == 0) {
      qsort(__base,0,8,userid_compare);
    }
    else {
      __nmemb = 0;
      do {
        if ((ut->ut_user[0] != '\0') && (ut->ut_type == 7)) {
          pcVar5 = extract_trimmed_name(ut);
          __base[__nmemb] = pcVar5;
          __nmemb = __nmemb + 1;
        }
        lVar14 = lVar14 + -1;
        ut = ut + 1;
      } while (lVar14 != -1);
      qsort(__base,__nmemb,8,userid_compare);
      if (__nmemb != 0) {
        uVar10 = 0;
        do {
          fputs_unlocked((char *)__base[uVar10],stdout);
          pcVar5 = stdout->_IO_write_ptr;
          if (pcVar5 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar5 + 1;
            *pcVar5 = (-(uVar10 < __nmemb - 1) & 0x16U) + 10;
          }
          else {
            __overflow(stdout,(-(uint)(uVar10 < __nmemb - 1) & 0x16) + 10);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != __nmemb);
        ppvVar13 = __base;
        do {
          p = *ppvVar13;
          ppvVar13 = ppvVar13 + 1;
          rpl_free(p);
        } while (ppvVar13 != __base + uVar10);
      }
    }
    rpl_free(__base);
    rpl_free(utmp_buf);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar6 = quotearg_n_style_colon(0,3,filename);
  piVar7 = __errno_location();
  iVar3 = 1;
  error(1,*piVar7,"%s",uVar6);
  pcVar5 = program_name;
  uStack136 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (iVar3 != 0) {
    uVar6 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar6,pcVar5);
    goto LAB_00102aea;
  }
  uVar6 = dcgettext(0,"Usage: %s [OPTION]... [FILE]\n",5);
  __printf_chk(1,uVar6,pcVar5);
  uVar6 = dcgettext(0,
                    "Output who is currently logged in according to FILE.\nIf FILE is not specified, use %s.  %s as FILE is common.\n\n"
                    ,5);
  __printf_chk(1,uVar6,"/var/run/utmp","/var/log/wtmp");
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  pFVar1 = stdout;
  pcVar5 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar5,pFVar1);
  apbStack240[4] = (byte *)0x107085;
  puStack256 = &DAT_00107044;
  pcStack248 = "test invocation";
  apbStack240[0] = (byte *)0x1070be;
  apbStack240[1] = (byte *)0x107056;
  uStack160 = 0;
  uStack152 = 0;
  apbStack240[2] = (byte *)0x10706c;
  pcStack192 = "sha384sum";
  apbStack240[3] = (byte *)0x107076;
  pcStack200 = "sha2 utilities";
  pcStack184 = "sha2 utilities";
  pcStack176 = "sha512sum";
  pcStack168 = "sha2 utilities";
  ppuVar2 = &puStack256;
  do {
    puVar8 = (undefined *)ppuVar2;
    bVar15 = false;
    bVar16 = *(byte **)(puVar8 + 0x10) == (byte *)0x0;
    if (bVar16) break;
    lVar14 = 6;
    pbVar11 = (byte *)"users";
    pbVar12 = *(byte **)(puVar8 + 0x10);
    do {
      if (lVar14 == 0) break;
      lVar14 = lVar14 + -1;
      bVar15 = *pbVar11 < *pbVar12;
      bVar16 = *pbVar11 == *pbVar12;
      pbVar11 = pbVar11 + (ulong)bVar17 * -2 + 1;
      pbVar12 = pbVar12 + (ulong)bVar17 * -2 + 1;
    } while (bVar16);
    ppuVar2 = (undefined **)(puVar8 + 0x10);
  } while ((!bVar15 && !bVar16) != bVar15);
  pcVar5 = *(char **)(puVar8 + 0x18);
  if (pcVar5 == (char *)0x0) {
    uVar6 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar6,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar5 = setlocale(5,(char *)0x0);
    if (pcVar5 != (char *)0x0) {
      iVar4 = strncmp(pcVar5,"en_",3);
      if (iVar4 != 0) {
        pcVar5 = "users";
        goto LAB_00102dba;
      }
    }
    uVar6 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar5 = "users";
    __printf_chk(1,uVar6,"https://www.gnu.org/software/coreutils/","users");
    pcVar9 = " invocation";
  }
  else {
    uVar6 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar6,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar9 = setlocale(5,(char *)0x0);
    if (pcVar9 != (char *)0x0) {
      iVar4 = strncmp(pcVar9,"en_",3);
      if (iVar4 != 0) {
LAB_00102dba:
        pFVar1 = stdout;
        pcVar9 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar9,pFVar1);
      }
    }
    uVar6 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar9 = " invocation";
    __printf_chk(1,uVar6,"https://www.gnu.org/software/coreutils/","users");
    if (pcVar5 != "users") {
      pcVar9 = "";
    }
  }
  uVar6 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar6,pcVar5,pcVar9);
LAB_00102aea:
                    /* WARNING: Subroutine does not return */
  exit(iVar3);
}

