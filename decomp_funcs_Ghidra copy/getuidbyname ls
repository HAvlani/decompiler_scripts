
uid_t * getuidbyname(char *user)

{
  char cVar1;
  userid *puVar2;
  int iVar3;
  passwd *ppVar4;
  size_t sVar5;
  userid *puVar6;
  
  if (user_alist != (userid *)0x0) {
    cVar1 = *user;
    puVar6 = user_alist;
    do {
      if ((*(char *)&puVar6[1].id == cVar1) &&
         (iVar3 = strcmp((char *)(puVar6 + 1),user), iVar3 == 0)) {
        return (uid_t *)puVar6;
      }
      puVar6 = puVar6->next;
    } while (puVar6 != (userid *)0x0);
  }
  if (nouser_alist != (userid *)0x0) {
    cVar1 = *user;
    puVar6 = nouser_alist;
    do {
      if ((*(char *)&puVar6[1].id == cVar1) &&
         (iVar3 = strcmp((char *)(puVar6 + 1),user), iVar3 == 0)) {
        return (uid_t *)0x0;
      }
      puVar6 = puVar6->next;
    } while (puVar6 != (userid *)0x0);
  }
  ppVar4 = getpwnam(user);
  sVar5 = strlen(user);
  puVar6 = (userid *)xmalloc(sVar5 + 0x18 & 0xfffffffffffffff8);
  strcpy((char *)(puVar6 + 1),user);
  if (ppVar4 != (passwd *)0x0) {
    puVar6->id = ppVar4->pw_uid;
    puVar2 = puVar6;
    puVar6->next = user_alist;
    user_alist = puVar2;
    return (uid_t *)puVar6;
  }
  puVar6->next = nouser_alist;
  nouser_alist = puVar6;
  return (uid_t *)0x0;
}

