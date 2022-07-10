
void save_token(Tokens *t)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  char *pcVar5;
  _obstack_chunk *p_Var6;
  char *pcVar7;
  char **ppcVar8;
  char **ppcVar9;
  
  pcVar2 = (t->o_data).next_free;
  pcVar3 = (t->o_data).object_base;
  if (pcVar2 == pcVar3) {
    puVar1 = &(t->o_data).field_0x50;
    *puVar1 = *puVar1 | 2;
  }
  uVar4 = (t->o_data).alignment_mask;
  pcVar5 = (t->o_data).chunk_limit;
  pcVar7 = (char *)((ulong)(pcVar2 + uVar4) & ~uVar4);
  p_Var6 = (t->o_data).chunk;
  (t->o_data).next_free = pcVar7;
  if ((ulong)((long)pcVar5 - (long)p_Var6) < (ulong)((long)pcVar7 - (long)p_Var6)) {
    (t->o_data).next_free = pcVar5;
    pcVar7 = pcVar5;
  }
  (t->o_data).object_base = pcVar7;
  ppcVar8 = (char **)(t->o_tok).next_free;
  if ((ulong)((long)(t->o_tok).chunk_limit - (long)ppcVar8) < 8) {
    _obstack_newchunk(&t->o_tok,8);
    ppcVar8 = (char **)(t->o_tok).next_free;
  }
  *ppcVar8 = pcVar3;
  ppcVar9 = (char **)(t->o_tok_len).next_free;
  pcVar5 = (t->o_tok_len).chunk_limit;
  ppcVar8 = &(t->o_tok).next_free;
  *ppcVar8 = *ppcVar8 + 8;
  if ((ulong)((long)pcVar5 - (long)ppcVar9) < 8) {
    _obstack_newchunk(&t->o_tok_len,8);
    ppcVar9 = (char **)(t->o_tok_len).next_free;
  }
  *ppcVar9 = pcVar2 + (-1 - (long)pcVar3);
  ppcVar8 = &(t->o_tok_len).next_free;
  *ppcVar8 = *ppcVar8 + 8;
  t->n_tok = t->n_tok + 1;
  return;
}

