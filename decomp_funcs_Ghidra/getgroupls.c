
char * getgroup(gid_t gid)

{
  userid *puVar1;
  group *pgVar2;
  size_t sVar3;
  userid *puVar4;
  size_t s;
  char *__s;
  
  puVar4 = group_alist;
  if (group_alist != (userid *)0x0) {
    do {
      if (puVar4->id == gid) goto LAB_0011072d;
      puVar4 = puVar4->next;
    } while (puVar4 != (userid *)0x0);
  }
  __s = "";
  pgVar2 = getgrgid(gid);
  s = 0x18;
  if (pgVar2 != (group *)0x0) {
    __s = pgVar2->gr_name;
    sVar3 = strlen(__s);
    s = sVar3 + 0x18 & 0xfffffffffffffff8;
  }
  puVar4 = (userid *)xmalloc(s);
  puVar4->id = gid;
  strcpy((char *)(puVar4 + 1),__s);
  puVar1 = puVar4;
  puVar4->next = group_alist;
  group_alist = puVar1;
LAB_0011072d:
  puVar1 = (userid *)0x0;
  if (*(char *)&puVar4[1].id != '\0') {
    puVar1 = puVar4 + 1;
  }
  return (char *)puVar1;
}

