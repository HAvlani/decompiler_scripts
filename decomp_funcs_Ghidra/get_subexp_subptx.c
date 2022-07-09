
reg_errcode_t
get_subexp_sub(re_match_context_t *mctx,re_sub_match_last_t *sub_last,Idx bkref_node,Idx bkref_str,
              re_sub_match_top_t *sub_top)

{
  long lVar1;
  long lVar2;
  reg_errcode_t rVar3;
  long lVar4;
  re_backref_cache_entry *prVar5;
  long lVar6;
  
  rVar3 = check_arrival(mctx,(state_array_t *)(bkref_node + 0x10),*(Idx *)bkref_node,
                        *(Idx *)(bkref_node + 8),bkref_str,(Idx)sub_top,8);
  if (rVar3 != _REG_NOERROR) {
    return rVar3;
  }
  lVar1 = *(long *)(bkref_node + 8);
  lVar4 = mctx->nbkref_ents;
  lVar2 = sub_last->node;
  prVar5 = mctx->bkref_ents;
  lVar6 = lVar1;
  if (mctx->abkref_ents <= lVar4) {
    prVar5 = (re_backref_cache_entry *)realloc(prVar5,mctx->abkref_ents * 0x60);
    if (prVar5 == (re_backref_cache_entry *)0x0) {
      rpl_free(mctx->bkref_ents);
      return _REG_ESPACE;
    }
    mctx->bkref_ents = prVar5;
    memset(prVar5 + mctx->nbkref_ents,0,mctx->abkref_ents * 0x30);
    lVar6 = *(long *)(bkref_node + 8);
    mctx->abkref_ents = mctx->abkref_ents << 1;
    lVar4 = mctx->nbkref_ents;
    prVar5 = mctx->bkref_ents;
  }
  if ((0 < lVar4) && (sub_top == (re_sub_match_top_t *)prVar5[lVar4 + -1].str_idx)) {
    prVar5[lVar4 + -1].more = '\x01';
  }
  prVar5 = prVar5 + lVar4;
  prVar5->node = bkref_str;
  prVar5->str_idx = (Idx)sub_top;
  prVar5->eps_reachable_subexps_map = -(ulong)(lVar1 == lVar2);
  prVar5->subexp_from = lVar2;
  prVar5->subexp_to = lVar1;
  mctx->nbkref_ents = lVar4 + 1;
  prVar5->more = '\0';
  if ((long)mctx->max_mb_elem_len < lVar1 - lVar2) {
    mctx->max_mb_elem_len = (int)lVar1 - (int)lVar2;
  }
  rVar3 = clean_state_log_if_needed(mctx,(long)sub_top + (lVar6 - sub_last->node));
  return rVar3;
}

