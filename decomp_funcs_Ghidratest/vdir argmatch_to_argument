
char * argmatch_to_argument(void *value,char **arglist,void *vallist,size_t valsize)

{
  int iVar1;
  char **ppcVar2;
  char *pcVar3;
  
  pcVar3 = *arglist;
  if (pcVar3 != (char *)0x0) {
    ppcVar2 = arglist + 1;
    do {
      iVar1 = memcmp(value,vallist,valsize);
      if (iVar1 == 0) {
        return pcVar3;
      }
      pcVar3 = *ppcVar2;
      vallist = (void *)((long)vallist + valsize);
      ppcVar2 = ppcVar2 + 1;
    } while (pcVar3 != (char *)0x0);
  }
  return pcVar3;
}

