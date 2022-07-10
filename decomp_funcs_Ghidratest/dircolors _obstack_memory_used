
size_t _obstack_memory_used(obstack *h)

{
  _obstack_chunk *p_Var1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  for (p_Var1 = h->chunk; p_Var1 != (_obstack_chunk *)0x0; p_Var1 = p_Var1->prev) {
    pcVar2 = p_Var1->limit + ((long)pcVar2 - (long)p_Var1);
  }
  return (size_t)pcVar2;
}

