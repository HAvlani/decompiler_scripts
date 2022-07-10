
reg_errcode_t
update_cur_sifted_state
          (re_match_context_t *mctx,re_sift_context_t *sctx,Idx str_idx,re_node_set *dest_nodes)

{
  char *pcVar1;
  byte bVar2;
  re_dfa_t *prVar3;
  re_dfastate_t **pprVar4;
  long lVar5;
  _Bool _Var6;
  reg_errcode_t rVar7;
  re_dfastate_t *prVar8;
  Idx *pIVar9;
  re_node_set *src1;
  Idx IVar10;
  Idx IVar11;
  re_dfastate_t *prVar12;
  re_token_t *prVar13;
  long lVar14;
  long *plVar15;
  re_backref_cache_entry *prVar16;
  re_token_t *prVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  re_backref_cache_entry *prVar23;
  long in_FS_OFFSET;
  long local_d0;
  reg_errcode_t local_7c;
  reg_errcode_t err;
  undefined4 uStack112;
  undefined4 uStack108;
  long local_68;
  Idx IStack96;
  undefined4 local_58;
  undefined4 uStack84;
  Idx IStack80;
  Idx *local_48;
  long local_40;
  
  prVar3 = mctx->dfa;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c = _REG_NOERROR;
  pprVar4 = mctx->state_log;
  prVar12 = pprVar4[str_idx];
  if (prVar12 == (re_dfastate_t *)0x0) {
    pprVar4 = sctx->sifted_states;
    if (dest_nodes->nelem == 0) {
      pprVar4[str_idx] = (re_dfastate_t *)0x0;
      err = _REG_NOERROR;
    }
    else {
      prVar12 = re_acquire_state(&local_7c,prVar3,dest_nodes);
      pprVar4[str_idx] = prVar12;
      err = local_7c;
    }
    goto LAB_00119f69;
  }
  if (dest_nodes->nelem == 0) {
    sctx->sifted_states[str_idx] = (re_dfastate_t *)0x0;
    bVar2 = pprVar4[str_idx]->field_0x68;
  }
  else {
    _err = (re_dfastate_t **)((ulong)_err & 0xffffffff00000000);
    prVar8 = re_acquire_state(&err,prVar3,dest_nodes);
    if (err != _REG_NOERROR) goto LAB_00119f69;
    lVar21 = (prVar8->inveclosure).alloc;
    if (lVar21 == 0) {
      lVar14 = dest_nodes->nelem;
      (prVar8->inveclosure).nelem = 0;
      (prVar8->inveclosure).alloc = lVar14;
      pIVar9 = (Idx *)malloc(lVar14 << 3);
      (prVar8->inveclosure).elems = pIVar9;
      if (pIVar9 == (Idx *)0x0) {
LAB_0011a040:
        err = _REG_ESPACE;
        goto LAB_00119f69;
      }
      _err = (re_dfastate_t **)((ulong)_err & 0xffffffff00000000);
      if (0 < dest_nodes->nelem) {
        do {
          rVar7 = re_node_set_merge(&prVar8->inveclosure,
                                    prVar3->inveclosures + dest_nodes->elems[lVar21]);
          _err = (re_dfastate_t **)((ulong)_err & 0xffffffff00000000 | (ulong)(uint)rVar7);
          if (rVar7 != _REG_NOERROR) goto LAB_0011a040;
          lVar21 = lVar21 + 1;
        } while (lVar21 < dest_nodes->nelem);
      }
    }
    src1 = &prVar12->nodes;
    err = re_node_set_add_intersect(dest_nodes,src1,&prVar8->inveclosure);
    local_7c = err;
    if (err != _REG_NOERROR) goto LAB_00119f69;
    lVar21 = (sctx->limits).nelem;
    if (lVar21 != 0) {
      prVar23 = mctx->bkref_ents;
      if (0 < lVar21) {
        lVar21 = 0;
        do {
          prVar16 = prVar23 + (sctx->limits).elems[lVar21];
          if ((prVar16->subexp_from < str_idx) && (str_idx <= prVar16->str_idx)) {
            prVar13 = prVar3->nodes;
            lVar14 = dest_nodes->nelem;
            lVar20 = prVar13[prVar16->node].opr;
            if (str_idx == prVar16->subexp_to) {
              if (0 < lVar14) {
                plVar19 = dest_nodes->elems;
                lVar22 = -1;
                lVar18 = -1;
                plVar15 = plVar19;
                do {
                  while( true ) {
                    lVar5 = *plVar15;
                    prVar17 = prVar13 + lVar5;
                    if (prVar17->field_0x8 != '\b') break;
                    if (lVar20 == prVar17->opr) {
                      lVar18 = lVar5;
                    }
                    plVar15 = plVar15 + 1;
                    if (plVar19 + lVar14 == plVar15) goto LAB_0011a5e3;
                  }
                  if ((prVar17->field_0x8 == '\t') && (lVar20 == prVar17->opr)) {
                    lVar22 = lVar5;
                  }
                  plVar15 = plVar15 + 1;
                } while (plVar19 + lVar14 != plVar15);
LAB_0011a5e3:
                if (lVar18 < 0) {
                  if (-1 < lVar22) {
LAB_0011a5f5:
                    lVar14 = 0;
                    while( true ) {
                      lVar20 = plVar19[lVar14];
                      IVar10 = re_node_set_contains();
                      if ((IVar10 == 0) && (IVar10 = re_node_set_contains(), IVar10 == 0)) {
                        err = sub_epsilon_src_nodes(prVar3,lVar20,dest_nodes,src1);
                        if (err != _REG_NOERROR) goto LAB_00119f69;
                      }
                      else {
                        lVar14 = lVar14 + 1;
                      }
                      if (dest_nodes->nelem == lVar14 || dest_nodes->nelem < lVar14) break;
                      plVar19 = dest_nodes->elems;
                    }
                  }
                }
                else {
                  err = sub_epsilon_src_nodes(prVar3,lVar18,dest_nodes,src1);
                  if (err != _REG_NOERROR) goto LAB_00119f69;
                  if ((-1 < lVar22) && (0 < dest_nodes->nelem)) {
                    plVar19 = dest_nodes->elems;
                    goto LAB_0011a5f5;
                  }
                }
              }
            }
            else {
              lVar18 = 0;
              if (0 < lVar14) {
                do {
                  if (((byte)prVar13[dest_nodes->elems[lVar18]].field_0x8 - 8 < 2) &&
                     (lVar20 == prVar13[dest_nodes->elems[lVar18]].opr)) {
                    err = sub_epsilon_src_nodes(prVar3,dest_nodes->elems[lVar18],dest_nodes,src1);
                    if (err != _REG_NOERROR) goto LAB_00119f69;
                    if (dest_nodes->nelem <= lVar18 + 1) break;
                  }
                  else if (dest_nodes->nelem <= lVar18 + 1) break;
                  lVar18 = lVar18 + 1;
                  prVar13 = prVar3->nodes;
                } while( true );
              }
            }
          }
          lVar21 = lVar21 + 1;
        } while (lVar21 < (sctx->limits).nelem);
      }
      local_7c = _REG_NOERROR;
    }
    pprVar4 = sctx->sifted_states;
    prVar8 = re_acquire_state(&local_7c,prVar3,dest_nodes);
    pprVar4[str_idx] = prVar8;
    err = local_7c;
    if (local_7c != _REG_NOERROR) goto LAB_00119f69;
    bVar2 = mctx->state_log[str_idx]->field_0x68;
  }
  err = _REG_NOERROR;
  if ((bVar2 & 0x40) != 0) {
    lVar21 = 0;
    lVar14 = mctx->nbkref_ents;
    while (lVar20 = lVar14, lVar21 < lVar20) {
      lVar14 = lVar20 + lVar21 >> 1;
      if ((&mctx->bkref_ents->str_idx)[((lVar20 + lVar21 & 0xfffffffffffffffeU) + lVar14) * 2] <
          str_idx) {
        lVar21 = lVar14 + 1;
        lVar14 = lVar20;
      }
    }
    if ((lVar21 < mctx->nbkref_ents) && (str_idx == mctx->bkref_ents[lVar21].str_idx)) {
      prVar3 = mctx->dfa;
      _err = (re_dfastate_t **)0x0;
      if (0 < (prVar12->nodes).nelem) {
        local_d0 = 0;
        do {
          lVar14 = (prVar12->nodes).elems[local_d0];
          if (((lVar14 != sctx->last_node) || (str_idx != sctx->last_str_idx)) &&
             (prVar3->nodes[lVar14].field_0x8 == '\x04')) {
            prVar23 = mctx->bkref_ents + lVar21;
            lVar20 = lVar21;
            do {
              if (((lVar14 == prVar23->node) &&
                  (lVar18 = str_idx + (prVar23->subexp_to - prVar23->subexp_from),
                  lVar18 <= sctx->last_str_idx)) &&
                 ((sctx->sifted_states[lVar18] != (re_dfastate_t *)0x0 &&
                  ((IVar10 = re_node_set_contains(), IVar10 != 0 &&
                   (_Var6 = check_dst_limits(), _Var6 == false)))))) {
                if (_err == (re_dfastate_t **)0x0) {
                  _err = sctx->sifted_states;
                  uStack112 = *(undefined4 *)&sctx->limited_states;
                  uStack108 = *(undefined4 *)((long)&sctx->limited_states + 4);
                  local_68 = sctx->last_node;
                  IStack96 = sctx->last_str_idx;
                  local_58 = *(undefined4 *)&(sctx->limits).alloc;
                  uStack84 = *(undefined4 *)((long)&(sctx->limits).alloc + 4);
                  IStack80 = (sctx->limits).nelem;
                  local_48 = (sctx->limits).elems;
                  err = re_node_set_init_copy((re_node_set *)&local_58,&sctx->limits);
                  if (err == _REG_NOERROR) goto LAB_0011a285;
                }
                else {
LAB_0011a285:
                  local_68 = lVar14;
                  IStack96 = str_idx;
                  _Var6 = re_node_set_insert((re_node_set *)&local_58,lVar20);
                  if (_Var6 == false) {
                    err = _REG_ESPACE;
                  }
                  else {
                    prVar8 = _err[str_idx];
                    err = sift_states_backward(mctx,(re_sift_context_t *)&err);
                    if ((err == _REG_NOERROR) &&
                       ((sctx->limited_states == (re_dfastate_t **)0x0 ||
                        (err = merge_state_array(prVar3,sctx->limited_states,_err,str_idx + 1),
                        err == _REG_NOERROR)))) {
                      _err[str_idx] = prVar8;
                      IVar10 = IStack80;
                      IVar11 = re_node_set_contains();
                      if ((-1 < IVar11 + -1) && (IVar11 + -1 < IVar10)) {
                        IStack80 = IVar10 + -1;
                        re_node_set_remove_at();
                      }
                      prVar23 = mctx->bkref_ents + lVar20;
                      goto LAB_0011a360;
                    }
                  }
                }
                if (_err == (re_dfastate_t **)0x0) goto LAB_00119f69;
                goto LAB_0011a45c;
              }
LAB_0011a360:
              lVar20 = lVar20 + 1;
              pcVar1 = &prVar23->more;
              prVar23 = prVar23 + 1;
            } while (*pcVar1 != '\0');
          }
          local_d0 = local_d0 + 1;
        } while (local_d0 < (prVar12->nodes).nelem);
        if (_err != (re_dfastate_t **)0x0) {
          err = _REG_NOERROR;
LAB_0011a45c:
          rpl_free(local_48);
          goto LAB_00119f69;
        }
      }
    }
    err = _REG_NOERROR;
  }
LAB_00119f69:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return err;
}

