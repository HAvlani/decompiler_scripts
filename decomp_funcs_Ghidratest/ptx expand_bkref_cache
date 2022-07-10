
reg_errcode_t
expand_bkref_cache(re_match_context_t *mctx,re_node_set *cur_nodes,Idx cur_str,Idx subexp_num,
                  int type)

{
  char *pcVar1;
  re_dfa_t *dfa;
  long lVar2;
  _Bool _Var3;
  reg_errcode_t rVar4;
  reg_errcode_t rVar5;
  reg_errcode_t rVar6;
  re_dfastate_t *prVar7;
  Idx IVar8;
  Idx IVar9;
  long lVar10;
  long extraout_RDX;
  long lVar11;
  re_dfastate_t **pprVar12;
  long lVar13;
  re_backref_cache_entry *prVar14;
  long in_FS_OFFSET;
  reg_errcode_t err;
  re_node_set new_dests;
  
  dfa = mctx->dfa;
  lVar11 = 0;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  lVar13 = mctx->nbkref_ents;
  while (lVar10 = lVar13, lVar11 < lVar10) {
    lVar13 = lVar10 + lVar11 >> 1;
    if ((&mctx->bkref_ents->str_idx)[((lVar10 + lVar11 & 0xfffffffffffffffeU) + lVar13) * 2] <
        cur_str) {
      lVar11 = lVar13 + 1;
      lVar13 = lVar10;
    }
  }
  if (lVar11 < mctx->nbkref_ents) {
    prVar14 = mctx->bkref_ents;
    if (cur_str == prVar14[lVar11].str_idx) {
restart:
      prVar14 = prVar14 + lVar11;
      do {
        IVar8 = re_node_set_contains();
        if (IVar8 != 0) {
          lVar13 = (prVar14->subexp_to + cur_str) - prVar14->subexp_from;
          if (cur_str == lVar13) {
            IVar8 = *dfa->edests[extraout_RDX].elems;
            IVar9 = re_node_set_contains();
            if (IVar9 == 0) goto code_r0x0010de07;
          }
          else {
            IVar8 = dfa->nexts[extraout_RDX];
            pprVar12 = mctx->state_log + lVar13;
            prVar7 = *pprVar12;
            if (prVar7 == (re_dfastate_t *)0x0) {
              new_dests.alloc = 1;
              new_dests.nelem = 1;
              new_dests.elems = (Idx *)malloc(8);
              if (new_dests.elems == (Idx *)0x0) {
LAB_0010df3a:
                rVar6 = _REG_ESPACE;
                goto LAB_0010df00;
              }
              err = _REG_NOERROR;
              *new_dests.elems = IVar8;
            }
            else {
              IVar9 = re_node_set_contains();
              if (IVar9 != 0) goto LAB_0010dda0;
              err = re_node_set_init_copy(&new_dests,&prVar7->nodes);
              _Var3 = re_node_set_insert(&new_dests,IVar8);
              if ((err != _REG_NOERROR) || (_Var3 != true)) {
                rpl_free(new_dests.elems);
                rVar6 = err;
                if (err == _REG_NOERROR) goto LAB_0010df3a;
                goto LAB_0010df00;
              }
              pprVar12 = mctx->state_log + lVar13;
            }
            prVar7 = re_acquire_state(&err,dfa,&new_dests);
            *pprVar12 = prVar7;
            rpl_free(new_dests.elems);
            if ((mctx->state_log[lVar13] == (re_dfastate_t *)0x0) &&
               (rVar6 = err, err != _REG_NOERROR)) goto LAB_0010df00;
          }
        }
LAB_0010dda0:
        pcVar1 = &prVar14->more;
        prVar14 = prVar14 + 1;
        if (*pcVar1 == '\0') break;
      } while( true );
    }
  }
  rVar6 = _REG_NOERROR;
LAB_0010df00:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return rVar6;
code_r0x0010de07:
  new_dests.alloc = 1;
  new_dests.nelem = 1;
  new_dests.elems = (Idx *)malloc(8);
  if (new_dests.elems == (Idx *)0x0) {
    new_dests.nelem = 0;
    err = _REG_ESPACE;
    new_dests.alloc = 0;
  }
  else {
    *new_dests.elems = IVar8;
    err = _REG_NOERROR;
  }
  rVar4 = check_arrival_expand_ecl(dfa,&new_dests,subexp_num,type);
  rVar5 = re_node_set_merge(cur_nodes,&new_dests);
  rpl_free(new_dests.elems);
  if ((rVar4 | rVar5 | err) != 0) goto LAB_0010df41;
  prVar14 = mctx->bkref_ents;
  goto restart;
LAB_0010df41:
  rVar6 = err;
  if ((err == _REG_NOERROR) && (rVar6 = rVar5, rVar4 != _REG_NOERROR)) {
    rVar6 = rVar4;
  }
  goto LAB_0010df00;
}

