
char * getuser(uid_t uid)

{
  userid *puVar1;
  passwd *ppVar2;
  size_t sVar3;
  userid *puVar4;
  size_t s;
  char *__s;
  
  puVar4 = user_alist;
  if (user_alist != (userid *)0x0) {
    do {
      if (puVar4->id == uid) goto LAB_0011057d;
      puVar4 = puVar4->next;
    } while (puVar4 != (userid *)0x0);
  }
  __s = "";
  ppVar2 = getpwuid(uid);
  s = 0x18;
  if (ppVar2 != (passwd *)0x0) {
    __s = ppVar2->pw_name;
    sVar3 = strlen(__s);
    s = sVar3 + 0x18 & 0xfffffffffffffff8;
  }
  puVar4 = (userid *)xmalloc(s);
  puVar4->id = uid;
  strcpy((char *)(puVar4 + 1),__s);
  puVar1 = puVar4;
  puVar4->next = user_alist;
  user_alist = puVar1;
LAB_0011057d:
  puVar1 = (userid *)0x0;
  if (*(char *)&puVar4[1].id != '\0') {
    puVar1 = puVar4 + 1;
  }
  return (char *)puVar1;
}

