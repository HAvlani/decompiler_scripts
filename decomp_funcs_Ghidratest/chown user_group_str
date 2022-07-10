
char * user_group_str(char *user,char *group)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (user == (char *)0x0) {
    user = group;
    if (group != (char *)0x0) goto LAB_001034c0;
    pcVar3 = (char *)0x0;
  }
  else {
    if (group == (char *)0x0) {
LAB_001034c0:
      pcVar3 = xstrdup(user);
      return pcVar3;
    }
    sVar1 = strlen(user);
    sVar2 = strlen(group);
    pcVar3 = (char *)xmalloc(sVar1 + 2 + sVar2);
    pcVar4 = stpcpy(pcVar3,user);
    *pcVar4 = ':';
    strcpy(pcVar4 + 1,group);
  }
  return pcVar3;
}

