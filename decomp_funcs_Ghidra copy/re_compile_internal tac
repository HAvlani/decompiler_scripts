
/* WARNING: Could not reconcile some variable overlaps */

reg_errcode_t re_compile_internal(regex_t *param_1,uchar *param_2,ulong param_3,ulong param_4)

{
  byte bVar1;
  bin_tree_storage_t *pbVar2;
  bin_tree_storage_t *pbVar3;
  bin_tree_t **ppbVar4;
  ulong uVar5;
  _Bool _Var6;
  int iVar7;
  reg_errcode_t rVar8;
  wint_t wVar9;
  reg_errcode_t rVar10;
  re_token_t *prVar11;
  re_state_table_entry *prVar12;
  size_t sVar13;
  byte *pbVar14;
  bin_tree_t *pbVar15;
  bin_tree_t *pbVar16;
  bin_tree_t *pbVar17;
  Idx *pIVar18;
  Idx *pIVar19;
  re_node_set *prVar20;
  re_node_set *prVar21;
  re_bitset_ptr_t pbVar22;
  Idx IVar23;
  re_dfastate_t *prVar24;
  re_dfa_t *dfa;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  size_t sVar28;
  long lVar29;
  long extraout_RDX;
  bool bVar30;
  size_t sVar31;
  undefined8 *puVar32;
  uchar **ppuVar33;
  re_token_t *prVar34;
  ulong *puVar35;
  re_dfa_t *prVar36;
  size_t __size;
  uint uVar37;
  Idx IVar38;
  re_hashval_t rVar39;
  long in_FS_OFFSET;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  byte bVar43;
  re_node_set *local_158;
  bool local_128;
  reg_errcode_t local_10c;
  reg_errcode_t local_108;
  undefined local_f8 [16];
  Idx *local_e8;
  re_string_t local_d8;
  long local_40;
  
  bVar43 = 0;
  dfa = param_1->buffer;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  param_1->field_0x38 = param_1->field_0x38 & 0x90;
  local_10c = _REG_NOERROR;
  param_1->syntax = param_4;
  param_1->used = 0;
  param_1->re_nsub = 0;
  if (param_1->allocated < 0x110) {
    dfa = (re_dfa_t *)realloc(dfa,0x110);
    if (dfa == (re_dfa_t *)0x0) {
      rVar8 = _REG_ESPACE;
      goto LAB_00112e53;
    }
    param_1->allocated = 0x110;
    param_1->buffer = dfa;
  }
  param_1->used = 0x110;
  puVar32 = (undefined8 *)((ulong)&dfa->nodes_alloc & 0xfffffffffffffff8);
  dfa->nodes = (re_token_t *)0x0;
  *(undefined8 *)&(dfa->lock).field_0x20 = 0;
  uVar25 = (ulong)(((int)dfa - (int)puVar32) + 0x110U >> 3);
  for (; uVar25 != 0; uVar25 = uVar25 - 1) {
    *puVar32 = 0;
    puVar32 = puVar32 + (ulong)bVar43 * -2 + 1;
  }
  dfa->str_tree_storage_idx = 0xf;
  if (param_3 < 0x555555555555555) {
    sVar31 = param_3 + 1;
    dfa->nodes_alloc = sVar31;
    prVar11 = (re_token_t *)malloc(sVar31 * 0x10);
    dfa->nodes = prVar11;
    if (param_3 == 0) {
      rVar39 = 0;
      uVar25 = 1;
    }
    else {
      uVar25 = 1;
      do {
        uVar25 = uVar25 * 2;
      } while (uVar25 <= param_3);
      rVar39 = uVar25 - 1;
    }
    prVar12 = (re_state_table_entry *)calloc(0x18,uVar25);
    dfa->state_hash_mask = rVar39;
    dfa->state_table = prVar12;
    sVar13 = __ctype_get_mb_cur_max();
    dfa->mb_cur_max = (int)sVar13;
    pbVar14 = (byte *)nl_langinfo(0xe);
    if (((((*pbVar14 & 0xdf) == 0x55) && ((pbVar14[1] & 0xdf) == 0x54)) &&
        ((pbVar14[2] & 0xdf) == 0x46)) &&
       ((pbVar14[(ulong)(pbVar14[3] == 0x2d) + 3] == 0x38 &&
        ((pbVar14 + (ulong)(pbVar14[3] == 0x2d) + 3)[1] == 0)))) {
      dfa->field_0xb0 = dfa->field_0xb0 | 4;
    }
    bVar1 = dfa->field_0xb0;
    dfa->field_0xb0 = bVar1 & 0xf7;
    if (1 < dfa->mb_cur_max) {
      if ((bVar1 & 4) == 0) {
        pbVar22 = (re_bitset_ptr_t)calloc(0x20,1);
        dfa->sb_char = pbVar22;
        if (pbVar22 == (re_bitset_ptr_t)0x0) goto LAB_00112e30;
        lVar26 = 0;
        do {
          uVar37 = (int)lVar26 * 8;
          iVar7 = 0;
          do {
            while( true ) {
              wVar9 = btowc(uVar37);
              if (wVar9 != 0xffffffff) break;
              if ((uVar37 & 0xffffff80) == 0) {
LAB_00112f7c:
                dfa->field_0xb0 = dfa->field_0xb0 | 8;
              }
LAB_00112f83:
              iVar7 = iVar7 + 1;
              uVar37 = uVar37 + 1;
              if (iVar7 == 0x40) goto LAB_00112fd0;
            }
            puVar35 = (ulong *)((long)dfa->sb_char + lVar26);
            *puVar35 = *puVar35 | 1 << ((byte)iVar7 & 0x3f);
            if ((uVar37 & 0xffffff80) != 0) goto LAB_00112f83;
            if (wVar9 != uVar37) goto LAB_00112f7c;
            iVar7 = iVar7 + 1;
            uVar37 = uVar37 + 1;
          } while (iVar7 != 0x40);
LAB_00112fd0:
          lVar26 = lVar26 + 8;
        } while (lVar26 != 0x20);
      }
      else {
        dfa->sb_char = utf8_sb_map;
      }
    }
    if ((dfa->nodes != (re_token_t *)0x0) && (dfa->state_table != (re_state_table_entry *)0x0)) {
      bVar40 = PTR_thrd_exit_0011bfd0 != (undefined *)0x0;
      local_10c = _REG_NOERROR;
      bVar41 = PTR_pthread_mutexattr_gettype_0011bfe0 != (undefined *)0x0;
      if (!bVar40 && !bVar41) {
LAB_0011277c:
        local_d8.trans = param_1->translate;
        iVar7 = dfa->mb_cur_max;
        ppuVar33 = &local_d8.mbs;
        for (lVar26 = 0x12; lVar26 != 0; lVar26 = lVar26 + -1) {
          *ppuVar33 = (uchar *)0x0;
          ppuVar33 = ppuVar33 + (ulong)bVar43 * -2 + 1;
        }
        uVar25 = (ulong)((uint)param_4 & 0x400000);
        local_d8.icase = (param_4 & 0x400000) != 0;
        uVar27 = (ulong)local_d8.trans | uVar25;
        local_d8.mbs_allocated = uVar27 != 0;
        local_d8.map_notascii = (byte)dfa->field_0xb0 >> 3 & 1;
        local_d8.is_utf8 = (byte)dfa->field_0xb0 >> 2 & 1;
        local_d8.raw_mbs = param_2;
        local_d8.raw_len = param_3;
        local_d8.len = param_3;
        local_d8.raw_stop = param_3;
        local_d8.stop = param_3;
        local_d8.mb_cur_max = iVar7;
        if (param_3 == 0) {
LAB_0011282a:
          if (local_d8.mbs_allocated != '\0') {
            param_2 = local_d8.mbs;
          }
          local_d8.mbs = param_2;
          if (uVar25 == 0) {
            if (iVar7 < 2) {
              uVar5 = local_d8.bufs_len;
              local_d8.valid_raw_len = local_d8.bufs_len;
              if (uVar27 != 0) {
                if (local_d8.len <= local_d8.bufs_len) {
                  local_d8.bufs_len = local_d8.len;
                }
                uVar5 = local_d8.valid_len;
                local_d8.valid_raw_len = local_d8.valid_len;
                if (local_d8.valid_len < local_d8.bufs_len) {
                  do {
                    param_2[local_d8.valid_len] =
                         local_d8.trans[local_d8.raw_mbs[local_d8.raw_mbs_idx + local_d8.valid_len]]
                    ;
                    local_d8.valid_len = local_d8.valid_len + 1;
                    uVar5 = local_d8.bufs_len;
                    local_d8.valid_raw_len = local_d8.bufs_len;
                  } while (local_d8.bufs_len != local_d8.valid_len);
                }
              }
            }
            else {
              build_wcs_buffer(&local_d8);
              uVar5 = local_d8.valid_len;
            }
          }
          else {
            if (1 < iVar7) {
              do {
                rVar8 = build_wcs_upper_buffer(&local_d8);
                if (rVar8 != _REG_NOERROR) break;
                uVar5 = local_d8.valid_len;
                if (((long)param_3 <= local_d8.valid_raw_len) ||
                   (dfa->mb_cur_max + local_d8.valid_len < local_d8.bufs_len)) goto LAB_00112937;
                rVar8 = re_string_realloc_buffers(&local_d8,local_d8.bufs_len * 2);
              } while (rVar8 == _REG_NOERROR);
              goto LAB_00112898;
            }
            build_upper_buffer(&local_d8);
            uVar5 = local_d8.valid_len;
          }
LAB_00112937:
          local_d8.valid_len = uVar5;
          local_10c = _REG_NOERROR;
          param_1->re_nsub = 0;
          param_1->buffer->syntax = param_4;
          iVar7 = peek_token((re_token_t *)&local_108,&local_d8,param_4 | 0x800000);
          local_d8.cur_idx = local_d8.cur_idx + iVar7;
          pbVar15 = parse_reg_exp(&local_d8,param_1,(re_token_t *)&local_108,param_4,0,&local_10c);
          if (local_10c == _REG_NOERROR) {
            local_f8._0_9_ = (unkuint9)2 << 0x40;
            local_f8 = ZEXT916(local_f8._0_9_);
            pbVar16 = create_token_tree();
            pbVar17 = pbVar16;
            if (pbVar15 != (bin_tree_t *)0x0) {
LAB_001129dd:
              local_f8._0_9_ = (unkuint9)0x10 << 0x40;
              local_f8 = ZEXT916(local_f8._0_9_);
              pbVar17 = create_token_tree();
            }
            local_158 = (re_node_set *)local_f8;
            prVar36 = param_1->buffer;
            if (pbVar16 == (bin_tree_t *)0x0 || pbVar17 == (bin_tree_t *)0x0) {
              local_10c = _REG_ESPACE;
              dfa->str_tree = (bin_tree_t *)0x0;
            }
            else {
              sVar31 = prVar36->nodes_alloc;
              dfa->str_tree = pbVar17;
              sVar13 = sVar31 * 8;
              __size = sVar31 * 0x18;
              pIVar18 = (Idx *)malloc(sVar13);
              prVar36->nexts = pIVar18;
              pIVar19 = (Idx *)malloc(sVar13);
              prVar36->org_indices = pIVar19;
              prVar20 = (re_node_set *)malloc(__size);
              prVar36->edests = prVar20;
              prVar21 = (re_node_set *)malloc(__size);
              prVar36->eclosures = prVar21;
              if ((((pIVar18 != (Idx *)0x0) && (pIVar19 != (Idx *)0x0)) &&
                  (prVar20 != (re_node_set *)0x0)) && (prVar21 != (re_node_set *)0x0)) {
                sVar31 = param_1->re_nsub;
                pIVar18 = (Idx *)malloc(sVar31 * 8);
                prVar36->subexp_map = pIVar18;
                if (pIVar18 != (Idx *)0x0) {
                  sVar28 = 0;
                  if (sVar31 != 0) {
                    do {
                      pIVar18[sVar28] = sVar28;
                      sVar28 = sVar28 + 1;
                    } while (sVar28 != sVar31);
                  }
                  preorder(prVar36->str_tree,optimize_subexps,prVar36);
                  if (param_1->re_nsub == 0) {
                    pIVar18 = prVar36->subexp_map;
                  }
                  else {
                    pIVar18 = prVar36->subexp_map;
                    sVar31 = 0;
                    do {
                      if (pIVar18[sVar31] != sVar31) goto LAB_00112b23;
                      sVar31 = sVar31 + 1;
                    } while (sVar31 != param_1->re_nsub);
                  }
                  rpl_free(pIVar18);
                  prVar36->subexp_map = (Idx *)0x0;
                }
LAB_00112b23:
                rVar8 = postorder(prVar36->str_tree,lower_subexps,param_1);
                if ((rVar8 != _REG_NOERROR) ||
                   (rVar8 = postorder(prVar36->str_tree,calc_first,prVar36), rVar8 != _REG_NOERROR))
                goto LAB_00112898;
                preorder(prVar36->str_tree,calc_next,prVar36);
                pbVar15 = prVar36->str_tree;
LAB_00112b90:
                lVar26 = pbVar15->node_idx;
                switch((pbVar15->token).field_0x8) {
                default:
                  prVar36->nexts[lVar26] = pbVar15->next->node_idx;
                  break;
                case 2:
                case 0x10:
                  break;
                case 4:
                  IVar23 = pbVar15->next->node_idx;
                  prVar36->nexts[lVar26] = IVar23;
                  if ((pbVar15->token).field_0x8 == '\x04') {
                    prVar20 = prVar36->edests + lVar26;
                    prVar20->alloc = 1;
                    prVar20->nelem = 1;
                    pIVar18 = (Idx *)malloc(8);
                    prVar20->elems = pIVar18;
                    if (pIVar18 != (Idx *)0x0) goto LAB_00112d03;
                    rVar8 = _REG_ESPACE;
                    prVar20->nelem = 0;
                    prVar20->alloc = 0;
                    goto LAB_00112898;
                  }
                  break;
                case 8:
                case 9:
                case 0xc:
                  IVar23 = pbVar15->next->node_idx;
                  prVar20 = prVar36->edests + lVar26;
                  prVar20->alloc = 1;
                  prVar20->nelem = 1;
                  pIVar18 = (Idx *)malloc(8);
                  prVar20->elems = pIVar18;
                  if (pIVar18 != (Idx *)0x0) {
LAB_00112d03:
                    *pIVar18 = IVar23;
                    pbVar16 = pbVar15->left;
                    goto LAB_00112bc5;
                  }
                  rVar8 = _REG_ESPACE;
                  prVar20->nelem = 0;
                  prVar20->alloc = 0;
                  goto LAB_00112898;
                case 10:
                case 0xb:
                  prVar36->field_0xb0 = prVar36->field_0xb0 | 1;
                  pbVar16 = pbVar15->left;
                  if (pbVar16 == (bin_tree_t *)0x0) {
                    IVar23 = pbVar15->next->node_idx;
                  }
                  else {
                    IVar23 = pbVar16->first->node_idx;
                  }
                  if (pbVar15->right == (bin_tree_t *)0x0) {
                    IVar38 = pbVar15->next->node_idx;
                  }
                  else {
                    IVar38 = pbVar15->right->first->node_idx;
                  }
                  prVar20 = prVar36->edests + lVar26;
                  prVar20->alloc = 2;
                  pIVar18 = (Idx *)malloc(0x10);
                  prVar20->elems = pIVar18;
                  if (pIVar18 != (Idx *)0x0) {
                    if (IVar23 == IVar38) {
                      prVar20->nelem = 1;
                      *pIVar18 = IVar23;
                    }
                    else {
                      prVar20->nelem = 2;
                      if (IVar23 < IVar38) {
                        *pIVar18 = IVar23;
                        pIVar18[1] = IVar38;
                      }
                      else {
                        *pIVar18 = IVar38;
                        pIVar18[1] = IVar23;
                      }
                    }
                    goto LAB_00112bc5;
                  }
LAB_00113105:
                  prVar36 = param_1->buffer;
                  local_10c = _REG_ESPACE;
                  goto re_compile_internal_free_return;
                }
                pbVar16 = pbVar15->left;
LAB_00112bc5:
                pbVar17 = pbVar15;
                pbVar15 = pbVar16;
                if (pbVar16 == (bin_tree_t *)0x0) {
                  while( true ) {
                    pbVar15 = pbVar17->right;
                    bVar42 = pbVar15 == pbVar16;
                    if (!bVar42 && pbVar15 != (bin_tree_t *)0x0) break;
                    ppbVar4 = &pbVar17->parent;
                    pbVar16 = pbVar17;
                    pbVar17 = *ppbVar4;
                    if (*ppbVar4 == (bin_tree_t *)0x0) {
                      local_128 = false;
                      sVar31 = 0;
LAB_00112c18:
                      if (prVar36->nodes_len == sVar31) goto LAB_00112c3e;
LAB_00112c1e:
                      lVar26 = sVar31 * 0x18;
                      while( true ) {
                        lVar29 = *(long *)((long)&prVar36->eclosures->nelem + lVar26);
                        while (lVar29 != 0) {
                          sVar31 = sVar31 + 1;
                          if (prVar36->nodes_len != sVar31) goto LAB_00112c1e;
LAB_00112c3e:
                          if (local_128 == false) {
                            if (((((param_1->field_0x38 & 0x10) != 0) || (param_1->re_nsub == 0)) ||
                                ((prVar36->field_0xb0 & 1) == 0)) && (prVar36->nbackref == 0))
                            goto LAB_00113140;
                            prVar20 = (re_node_set *)malloc(sVar31 * 0x18);
                            prVar36->inveclosures = prVar20;
                            if (prVar20 != (re_node_set *)0x0) {
                              uVar27 = 0;
                              if (sVar31 != 0) goto LAB_00113065;
                              goto LAB_00113140;
                            }
                            local_10c = _REG_ESPACE;
                            prVar36 = param_1->buffer;
                            goto re_compile_internal_free_return;
                          }
                          lVar26 = 0;
                          local_128 = false;
                          sVar31 = 0;
                          lVar29 = prVar36->eclosures->nelem;
                        }
                        rVar8 = calc_eclosure_iter(local_158,prVar36,sVar31,true);
                        if (rVar8 != _REG_NOERROR) break;
                        sVar31 = sVar31 + 1;
                        if (*(long *)((long)&prVar36->eclosures->nelem + lVar26) != 0)
                        goto LAB_00112c18;
                        rpl_free(local_e8);
                        if (prVar36->nodes_len == sVar31) {
                          local_128 = false;
                          sVar31 = 0;
                          lVar26 = 0;
                        }
                        else {
                          lVar26 = sVar31 * 0x18;
                          local_128 = bVar42 || pbVar15 == (bin_tree_t *)0x0;
                        }
                      }
                      goto LAB_00112898;
                    }
                  }
                }
                goto LAB_00112b90;
              }
              local_10c = _REG_ESPACE;
            }
          }
          else {
            if (pbVar15 != (bin_tree_t *)0x0) {
              local_f8._0_9_ = (unkuint9)2 << 0x40;
              local_f8 = ZEXT916(local_f8._0_9_);
              pbVar16 = create_token_tree();
              goto LAB_001129dd;
            }
            dfa->str_tree = (bin_tree_t *)0x0;
            prVar36 = param_1->buffer;
          }
        }
        else {
          rVar8 = re_string_realloc_buffers(&local_d8,sVar31);
          if (rVar8 == _REG_NOERROR) {
            iVar7 = dfa->mb_cur_max;
            goto LAB_0011282a;
          }
LAB_00112898:
          prVar36 = param_1->buffer;
          local_10c = rVar8;
        }
re_compile_internal_free_return:
        pbVar3 = prVar36->str_tree_storage;
        while (pbVar3 != (bin_tree_storage_t *)0x0) {
          pbVar2 = pbVar3->next;
          rpl_free(pbVar3);
          pbVar3 = pbVar2;
        }
        prVar36->str_tree_storage = (bin_tree_storage_t *)0x0;
        prVar36->str_tree_storage_idx = 0xf;
        prVar36->str_tree = (bin_tree_t *)0x0;
        rpl_free(prVar36->org_indices);
        prVar36->org_indices = (Idx *)0x0;
        re_string_destruct(&local_d8);
        if (!bVar40 && !bVar41) goto LAB_00112e38;
        goto LAB_00112f24;
      }
      iVar7 = pthread_mutex_init((pthread_mutex_t *)&dfa->lock,(pthread_mutexattr_t *)0x0);
      if (iVar7 != 0) goto LAB_00112e30;
      if (local_10c == _REG_NOERROR) goto LAB_0011277c;
      goto LAB_00112e38;
    }
  }
LAB_00112e30:
  local_10c = _REG_ESPACE;
  goto LAB_00112e38;
LAB_00113065:
  while( true ) {
    prVar20[uVar27].elems = (Idx *)0x0;
    *(undefined (*) [16])(prVar20 + uVar27) = (undefined  [16])0x0;
    if (prVar36->nodes_len <= uVar27 + 1) break;
    prVar20 = prVar36->inveclosures;
    uVar27 = uVar27 + 1;
  }
  if (prVar36->nodes_len != 0) {
    uVar27 = 0;
    prVar20 = prVar36->eclosures;
    do {
      lVar26 = 0;
      pIVar18 = prVar20[uVar27].elems;
      if (0 < prVar20[uVar27].nelem) {
        do {
          _Var6 = re_node_set_insert_last(prVar36->inveclosures + pIVar18[lVar26],uVar27);
          if (_Var6 == false) goto LAB_00113105;
          prVar20 = prVar36->eclosures;
          lVar26 = lVar26 + 1;
        } while (lVar26 < prVar20[uVar27].nelem);
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 <= prVar36->nodes_len && prVar36->nodes_len != uVar27);
    local_128 = false;
  }
LAB_00113140:
  local_10c = _REG_NOERROR;
  bVar42 = (bool)((byte)dfa->field_0xb0 >> 2 & uVar25 == 0);
  if ((bVar42 != false) && (param_1->translate == (uchar *)0x0)) {
    if (dfa->nodes_len == 0) {
LAB_001136c0:
      bVar30 = false;
    }
    else {
      prVar11 = dfa->nodes;
      bVar30 = false;
      sVar31 = 0;
      prVar34 = prVar11;
      do {
        switch(prVar34->field_0x8) {
        default:
                    /* WARNING: Subroutine does not return */
          abort();
        case 1:
          if (*(char *)&prVar34->opr < '\0') {
            local_128 = bVar42;
          }
          break;
        case 2:
        case 4:
        case 8:
        case 9:
        case 10:
        case 0xb:
          break;
        case 3:
          if ((*(long *)(prVar34->opr + 0x10) != 0) || (*(long *)(prVar34->opr + 0x18) != 0))
          goto switchD_001133af_caseD_6;
          break;
        case 5:
          bVar30 = bVar42;
          break;
        case 6:
          goto switchD_001133af_caseD_6;
        case 0xc:
          uVar37 = *(uint *)&prVar34->opr;
          if (uVar37 < 0x41) {
            if ((uVar37 < 0x10) || ((1 << ((char)uVar37 - 0x10U & 0x3f) & 0x1000000010001U) == 0))
            goto switchD_001133af_caseD_6;
          }
          else if (uVar37 != 0x80) goto switchD_001133af_caseD_6;
        }
        sVar31 = sVar31 + 1;
        prVar34 = prVar34 + 1;
      } while (sVar31 != dfa->nodes_len);
      prVar34 = prVar11 + sVar31;
      if ((local_128 | bVar30) == 0) goto LAB_001136c0;
      do {
        if (prVar11->field_0x8 == '\x01') {
          if (*(char *)&prVar11->opr < '\0') {
            prVar11->field_0xa = prVar11->field_0xa & 0xdf;
          }
        }
        else if (prVar11->field_0x8 == '\x05') {
          prVar11->field_0x8 = 7;
        }
        prVar11 = prVar11 + 1;
      } while (prVar34 != prVar11);
    }
    dfa->mb_cur_max = 1;
    dfa->field_0xb0 = (bVar30 | 0 < dfa->nbackref) * '\x02' | dfa->field_0xb0 & 0xf9;
  }
switchD_001133af_caseD_6:
  lVar26 = dfa->str_tree->first->node_idx;
  dfa->init_node = lVar26;
  rVar10 = re_node_set_init_copy(local_158,dfa->eclosures + lVar26);
  rVar8 = rVar10;
  local_108 = rVar10;
  if (rVar10 == _REG_NOERROR) {
    if ((0 < dfa->nbackref) && (0 < local_f8._8_8_)) {
      lVar26 = 0;
LAB_001131d5:
      do {
        prVar11 = dfa->nodes + local_e8[lVar26];
        if (prVar11->field_0x8 == '\x04') {
          lVar29 = 0;
          do {
            prVar34 = dfa->nodes + local_e8[lVar29];
            if ((prVar34->field_0x8 == '\t') && (prVar34->opr == prVar11->opr)) {
              IVar23 = re_node_set_contains();
              if (IVar23 == 0) {
                rVar8 = re_node_set_merge(local_158,dfa->eclosures + extraout_RDX);
                if (rVar8 != _REG_NOERROR) goto LAB_001132b8;
                lVar26 = 1;
                if (1 < local_f8._8_8_) goto LAB_001131d5;
                goto LAB_00113278;
              }
              break;
            }
            lVar29 = lVar29 + 1;
          } while (local_f8._8_8_ != lVar29);
        }
        lVar26 = lVar26 + 1;
      } while (lVar26 < local_f8._8_8_);
    }
LAB_00113278:
    prVar24 = re_acquire_state_context((reg_errcode_t *)(re_token_t *)&local_108,dfa,local_158,0);
    dfa->init_state = prVar24;
    rVar8 = local_108;
    if (prVar24 != (re_dfastate_t *)0x0) {
      if ((char)prVar24->field_0x68 < '\0') {
        prVar24 = re_acquire_state_context
                            ((reg_errcode_t *)(re_token_t *)&local_108,dfa,local_158,1);
        dfa->init_state_word = prVar24;
        prVar24 = re_acquire_state_context
                            ((reg_errcode_t *)(re_token_t *)&local_108,dfa,local_158,2);
        dfa->init_state_nl = prVar24;
        prVar24 = re_acquire_state_context
                            ((reg_errcode_t *)(re_token_t *)&local_108,dfa,local_158,6);
        dfa->init_state_begbuf = prVar24;
        rVar8 = local_108;
        if (((dfa->init_state_word == (re_dfastate_t *)0x0) ||
            (dfa->init_state_nl == (re_dfastate_t *)0x0)) || (prVar24 == (re_dfastate_t *)0x0))
        goto LAB_001132b8;
      }
      else {
        dfa->init_state_begbuf = prVar24;
        dfa->init_state_nl = prVar24;
        dfa->init_state_word = prVar24;
      }
      rpl_free(local_e8);
      rVar8 = rVar10;
    }
  }
LAB_001132b8:
  prVar36 = param_1->buffer;
  pbVar3 = prVar36->str_tree_storage;
  local_10c = rVar8;
  while (pbVar3 != (bin_tree_storage_t *)0x0) {
    pbVar2 = pbVar3->next;
    rpl_free(pbVar3);
    pbVar3 = pbVar2;
  }
  prVar36->str_tree_storage = (bin_tree_storage_t *)0x0;
  prVar36->str_tree_storage_idx = 0xf;
  prVar36->str_tree = (bin_tree_t *)0x0;
  rpl_free(prVar36->org_indices);
  prVar36->org_indices = (Idx *)0x0;
  re_string_destruct(&local_d8);
  rVar8 = local_10c;
  if (local_10c == _REG_NOERROR) goto LAB_00112e53;
  if (bVar40 || bVar41) {
LAB_00112f24:
    pthread_mutex_destroy((pthread_mutex_t *)&dfa->lock);
  }
LAB_00112e38:
  free_dfa_content(dfa);
  param_1->buffer = (re_dfa_t *)0x0;
  param_1->allocated = 0;
  rVar8 = local_10c;
LAB_00112e53:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return rVar8;
}

