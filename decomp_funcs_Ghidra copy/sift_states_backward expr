
reg_errcode_t sift_states_backward(re_match_context_t *mctx,re_sift_context_t *sctx)

{
  Idx IVar1;
  long lVar2;
  re_dfastate_t *prVar3;
  re_dfa_t *prVar4;
  long lVar5;
  _Bool _Var6;
  reg_errcode_t rVar7;
  int iVar8;
  Idx IVar9;
  Idx str_idx;
  long idx;
  re_token_t *node;
  long in_FS_OFFSET;
  long local_98;
  int local_84;
  re_node_set cur_dest;
  
  str_idx = sctx->last_str_idx;
  IVar1 = sctx->last_node;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  cur_dest.alloc = 1;
  cur_dest.nelem = 1;
  cur_dest.elems = (Idx *)malloc(8);
  if (cur_dest.elems == (Idx *)0x0) {
    rVar7 = _REG_ESPACE;
  }
  else {
    *cur_dest.elems = IVar1;
    rVar7 = update_cur_sifted_state(mctx,sctx,str_idx,&cur_dest);
    if (rVar7 == _REG_NOERROR) {
      local_84 = 0;
      do {
        if (str_idx < 1) {
          rVar7 = _REG_NOERROR;
          break;
        }
        if (sctx->sifted_states[str_idx] == (re_dfastate_t *)0x0) {
          local_84 = local_84 + 1;
          if (mctx->max_mb_elem_len < local_84) goto LAB_00117db5;
        }
        else {
          local_84 = 0;
          if (mctx->max_mb_elem_len < 0) {
LAB_00117db5:
            memset(sctx->sifted_states,0,str_idx * 8);
            rpl_free(cur_dest.elems);
            rVar7 = _REG_NOERROR;
            goto LAB_00117d70;
          }
        }
        idx = str_idx + -1;
        cur_dest.nelem = 0;
        prVar3 = mctx->state_log[str_idx + -1];
        if ((prVar3 != (re_dfastate_t *)0x0) &&
           (prVar4 = mctx->dfa, 0 < (prVar3->non_eps_nodes).nelem)) {
          local_98 = 0;
          do {
            IVar1 = (prVar3->non_eps_nodes).elems[local_98];
            node = prVar4->nodes + IVar1;
            if ((node->field_0xa & 0x10) == 0) {
LAB_00117bd0:
              _Var6 = check_node_accept(mctx,node,idx);
              if (((_Var6 != false) && (sctx->sifted_states[str_idx] != (re_dfastate_t *)0x0)) &&
                 (IVar9 = re_node_set_contains(), IVar9 != 0)) goto LAB_00117c11;
            }
            else {
              lVar5 = sctx->last_str_idx;
              iVar8 = check_node_accept_bytes();
              if (iVar8 < 1) {
                if (iVar8 == 0) {
LAB_00117d2e:
                  node = prVar4->nodes + IVar1;
                  goto LAB_00117bd0;
                }
              }
              else if (iVar8 + idx <= lVar5) {
                if (sctx->sifted_states[iVar8 + idx] == (re_dfastate_t *)0x0) goto LAB_00117d2e;
                IVar9 = re_node_set_contains();
                if (IVar9 == 0) {
                  node = prVar4->nodes + IVar1;
                  goto LAB_00117bd0;
                }
              }
LAB_00117c11:
              if ((((sctx->limits).nelem == 0) || (_Var6 = check_dst_limits(), _Var6 == false)) &&
                 (_Var6 = re_node_set_insert(&cur_dest,IVar1), _Var6 == false)) {
                rVar7 = _REG_ESPACE;
                goto free_return;
              }
            }
            local_98 = local_98 + 1;
          } while (local_98 < (prVar3->non_eps_nodes).nelem);
        }
        rVar7 = update_cur_sifted_state(mctx,sctx,idx,&cur_dest);
        str_idx = idx;
      } while (rVar7 == _REG_NOERROR);
    }
free_return:
    rpl_free(cur_dest.elems);
  }
LAB_00117d70:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return rVar7;
}

