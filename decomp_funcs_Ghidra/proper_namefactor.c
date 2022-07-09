
char * proper_name(char *name)

{
  char cVar1;
  char *__s;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  
  __s = (char *)dcgettext(0,name,5);
  if (name != __s) {
    cVar1 = mbsstr_trimmed_wordbounded(__s,name);
    if (cVar1 == '\0') {
      sVar2 = strlen(__s);
      sVar3 = strlen(name);
      pcVar4 = (char *)xmalloc(sVar2 + 4 + sVar3);
      __sprintf_chk(pcVar4,1,0xffffffffffffffff,"%s (%s)",__s,name);
      return pcVar4;
    }
  }
  return __s;
}

