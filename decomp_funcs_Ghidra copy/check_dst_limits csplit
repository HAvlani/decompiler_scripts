
/* WARNING: Unknown calling convention yet parameter storage is locked */

_Bool check_dst_limits(void)

{
  re_dfa_t *prVar1;
  Idx limit;
  Idx subexp_idx;
  int iVar2;
  int iVar3;
  Idx in_RCX;
  long lVar4;
  long *in_RDX;
  long lVar5;
  long lVar6;
  long *in_RSI;
  re_match_context_t *in_RDI;
  long in_R8;
  Idx in_R9;
  long bkref_idx;
  long lVar7;
  long in_stack_00000008;
  
  bkref_idx = 0;
  prVar1 = in_RDI->dfa;
  lVar7 = in_RDI->nbkref_ents;
  lVar6 = lVar7;
  while (lVar4 = lVar6, bkref_idx < lVar4) {
    lVar6 = lVar4 + bkref_idx >> 1;
    if ((&in_RDI->bkref_ents->str_idx)[((lVar4 + bkref_idx & 0xfffffffffffffffeU) + lVar6) * 2] <
        in_R8) {
      bkref_idx = lVar6 + 1;
      lVar6 = lVar4;
    }
  }
  if (bkref_idx < lVar7) {
    if (in_R8 != in_RDI->bkref_ents[bkref_idx].str_idx) {
      bkref_idx = -1;
    }
  }
  else {
    bkref_idx = -1;
  }
  lVar6 = 0;
  lVar4 = lVar7;
  while (lVar5 = lVar4, lVar6 < lVar5) {
    lVar4 = lVar5 + lVar6 >> 1;
    if ((&in_RDI->bkref_ents->str_idx)[((lVar5 + lVar6 & 0xfffffffffffffffeU) + lVar4) * 2] <
        in_stack_00000008) {
      lVar6 = lVar4 + 1;
      lVar4 = lVar5;
    }
  }
  if (lVar6 < lVar7) {
    if (in_stack_00000008 != in_RDI->bkref_ents[lVar6].str_idx) {
      lVar6 = -1;
    }
  }
  else {
    lVar6 = -1;
  }
  if (0 < *in_RSI) {
    lVar7 = 0;
    do {
      limit = *(Idx *)(*in_RDX + lVar7 * 8);
      subexp_idx = prVar1->nodes[in_RDI->bkref_ents[limit].node].opr;
      iVar2 = check_dst_limits_calc_pos(in_RDI,limit,subexp_idx,in_RCX,in_R8,bkref_idx);
      iVar3 = check_dst_limits_calc_pos
                        (in_RDI,*(Idx *)(*in_RDX + lVar7 * 8),subexp_idx,in_R9,in_stack_00000008,
                         lVar6);
      if (iVar2 != iVar3) {
        return true;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *in_RSI);
  }
  return false;
}

