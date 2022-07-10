
size_t readtokens(FILE *stream,size_t projected_n_tokens,char *delim,size_t n_delim,
                 char ***tokens_out,size_t **token_lengths)

{
  size_t *psVar1;
  char **ppcVar2;
  long lVar3;
  char **pa;
  size_t *p;
  void *__dest;
  char *pcVar4;
  size_t sVar5;
  size_t sVar6;
  long in_FS_OFFSET;
  idx_t sz;
  token_buffer tb;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if (projected_n_tokens == 0) {
    sz = 0x40;
  }
  else {
    sz = projected_n_tokens + 1;
  }
  sVar6 = 0;
  pa = (char **)xnmalloc(sz,8);
  p = (size_t *)xnmalloc(sz,8);
  tb.size = 0;
  tb.buffer = (char *)0x0;
  while( true ) {
    sVar5 = readtoken(stream,delim,n_delim,&tb);
    if (sz <= (long)sVar6) {
      pa = (char **)xpalloc(pa,&sz,1,-1,8);
      p = (size_t *)xreallocarray(p,sz,8);
    }
    psVar1 = p + sVar6;
    ppcVar2 = pa + sVar6;
    if (sVar5 == 0xffffffffffffffff) break;
    sVar6 = sVar6 + 1;
    __dest = xnmalloc(sVar5 + 1,1);
    *psVar1 = sVar5;
    pcVar4 = (char *)memcpy(__dest,tb.buffer,sVar5 + 1);
    *ppcVar2 = pcVar4;
  }
  *ppcVar2 = (char *)0x0;
  *psVar1 = 0;
  rpl_free(tb.buffer);
  *tokens_out = pa;
  if (token_lengths == (size_t **)0x0) {
    rpl_free(p);
  }
  else {
    *token_lengths = p;
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

