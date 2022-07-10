
void splitbuf_grow(splitbuf *ss)

{
  long lVar1;
  char *pcVar2;
  char **ppcVar3;
  
  lVar1 = ss->half_alloc;
  pcVar2 = ss->argv[ss->argc];
  ppcVar3 = (char **)xpalloc(ss->argv,&ss->half_alloc,1,0x7fffffff,0x10);
  ss->argv = ppcVar3;
  (*(code *)PTR_memmove_0010cf28)(ppcVar3 + ss->half_alloc,ppcVar3 + lVar1,pcVar2);
  return;
}

