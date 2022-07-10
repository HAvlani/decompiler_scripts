
_Bool readtokens0(FILE *in,Tokens *t)

{
  char **ppcVar1;
  undefined *puVar2;
  char **ppcVar3;
  ulong uVar4;
  _obstack_chunk *p_Var5;
  size_t *psVar6;
  size_t *psVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 *puVar11;
  
LAB_001122be:
  do {
    iVar8 = fgetc((FILE *)in);
    pcVar9 = (t->o_data).next_free;
    if (iVar8 == -1) {
      if (pcVar9 != (t->o_data).object_base) {
        if (pcVar9 == (t->o_data).chunk_limit) {
          _obstack_newchunk(&t->o_data,1);
          pcVar9 = (t->o_data).next_free;
        }
        (t->o_data).next_free = pcVar9 + 1;
        *pcVar9 = '\0';
        save_token(t);
      }
      puVar11 = (undefined8 *)(t->o_tok).next_free;
      if ((ulong)((long)(t->o_tok).chunk_limit - (long)puVar11) < 8) {
        _obstack_newchunk(&t->o_tok,8);
        puVar11 = (undefined8 *)(t->o_tok).next_free;
      }
      *puVar11 = 0;
      ppcVar3 = (char **)(t->o_tok).object_base;
      ppcVar1 = (char **)((t->o_tok).next_free + 8);
      if (ppcVar1 == ppcVar3) {
        puVar2 = &(t->o_tok).field_0x50;
        *puVar2 = *puVar2 | 2;
      }
      uVar4 = (t->o_tok).alignment_mask;
      p_Var5 = (t->o_tok).chunk;
      pcVar10 = (char *)((ulong)((long)ppcVar1 + uVar4) & ~uVar4);
      pcVar9 = (t->o_tok).chunk_limit;
      (t->o_tok).next_free = pcVar10;
      if ((ulong)((long)pcVar9 - (long)p_Var5) < (ulong)((long)pcVar10 - (long)p_Var5)) {
        (t->o_tok).next_free = pcVar9;
        pcVar10 = pcVar9;
      }
      t->tok = ppcVar3;
      psVar6 = (size_t *)(t->o_tok_len).next_free;
      psVar7 = (size_t *)(t->o_tok_len).object_base;
      (t->o_tok).object_base = pcVar10;
      if (psVar6 == psVar7) {
        puVar2 = &(t->o_tok_len).field_0x50;
        *puVar2 = *puVar2 | 2;
      }
      uVar4 = (t->o_tok_len).alignment_mask;
      p_Var5 = (t->o_tok_len).chunk;
      pcVar10 = (char *)((ulong)((long)psVar6 + uVar4) & ~uVar4);
      pcVar9 = (t->o_tok_len).chunk_limit;
      (t->o_tok_len).next_free = pcVar10;
      if ((ulong)((long)pcVar9 - (long)p_Var5) < (ulong)((long)pcVar10 - (long)p_Var5)) {
        (t->o_tok_len).next_free = pcVar9;
        pcVar10 = pcVar9;
      }
      (t->o_tok_len).object_base = pcVar10;
      t->tok_len = psVar7;
      iVar8 = ferror((FILE *)in);
      return iVar8 == 0;
    }
    if ((t->o_data).chunk_limit != pcVar9) goto LAB_001122b0;
    _obstack_newchunk(&t->o_data,1);
    pcVar9 = (t->o_data).next_free;
    (t->o_data).next_free = pcVar9 + 1;
    *pcVar9 = (char)iVar8;
  } while (iVar8 != 0);
  goto LAB_00112300;
LAB_001122b0:
  (t->o_data).next_free = pcVar9 + 1;
  *pcVar9 = (char)iVar8;
  if (iVar8 == 0) {
LAB_00112300:
    save_token(t);
  }
  goto LAB_001122be;
}

