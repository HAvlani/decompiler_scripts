
/* WARNING: Unknown calling convention yet parameter storage is locked */

reg_errcode_t transit_state_bkref(void)

{
  char *pcVar1;
  Idx *pIVar2;
  re_sub_match_top_t *sub_top;
  re_dfa_t *dfa;
  long bkref_str;
  re_dfastate_t *prVar3;
  re_dfastate_t **pprVar4;
  re_dfastate_t **pprVar5;
  re_dfa_t *prVar6;
  re_sub_match_top_t *sub_last;
  long last_node;
  uint uVar7;
  uint uVar8;
  int iVar9;
  reg_errcode_t rVar10;
  re_backref_cache_entry *prVar11;
  re_dfastate_t *prVar12;
  re_sub_match_last_t *prVar13;
  state_array_t *path;
  re_sub_match_last_t **pprVar14;
  uint uVar15;
  long *in_RDX;
  re_token_t *prVar16;
  size_t __n;
  long lVar17;
  uint uVar18;
  long lVar19;
  re_sub_match_top_t *prVar20;
  re_sub_match_top_t *prVar21;
  long *in_RSI;
  long lVar22;
  re_match_context_t *in_RDI;
  uchar *puVar23;
  long lVar24;
  long lVar25;
  long in_FS_OFFSET;
  long local_d8;
  Idx local_d0;
  re_node_set *local_c8;
  reg_errcode_t local_5c;
  re_node_set local_58;
  long local_40;
  
  sub_top = (re_sub_match_top_t *)(in_RDI->input).cur_idx;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  dfa = in_RDI->dfa;
  local_d8 = 0;
  if (0 < *in_RSI) {
    do {
      bkref_str = *(long *)(*in_RDX + local_d8 * 8);
      if (dfa->nodes[bkref_str].field_0x8 == '\x04') {
        uVar8 = *(uint *)&dfa->nodes[bkref_str].field_0x8;
        if ((uVar8 & 0x3ff00) != 0) {
          uVar18 = uVar8 >> 8;
          uVar7 = re_string_context_at(&in_RDI->input,(Idx)sub_top,in_RDI->eflags);
          if ((uVar18 & 4) == 0) {
            if ((uVar18 & 8) != 0) {
              uVar15 = uVar7 & 1;
              goto joined_r0x001170bf;
            }
          }
          else {
            if ((uVar7 & 1) == 0) goto LAB_001170e0;
            uVar15 = uVar18 & 8;
joined_r0x001170bf:
            if (uVar15 != 0) goto LAB_001170e0;
          }
          if ((((uVar18 & 0x20) != 0) && ((uVar7 & 2) == 0)) ||
             (((uVar8 & 0x8000) != 0 && ((uVar7 & 8) == 0)))) goto LAB_001170e0;
        }
        lVar25 = in_RDI->nbkref_ents;
        lVar22 = 0;
        lVar24 = lVar25;
        while (lVar19 = lVar24, lVar22 < lVar19) {
          lVar24 = lVar19 + lVar22 >> 1;
          if ((&in_RDI->bkref_ents->str_idx)[((lVar19 + lVar22 & 0xfffffffffffffffeU) + lVar24) * 2]
              < (long)sub_top) {
            lVar22 = lVar24 + 1;
            lVar24 = lVar19;
          }
        }
        if ((lVar22 < lVar25) &&
           (prVar11 = in_RDI->bkref_ents + lVar22,
           sub_top == (re_sub_match_top_t *)in_RDI->bkref_ents[lVar22].str_idx)) {
          do {
            if (bkref_str == prVar11->node) goto LAB_001171eb;
            pcVar1 = &prVar11->more;
            prVar11 = prVar11 + 1;
          } while (*pcVar1 != '\0');
        }
        prVar6 = in_RDI->dfa;
        prVar16 = prVar6->nodes;
        lVar22 = prVar16[bkref_str].opr;
        if (0 < in_RDI->nsub_tops) {
          local_d0 = 0;
          puVar23 = (in_RDI->input).mbs;
          do {
            sub_last = in_RDI->sub_tops[local_d0];
            if (lVar22 == prVar16[sub_last->node].opr) {
              lVar24 = sub_last->str_idx;
              prVar20 = sub_top;
              if (0 < (long)sub_last->nlasts) {
                lVar19 = 0;
                do {
                  prVar13 = sub_last->lasts[lVar19];
                  lVar17 = prVar13->str_idx;
                  __n = lVar17 - lVar24;
                  prVar21 = (re_sub_match_top_t *)((long)prVar20 + __n);
                  if (0 < (long)__n) {
                    if ((in_RDI->input).valid_len < (long)prVar21) {
                      if ((long)prVar21 <= (in_RDI->input).len) {
                        rVar10 = clean_state_log_if_needed(in_RDI,(Idx)prVar21);
                        if (rVar10 == _REG_NOERROR) {
                          puVar23 = (in_RDI->input).mbs;
                          goto LAB_00117528;
                        }
                        goto LAB_00117400;
                      }
                    }
                    else {
LAB_00117528:
                      iVar9 = memcmp(puVar23 + (long)prVar20,puVar23 + lVar24,__n);
                      if (iVar9 == 0) goto LAB_0011755b;
                    }
                    if (lVar19 < (long)sub_last->nlasts) goto LAB_001174a5;
                    prVar21 = prVar20;
                    lVar17 = lVar24;
                    if (lVar19 == 0) goto joined_r0x00117666;
                    break;
                  }
LAB_0011755b:
                  rVar10 = get_subexp_sub(in_RDI,(re_sub_match_last_t *)sub_last,(Idx)prVar13,
                                          bkref_str,sub_top);
                  puVar23 = (in_RDI->input).mbs;
                  if (1 < (uint)rVar10) goto LAB_00117400;
                  lVar19 = lVar19 + 1;
                  prVar20 = prVar21;
                  lVar24 = lVar17;
                } while (lVar19 < (long)sub_last->nlasts);
                lVar24 = lVar17 + 1;
                prVar20 = prVar21;
              }
joined_r0x00117666:
              do {
                if ((long)sub_top < lVar24) break;
                prVar21 = prVar20;
                if (lVar24 != sub_last->str_idx && -1 < lVar24 - sub_last->str_idx) {
                  pIVar2 = &(in_RDI->input).valid_len;
                  if ((re_sub_match_top_t *)*pIVar2 == prVar20 || *pIVar2 < (long)prVar20) {
                    pIVar2 = &(in_RDI->input).len;
                    if ((re_sub_match_top_t *)*pIVar2 == prVar20 || *pIVar2 < (long)prVar20) break;
                    rVar10 = extend_buffers(in_RDI,(int)prVar20 + 1);
                    if (rVar10 != _REG_NOERROR) goto LAB_00117400;
                    puVar23 = (in_RDI->input).mbs;
                  }
                  prVar21 = (re_sub_match_top_t *)((long)&prVar20->str_idx + 1);
                  if (puVar23[(long)prVar20] != puVar23[lVar24 + -1]) break;
                }
                prVar12 = in_RDI->state_log[lVar24];
                if ((prVar12 != (re_dfastate_t *)0x0) &&
                   (lVar19 = (prVar12->nodes).nelem, 0 < lVar19)) {
                  lVar17 = 0;
                  do {
                    last_node = (prVar12->nodes).elems[lVar17];
                    if ((prVar6->nodes[last_node].field_0x8 == '\t') &&
                       (lVar22 == prVar6->nodes[last_node].opr)) {
                      if (last_node == -1) break;
                      path = (state_array_t *)((state_array_t *)&sub_last->path)->next_idx;
                      lVar19 = sub_last->str_idx;
                      if (path == (state_array_t *)0x0) {
                        path = (state_array_t *)calloc(0x18,(lVar24 - lVar19) + 1);
                        ((state_array_t *)&sub_last->path)->next_idx = (Idx)path;
                        if (path != (state_array_t *)0x0) goto LAB_00117720;
                      }
                      else {
LAB_00117720:
                        rVar10 = check_arrival(in_RDI,path,sub_last->node,lVar19,last_node,lVar24,9)
                        ;
                        if (rVar10 == _REG_NOMATCH) break;
                        if (rVar10 != _REG_NOERROR) goto LAB_00117400;
                        if ((re_dfastate_t **)sub_last->nlasts == (re_dfastate_t **)sub_last->alasts
                           ) {
                          lVar19 = (long)(re_dfastate_t **)sub_last->alasts * 2 + 1;
                          pprVar14 = (re_sub_match_last_t **)realloc(sub_last->lasts,lVar19 * 8);
                          if (pprVar14 == (re_sub_match_last_t **)0x0) goto LAB_00117806;
                          sub_last->lasts = pprVar14;
                          sub_last->alasts = lVar19;
                        }
                        prVar13 = (re_sub_match_last_t *)calloc(1,0x28);
                        if (prVar13 != (re_sub_match_last_t *)0x0) {
                          pprVar4 = (re_dfastate_t **)sub_last->nlasts;
                          sub_last->lasts[(long)pprVar4] = prVar13;
                          prVar13->node = last_node;
                          prVar13->str_idx = lVar24;
                          sub_last->nlasts = (Idx)((long)pprVar4 + 1);
                          rVar10 = get_subexp_sub(in_RDI,(re_sub_match_last_t *)sub_last,
                                                  (Idx)prVar13,bkref_str,sub_top);
                          puVar23 = (in_RDI->input).mbs;
                          if (1 < (uint)rVar10) goto LAB_00117400;
                          break;
                        }
                      }
LAB_00117806:
                      rVar10 = _REG_ESPACE;
                      goto LAB_00117400;
                    }
                    lVar17 = lVar17 + 1;
                  } while (lVar19 != lVar17);
                }
                lVar24 = lVar24 + 1;
                prVar20 = prVar21;
              } while( true );
            }
LAB_001174a5:
            local_d0 = local_d0 + 1;
            if (in_RDI->nsub_tops <= local_d0) break;
            prVar16 = prVar6->nodes;
          } while( true );
        }
LAB_001171eb:
        local_5c = _REG_NOERROR;
        if (lVar25 < in_RDI->nbkref_ents) {
          do {
            while ((prVar11 = in_RDI->bkref_ents + lVar25, bkref_str != prVar11->node ||
                   (sub_top != (re_sub_match_top_t *)prVar11->str_idx))) {
LAB_00117350:
              lVar25 = lVar25 + 1;
              if (in_RDI->nbkref_ents <= lVar25) goto LAB_001170e0;
            }
            lVar22 = prVar11->subexp_to;
            lVar24 = prVar11->subexp_from;
            if (lVar22 == lVar24) {
              lVar19 = *dfa->edests[bkref_str].elems;
            }
            else {
              lVar19 = dfa->nexts[bkref_str];
            }
            local_c8 = dfa->eclosures + lVar19;
            lVar19 = (long)sub_top + (lVar22 - lVar24);
            uVar8 = re_string_context_at(&in_RDI->input,lVar19 + -1,in_RDI->eflags);
            local_d0 = 0;
            pprVar4 = in_RDI->state_log + lVar19;
            prVar12 = in_RDI->state_log[(long)sub_top];
            prVar3 = *pprVar4;
            if (prVar12 != (re_dfastate_t *)0x0) {
              local_d0 = (prVar12->nodes).nelem;
            }
            if (prVar3 == (re_dfastate_t *)0x0) {
              prVar12 = re_acquire_state_context(&local_5c,dfa,local_c8,uVar8);
              pprVar5 = in_RDI->state_log;
              *pprVar4 = prVar12;
              prVar12 = pprVar5[lVar19];
            }
            else {
              local_5c = re_node_set_init_union(&local_58,prVar3->entrance_nodes,local_c8);
              if (local_5c != _REG_NOERROR) {
                rpl_free(local_58.elems);
                rVar10 = local_5c;
                goto LAB_00117400;
              }
              pprVar4 = in_RDI->state_log;
              prVar12 = re_acquire_state_context(&local_5c,dfa,&local_58,uVar8);
              pprVar4[lVar19] = prVar12;
              rpl_free(local_58.elems);
              pprVar5 = in_RDI->state_log;
              prVar12 = pprVar5[lVar19];
            }
            if ((prVar12 == (re_dfastate_t *)0x0) && (rVar10 = local_5c, local_5c != _REG_NOERROR))
            goto LAB_00117400;
            if ((lVar22 != lVar24) ||
               (pIVar2 = &(pprVar5[(long)sub_top]->nodes).nelem,
               *pIVar2 == local_d0 || *pIVar2 < local_d0)) goto LAB_00117350;
            local_5c = check_subexp_matching_top();
            rVar10 = local_5c;
            if ((local_5c != _REG_NOERROR) ||
               (local_5c = transit_state_bkref(), rVar10 = local_5c, local_5c != _REG_NOERROR))
            goto LAB_00117400;
            lVar25 = lVar25 + 1;
          } while (lVar25 < in_RDI->nbkref_ents);
        }
      }
LAB_001170e0:
      local_d8 = local_d8 + 1;
    } while (local_d8 < *in_RSI);
  }
  rVar10 = _REG_NOERROR;
LAB_00117400:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return rVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

