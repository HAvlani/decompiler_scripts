
gid_t * getgidbyname(char *group)

{
  char cVar1;
  userid *puVar2;
  int iVar3;
  group *pgVar4;
  size_t sVar5;
  userid *puVar6;
  
  if (group_alist != (userid *)0x0) {
    cVar1 = *group;
    puVar6 = group_alist;
    do {
      if ((*(char *)&puVar6[1].id == cVar1) &&
         (iVar3 = strcmp((char *)(puVar6 + 1),group), iVar3 == 0)) {
        return (gid_t *)puVar6;
      }
      puVar6 = puVar6->next;
    } while (puVar6 != (userid *)0x0);
  }
  if (nogroup_alist != (userid *)0x0) {
    cVar1 = *group;
    puVar6 = nogroup_alist;
    do {
      if ((*(char *)&puVar6[1].id == cVar1) &&
         (iVar3 = strcmp((char *)(puVar6 + 1),group), iVar3 == 0)) {
        return (gid_t *)0x0;
      }
      puVar6 = puVar6->next;
    } while (puVar6 != (userid *)0x0);
  }
  pgVar4 = getgrnam(group);
  sVar5 = strlen(group);
  puVar6 = (userid *)xmalloc(sVar5 + 0x18 & 0xfffffffffffffff8);
  strcpy((char *)(puVar6 + 1),group);
  if (pgVar4 != (group *)0x0) {
    puVar6->id = pgVar4->gr_gid;
    puVar2 = puVar6;
    puVar6->next = group_alist;
    group_alist = puVar2;
    return (gid_t *)puVar6;
  }
  puVar6->next = nogroup_alist;
  nogroup_alist = puVar6;
  return (gid_t *)0x0;
}

