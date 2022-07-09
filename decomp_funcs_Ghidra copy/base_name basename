
char * base_name(char *name)

{
  char *pcVar1;
  size_t sVar2;
  size_t __n;
  void *__dest;
  
  pcVar1 = last_component(name);
  if (*pcVar1 == '\0') {
    __n = base_len(name);
  }
  else {
    sVar2 = base_len(pcVar1);
    __n = sVar2 + (pcVar1[sVar2] == '/');
    name = pcVar1;
  }
  __dest = ximalloc(__n + 1);
  pcVar1 = (char *)memcpy(__dest,name,__n);
  pcVar1[__n] = '\0';
  return pcVar1;
}

