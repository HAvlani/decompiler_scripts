
/* WARNING: Could not reconcile some variable overlaps */

void print_user(STRUCT_UTMP *utmp_ent,time_t boottime)

{
  ulong uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined6 *puVar5;
  size_t sVar6;
  size_t sVar7;
  char *pcVar8;
  char cVar9;
  char cVar10;
  long in_FS_OFFSET;
  stat stats;
  char idlestr [7];
  char pidstr [12];
  char line [38];
  char ut_host [257];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __sprintf_chk(pidstr,1,0xc,&DAT_0010a026,(long)utmp_ent->ut_pid);
  cVar10 = utmp_ent->ut_line[0];
  if (cVar10 == '/') {
    pcVar3 = line;
  }
  else {
    pcVar3 = line + 5;
    line._0_4_ = 0x7665642f;
    line._4_2_ = 0x2f;
  }
  pcVar4 = utmp_ent->ut_line;
  while (pcVar8 = pcVar3, cVar10 != '\0') {
    pcVar4 = pcVar4 + 1;
    pcVar8 = pcVar3 + 1;
    *pcVar3 = cVar10;
    if (utmp_ent->ut_id <= pcVar4) break;
    pcVar3 = pcVar8;
    cVar10 = *pcVar4;
  }
  *pcVar8 = '\0';
  iVar2 = __xstat(1,line,(stat *)&stats);
  if (iVar2 == 0) {
    cVar10 = (-((stats.st_mode & 0x10) == 0) & 2U) + 0x2b;
    if (stats.st_atim.tv_sec != 0) {
      if (now_8007 == -0x8000000000000000) {
        time(&now_8007);
      }
      if (((boottime < stats.st_atim.tv_sec) && (now_8007 + -0x1517f <= stats.st_atim.tv_sec)) &&
         (stats.st_atim.tv_sec <= now_8007)) {
        iVar2 = (int)now_8007 - (int)stats.st_atim.tv_sec;
        if (iVar2 < 0x3c) {
          puVar5 = (undefined6 *)&DAT_0010a020;
        }
        else {
          if (0x1517f < iVar2) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("seconds_idle / (60 * 60) < 24","src/who.c",0xcd,"idle_string");
          }
          __sprintf_chk(&idle_hhmm_8009,1,6,"%02d:%02d",iVar2 / 0xe10,
                        (ulong)(uint)(iVar2 % 0xe10) / 0x3c);
          puVar5 = &idle_hhmm_8009;
        }
      }
      else {
        puVar5 = (undefined6 *)dcgettext(0," old ",5);
      }
      __sprintf_chk(idlestr,1,7,&DAT_0010a062,6,puVar5);
      cVar9 = utmp_ent->ut_host[0];
      goto joined_r0x001031d9;
    }
  }
  else {
    cVar10 = '?';
  }
  cVar9 = utmp_ent->ut_host[0];
  idlestr._0_4_ = 0x3f2020;
joined_r0x001031d9:
  if (cVar9 == '\0') {
    if (print_user::hostlen == 0) {
      print_user::hostlen = 1;
      rpl_free(print_user::hoststr);
      print_user::hoststr = (char *)xmalloc(print_user::hostlen);
    }
    pcVar3 = print_user::hoststr;
    *print_user::hoststr = '\0';
  }
  else {
    pcVar3 = utmp_ent->ut_host;
    pcVar4 = ut_host;
    do {
      pcVar3 = pcVar3 + 1;
      pcVar8 = pcVar4 + 1;
      *pcVar4 = cVar9;
      if (&utmp_ent->ut_exit <= pcVar3) break;
      cVar9 = *pcVar3;
      pcVar4 = pcVar8;
    } while (cVar9 != '\0');
    *pcVar8 = '\0';
    pcVar4 = strchr(ut_host,0x3a);
    pcVar3 = ut_host;
    if (pcVar4 == (char *)0x0) {
      if (((ut_host[0] != '\0') && (do_lookup != false)) &&
         (pcVar3 = canon_host(ut_host), pcVar3 == (char *)0x0)) {
        pcVar3 = ut_host;
      }
      sVar6 = strlen(pcVar3);
      if (print_user::hostlen < sVar6 + 3) {
        print_user::hostlen = sVar6 + 3;
        rpl_free(print_user::hoststr);
        print_user::hoststr = (char *)xmalloc(print_user::hostlen);
      }
      __sprintf_chk(print_user::hoststr,1,0xffffffffffffffff,&DAT_0010a06f);
    }
    else {
      *pcVar4 = '\0';
      if (((ut_host[0] != '\0') && (do_lookup != false)) &&
         (pcVar3 = canon_host(ut_host), pcVar3 == (char *)0x0)) {
        pcVar3 = ut_host;
      }
      sVar6 = strlen(pcVar3);
      sVar7 = strlen(pcVar4 + 1);
      uVar1 = sVar6 + 4 + sVar7;
      if (print_user::hostlen < uVar1) {
        print_user::hostlen = uVar1;
        rpl_free(print_user::hoststr);
        print_user::hoststr = (char *)xmalloc(print_user::hostlen);
      }
      __sprintf_chk(print_user::hoststr,1,0xffffffffffffffff,"(%s:%s)",pcVar3,pcVar4 + 1);
    }
    if (pcVar3 != ut_host) {
      rpl_free(pcVar3);
    }
    pcVar3 = print_user::hoststr;
    if (print_user::hoststr == (char *)0x0) {
      pcVar3 = "";
    }
  }
  pcVar4 = time_string((STRUCT_UTMP *)(ulong)(uint)(utmp_ent->ut_tv).tv_sec);
  print_line(0x20,utmp_ent->ut_user,cVar10,0x20,utmp_ent->ut_line,pcVar4,idlestr,pidstr,pcVar3,"");
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

