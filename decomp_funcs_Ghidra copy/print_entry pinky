
/* WARNING: Could not reconcile some variable overlaps */

void print_entry(STRUCT_UTMP *utmp_ent)

{
  char cVar1;
  int iVar2;
  passwd *ppVar3;
  char *pcVar4;
  char *pcVar5;
  tm *__tp;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  char cVar9;
  undefined1 *puVar10;
  long in_FS_OFFSET;
  time_t t;
  stat stats;
  char line [38];
  char name [33];
  long local_40;
  
  cVar9 = utmp_ent->ut_line[0];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (cVar9 == '/') {
    pcVar5 = line;
  }
  else {
    pcVar5 = line + 5;
    line._0_4_ = 0x7665642f;
    line._4_2_ = 0x2f;
  }
  pcVar4 = utmp_ent->ut_line;
  while (pcVar7 = pcVar5, cVar9 != '\0') {
    pcVar4 = pcVar4 + 1;
    pcVar7 = pcVar5 + 1;
    *pcVar5 = cVar9;
    if (utmp_ent->ut_id <= pcVar4) break;
    pcVar5 = pcVar7;
    cVar9 = *pcVar4;
  }
  *pcVar7 = '\0';
  iVar2 = __xstat(1,line,(stat *)&stats);
  if (iVar2 == 0) {
    cVar9 = (-((stats.st_mode & 0x10) == 0) & 10U) + 0x20;
  }
  else {
    cVar9 = '?';
    stats.st_atim.tv_sec = 0;
  }
  pcVar5 = utmp_ent->ut_user;
  __printf_chk(1,"%-8.*s",0x20,pcVar5);
  if (include_fullname != false) {
    pcVar4 = name;
    do {
      cVar1 = *pcVar5;
      pcVar7 = pcVar4;
      if (cVar1 == '\0') break;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar4 + 1;
      *pcVar4 = cVar1;
      pcVar4 = pcVar7;
    } while (pcVar5 < utmp_ent->ut_host);
    *pcVar7 = '\0';
    ppVar3 = getpwnam(name);
    if (ppVar3 == (passwd *)0x0) {
      uVar6 = dcgettext(0,"        ???",5);
      __printf_chk(1," %19s",uVar6);
    }
    else {
      pcVar5 = ppVar3->pw_gecos;
      pcVar4 = strchr(pcVar5,0x2c);
      if (pcVar4 != (char *)0x0) {
        *pcVar4 = '\0';
        pcVar5 = ppVar3->pw_gecos;
      }
      pcVar5 = create_fullname(pcVar5,ppVar3->pw_name);
      __printf_chk(1," %-19.19s",pcVar5);
      rpl_free(pcVar5);
    }
  }
  __printf_chk(1,&DAT_00107078,cVar9,0x20,utmp_ent->ut_line);
  if (include_idle != false) {
    if (stats.st_atim.tv_sec == 0) {
      pcVar5 = (char *)dcgettext(0,"?????",5);
    }
    else {
      if (now_7348 == 0) {
        time(&now_7348);
      }
      lVar8 = now_7348 - stats.st_atim.tv_sec;
      pcVar5 = "     ";
      if (0x3b < lVar8) {
        if (lVar8 < 0x15180) {
          __sprintf_chk(buf_7349,1,0x16,"%02d:%02d",lVar8 / 0xe10,
                        (ulong)(lVar8 % 0xe10) / 0x3c & 0xffffffff);
          pcVar5 = buf_7349;
        }
        else {
          __sprintf_chk(buf_7349,1,0x16,&DAT_0010708c,lVar8 / 0x15180);
          pcVar5 = buf_7349;
        }
      }
    }
    __printf_chk(1," %-6s",pcVar5);
  }
  t = (time_t)(utmp_ent->ut_tv).tv_sec;
  __tp = localtime(&t);
  if (__tp == (tm *)0x0) {
    puVar10 = imaxtostr(t,buf_7357);
  }
  else {
    strftime(buf_7357,0x21,time_format,__tp);
    puVar10 = buf_7357;
  }
  __printf_chk(1," %s",puVar10);
  if ((include_where != false) && (cVar9 = utmp_ent->ut_host[0], cVar9 != '\0')) {
    pcVar5 = utmp_ent->ut_host;
    pcVar4 = name;
    do {
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar4 + 1;
      *pcVar4 = cVar9;
      if (&utmp_ent->ut_exit <= pcVar5) break;
      cVar9 = *pcVar5;
      pcVar4 = pcVar7;
    } while (cVar9 != '\0');
    *pcVar7 = '\0';
    pcVar5 = strchr(name,0x3a);
    if (pcVar5 == (char *)0x0) {
      if ((name[0] == '\0') || (pcVar4 = canon_host(name), pcVar4 == (char *)0x0)) {
        pcVar4 = name;
      }
      __printf_chk(1," %s",pcVar4);
    }
    else {
      *pcVar5 = '\0';
      pcVar4 = name;
      if ((name[0] != '\0') && (pcVar4 = canon_host(name), pcVar4 == (char *)0x0)) {
        pcVar4 = name;
      }
      __printf_chk(1," %s:%s",pcVar4,pcVar5 + 1);
    }
    if (pcVar4 != name) {
      rpl_free(pcVar4);
    }
  }
  pcVar5 = stdout->_IO_write_ptr;
  if (pcVar5 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar5 + 1;
    *pcVar5 = '\n';
  }
  else {
    __overflow(stdout,10);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

