
char * make_id_equals_comment(STRUCT_UTMP *utmp_ent)

{
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  char *__dest;
  char *pcVar4;
  char *pcVar5;
  
  pcVar2 = (char *)dcgettext(0,&DAT_0010a01c,5);
  sVar3 = strlen(pcVar2);
  __dest = (char *)xmalloc(sVar3 + 5);
  pcVar2 = (char *)dcgettext(0,&DAT_0010a01c,5);
  pcVar4 = stpcpy(__dest,pcVar2);
  pcVar2 = utmp_ent->ut_id;
  do {
    cVar1 = *pcVar2;
    pcVar5 = pcVar4;
    if (cVar1 == '\0') break;
    pcVar2 = pcVar2 + 1;
    pcVar5 = pcVar4 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar5;
  } while (pcVar2 < utmp_ent->ut_user);
  *pcVar5 = '\0';
  return __dest;
}

