
void _obstack_free(obstack *param_1,_obstack_chunk *param_2)

{
  _obstack_chunk *p_Var1;
  _obstack_chunk *old_chunk;
  
  old_chunk = param_1->chunk;
  while( true ) {
    if (old_chunk == (_obstack_chunk *)0x0) {
      if (param_2 == (_obstack_chunk *)0x0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if ((old_chunk < param_2) && (p_Var1 = (_obstack_chunk *)old_chunk->limit, param_2 <= p_Var1))
    break;
    p_Var1 = old_chunk->prev;
    call_freefun(param_1,old_chunk);
    param_1->field_0x50 = param_1->field_0x50 | 2;
    old_chunk = p_Var1;
  }
  param_1->next_free = (char *)param_2;
  param_1->object_base = (char *)param_2;
  param_1->chunk_limit = (char *)p_Var1;
  param_1->chunk = old_chunk;
  return;
}

