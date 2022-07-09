
void file_name_prepend(file_name *p,char *s,size_t s_len)

{
  char *pcVar1;
  char *pcVar2;
  size_t sVar3;
  ulong uVar4;
  
  pcVar1 = p->start;
  uVar4 = (long)pcVar1 - (long)p->buf;
  if (uVar4 < s_len + 1) {
    sVar3 = s_len + 1 + p->n_alloc;
    pcVar2 = (char *)xnmalloc(2,sVar3);
    sVar3 = sVar3 * 2;
    pcVar1 = p->buf;
    p->start = pcVar2 + ((sVar3 + uVar4) - p->n_alloc);
    memcpy(pcVar2 + ((sVar3 + uVar4) - p->n_alloc),pcVar1 + uVar4,p->n_alloc - uVar4);
    rpl_free(pcVar1);
    p->buf = pcVar2;
    pcVar1 = p->start;
    p->n_alloc = sVar3;
  }
  p->start = pcVar1 + ~s_len;
  pcVar1[~s_len] = '/';
  memcpy(p->start + 1,s,s_len);
  return;
}

