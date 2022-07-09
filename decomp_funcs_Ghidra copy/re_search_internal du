
/* WARNING: Could not reconcile some variable overlaps */

reg_errcode_t
re_search_internal(regex_t *preg,char *string,Idx length,Idx start,Idx last_start,Idx stop,
                  size_t nmatch,regmatch_t *pmatch,int eflags)

{
  int iVar1;
  re_dfa_t *prVar2;
  uchar *puVar3;
  re_dfa_t *prVar4;
  re_node_set *prVar5;
  Idx *pIVar6;
  long lVar7;
  bool bVar8;
  re_dfa_t *prVar9;
  byte bVar10;
  _Bool _Var11;
  int iVar12;
  int iVar13;
  uint uVar14;
  reg_errcode_t rVar15;
  re_backref_cache_entry *prVar16;
  long *plVar17;
  ulong uVar18;
  re_dfastate_t *prVar19;
  long lVar20;
  size_t __n;
  Idx IVar21;
  Idx IVar22;
  re_dfastate_t **pprVar23;
  re_dfastate_t *prVar24;
  regmatch_t *prVar25;
  Idx IVar26;
  regmatch_t *prVar27;
  re_fail_stack_ent_t *prVar28;
  long lVar29;
  uint uVar30;
  uint uVar31;
  char *pcVar32;
  size_t sVar33;
  size_t __n_00;
  re_token_t *prVar34;
  re_match_context_t *prVar35;
  long lVar36;
  long lVar37;
  ulong num;
  long next_state_log_idx;
  re_fail_stack_t *fs;
  long in_FS_OFFSET;
  bool bVar38;
  re_fail_stack_ent_t *local_310;
  long local_308;
  regmatch_t *local_2f8;
  re_dfastate_t **local_2f0;
  reg_errcode_t local_2c4;
  long *local_2b8;
  char *local_2b0;
  uint local_288;
  long local_280;
  bool local_25b;
  Idx match_first;
  Idx idx;
  re_node_set eps_via_nodes;
  re_fail_stack_t fs_body;
  regmatch_list prev_match;
  re_match_context_t mctx;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  prVar2 = preg->buffer;
  prVar35 = &mctx;
  for (lVar29 = 0x20; lVar29 != 0; lVar29 = lVar29 + -1) {
    (prVar35->input).raw_mbs = (uchar *)0x0;
    prVar35 = (re_match_context_t *)&(prVar35->input).mbs;
  }
  pcVar32 = preg->fastmap;
  local_2b0 = pcVar32;
  if (pcVar32 != (char *)0x0) {
    if (((preg->field_0x38 & 8) == 0) || (start == last_start)) {
      local_2b0 = (char *)0x0;
    }
    else {
      local_2b0 = (char *)0x0;
      if ((preg->field_0x38 & 1) == 0) {
        local_2b0 = pcVar32;
      }
    }
  }
  local_280 = 0;
  uVar18 = preg->re_nsub;
  if (uVar18 < nmatch) {
    local_280 = (nmatch - 1) - uVar18;
    nmatch = nmatch + (uVar18 - (nmatch - 1));
  }
  mctx.dfa = prVar2;
  if ((((preg->used == 0) || (prVar2->init_state == (re_dfastate_t *)0x0)) ||
      (prVar2->init_state_word == (re_dfastate_t *)0x0)) ||
     ((prVar2->init_state_nl == (re_dfastate_t *)0x0 ||
      (prVar2->init_state_begbuf == (re_dfastate_t *)0x0)))) {
    local_2c4 = _REG_NOMATCH;
    goto LAB_001191c3;
  }
  if ((((prVar2->init_state->nodes).nelem == 0) && ((prVar2->init_state_word->nodes).nelem == 0)) &&
     (((prVar2->init_state_nl->nodes).nelem == 0 || (-1 < (char)preg->field_0x38)))) {
    if ((start != 0) && (local_2c4 = _REG_NOMATCH, last_start != 0)) goto LAB_001191c3;
    last_start = 0;
    start = 0;
  }
  bVar38 = true;
  if (nmatch == 0) {
    bVar38 = prVar2->nbackref != 0;
  }
  puVar3 = preg->translate;
  mctx.input.mb_cur_max = prVar2->mb_cur_max;
  lVar29 = prVar2->nodes_len + 1;
  if (lVar29 < mctx.input.mb_cur_max) {
    lVar29 = (long)mctx.input.mb_cur_max;
  }
  if (length + 1 < lVar29) {
    lVar29 = length + 1;
  }
  mctx.input.icase = (preg->syntax & 0x400000) != 0;
  mctx.input.mbs_allocated = ((ulong)((uint)preg->syntax & 0x400000) | (ulong)puVar3) != 0;
  mctx.input.map_notascii = (byte)prVar2->field_0xb0 >> 3 & 1;
  mctx.input.is_utf8 = (byte)prVar2->field_0xb0 >> 2 & 1;
  mctx.input.raw_mbs = (uchar *)string;
  mctx.input.raw_len = length;
  mctx.input.len = length;
  mctx.input.raw_stop = length;
  mctx.input.stop = length;
  mctx.input.trans = puVar3;
  local_2c4 = re_string_realloc_buffers(&mctx.input,lVar29);
  pprVar23 = mctx.state_log;
  if (local_2c4 != _REG_NOERROR) goto free_return;
  mctx.input.word_char = prVar2->word_char;
  mctx.input.word_ops_used = (byte)prVar2->field_0xb0 >> 4 & 1;
  if ((mctx.input.mbs_allocated != '\0') ||
     (mctx.input.valid_len = length, mctx.input.mbs = (uchar *)string, 1 < prVar2->mb_cur_max)) {
    mctx.input.valid_len = 0;
  }
  mctx.input.newline_anchor = (byte)preg->field_0x38 >> 7;
  lVar29 = prVar2->nbackref;
  mctx.match_last = -1;
  lVar37 = lVar29 * 2;
  mctx.eflags = eflags;
  mctx.input.valid_raw_len = mctx.input.valid_len;
  mctx.input.raw_stop = stop;
  mctx.input.stop = stop;
  if (lVar37 < 1) {
LAB_00118e81:
    mctx.max_mb_elem_len = 1;
    mctx.abkref_ents = lVar37;
    mctx.asub_tops = lVar37;
    if ((1 < nmatch) || ((prVar2->field_0xb0 & 2) != 0)) {
      if (0x1ffffffffffffffe < (ulong)mctx.input.bufs_len) goto LAB_00119dce;
      mctx.state_log = (re_dfastate_t **)malloc(mctx.input.bufs_len * 8 + 8);
      pprVar23 = mctx.state_log;
      if (mctx.state_log != (re_dfastate_t **)0x0) goto LAB_00118ee7;
      goto LAB_00119e23;
    }
LAB_00118ee7:
    local_288 = 8;
    mctx.input.tip_context = (-(uint)((eflags & 1U) == 0) & 2) + 4;
    iVar12 = ((start <= last_start) - 1) + (uint)(start <= last_start);
    lVar29 = last_start;
    if (start <= last_start) {
      lVar29 = start;
    }
    lVar37 = last_start;
    if (last_start <= start) {
      lVar37 = start;
    }
    iVar1 = prVar2->mb_cur_max;
    if (local_2b0 != (char *)0x0) {
      uVar30 = 4;
      if (iVar1 != 1) {
        uVar30 = (uint)(((ulong)((uint)preg->syntax & 0x400000) | (ulong)puVar3) == 0) << 2;
      }
      rVar15 = _REG_BADPAT;
      if (last_start < start) {
        rVar15 = local_2c4;
      }
      local_288 = puVar3 != (uchar *)0x0 | uVar30 | rVar15;
    }
    match_first = start;
    if (lVar29 <= start && start <= lVar37) {
      plVar17 = (long *)0x0;
      if (start <= last_start) {
        plVar17 = &match_first;
      }
joined_r0x00118ffe:
      match_first = start;
      IVar21 = start;
      IVar22 = lVar37;
      if (local_288 == 7) {
        bVar8 = false;
        if (lVar37 <= start) goto forward_match_found_start_or_reached_end;
        do {
          if (local_2b0[puVar3[(byte)string[match_first]]] != '\0') goto LAB_001191f0;
          match_first = match_first + 1;
          bVar8 = true;
        } while (match_first != lVar37);
        goto LAB_0011915e;
      }
      if (local_288 == 8) goto LAB_0011920a;
      if ((int)local_288 < 6) {
        if (3 < (int)local_288) {
          if (lVar29 <= start) {
            bVar8 = false;
            while( true ) {
              uVar18 = 0;
              if (match_first < length) {
                uVar18 = (ulong)(byte)string[match_first];
              }
              if (puVar3 != (uchar *)0x0) {
                uVar18 = (ulong)puVar3[uVar18];
              }
              if (local_2b0[uVar18] != '\0') break;
              match_first = match_first + -1;
              bVar8 = true;
              if (match_first < lVar29) goto LAB_00119190;
            }
            if (bVar8) {
              start = match_first;
              IVar21 = match_first;
            }
            goto LAB_0011920a;
          }
          goto LAB_00119190;
        }
      }
      else if (local_288 == 6) {
        bVar8 = false;
        if (lVar37 <= start) goto forward_match_found_start_or_reached_end;
        do {
          if (local_2b0[(byte)string[match_first]] != '\0') goto LAB_001191f0;
          match_first = match_first + 1;
          bVar8 = true;
        } while (match_first != lVar37);
        goto LAB_0011915e;
      }
      while( true ) {
        start = match_first;
        uVar18 = match_first - mctx.input.raw_mbs_idx;
        if ((ulong)mctx.input.valid_raw_len <= uVar18) {
          local_2c4 = re_string_reconstruct(&mctx.input,match_first,eflags);
          pprVar23 = mctx.state_log;
          if (local_2c4 != _REG_NOERROR) goto free_return;
          uVar18 = start - mctx.input.raw_mbs_idx;
        }
        pcVar32 = local_2b0;
        if (uVar18 < (ulong)mctx.input.valid_len) {
          pcVar32 = local_2b0 + mctx.input.mbs[uVar18];
        }
        IVar21 = match_first;
        if (*pcVar32 != '\0') break;
        match_first = start + iVar12;
        if ((match_first < lVar29) || (lVar37 < match_first)) goto LAB_00119190;
      }
      goto LAB_0011920a;
    }
    goto LAB_00119190;
  }
  if (lVar37 < 0x555555555555556) {
    prVar16 = (re_backref_cache_entry *)malloc(lVar29 * 0x60);
    mctx.bkref_ents = prVar16;
    mctx.sub_tops = (re_sub_match_top_t **)malloc(lVar29 << 4);
    if ((mctx.sub_tops != (re_sub_match_top_t **)0x0) && (prVar16 != (re_backref_cache_entry *)0x0))
    goto LAB_00118e81;
  }
LAB_00119dce:
  local_2c4 = _REG_ESPACE;
  pprVar23 = mctx.state_log;
  goto free_return;
LAB_001191f0:
  if (bVar8) {
forward_match_found_start_or_reached_end:
    start = match_first;
    IVar21 = match_first;
    IVar22 = match_first;
    if (lVar37 == match_first) {
LAB_0011915e:
      match_first = IVar22;
      uVar18 = 0;
      if (match_first < length) {
        uVar18 = (ulong)(byte)string[match_first];
      }
      if (puVar3 != (uchar *)0x0) {
        uVar18 = (ulong)puVar3[uVar18];
      }
      start = match_first;
      IVar21 = match_first;
      if (local_2b0[uVar18] == '\0') goto LAB_00119190;
    }
  }
LAB_0011920a:
  match_first = IVar21;
  local_2c4 = re_string_reconstruct(&mctx.input,start,eflags);
  prVar4 = mctx.dfa;
  uVar18 = mctx.input.cur_idx;
  pprVar23 = mctx.state_log;
  if (local_2c4 != _REG_NOERROR) goto free_return;
  if (((iVar1 != 1) && (mctx.input.valid_len != 0)) && (*mctx.input.wcs == 0xffffffff))
  goto LAB_00119ce0;
  mctx.max_mb_elem_len = 0;
  mctx.nbkref_ents = 0;
  prVar24 = (mctx.dfa)->init_state;
  mctx.state_log_top = 0;
  idx = idx & 0xffffffff00000000;
  local_308 = mctx.input.cur_idx;
  if ((char)prVar24->field_0x68 < '\0') {
    uVar30 = re_string_context_at(&mctx.input,mctx.input.cur_idx + -1,mctx.eflags);
    if ((uVar30 & 1) == 0) {
      if (uVar30 == 0) goto LAB_001192f0;
      if ((uVar30 & 6) == 6) {
        prVar24 = prVar4->init_state_begbuf;
      }
      else if ((uVar30 & 2) == 0) {
        if ((uVar30 & 4) == 0) goto LAB_001192f0;
        prVar24 = re_acquire_state_context
                            ((reg_errcode_t *)&idx,prVar4,prVar24->entrance_nodes,uVar30);
      }
      else {
        prVar24 = prVar4->init_state_nl;
      }
    }
    else {
      prVar24 = prVar4->init_state_word;
    }
    if (prVar24 == (re_dfastate_t *)0x0) goto LAB_00119dce;
  }
LAB_001192f0:
  if ((mctx.state_log == (re_dfastate_t **)0x0) ||
     (lVar36 = prVar4->nbackref, mctx.state_log[uVar18] = prVar24, lVar36 == 0)) {
    bVar10 = prVar24->field_0x68;
    local_25b = plVar17 != (long *)0x0;
LAB_00119327:
    local_2f8 = (regmatch_t *)0x0;
    local_2f0 = (re_dfastate_t **)0xffffffffffffffff;
    if ((((bVar10 & 0x10) == 0) ||
        (((char)prVar24->field_0x68 < '\0' &&
         (local_2f8 = (regmatch_t *)check_halt_state_context(&mctx,prVar24,uVar18),
         local_2f8 == (regmatch_t *)0x0)))) ||
       (local_2f8 = (regmatch_t *)0x1, local_2f0 = (re_dfastate_t **)uVar18, bVar38)) {
      local_2b8 = plVar17;
      if (mctx.input.cur_idx < mctx.input.stop) {
        uVar18 = mctx.input.cur_idx;
        do {
          lVar36 = uVar18 + 1;
          if (((lVar36 < mctx.input.bufs_len) || (mctx.input.len <= mctx.input.bufs_len)) &&
             ((lVar36 < mctx.input.valid_len || (mctx.input.len <= mctx.input.valid_len)))) {
            bVar10 = prVar24->field_0x68;
            prVar4 = mctx.dfa;
          }
          else {
            local_310._0_4_ = (int)lVar36;
            rVar15 = extend_buffers(&mctx,(int)local_310 + 1);
            idx = idx & 0xffffffff00000000U | (ulong)(uint)rVar15;
            if (rVar15 != _REG_NOERROR) goto LAB_00119dce;
            bVar10 = prVar24->field_0x68;
            uVar18 = mctx.input.cur_idx;
            prVar4 = mctx.dfa;
          }
          mctx.dfa = prVar4;
          if ((bVar10 & 0x20) != 0) {
            if (0 < (prVar24->nodes).nelem) {
              lVar20 = 0;
              do {
                lVar7 = (prVar24->nodes).elems[lVar20];
                if ((prVar4->nodes[lVar7].field_0xa & 0x10) != 0) {
                  uVar30 = *(uint *)&prVar4->nodes[lVar7].field_0x8;
                  if ((uVar30 & 0x3ff00) != 0) {
                    uVar14 = re_string_context_at(&mctx.input,uVar18,mctx.eflags);
                    uVar30 = uVar30 >> 8;
                    if ((uVar30 & 4) == 0) {
                      if ((uVar30 & 8) != 0) {
                        uVar31 = uVar14 & 1;
                        goto joined_r0x0011999b;
                      }
                    }
                    else {
                      if ((uVar14 & 1) == 0) goto LAB_00119ae6;
                      uVar31 = uVar30 & 8;
joined_r0x0011999b:
                      if (uVar31 != 0) goto LAB_00119ae6;
                    }
                    if ((((uVar30 & 0x20) != 0) && ((uVar14 & 2) == 0)) ||
                       (((uVar30 & 0x80) != 0 && ((uVar14 & 8) == 0)))) goto LAB_00119ae6;
                  }
                  iVar13 = check_node_accept_bytes();
                  uVar18 = mctx.input.cur_idx;
                  if (iVar13 != 0) {
                    next_state_log_idx = mctx.input.cur_idx + iVar13;
                    if (iVar13 <= mctx.max_mb_elem_len) {
                      iVar13 = mctx.max_mb_elem_len;
                    }
                    mctx.max_mb_elem_len = iVar13;
                    eps_via_nodes.alloc._0_4_ = clean_state_log_if_needed(&mctx,next_state_log_idx);
                    if ((reg_errcode_t)eps_via_nodes.alloc == _REG_NOERROR) {
                      pprVar23 = mctx.state_log + next_state_log_idx;
                      prVar5 = prVar4->eclosures + prVar4->nexts[lVar7];
                      prVar19 = *pprVar23;
                      if (prVar19 == (re_dfastate_t *)0x0) {
                        fs_body.num = prVar5->alloc;
                        fs_body.alloc = prVar5->nelem;
                        fs_body.stack = (re_fail_stack_ent_t *)prVar5->elems;
                        uVar30 = re_string_context_at
                                           (&mctx.input,next_state_log_idx + -1,mctx.eflags);
                        prVar19 = re_acquire_state_context
                                            ((reg_errcode_t *)&eps_via_nodes,prVar4,
                                             (re_node_set *)&fs_body,uVar30);
                        *pprVar23 = prVar19;
                        prVar19 = mctx.state_log[next_state_log_idx];
                        uVar18 = mctx.input.cur_idx;
                      }
                      else {
                        eps_via_nodes.alloc._0_4_ =
                             re_node_set_init_union
                                       ((re_node_set *)&fs_body,prVar19->entrance_nodes,prVar5);
                        if ((reg_errcode_t)eps_via_nodes.alloc != _REG_NOERROR) goto LAB_00119d78;
                        uVar30 = re_string_context_at
                                           (&mctx.input,next_state_log_idx + -1,mctx.eflags);
                        pprVar23 = mctx.state_log + next_state_log_idx;
                        prVar19 = re_acquire_state_context
                                            ((reg_errcode_t *)&eps_via_nodes,prVar4,
                                             (re_node_set *)&fs_body,uVar30);
                        *pprVar23 = prVar19;
                        rpl_free(fs_body.stack);
                        prVar19 = mctx.state_log[next_state_log_idx];
                        uVar18 = mctx.input.cur_idx;
                      }
                      mctx.input.cur_idx = uVar18;
                      if ((prVar19 != (re_dfastate_t *)0x0) ||
                         ((reg_errcode_t)eps_via_nodes.alloc == _REG_NOERROR)) goto LAB_00119ae6;
                    }
LAB_00119d78:
                    idx = idx & 0xffffffff00000000U |
                          (ulong)(uint)(reg_errcode_t)eps_via_nodes.alloc;
                    goto joined_r0x00119d82;
                  }
                }
LAB_00119ae6:
                lVar20 = lVar20 + 1;
              } while (lVar20 < (prVar24->nodes).nelem);
            }
            idx = idx & 0xffffffff00000000;
          }
          mctx.input.cur_idx = uVar18 + 1;
          uVar18 = (ulong)mctx.input.mbs[uVar18];
          do {
            if (prVar24->trtable != (re_dfastate_t **)0x0) {
              prVar19 = prVar24->trtable[uVar18];
LAB_00119452:
              if (mctx.state_log != (re_dfastate_t **)0x0) goto LAB_0011945d;
              goto LAB_00119470;
            }
            pprVar23 = prVar24->word_trtable;
            if (pprVar23 != (re_dfastate_t **)0x0) {
              uVar30 = re_string_context_at(&mctx.input,mctx.input.cur_idx + -1,mctx.eflags);
              if ((uVar30 & 1) == 0) {
                prVar19 = pprVar23[uVar18];
              }
              else {
                prVar19 = pprVar23[uVar18 + 0x100];
              }
              goto LAB_00119452;
            }
            _Var11 = build_trtable(mctx.dfa,prVar24);
          } while (_Var11 != false);
          idx = CONCAT44(idx._4_4_,0xc);
joined_r0x00119d82:
          if (mctx.state_log == (re_dfastate_t **)0x0) {
            pprVar23 = (re_dfastate_t **)0x0;
            goto LAB_00119e23;
          }
          prVar19 = (re_dfastate_t *)0x0;
LAB_0011945d:
          prVar19 = merge_state_with_log((reg_errcode_t *)&idx,&mctx,prVar19);
LAB_00119470:
          if (prVar19 == (re_dfastate_t *)0x0) {
            pprVar23 = mctx.state_log;
            if ((int)idx != 0) goto LAB_00119e23;
            if ((mctx.state_log == (re_dfastate_t **)0x0) ||
               (((byte)local_2f8 & (bVar38 ^ 1U)) != 0)) break;
            do {
              bVar8 = false;
              IVar21 = mctx.input.cur_idx;
              do {
                lVar20 = IVar21 + 1;
                if (mctx.state_log_top < lVar20) {
                  if (bVar8) {
                    mctx.input.cur_idx = IVar21;
                  }
                  goto LAB_001194fe;
                }
                bVar8 = true;
                IVar21 = lVar20;
              } while (mctx.state_log[lVar20] == (re_dfastate_t *)0x0);
              mctx.input.cur_idx = lVar20;
              prVar19 = merge_state_with_log((reg_errcode_t *)&idx,&mctx,(re_dfastate_t *)0x0);
              if ((int)idx != 0) {
                if (prVar19 == (re_dfastate_t *)0x0) goto LAB_001194fe;
                break;
              }
            } while (prVar19 == (re_dfastate_t *)0x0);
          }
          uVar18 = mctx.input.cur_idx;
          local_25b = (bool)(local_25b & prVar24 == prVar19);
          if (!local_25b) {
            lVar36 = local_308;
          }
          if (((prVar19->field_0x68 & 0x10) != 0) &&
             ((-1 < (char)prVar19->field_0x68 ||
              (IVar21 = check_halt_state_context(&mctx,prVar19,mctx.input.cur_idx), IVar21 != 0))))
          {
            if (!bVar38) goto LAB_00119510;
            local_2f0 = (re_dfastate_t **)uVar18;
            local_2f8 = (regmatch_t *)0x1;
            local_2b8 = (long *)0x0;
          }
          prVar24 = prVar19;
          local_308 = lVar36;
        } while ((long)uVar18 < mctx.input.stop);
      }
LAB_001194fe:
      uVar18 = (ulong)local_2f0;
      if (local_2b8 != (long *)0x0) {
        *local_2b8 = *local_2b8 + local_308;
      }
    }
  }
  else {
    rVar15 = check_subexp_matching_top();
    idx = idx & 0xffffffff00000000U | (ulong)(uint)rVar15;
    if (rVar15 == _REG_NOERROR) {
      bVar10 = prVar24->field_0x68;
      if ((bVar10 & 0x40) != 0) {
        rVar15 = transit_state_bkref();
        idx = idx & 0xffffffff00000000U | (ulong)(uint)rVar15;
        if (rVar15 != _REG_NOERROR) goto LAB_0011a868;
        bVar10 = prVar24->field_0x68;
      }
      local_25b = false;
      goto LAB_00119327;
    }
LAB_0011a868:
    uVar18 = (ulong)rVar15;
  }
LAB_00119510:
  pprVar23 = mctx.state_log;
  if (uVar18 == 0xffffffffffffffff) {
LAB_00119cd0:
    match_ctx_clean(&mctx);
    start = match_first;
LAB_00119ce0:
    start = start + iVar12;
    match_first = start;
    if ((start < lVar29) || (lVar37 < start)) goto LAB_00119190;
    goto joined_r0x00118ffe;
  }
  if (uVar18 == 0xfffffffffffffffe) goto LAB_00119e23;
  bVar10 = preg->field_0x38;
  mctx.match_last = uVar18;
  if ((bVar10 & 0x10) == 0) {
    if (nmatch < 2) {
      if (prVar2->nbackref == 0) {
        if (nmatch != 0) goto LAB_001195e2;
        goto free_return;
      }
LAB_00119e43:
      mctx.last_node = check_halt_state_context(&mctx,mctx.state_log[uVar18],uVar18);
LAB_00119e5b:
      IVar21 = mctx.last_node;
      prVar4 = mctx.dfa;
      local_310 = (re_fail_stack_ent_t *)mctx.last_node;
      if (0x1ffffffffffffffe < uVar18) goto LAB_00119e23;
      num = uVar18 + 1;
      pprVar23 = (re_dfastate_t **)malloc(num * 8);
      if (pprVar23 == (re_dfastate_t **)0x0) {
        pprVar23 = (re_dfastate_t **)0x0;
LAB_00119dc2:
        rpl_free(pprVar23);
        rpl_free((void *)0x0);
        goto LAB_00119dce;
      }
      if (prVar4->nbackref == 0) {
        fs_body.alloc = 0;
        fs_body.stack = (re_fail_stack_ent_t *)IVar21;
        fs_body.num = (Idx)pprVar23;
        rVar15 = sift_states_backward(&mctx,(re_sift_context_t *)&fs_body);
        rpl_free((void *)0x0);
        if (rVar15 == _REG_NOERROR) {
          if (*pprVar23 == (re_dfastate_t *)0x0) {
            rpl_free(pprVar23);
            rpl_free((void *)0x0);
            goto LAB_00119cd0;
          }
LAB_0011a0c0:
          rpl_free(mctx.state_log);
          mctx.last_node = (Idx)local_310;
          mctx.match_last = uVar18;
          mctx.state_log = pprVar23;
          rpl_free((void *)0x0);
          rpl_free((void *)0x0);
          goto LAB_0011a100;
        }
LAB_0011a001:
        local_2f0 = (re_dfastate_t **)0x0;
      }
      else {
        local_2f0 = (re_dfastate_t **)malloc(num * 8);
        if (local_2f0 == (re_dfastate_t **)0x0) goto LAB_00119dc2;
        while( true ) {
          memset(local_2f0,0,num * 8);
          fs_body.stack = local_310;
          fs_body.num = (Idx)pprVar23;
          fs_body.alloc = (Idx)local_2f0;
          rVar15 = sift_states_backward(&mctx,(re_sift_context_t *)&fs_body);
          rpl_free((void *)0x0);
          if (rVar15 != _REG_NOERROR) break;
          if ((*pprVar23 != (re_dfastate_t *)0x0) || (*local_2f0 != (re_dfastate_t *)0x0)) {
            rVar15 = merge_state_array(prVar4,pprVar23,local_2f0,num);
            rpl_free(local_2f0);
            if (rVar15 != _REG_NOERROR) goto LAB_0011a001;
            goto LAB_0011a0c0;
          }
          do {
            num = uVar18;
            uVar18 = num - 1;
            if (uVar18 == 0xffffffffffffffff) {
              rpl_free(pprVar23);
              rpl_free(local_2f0);
              match_ctx_clean(&mctx);
              start = match_first;
              goto LAB_00119ce0;
            }
            prVar24 = mctx.state_log[uVar18];
          } while ((prVar24 == (re_dfastate_t *)0x0) || ((prVar24->field_0x68 & 0x10) == 0));
          local_310 = (re_fail_stack_ent_t *)check_halt_state_context(&mctx,prVar24,uVar18);
        }
      }
      local_2c4 = rVar15;
      rpl_free(pprVar23);
      rpl_free(local_2f0);
      pprVar23 = mctx.state_log;
      if (local_2c4 != _REG_NOMATCH) goto free_return;
      goto LAB_00119cd0;
    }
    mctx.last_node = check_halt_state_context(&mctx,mctx.state_log[uVar18],uVar18);
    if (((prVar2->field_0xb0 & 1) != 0) || (prVar2->nbackref != 0)) goto LAB_00119e5b;
  }
  else {
    if (prVar2->nbackref != 0) goto LAB_00119e43;
LAB_0011a100:
    pprVar23 = mctx.state_log;
    if (nmatch == 0) goto free_return;
  }
  if (1 < nmatch) {
    prVar25 = pmatch + 1;
    do {
      prVar25->rm_eo = -1;
      prVar27 = prVar25 + 1;
      prVar25->rm_so = -1;
      prVar25 = prVar27;
    } while (pmatch + nmatch != prVar27);
  }
  bVar10 = preg->field_0x38;
LAB_001195e2:
  pmatch->rm_so = 0;
  pmatch->rm_eo = mctx.match_last;
  if (((bVar10 & 0x10) == 0) && (nmatch != 1)) {
    prVar4 = preg->buffer;
    if (((prVar2->field_0xb0 & 1) == 0) || (prVar2->nbackref < 1)) {
      prev_match.u._16_8_ = prev_match.scratch;
      fs = (re_fail_stack_t *)0x0;
      fs_body.num = 0;
      fs_body.alloc = 2;
      fs_body.stack = (re_fail_stack_ent_t *)0x0;
      prev_match.u._0_8_ = 0;
      prev_match.u._8_8_ = 8;
    }
    else {
      prev_match.u._16_8_ = prev_match.scratch;
      fs_body.num = 0;
      fs_body.alloc = 2;
      prev_match.u._0_8_ = 0;
      prev_match.u._8_8_ = 8;
      fs_body.stack = (re_fail_stack_ent_t *)malloc(0x60);
      if (fs_body.stack == (re_fail_stack_ent_t *)0x0) {
LAB_00119e23:
        local_2c4 = _REG_ESPACE;
        goto free_return;
      }
      fs = &fs_body;
    }
    local_2f8 = prev_match.scratch;
    IVar21 = prVar4->init_node;
    eps_via_nodes._0_16_ = (undefined  [16])0x0;
    eps_via_nodes.elems = (Idx *)0x0;
    _Var11 = gl_dynarray_resize((dynarray_header *)&prev_match,nmatch,local_2f8,0x10);
    prVar25 = prev_match.u._16_8_;
    if (_Var11 == false) {
LAB_0011a84c:
      if (prev_match.u._16_8_ != local_2f8) {
LAB_0011a790:
        rpl_free(prev_match.u._16_8_);
      }
      prev_match.u._16_8_ = local_2f8;
      prev_match.u._0_8_ = 0;
      prev_match.u._8_8_ = 8;
      if (fs == (re_fail_stack_t *)0x0) goto LAB_00119dce;
LAB_0011a7c3:
      prev_match.u._8_8_ = 8;
      prev_match.u._0_8_ = 0;
      free_fail_stack_return(fs);
      local_2c4 = _REG_ESPACE;
      pprVar23 = mctx.state_log;
    }
    else {
      __n = nmatch * 0x10;
      memcpy(prev_match.u._16_8_,pmatch,__n);
      idx = pmatch->rm_so;
LAB_00119760:
      do {
        IVar22 = idx;
        lVar29 = pmatch->rm_eo;
        if (lVar29 < idx) {
          rpl_free(eps_via_nodes.elems);
          if (prev_match.u._16_8_ != local_2f8) {
LAB_0011a436:
            rpl_free(prev_match.u._16_8_);
          }
          prev_match.u._0_8_ = 0;
          prev_match.u._8_8_ = 8;
          prev_match.u._16_8_ = local_2f8;
          if (fs != (re_fail_stack_t *)0x0) {
LAB_0011a465:
            prev_match.u._8_8_ = 8;
            prev_match.u._0_8_ = 0;
            free_fail_stack_return(fs);
          }
LAB_0011a46d:
          lVar29 = pmatch->rm_so;
          pprVar23 = mctx.state_log;
          goto LAB_0011a480;
        }
        lVar37 = IVar21 * 0x10;
        prVar34 = prVar4->nodes + IVar21;
        if (prVar34->field_0x8 == '\b') {
          lVar36 = prVar34->opr + 1;
          if (lVar36 < (long)nmatch) {
            pmatch[lVar36].rm_so = idx;
            pmatch[lVar36].rm_eo = -1;
            lVar29 = pmatch->rm_eo;
          }
        }
        else if ((prVar34->field_0x8 == '\t') && (lVar36 = prVar34->opr + 1, lVar36 < (long)nmatch))
        {
          prVar27 = pmatch + lVar36;
          if (prVar27->rm_so < idx) {
            prVar27->rm_eo = idx;
            memcpy(prVar25,pmatch,__n);
            lVar29 = pmatch->rm_eo;
            IVar22 = idx;
          }
          else if (((prVar34->field_0xa & 8) == 0) || (prVar25[lVar36].rm_so == -1)) {
            prVar27->rm_eo = idx;
            lVar29 = pmatch->rm_eo;
          }
          else {
            memcpy(pmatch,prVar25,__n);
            lVar29 = pmatch->rm_eo;
          }
        }
        if ((lVar29 == IVar22) && (IVar21 == mctx.last_node)) {
          if (fs != (re_fail_stack_t *)0x0) goto LAB_0011a3e8;
          rpl_free(eps_via_nodes.elems);
          if (prev_match.u._16_8_ != local_2f8) {
            rpl_free(prev_match.u._16_8_);
          }
          goto LAB_0011a46d;
        }
        local_310 = (re_fail_stack_ent_t *)IVar21;
        if ((fs != (re_fail_stack_t *)0x0) && (IVar21 = re_node_set_contains(), IVar21 != 0)) {
LAB_0011a3e8:
          sVar33 = 0;
          prVar27 = pmatch;
          while ((prVar27->rm_so < 0 || (prVar27->rm_eo != -1))) {
            sVar33 = sVar33 + 1;
            prVar27 = prVar27 + 1;
            if (nmatch == sVar33) goto LAB_0011a416;
          }
          local_310 = (re_fail_stack_ent_t *)
                      pop_fail_stack(fs,&idx,nmatch,pmatch,prVar25,&eps_via_nodes);
          if ((long)local_310 < 0) {
LAB_0011a416:
            rpl_free(eps_via_nodes.elems);
            if (prev_match.u._16_8_ != local_2f8) goto LAB_0011a436;
            goto LAB_0011a465;
          }
          lVar37 = (long)local_310 << 4;
        }
        prVar9 = mctx.dfa;
        IVar22 = idx;
        prVar34 = (re_token_t *)((long)&(mctx.dfa)->nodes->opr + lVar37);
        if ((prVar34->field_0x8 & 8) != 0) {
          prVar5 = (mctx.dfa)->edests;
          IVar21 = re_node_set_contains();
          if ((IVar21 != 0) ||
             (_Var11 = re_node_set_insert(&eps_via_nodes,(Idx)local_310), _Var11 != false)) {
            lVar29 = prVar5[(long)local_310].nelem;
            if (lVar29 < 1) goto LAB_0011a931;
            pIVar6 = prVar5[(long)local_310].elems;
            lVar36 = 0;
            lVar37 = -1;
            do {
              lVar20 = pIVar6[lVar36];
              IVar22 = re_node_set_contains();
              IVar21 = lVar37;
              if ((IVar22 != 0) && (IVar21 = lVar20, lVar37 != -1)) {
                IVar26 = re_node_set_contains();
                IVar22 = idx;
                if ((IVar26 != 0) || (IVar21 = lVar37, fs == (re_fail_stack_t *)0x0)) break;
                lVar29 = fs->num;
                prVar28 = fs->stack;
                if (lVar29 == fs->alloc) {
                  prVar28 = (re_fail_stack_ent_t *)realloc(prVar28,lVar29 * 0x60);
                  if (prVar28 != (re_fail_stack_ent_t *)0x0) {
                    fs->stack = prVar28;
                    fs->alloc = fs->alloc << 1;
                    goto LAB_0011a6e2;
                  }
                }
                else {
LAB_0011a6e2:
                  prVar28 = prVar28 + lVar29;
                  prVar28->idx = IVar22;
                  prVar28->node = lVar20;
                  prVar27 = (regmatch_t *)malloc(nmatch << 5);
                  prVar28->regs = prVar27;
                  if (prVar27 != (regmatch_t *)0x0) {
                    fs->num = lVar29 + 1;
                    memcpy(prVar27,pmatch,__n);
                    memcpy(prVar28->regs + nmatch,prVar25,__n);
                    rVar15 = re_node_set_init_copy(&fs->stack[lVar29].eps_via_nodes,&eps_via_nodes);
                    if (rVar15 == _REG_NOERROR) break;
                  }
                }
                rpl_free(eps_via_nodes.elems);
                if (prev_match.u._16_8_ == local_2f8) goto LAB_0011a7c3;
                goto LAB_0011a790;
              }
              lVar36 = lVar36 + 1;
              lVar37 = IVar21;
            } while (lVar36 != lVar29);
LAB_0011988d:
            if (-1 < IVar21) goto LAB_00119760;
            if (IVar21 != -2) goto LAB_0011a931;
          }
LAB_0011a83f:
          rpl_free(eps_via_nodes.elems);
          goto LAB_0011a84c;
        }
        if ((prVar34->field_0xa & 0x10) == 0) {
          if (prVar34->field_0x8 != 4) goto LAB_0011a323;
          lVar29 = prVar34->opr + 1;
          if (lVar29 < (long)nmatch) {
            lVar36 = pmatch[lVar29].rm_eo;
            lVar29 = pmatch[lVar29].rm_so;
            __n_00 = lVar36 - lVar29;
            if (fs != (re_fail_stack_t *)0x0) {
              if ((lVar29 != -1) && (lVar36 != -1)) {
                if (__n_00 == 0) goto LAB_0011aa4f;
                if (((long)__n_00 <= mctx.input.valid_len - idx) &&
                   (iVar12 = memcmp(mctx.input.mbs + lVar29,mctx.input.mbs + idx,__n_00),
                   iVar12 == 0)) goto LAB_0011a915;
              }
              goto LAB_0011a931;
            }
            if (__n_00 == 0) goto LAB_0011aa4f;
LAB_0011a915:
            IVar21 = prVar9->nexts[(long)local_310];
            idx = IVar22 + __n_00;
            goto LAB_0011a351;
          }
          if (fs == (re_fail_stack_t *)0x0) {
LAB_0011aa4f:
            _Var11 = re_node_set_insert(&eps_via_nodes,(Idx)local_310);
            IVar22 = idx;
            if (_Var11 == false) goto LAB_0011a83f;
            IVar21 = *prVar9->edests[(long)local_310].elems;
            IVar26 = re_node_set_contains();
            if (IVar26 != 0) goto LAB_0011988d;
            prVar34 = (re_token_t *)((long)&prVar9->nodes->opr + lVar37);
            goto LAB_0011a323;
          }
        }
        else {
          iVar12 = check_node_accept_bytes();
          __n_00 = (size_t)iVar12;
          IVar22 = idx;
          if (__n_00 != 0) goto LAB_0011a915;
          prVar34 = (re_token_t *)((long)&prVar9->nodes->opr + lVar37);
LAB_0011a323:
          _Var11 = check_node_accept(&mctx,prVar34,IVar22);
          if (_Var11 != false) {
            IVar21 = prVar9->nexts[(long)local_310];
            idx = IVar22 + 1;
LAB_0011a351:
            if (fs == (re_fail_stack_t *)0x0) {
LAB_0011a39a:
              eps_via_nodes._0_16_ = ZEXT816((ulong)eps_via_nodes.alloc);
              goto LAB_0011988d;
            }
            if ((idx <= mctx.match_last) && (mctx.state_log[idx] != (re_dfastate_t *)0x0)) {
              IVar22 = re_node_set_contains();
              if (IVar22 != 0) goto LAB_0011a39a;
            }
          }
        }
LAB_0011a931:
        IVar21 = pop_fail_stack(fs,&idx,nmatch,pmatch,prVar25,&eps_via_nodes);
      } while (-1 < IVar21);
      rpl_free(eps_via_nodes.elems);
      if (prev_match.u._16_8_ != local_2f8) {
        rpl_free(prev_match.u._16_8_);
      }
      prev_match.u._16_8_ = local_2f8;
      prev_match.u._0_8_ = 0;
      prev_match.u._8_8_ = 8;
      if (fs == (re_fail_stack_t *)0x0) {
LAB_00119190:
        local_2c4 = _REG_NOMATCH;
        pprVar23 = mctx.state_log;
      }
      else {
        free_fail_stack_return(fs);
        local_2c4 = _REG_NOMATCH;
        pprVar23 = mctx.state_log;
      }
    }
  }
  else {
    lVar29 = 0;
LAB_0011a480:
    sVar33 = 0;
    prVar25 = pmatch;
    while( true ) {
      if (lVar29 != -1) {
        lVar37 = prVar25->rm_eo;
        lVar36 = lVar29;
        lVar20 = lVar37;
        if (mctx.input.offsets_needed != '\0') {
          lVar36 = mctx.input.valid_raw_len;
          if (mctx.input.valid_len != lVar29) {
            lVar36 = mctx.input.offsets[lVar29];
          }
          prVar25->rm_so = lVar36;
          lVar20 = mctx.input.valid_raw_len;
          if (mctx.input.valid_len != lVar37) {
            lVar20 = mctx.input.offsets[lVar37];
          }
        }
        prVar25->rm_so = lVar36 + match_first;
        prVar25->rm_eo = lVar20 + match_first;
      }
      sVar33 = sVar33 + 1;
      prVar25 = prVar25 + 1;
      if (sVar33 == nmatch) break;
      lVar29 = prVar25->rm_so;
    }
    if (0 < local_280) {
      prVar25 = pmatch + nmatch;
      do {
        prVar25->rm_so = -1;
        prVar27 = prVar25 + 1;
        prVar25->rm_eo = -1;
        prVar25 = prVar27;
      } while (pmatch + local_280 + nmatch != prVar27);
    }
    pIVar6 = prVar2->subexp_map;
    if ((pIVar6 != (Idx *)0x0) && (1 < nmatch)) {
      lVar29 = 0;
      do {
        if (pIVar6[lVar29] != lVar29) {
          pmatch[lVar29 + 1].rm_so = pmatch[pIVar6[lVar29] + 1].rm_so;
          pmatch[lVar29 + 1].rm_eo = pmatch[pIVar6[lVar29] + 1].rm_eo;
        }
        lVar29 = lVar29 + 1;
      } while (lVar29 != nmatch - 1);
    }
  }
free_return:
  rpl_free(pprVar23);
  if (prVar2->nbackref != 0) {
    match_ctx_clean(&mctx);
    rpl_free(mctx.sub_tops);
    rpl_free(mctx.bkref_ents);
  }
  re_string_destruct(&mctx.input);
LAB_001191c3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_2c4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

