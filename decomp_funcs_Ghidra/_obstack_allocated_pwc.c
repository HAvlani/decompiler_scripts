
int _obstack_allocated_p(obstack *h,void *obj)

{
  _obstack_chunk *p_Var1;
  
  p_Var1 = h->chunk;
  if (p_Var1 == (_obstack_chunk *)0x0) {
    return 0;
  }
  while ((obj <= p_Var1 || (p_Var1->limit < obj))) {
    p_Var1 = p_Var1->prev;
    if (p_Var1 == (_obstack_chunk *)0x0) {
      return 0;
    }
  }
  return 1;
}

