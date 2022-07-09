
/* WARNING: Could not reconcile some variable overlaps */

reg_errcode_t
check_arrival(re_match_context_t *mctx,state_array_t *path,Idx top_node,Idx top_str,Idx last_node,
             Idx last_str,int type)

{
  ulong uVar1;
  re_dfa_t *dfa;
  long lVar2;
  long lVar3;
  re_dfastate_t **pprVar4;
  Idx IVar5;
  re_dfa_t *dfa_00;
  Idx elem;
  _Bool _Var6;
  uint uVar7;
  int iVar8;
  reg_errcode_t rVar9;
  long lVar10;
  re_dfastate_t *prVar11;
  re_dfastate_t *prVar12;
  Idx IVar13;
  re_dfastate_t **pprVar14;
  re_token_t *node;
  long in_FS_OFFSET;
  long local_100;
  long local_f8;
  long local_d8;
  reg_errcode_t err;
  reg_errcode_t err_1;
  re_node_set next_nodes;
  re_node_set union_set;
  
  dfa = mctx->dfa;
  lVar2 = path->alloc;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  err = _REG_NOERROR;
  IVar13 = dfa->nodes[top_node].opr;
  lVar10 = mctx->max_mb_elem_len + last_str;
  if (lVar10 < lVar2) {
LAB_0011748c:
    pprVar14 = mctx->state_log;
    iVar8 = mctx->eflags;
    lVar10 = path->next_idx;
    pprVar4 = path->array;
    IVar5 = (mctx->input).cur_idx;
    mctx->state_log = pprVar4;
    if (lVar10 != 0) {
      (mctx->input).cur_idx = lVar10;
      uVar7 = re_string_context_at(&mctx->input,lVar10 + -1,iVar8);
      if (lVar10 == top_str) goto LAB_00117a5c;
      prVar12 = pprVar4[lVar10];
      top_str = lVar10;
      if ((prVar12 != (re_dfastate_t *)0x0) && ((prVar12->field_0x68 & 0x40) != 0)) {
        rVar9 = re_node_set_init_copy(&next_nodes,&prVar12->nodes);
        err = rVar9;
        if (rVar9 != _REG_NOERROR) goto LAB_001178b0;
        if ((prVar12->field_0x68 & 0x40) == 0) goto LAB_00117512;
        goto LAB_00117913;
      }
      next_nodes.elems = (Idx *)0x0;
      next_nodes._0_16_ = (undefined  [16])0x0;
LAB_00117512:
      if (top_str < last_str) {
        local_d8 = 0;
        do {
          local_f8 = top_str + 1;
          if (mctx->max_mb_elem_len < local_d8) break;
          next_nodes._0_16_ = next_nodes._0_16_ & (undefined  [16])0xffffffffffffffff;
          if (mctx->state_log[local_f8] == (re_dfastate_t *)0x0) {
            if (prVar12 != (re_dfastate_t *)0x0) goto LAB_001175b1;
          }
          else {
            err = re_node_set_merge(&next_nodes,&mctx->state_log[local_f8]->nodes);
            if (err != _REG_NOERROR) goto LAB_001179d8;
            if (prVar12 != (re_dfastate_t *)0x0) {
LAB_001175b1:
              err_1 = _REG_NOERROR;
              dfa_00 = mctx->dfa;
              union_set.elems = (Idx *)0x0;
              union_set._0_16_ = (undefined  [16])0x0;
              if (0 < (prVar12->non_eps_nodes).nelem) {
                local_100 = 0;
                do {
                  lVar10 = (prVar12->non_eps_nodes).elems[local_100];
                  node = dfa_00->nodes + lVar10;
                  if ((node->field_0xa & 0x10) != 0) {
                    iVar8 = check_node_accept_bytes();
                    if (iVar8 < 2) {
                      if (iVar8 == 0) {
                        node = dfa_00->nodes + lVar10;
                        goto LAB_00117608;
                      }
                      goto LAB_00117624;
                    }
                    lVar2 = iVar8 + top_str;
                    elem = dfa_00->nexts[lVar10];
                    union_set._0_16_ = union_set._0_16_ & (undefined  [16])0xffffffffffffffff;
                    if ((mctx->state_log[lVar2] == (re_dfastate_t *)0x0) ||
                       (err_1 = re_node_set_merge(&union_set,&mctx->state_log[lVar2]->nodes),
                       err_1 == _REG_NOERROR)) {
                      _Var6 = re_node_set_insert(&union_set,elem);
                      if (_Var6 == false) goto LAB_001179c0;
                      pprVar4 = mctx->state_log;
                      prVar11 = re_acquire_state(&err_1,dfa_00,&union_set);
                      pprVar4[lVar2] = prVar11;
                      if ((mctx->state_log[lVar2] != (re_dfastate_t *)0x0) ||
                         (err_1 == _REG_NOERROR)) goto LAB_00117624;
                    }
                    rpl_free(union_set.elems);
                    err = err_1;
                    if (err_1 == _REG_NOERROR) goto LAB_00117780;
                    goto LAB_001179d8;
                  }
LAB_00117608:
                  _Var6 = check_node_accept(mctx,node,top_str);
                  if (_Var6 != false) {
LAB_00117624:
                    _Var6 = re_node_set_insert(&next_nodes,dfa_00->nexts[lVar10]);
                    if (_Var6 == false) {
LAB_001179c0:
                      rpl_free(union_set.elems);
                      err = _REG_ESPACE;
                      goto LAB_001179d8;
                    }
                  }
                  local_100 = local_100 + 1;
                } while (local_100 < (prVar12->non_eps_nodes).nelem);
              }
              rpl_free(union_set.elems);
              err = _REG_NOERROR;
            }
LAB_00117780:
            if ((next_nodes.nelem != 0) &&
               ((err = check_arrival_expand_ecl(dfa,&next_nodes,IVar13,type), err != _REG_NOERROR ||
                (err = expand_bkref_cache(mctx,&next_nodes,local_f8,IVar13,type),
                err != _REG_NOERROR)))) goto LAB_001179d8;
          }
          uVar7 = re_string_context_at(&mctx->input,top_str,mctx->eflags);
          prVar12 = re_acquire_state_context(&err,dfa,&next_nodes,uVar7);
          if (prVar12 == (re_dfastate_t *)0x0) {
            if (err != _REG_NOERROR) goto LAB_001179d8;
            local_d8 = local_d8 + 1;
            mctx->state_log[local_f8] = (re_dfastate_t *)0x0;
          }
          else {
            local_d8 = 0;
            mctx->state_log[local_f8] = prVar12;
          }
          top_str = local_f8;
        } while (local_f8 < last_str);
      }
      rpl_free(next_nodes.elems);
      if (mctx->state_log[last_str] == (re_dfastate_t *)0x0) {
        path->next_idx = top_str;
        mctx->state_log = pprVar14;
        (mctx->input).cur_idx = IVar5;
        rVar9 = _REG_NOMATCH;
      }
      else {
        path->next_idx = top_str;
        mctx->state_log = pprVar14;
        (mctx->input).cur_idx = IVar5;
        IVar13 = re_node_set_contains();
        rVar9 = (uint)(IVar13 == 0);
      }
      goto LAB_001178b0;
    }
    (mctx->input).cur_idx = top_str;
    uVar7 = re_string_context_at(&mctx->input,top_str + -1,iVar8);
LAB_00117a5c:
    next_nodes._0_16_ = CONCAT88(1,1);
    next_nodes.elems = (Idx *)malloc(8);
    if (next_nodes.elems != (Idx *)0x0) {
      *next_nodes.elems = top_node;
      err = _REG_NOERROR;
      err = check_arrival_expand_ecl(dfa,&next_nodes,IVar13,type);
      if (err == _REG_NOERROR) {
LAB_00117913:
        if (((next_nodes.nelem == 0) ||
            (err = expand_bkref_cache(mctx,&next_nodes,top_str,IVar13,type), err == _REG_NOERROR))
           && ((prVar12 = re_acquire_state_context(&err,dfa,&next_nodes,uVar7),
               prVar12 != (re_dfastate_t *)0x0 || (err == _REG_NOERROR)))) {
          mctx->state_log[top_str] = prVar12;
          goto LAB_00117512;
        }
      }
LAB_001179d8:
      rpl_free(next_nodes.elems);
      rVar9 = err;
      goto LAB_001178b0;
    }
  }
  else {
    lVar10 = lVar10 + 1;
    if (((lVar10 <= 0x7fffffffffffffff - lVar2) &&
        (uVar1 = lVar2 + lVar10, uVar1 < 0x2000000000000000)) &&
       (pprVar14 = (re_dfastate_t **)realloc(path->array,uVar1 * 8),
       pprVar14 != (re_dfastate_t **)0x0)) {
      path->array = pprVar14;
      path->alloc = uVar1;
      memset(pprVar14 + lVar2,0,lVar10 * 8);
      goto LAB_0011748c;
    }
  }
  rVar9 = _REG_ESPACE;
LAB_001178b0:
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return rVar9;
}

