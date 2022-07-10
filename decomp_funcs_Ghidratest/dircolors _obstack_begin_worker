
int _obstack_begin_worker(obstack *h,size_t size,size_t alignment)

{
  int iVar1;
  _obstack_chunk *p_Var2;
  undefined8 in_RCX;
  char *pcVar3;
  size_t alignment_00;
  char *pcVar4;
  obstack *h_00;
  undefined8 in_R8;
  size_t sVar5;
  
  if (alignment == 0) {
    sVar5 = 0xf;
    alignment = 0x10;
  }
  else {
    sVar5 = alignment - 1;
  }
  h->alignment_mask = sVar5;
  if (size == 0) {
    size = 0xfe0;
  }
  h->chunk_size = size;
  h_00 = h;
  p_Var2 = (_obstack_chunk *)call_chunkfun(h,size);
  h->chunk = p_Var2;
  if (p_Var2 != (_obstack_chunk *)0x0) {
    pcVar4 = (char *)(-alignment & (long)&p_Var2[1].limit + sVar5);
    h->object_base = pcVar4;
    pcVar3 = (char *)((long)&p_Var2->limit + h->chunk_size);
    h->next_free = pcVar4;
    p_Var2->limit = pcVar3;
    h->chunk_limit = pcVar3;
    p_Var2->prev = (_obstack_chunk *)0x0;
    h->field_0x50 = h->field_0x50 & 0xf9;
    return 1;
  }
  (*obstack_alloc_failed_handler)();
  h_00->field_0x50 = h_00->field_0x50 & 0xfe;
  h_00->chunkfun = in_RCX;
  h_00->freefun = in_R8;
  iVar1 = _obstack_begin_worker(h_00,size,alignment_00);
  return iVar1;
}

