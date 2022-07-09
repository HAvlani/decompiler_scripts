
char * subst_suffix(char *str,char *suffix,char *newsuffix)

{
  size_t sVar1;
  void *__dest;
  char *pcVar2;
  size_t __n;
  
  __n = (long)suffix - (long)str;
  sVar1 = strlen(newsuffix);
  __dest = ximalloc(sVar1 + 1 + __n);
  memcpy((void *)((long)__dest + __n),newsuffix,sVar1 + 1);
  pcVar2 = (char *)memcpy(__dest,str,__n);
  return pcVar2;
}

