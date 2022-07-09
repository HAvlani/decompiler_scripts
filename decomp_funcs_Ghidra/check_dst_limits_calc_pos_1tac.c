
int check_dst_limits_calc_pos_1
              (re_match_context_t *mctx,int boundaries,Idx subexp_idx,Idx from_node,Idx bkref_idx)

{
  char *pcVar1;
  char cVar2;
  re_dfa_t *prVar3;
  re_node_set *prVar4;
  long lVar5;
  long from_node_00;
  int iVar6;
  ulong uVar7;
  re_token_t *prVar8;
  long lVar9;
  re_backref_cache_entry *prVar10;
  
  prVar3 = mctx->dfa;
  prVar4 = prVar3->eclosures;
  if (0 < prVar4[from_node].nelem) {
    lVar9 = 0;
    uVar7 = 1 << ((byte)subexp_idx & 0x3f);
    do {
      while( true ) {
        lVar5 = prVar4[from_node].elems[lVar9];
        prVar8 = prVar3->nodes + lVar5;
        cVar2 = prVar8->field_0x8;
        if (cVar2 != '\b') break;
        if (((boundaries & 1U) != 0) && (prVar8->opr == subexp_idx)) {
          return -1;
        }
LAB_00105eed:
        lVar9 = lVar9 + 1;
        if (prVar4[from_node].nelem == lVar9 || prVar4[from_node].nelem < lVar9) goto LAB_0010605b;
      }
      if (cVar2 == '\t') {
        if (((boundaries & 2U) != 0) && (prVar8->opr == subexp_idx)) {
          return 0;
        }
        goto LAB_00105eed;
      }
      if ((cVar2 != '\x04') || (bkref_idx == -1)) goto LAB_00105eed;
      prVar10 = mctx->bkref_ents + bkref_idx;
      do {
        if ((prVar10->node == lVar5) &&
           ((0x3f < subexp_idx || ((prVar10->eps_reachable_subexps_map & uVar7) != 0)))) {
          from_node_00 = *prVar3->edests[lVar5].elems;
          if (from_node == from_node_00) {
            return -(boundaries & 1U);
          }
          iVar6 = check_dst_limits_calc_pos_1(mctx,boundaries,subexp_idx,from_node_00,bkref_idx);
          if (iVar6 == -1) {
            return -1;
          }
          if ((iVar6 == 0) && ((boundaries & 2U) != 0)) {
            return 0;
          }
          if (subexp_idx < 0x40) {
            prVar10->eps_reachable_subexps_map = prVar10->eps_reachable_subexps_map & ~uVar7;
          }
        }
        pcVar1 = &prVar10->more;
        prVar10 = prVar10 + 1;
      } while (*pcVar1 != '\0');
      lVar9 = lVar9 + 1;
    } while (prVar4[from_node].nelem != lVar9 && lVar9 <= prVar4[from_node].nelem);
  }
LAB_0010605b:
  return boundaries >> 1;
}

