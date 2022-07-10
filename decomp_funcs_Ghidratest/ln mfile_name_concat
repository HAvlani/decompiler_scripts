
char * mfile_name_concat(char *dir,char *base,char **base_in_result)

{
  char *pcVar1;
  size_t sVar2;
  size_t __n;
  char *__dest;
  undefined *puVar3;
  ulong uVar4;
  undefined local_41;
  
  pcVar1 = last_component(dir);
  sVar2 = base_len(pcVar1);
  pcVar1 = pcVar1 + (sVar2 - (long)dir);
  __n = strlen(base);
  if (sVar2 == 0) {
    local_41 = 0x2e;
    if (*base != '/') {
      local_41 = 0;
    }
    uVar4 = (ulong)(*base == '/');
  }
  else if (dir[(long)(pcVar1 + -1)] == '/') {
    local_41 = 0;
    uVar4 = 0;
  }
  else {
    local_41 = 0x2f;
    if (*base == '/') {
      local_41 = 0;
    }
    uVar4 = (ulong)(*base != '/');
  }
  __dest = (char *)malloc((size_t)(pcVar1 + uVar4 + __n + 1));
  if (__dest != (char *)0x0) {
    puVar3 = (undefined *)mempcpy(__dest,dir,(size_t)pcVar1);
    *puVar3 = local_41;
    if (base_in_result != (char **)0x0) {
      *base_in_result = puVar3 + uVar4;
    }
    puVar3 = (undefined *)mempcpy(puVar3 + uVar4,base,__n);
    *puVar3 = 0;
  }
  return __dest;
}

