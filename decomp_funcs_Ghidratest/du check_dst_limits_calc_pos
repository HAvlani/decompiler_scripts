
int check_dst_limits_calc_pos
              (re_match_context_t *mctx,Idx limit,Idx subexp_idx,Idx from_node,Idx str_idx,
              Idx bkref_idx)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint boundaries;
  
  lVar1 = mctx->bkref_ents[limit].subexp_from;
  if (str_idx < lVar1) {
    return -1;
  }
  lVar2 = mctx->bkref_ents[limit].subexp_to;
  if (str_idx <= lVar2) {
    boundaries = (uint)(lVar1 == str_idx);
    if (lVar2 == str_idx) {
      boundaries = lVar1 == str_idx | 2;
    }
    else if (lVar1 != str_idx) {
      return 0;
    }
    iVar3 = check_dst_limits_calc_pos_1(mctx,boundaries,subexp_idx,from_node,bkref_idx);
    return iVar3;
  }
  return 1;
}

