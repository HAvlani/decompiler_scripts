
char * parse_with_separator
                 (char *spec,char *separator,uid_t *uid,gid_t *gid,char **username,char **groupname)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  strtol_error sVar6;
  group *pgVar7;
  passwd *ppVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  long lVar13;
  long in_FS_OFFSET;
  __uid_t local_80;
  ulong tmp;
  char buf [21];
  
  uVar12 = 0xffffffff;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = *uid;
  if (gid != (gid_t *)0x0) {
    uVar12 = (ulong)*gid;
  }
  if (username != (char **)0x0) {
    *username = (char *)0x0;
  }
  if (groupname != (char **)0x0) {
    *groupname = (char *)0x0;
  }
  if (separator == (char *)0x0) {
    pcVar10 = (char *)0x0;
    if (*spec == '\0') goto LAB_00109ed2;
    pcVar9 = (char *)0x0;
    pcVar10 = xstrdup(spec);
    bVar4 = 1;
LAB_00109f6c:
    bVar3 = (bool)(separator != (char *)0x0 & bVar4);
    if (*pcVar10 != '+') {
      ppVar8 = getpwnam(pcVar10);
      if (ppVar8 == (passwd *)0x0) {
        if (bVar3) goto LAB_0010a099;
        goto LAB_0010a0b7;
      }
LAB_00109f94:
      local_80 = ppVar8->pw_uid;
      if (bVar3) {
        uVar1 = ppVar8->pw_gid;
        uVar12 = (ulong)uVar1;
        pgVar7 = getgrgid(uVar1);
        if (pgVar7 == (group *)0x0) {
          pcVar9 = umaxtostr((ulong)uVar1,buf);
        }
        else {
          pcVar9 = pgVar7->gr_name;
        }
        separator = xstrdup(pcVar9);
        endgrent();
        endpwent();
        goto LAB_00109ed2;
      }
      endpwent();
      if (pcVar9 == (char *)0x0) {
        separator = (char *)0x0;
        goto LAB_00109ed2;
      }
      if (*pcVar9 != '+') goto LAB_00109ead;
      goto LAB_00109fc0;
    }
LAB_0010a0b7:
    sVar6 = xstrtoul(pcVar10,(char **)0x0,10,&tmp,"");
    if (sVar6 != LONGINT_OK) {
LAB_0010a100:
      endpwent();
      pcVar9 = (char *)0x0;
      pcVar11 = "invalid user";
      goto LAB_00109ffa;
    }
    local_80 = (__uid_t)tmp;
    if (0xfffffffe < tmp) goto LAB_0010a100;
    endpwent();
    if (pcVar9 != (char *)0x0) {
      cVar5 = *pcVar9;
      username = (char **)0x0;
      goto LAB_00109ea5;
    }
    separator = (char *)0x0;
    *uid = local_80;
    if (gid != (gid_t *)0x0) {
      *gid = (gid_t)uVar12;
    }
  }
  else {
    lVar13 = (long)separator - (long)spec;
    if (lVar13 != 0) {
      pcVar10 = (char *)ximemdup(spec,lVar13 + 1);
      pcVar10[lVar13] = '\0';
      if (separator[1] != '\0') {
        pcVar9 = separator + 1;
        bVar4 = 0;
        goto LAB_00109f6c;
      }
      if (*pcVar10 != '+') {
        ppVar8 = getpwnam(pcVar10);
        if (ppVar8 != (passwd *)0x0) {
          bVar3 = true;
          pcVar9 = (char *)0x0;
          goto LAB_00109f94;
        }
      }
LAB_0010a099:
      endpwent();
      pcVar9 = (char *)0x0;
      pcVar11 = "invalid spec";
LAB_00109ffa:
      rpl_free(pcVar10);
      rpl_free(pcVar9);
      pcVar10 = (char *)dcgettext(0,pcVar11,5);
      goto LAB_00109f19;
    }
    cVar5 = separator[1];
    if (cVar5 == '\0') {
      pcVar10 = (char *)0x0;
      separator = (char *)0x0;
      goto LAB_00109ed2;
    }
    pcVar9 = separator + 1;
    pcVar10 = (char *)0x0;
LAB_00109ea5:
    if (cVar5 == '+') {
LAB_00109fc0:
      sVar6 = xstrtoul(pcVar9,(char **)0x0,10,&tmp,"");
      if ((sVar6 != LONGINT_OK) || (0xfffffffe < tmp)) {
        endgrent();
        pcVar11 = "invalid group";
        pcVar9 = xstrdup(pcVar9);
        goto LAB_00109ffa;
      }
      endgrent();
      groupname = (char **)0x0;
      separator = xstrdup(pcVar9);
      uVar12 = tmp;
    }
    else {
LAB_00109ead:
      pgVar7 = getgrnam(pcVar9);
      if (pgVar7 == (group *)0x0) goto LAB_00109fc0;
      uVar1 = pgVar7->gr_gid;
      endgrent();
      separator = xstrdup(pcVar9);
      uVar12 = (ulong)uVar1;
    }
LAB_00109ed2:
    *uid = local_80;
    if (gid != (gid_t *)0x0) {
      *gid = (gid_t)uVar12;
    }
    if (username != (char **)0x0) {
      *username = pcVar10;
      pcVar10 = (char *)0x0;
    }
  }
  if (groupname != (char **)0x0) {
    *groupname = separator;
    separator = (char *)0x0;
  }
  rpl_free(pcVar10);
  rpl_free(separator);
  pcVar10 = (char *)0x0;
LAB_00109f19:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

