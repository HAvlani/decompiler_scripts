
void exclude_add_pattern_buffer(exclude *ex,char *buf)

{
  pattern_buffer *ppVar1;
  pattern_buffer *ppVar2;
  
  ppVar2 = (pattern_buffer *)xmalloc(0x10);
  ppVar1 = ex->patbuf;
  ppVar2->base = buf;
  ppVar2->next = ppVar1;
  ex->patbuf = ppVar2;
  return;
}

