
void _obstack_newchunk(obstack *h,size_t length)

{
  _obstack_chunk *old_chunk;
  _obstack_chunk *p_Var1;
  _obstack_chunk *p_Var2;
  _obstack_chunk *p_Var3;
  obstack *poVar4;
  char *pcVar5;
  ulong __n;
  
  __n = (long)h->next_free - (long)h->object_base;
  old_chunk = h->chunk;
  p_Var3 = (_obstack_chunk *)(length + __n + h->alignment_mask);
  p_Var2 = (_obstack_chunk *)((long)&p_Var3[6].limit + (__n >> 3) + 4);
  if (p_Var3 <= (_obstack_chunk *)h->chunk_size) {
    p_Var3 = (_obstack_chunk *)h->chunk_size;
  }
  if (p_Var2 <= p_Var3) {
    p_Var2 = p_Var3;
  }
  poVar4 = h;
  if ((CARRY8(length,__n) == false) && (CARRY8(length + __n,h->alignment_mask) == false)) {
    p_Var3 = p_Var2;
    p_Var1 = (_obstack_chunk *)call_chunkfun(h,(size_t)p_Var2);
    if (p_Var1 != (_obstack_chunk *)0x0) {
      pcVar5 = (char *)((long)&p_Var2->limit + (long)&p_Var1->limit);
      h->chunk = p_Var1;
      p_Var1->prev = old_chunk;
      h->chunk_limit = pcVar5;
      p_Var1->limit = pcVar5;
      pcVar5 = (char *)((long)&p_Var1[1].limit + h->alignment_mask & ~h->alignment_mask);
      memcpy(pcVar5,h->object_base,__n);
      if (((h->field_0x50 & 2) == 0) &&
         (h->object_base ==
          (char *)(~h->alignment_mask & (long)&old_chunk[1].limit + h->alignment_mask))) {
        p_Var1->prev = old_chunk->prev;
        call_freefun(h,old_chunk);
      }
      h->field_0x50 = h->field_0x50 & 0xfd;
      h->object_base = pcVar5;
      h->next_free = pcVar5 + __n;
      return;
    }
  }
  (*obstack_alloc_failed_handler)();
  p_Var2 = poVar4->chunk;
  if (p_Var2 != (_obstack_chunk *)0x0) {
    while ((p_Var3 <= p_Var2 || ((_obstack_chunk *)p_Var2->limit < p_Var3))) {
      p_Var2 = p_Var2->prev;
      if (p_Var2 == (_obstack_chunk *)0x0) {
        return;
      }
    }
    return;
  }
  return;
}

