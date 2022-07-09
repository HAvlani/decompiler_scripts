
bin_tree_t *
parse_reg_exp(re_string_t *regexp,regex_t *preg,re_token_t *token,reg_syntax_t syntax,Idx nest,
             reg_errcode_t *err)

{
  re_dfa_t *prVar1;
  long lVar2;
  bitset_word_t bVar3;
  ulong uVar4;
  int iVar5;
  bin_tree_t *root;
  bin_tree_t *pbVar6;
  long in_FS_OFFSET;
  re_token_t t;
  
  prVar1 = preg->buffer;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  bVar3 = prVar1->completed_bkref_map;
  root = parse_branch(regexp,preg,token,syntax,nest,err);
  if ((*err == _REG_NOERROR) || (root != (bin_tree_t *)0x0)) {
    do {
      if (token->field_0x8 != '\n') goto LAB_0011ca43;
      iVar5 = peek_token(token,regexp,syntax | 0x800000);
      regexp->cur_idx = regexp->cur_idx + (long)iVar5;
      if (((token->field_0x8 & 0xf7) != 2) && ((token->field_0x8 != 9 || (nest == 0)))) {
        uVar4 = prVar1->completed_bkref_map;
        prVar1->completed_bkref_map = bVar3;
        pbVar6 = parse_branch(regexp,preg,token,syntax,nest,err);
        if ((*err != _REG_NOERROR) && (pbVar6 == (bin_tree_t *)0x0)) {
          if (root != (bin_tree_t *)0x0) {
            postorder(root,free_tree,(void *)0x0);
          }
          goto LAB_0011ca83;
        }
        prVar1->completed_bkref_map = prVar1->completed_bkref_map | uVar4;
      }
      root = create_token_tree();
    } while (root != (bin_tree_t *)0x0);
    *err = _REG_ESPACE;
  }
  else {
LAB_0011ca83:
    root = (bin_tree_t *)0x0;
  }
LAB_0011ca43:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return root;
}

