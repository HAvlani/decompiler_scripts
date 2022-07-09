
void splitbuf_append_byte(splitbuf *ss,char c)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  
  ppcVar3 = ss->argv;
  pcVar1 = ppcVar3[ss->argc];
  pcVar2 = (char *)(ss->half_alloc << 3);
  if (pcVar2 <= pcVar1) {
    splitbuf_grow(ss);
    ppcVar3 = ss->argv;
    pcVar2 = (char *)(ss->half_alloc << 3);
  }
  (pcVar2 + (long)ppcVar3)[(long)pcVar1] = c;
  ss->argv[ss->argc] = pcVar1 + 1;
  return;
}

