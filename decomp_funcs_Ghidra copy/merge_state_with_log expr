
/* WARNING: Could not reconcile some variable overlaps */

re_dfastate_t *
merge_state_with_log(reg_errcode_t *err,re_match_context_t *mctx,re_dfastate_t *next_state)

{
  long lVar1;
  long lVar2;
  re_dfa_t *dfa;
  re_node_set *src2;
  re_node_set *src1;
  uint uVar3;
  reg_errcode_t rVar4;
  re_dfastate_t **pprVar5;
  long in_FS_OFFSET;
  re_node_set next_nodes;
  
  lVar1 = (mctx->input).cur_idx;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  dfa = mctx->dfa;
  pprVar5 = mctx->state_log + lVar1;
  if (mctx->state_log_top < lVar1) {
    *pprVar5 = next_state;
    mctx->state_log_top = lVar1;
LAB_00117917:
    if (dfa->nbackref == 0) goto LAB_00117925;
    if (next_state != (re_dfastate_t *)0x0) {
      rVar4 = check_subexp_matching_top();
      *err = rVar4;
      if (rVar4 == _REG_NOERROR) {
        if ((next_state->field_0x68 & 0x40) == 0) goto LAB_00117925;
        rVar4 = transit_state_bkref();
        *err = rVar4;
        if (rVar4 == _REG_NOERROR) {
          next_state = mctx->state_log[lVar1];
          goto LAB_00117925;
        }
      }
    }
  }
  else {
    if (*pprVar5 == (re_dfastate_t *)0x0) {
      *pprVar5 = next_state;
      goto LAB_00117917;
    }
    src2 = (*pprVar5)->entrance_nodes;
    if (next_state == (re_dfastate_t *)0x0) {
      next_nodes.alloc._0_4_ = *(undefined4 *)&src2->alloc;
      next_nodes.alloc._4_4_ = *(undefined4 *)((long)&src2->alloc + 4);
      next_nodes.nelem._0_4_ = *(undefined4 *)&src2->nelem;
      next_nodes.nelem._4_4_ = *(undefined4 *)((long)&src2->nelem + 4);
      next_nodes.elems = src2->elems;
      uVar3 = re_string_context_at(&mctx->input,lVar1 + -1,mctx->eflags);
      next_state = re_acquire_state_context(err,dfa,&next_nodes,uVar3);
      *pprVar5 = next_state;
      goto LAB_00117917;
    }
    src1 = next_state->entrance_nodes;
    rVar4 = re_node_set_init_union(&next_nodes,src1,src2);
    *err = rVar4;
    if (rVar4 == _REG_NOERROR) {
      uVar3 = re_string_context_at(&mctx->input,(mctx->input).cur_idx + -1,mctx->eflags);
      pprVar5 = mctx->state_log;
      next_state = re_acquire_state_context(err,dfa,&next_nodes,uVar3);
      pprVar5[lVar1] = next_state;
      if (src1 != (re_node_set *)0x0) {
        rpl_free(next_nodes.elems);
      }
      goto LAB_00117917;
    }
  }
  next_state = (re_dfastate_t *)0x0;
LAB_00117925:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return next_state;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

