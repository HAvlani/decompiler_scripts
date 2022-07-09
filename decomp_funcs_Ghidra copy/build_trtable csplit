
_Bool build_trtable(re_dfa_t *dfa,re_dfastate_t *state)

{
  void **ppvVar1;
  undefined4 *puVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  re_dfa_t *dfa_00;
  re_node_set *prVar6;
  Idx elem;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  reg_errcode_t rVar24;
  void *pvVar25;
  re_dfastate_t *prVar26;
  ulong *puVar27;
  void *pvVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  undefined8 *puVar32;
  re_dfastate_t *prVar33;
  ulong uVar34;
  ulong *puVar35;
  uint uVar36;
  void **ppvVar37;
  undefined4 *puVar38;
  long lVar39;
  undefined (*pauVar40) [16];
  undefined uVar41;
  ulong uVar42;
  long lVar43;
  undefined8 *puVar44;
  re_node_set *prVar45;
  long lVar46;
  ulong **ppuVar47;
  long *plVar48;
  long lVar49;
  long in_FS_OFFSET;
  _Bool _Var50;
  undefined auVar51 [16];
  reg_errcode_t err;
  re_node_set follows;
  bitset_t acceptable;
  re_dfastate_t *dest_states [256];
  re_dfastate_t *dest_states_word [256];
  re_dfastate_t *dest_states_nl [256];
  re_node_set dests_node [256];
  bitset_word_t dests_ch [256] [4];
  
  puVar2 = (undefined4 *)&stack0xffffffffffffffd0;
  do {
    puVar38 = puVar2;
    *(undefined8 *)(puVar38 + -0x400) = *(undefined8 *)(puVar38 + -0x400);
    puVar2 = puVar38 + -0x400;
  } while ((re_dfastate_t **)(puVar38 + -0x400) != dest_states + 3);
  *(re_dfastate_t **)(puVar38 + -0x41c) = state;
  *(undefined8 *)(puVar38 + 0xffc) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  lVar46 = (state->nodes).nelem;
  state->trtable = (re_dfastate_t **)0x0;
  state->word_trtable = (re_dfastate_t **)0x0;
  *(undefined (*) [16])(puVar38 + -0x406) = (undefined  [16])0x0;
  *(undefined (*) [16])(puVar38 + -0x402) = (undefined  [16])0x0;
  if (lVar46 < 1) {
LAB_0010b481:
    *(undefined8 *)(puVar38 + -0x42c) = 0x10b490;
    pvVar25 = calloc(8,0x100);
    _Var50 = pvVar25 != (void *)0x0;
    *(void **)(*(long *)(puVar38 + -0x41c) + 0x58) = pvVar25;
  }
  else {
    *(re_dfa_t **)(puVar38 + -0x424) = dfa;
    lVar46 = 0;
    *(undefined8 *)(puVar38 + -0x42a) = 0;
    *(undefined4 **)(puVar38 + -0x41e) = puVar38 + 0x7fa;
    do {
      *(long *)(puVar38 + -0x426) = *(long *)(puVar38 + -0x42a) * 8;
      ppuVar47 = (ulong **)
                 ((state->nodes).elems[*(long *)(puVar38 + -0x42a)] * 0x10 +
                 **(long **)(puVar38 + -0x424));
      uVar5 = *(uint *)(ppuVar47 + 1);
      bVar3 = *(byte *)(ppuVar47 + 1);
      uVar23 = uVar5 >> 8;
      if (bVar3 == 1) {
        puVar27 = (ulong *)((long)puVar38 + ((ulong)(*(byte *)ppuVar47 >> 3 & 0x18) - 0x1018));
        *puVar27 = *puVar27 | 1 << (*(byte *)ppuVar47 & 0x3f);
LAB_0010ae34:
        pauVar40 = (undefined (*) [16])(puVar38 + -0x406);
        if ((uVar5 & 0x3ff00) == 0) {
LAB_0010af00:
          lVar39 = 0;
          if (0 < lVar46) {
            *(ulong ***)(puVar38 + -0x428) = ppuVar47;
            lVar49 = *(long *)(puVar38 + -0x41e);
            *(re_dfastate_t **)(puVar38 + -0x422) = state;
            do {
              lVar43 = lVar39 * 0x20;
              if ((bVar3 != 1) ||
                 ((*(ulong *)((long)puVar38 +
                             lVar43 + (ulong)(**(byte **)(puVar38 + -0x428) >> 3 & 0x18) + 0x1fe8)
                   >> (**(byte **)(puVar38 + -0x428) & 0x3f) & 1) != 0)) {
                uVar29 = 0;
                lVar30 = 0;
                do {
                  uVar42 = *(ulong *)(*pauVar40 + lVar30 * 8) &
                           *(ulong *)(lVar49 + lVar43 + lVar30 * 8);
                  *(ulong *)(puVar38 + lVar30 * 2 + -0x206) = uVar42;
                  lVar30 = lVar30 + 1;
                  uVar29 = uVar29 | uVar42;
                } while (lVar30 != 4);
                if (uVar29 != 0) {
                  uVar42 = 0;
                  uVar29 = 0;
                  lVar30 = 0;
                  do {
                    uVar31 = *(ulong *)(lVar49 + lVar43 + lVar30 * 8);
                    uVar34 = ~*(ulong *)(*pauVar40 + lVar30 * 8) & uVar31;
                    uVar31 = ~uVar31 & *(ulong *)(*pauVar40 + lVar30 * 8);
                    *(ulong *)(puVar38 + lVar30 * 2 + -6) = uVar34;
                    uVar29 = uVar29 | uVar34;
                    *(ulong *)(*pauVar40 + lVar30 * 8) = uVar31;
                    lVar30 = lVar30 + 1;
                    uVar42 = uVar42 | uVar31;
                  } while (lVar30 != 4);
                  prVar45 = (re_node_set *)(puVar38 + lVar39 * 6 + 0x1fa);
                  if (uVar29 != 0) {
                    uVar8 = puVar38[-5];
                    uVar9 = puVar38[-4];
                    uVar10 = puVar38[-3];
                    uVar11 = puVar38[-2];
                    uVar12 = puVar38[-1];
                    uVar13 = *puVar38;
                    uVar14 = puVar38[1];
                    *(re_node_set **)(puVar38 + -0x420) = prVar45;
                    uVar15 = puVar38[-0x206];
                    uVar16 = puVar38[-0x205];
                    uVar17 = puVar38[-0x204];
                    uVar18 = puVar38[-0x203];
                    uVar19 = puVar38[-0x202];
                    uVar20 = puVar38[-0x201];
                    uVar21 = puVar38[-0x200];
                    uVar22 = puVar38[-0x1ff];
                    puVar2 = puVar38 + lVar46 * 8 + 0x7fa;
                    *puVar2 = puVar38[-6];
                    puVar2[1] = uVar8;
                    puVar2[2] = uVar9;
                    puVar2[3] = uVar10;
                    puVar2 = puVar38 + lVar46 * 8 + 0x7fe;
                    *puVar2 = uVar11;
                    puVar2[1] = uVar12;
                    puVar2[2] = uVar13;
                    puVar2[3] = uVar14;
                    puVar2 = (undefined4 *)(lVar49 + lVar43);
                    *puVar2 = uVar15;
                    puVar2[1] = uVar16;
                    puVar2[2] = uVar17;
                    puVar2[3] = uVar18;
                    puVar2 = (undefined4 *)(lVar49 + 0x10 + lVar43);
                    *puVar2 = uVar19;
                    puVar2[1] = uVar20;
                    puVar2[2] = uVar21;
                    puVar2[3] = uVar22;
                    *(undefined8 *)(puVar38 + -0x42c) = 0x10b048;
                    rVar24 = re_node_set_init_copy
                                       ((re_node_set *)(puVar38 + lVar46 * 6 + 0x1fa),prVar45);
                    if (rVar24 != _REG_NOERROR) goto LAB_0010b128;
                    prVar45 = *(re_node_set **)(puVar38 + -0x420);
                    lVar46 = lVar46 + 1;
                  }
                  elem = *(Idx *)(*(long *)(*(long *)(puVar38 + -0x422) + 0x18) +
                                 *(long *)(puVar38 + -0x426));
                  *(undefined8 *)(puVar38 + -0x42c) = 0x10b073;
                  _Var50 = re_node_set_insert(prVar45,elem);
                  if (_Var50 == false) goto LAB_0010b128;
                  if (uVar42 == 0) break;
                }
              }
              lVar39 = lVar39 + 1;
            } while (lVar39 < lVar46);
            state = *(re_dfastate_t **)(puVar38 + -0x422);
          }
          if (lVar46 != lVar39) goto LAB_0010abc1;
          lVar39 = *(long *)(puVar38 + -0x426);
          uVar8 = puVar38[-0x405];
          uVar9 = puVar38[-0x404];
          uVar10 = puVar38[-0x403];
          uVar11 = puVar38[-0x402];
          uVar12 = puVar38[-0x401];
          uVar13 = puVar38[-0x400];
          uVar14 = puVar38[-0x3ff];
          puVar2 = puVar38 + lVar46 * 8 + 0x7fa;
          *puVar2 = puVar38[-0x406];
          puVar2[1] = uVar8;
          puVar2[2] = uVar9;
          puVar2[3] = uVar10;
          puVar2 = puVar38 + lVar46 * 8 + 0x7fe;
          *puVar2 = uVar11;
          puVar2[1] = uVar12;
          puVar2[2] = uVar13;
          puVar2[3] = uVar14;
          uVar7 = *(undefined8 *)((long)(state->nodes).elems + lVar39);
          puVar44 = (undefined8 *)(puVar38 + lVar46 * 6 + 0x1fa);
          *puVar44 = 1;
          puVar44[1] = 1;
          *(undefined8 *)(puVar38 + -0x42c) = 0x10b0ee;
          puVar32 = (undefined8 *)malloc(8);
          puVar44[2] = puVar32;
          if (puVar32 == (undefined8 *)0x0) {
            puVar44[1] = 0;
            *puVar44 = 0;
            if (lVar46 != 0) {
LAB_0010b128:
              lVar39 = 0;
              do {
                lVar49 = lVar39 + 1;
                pvVar25 = *(void **)(puVar38 + lVar39 * 6 + 0x1fe);
                *(undefined8 *)(puVar38 + -0x42c) = 0x10b14a;
                rpl_free(pvVar25);
                lVar39 = lVar49;
              } while (lVar49 < lVar46);
            }
            goto LAB_0010b14f;
          }
          *puVar32 = uVar7;
          lVar46 = lVar46 + 1;
        }
        else {
          if ((uVar23 & 0x20) != 0) {
            uVar29 = *(ulong *)(puVar38 + -0x406);
            *pauVar40 = (undefined  [16])0x0;
            *(undefined (*) [16])(puVar38 + -0x402) = (undefined  [16])0x0;
            if ((uVar29 & 0x400) == 0) goto LAB_0010abc1;
            *(undefined8 *)(puVar38 + -0x406) = 0x400;
          }
          if ((uVar23 & 0x80) == 0) {
            if ((uVar23 & 4) != 0) {
              if ((bVar3 == 1) && ((*(byte *)((long)ppuVar47 + 10) & 0x40) == 0)) goto LAB_0010b0fe;
              lVar39 = *(long *)(puVar38 + -0x424);
              if (*(int *)(lVar39 + 0xb4) < 2) {
                lVar39 = *(long *)(puVar38 + -0x424);
                uVar29 = 0;
                lVar49 = 0;
                do {
                  uVar42 = *(ulong *)(*pauVar40 + lVar49 * 8) &
                           *(ulong *)(lVar39 + 0xb8 + lVar49 * 8);
                  *(ulong *)(*pauVar40 + lVar49 * 8) = uVar42;
                  lVar49 = lVar49 + 1;
                  uVar29 = uVar29 | uVar42;
                } while (lVar49 != 4);
              }
              else {
                lVar49 = *(long *)(lVar39 + 0x78);
                uVar29 = 0;
                lVar43 = 0;
                do {
                  uVar42 = (~*(ulong *)(lVar49 + lVar43 * 8) |
                           *(ulong *)(lVar39 + 0xb8 + lVar43 * 8)) &
                           *(ulong *)(*pauVar40 + lVar43 * 8);
                  *(ulong *)(*pauVar40 + lVar43 * 8) = uVar42;
                  lVar43 = lVar43 + 1;
                  uVar29 = uVar29 | uVar42;
                } while (lVar43 != 4);
              }
              if (uVar29 == 0) goto LAB_0010abc1;
            }
            if ((uVar23 & 8) != 0) {
              if ((bVar3 == 1) && ((*(byte *)((long)ppuVar47 + 10) & 0x40) != 0)) goto LAB_0010b0fe;
              lVar39 = *(long *)(puVar38 + -0x424);
              if (*(int *)(lVar39 + 0xb4) < 2) {
                lVar39 = *(long *)(puVar38 + -0x424);
                uVar29 = 0;
                lVar49 = 0;
                do {
                  uVar42 = ~*(ulong *)(lVar39 + 0xb8 + lVar49 * 8) &
                           *(ulong *)(*pauVar40 + lVar49 * 8);
                  *(ulong *)(*pauVar40 + lVar49 * 8) = uVar42;
                  lVar49 = lVar49 + 1;
                  uVar29 = uVar29 | uVar42;
                } while (lVar49 != 4);
              }
              else {
                lVar49 = *(long *)(lVar39 + 0x78);
                uVar29 = 0;
                lVar43 = 0;
                do {
                  uVar42 = ~(*(ulong *)(lVar39 + 0xb8 + lVar43 * 8) &
                            *(ulong *)(lVar49 + lVar43 * 8)) & *(ulong *)(*pauVar40 + lVar43 * 8);
                  *(ulong *)(*pauVar40 + lVar43 * 8) = uVar42;
                  lVar43 = lVar43 + 1;
                  uVar29 = uVar29 | uVar42;
                } while (lVar43 != 4);
              }
              if (uVar29 == 0) goto LAB_0010abc1;
            }
            goto LAB_0010af00;
          }
        }
LAB_0010b0fe:
        *pauVar40 = (undefined  [16])0x0;
        *(undefined (*) [16])(puVar38 + -0x402) = (undefined  [16])0x0;
      }
      else {
        if (bVar3 == 3) {
          puVar27 = (ulong *)(puVar38 + -0x406);
          puVar35 = *ppuVar47;
          do {
            *puVar27 = *puVar27 | *puVar35;
            puVar27 = puVar27 + 1;
            puVar35 = puVar35 + 1;
          } while ((ulong *)(puVar38 + -0x3fe) != puVar27);
          goto LAB_0010ae34;
        }
        if (bVar3 == 5) {
          puVar27 = (ulong *)(puVar38 + -0x406);
          if (*(int *)(*(long *)(puVar38 + -0x424) + 0xb4) < 2) {
            auVar51 = CONCAT412(0xffffffff,CONCAT48(0xffffffff,0xffffffffffffffff));
            *(undefined (*) [16])(puVar38 + -0x406) = auVar51;
            *(undefined (*) [16])(puVar38 + -0x402) = auVar51;
          }
          else {
            puVar35 = *(ulong **)(*(long *)(puVar38 + -0x424) + 0x78);
            do {
              *puVar27 = *puVar27 | *puVar35;
              puVar27 = puVar27 + 1;
              puVar35 = puVar35 + 1;
            } while (puVar27 != (ulong *)(puVar38 + -0x3fe));
          }
          uVar36 = (uint)*(ulong *)(*(long *)(puVar38 + -0x424) + 0xd8);
          if ((*(ulong *)(*(long *)(puVar38 + -0x424) + 0xd8) & 0x40) == 0) {
            *(ulong *)(puVar38 + -0x406) = *(ulong *)(puVar38 + -0x406) & 0xfffffffffffffbff;
          }
LAB_0010b1d9:
          if ((uVar36 & 0x80) != 0) {
            *(ulong *)(puVar38 + -0x406) = *(ulong *)(puVar38 + -0x406) & 0xfffffffffffffffe;
          }
          goto LAB_0010ae34;
        }
        if (bVar3 == 7) {
          *(undefined (*) [16])(puVar38 + -0x406) =
               CONCAT412(0xffffffff,CONCAT48(0xffffffff,0xffffffffffffffff));
          uVar36 = (uint)*(ulong *)(*(long *)(puVar38 + -0x424) + 0xd8);
          if ((*(ulong *)(*(long *)(puVar38 + -0x424) + 0xd8) & 0x40) == 0) {
            *(undefined8 *)(puVar38 + -0x406) = 0xfffffffffffffbff;
          }
          goto LAB_0010b1d9;
        }
      }
LAB_0010abc1:
      *(long *)(puVar38 + -0x42a) = *(long *)(puVar38 + -0x42a) + 1;
    } while (*(long *)(puVar38 + -0x42a) < (state->nodes).nelem);
    dfa_00 = *(re_dfa_t **)(puVar38 + -0x424);
    if (lVar46 < 1) {
      if (lVar46 == 0) goto LAB_0010b481;
    }
    else {
      *(undefined8 *)(puVar38 + -0x414) = 0;
      *(long *)(puVar38 + -0x416) = lVar46 + 1;
      *(undefined8 *)(puVar38 + -0x42c) = 0x10abfa;
      pvVar25 = malloc((lVar46 + 1) * 8);
      *(void **)(puVar38 + -0x412) = pvVar25;
      if (pvVar25 == (void *)0x0) {
        puVar38[-0x417] = 0xc;
      }
      else {
        *(undefined *)(puVar38 + -0x428) = 0;
        lVar39 = 0;
        puVar38[-0x417] = 0;
        plVar48 = (long *)(puVar38 + 0x1fc);
        prVar45 = (re_node_set *)(puVar38 + -0x416);
        *(undefined4 **)(puVar38 + -0x42a) = puVar38 + -0x417;
        *(undefined (*) [16])(puVar38 + -0x40e) = (undefined  [16])0x0;
        *(undefined (*) [16])(puVar38 + -0x40a) = (undefined  [16])0x0;
        do {
          *(undefined8 *)(puVar38 + -0x414) = 0;
          lVar49 = 0;
          if (0 < *plVar48) {
            do {
              lVar43 = dfa_00->nexts[*(long *)(plVar48[1] + lVar49 * 8)];
              if (lVar43 != -1) {
                prVar6 = dfa_00->eclosures;
                *(undefined8 *)(puVar38 + -0x42c) = 0x10ac8a;
                rVar24 = re_node_set_merge(prVar45,prVar6 + lVar43);
                puVar38[-0x417] = rVar24;
                if (rVar24 != _REG_NOERROR) goto LAB_0010b370;
              }
              lVar49 = lVar49 + 1;
            } while (*plVar48 != lVar49 && lVar49 <= *plVar48);
          }
          *(undefined8 *)(puVar38 + -0x42c) = 0x10acb8;
          prVar26 = re_acquire_state_context(*(reg_errcode_t **)(puVar38 + -0x42a),dfa_00,prVar45,0)
          ;
          *(re_dfastate_t **)((long)(puVar38 + -0x406) + lVar39 * 8) = prVar26;
          if ((prVar26 == (re_dfastate_t *)0x0) && (puVar38[-0x417] != 0)) {
LAB_0010b370:
            pvVar25 = *(void **)(puVar38 + -0x412);
            goto out_free;
          }
          if ((char)prVar26->field_0x68 < '\0') {
            *(re_dfastate_t **)(puVar38 + -0x426) = prVar26;
            *(undefined8 *)(puVar38 + -0x42c) = 0x10b3c9;
            prVar33 = re_acquire_state_context
                                (*(reg_errcode_t **)(puVar38 + -0x42a),dfa_00,prVar45,1);
            prVar26 = *(re_dfastate_t **)(puVar38 + -0x426);
            *(re_dfastate_t **)(puVar38 + lVar39 * 2 + -0x206) = prVar33;
            if (prVar33 == (re_dfastate_t *)0x0) {
              if (puVar38[-0x417] != 0) goto LAB_0010b370;
LAB_0010b3e4:
              uVar41 = *(undefined *)(puVar38 + -0x428);
              if (1 < dfa_00->mb_cur_max) {
                uVar41 = 1;
              }
              *(undefined *)(puVar38 + -0x428) = uVar41;
            }
            else if (prVar26 != prVar33) goto LAB_0010b3e4;
            *(undefined8 *)(puVar38 + -0x42c) = 0x10b412;
            prVar26 = re_acquire_state_context
                                (*(reg_errcode_t **)(puVar38 + -0x42a),dfa_00,prVar45,2);
            *(re_dfastate_t **)(puVar38 + lVar39 * 2 + -6) = prVar26;
            if ((prVar26 == (re_dfastate_t *)0x0) && (puVar38[-0x417] != 0)) goto LAB_0010b370;
          }
          else {
            *(re_dfastate_t **)(puVar38 + lVar39 * 2 + -0x206) = prVar26;
            *(re_dfastate_t **)(puVar38 + lVar39 * 2 + -6) = prVar26;
          }
          puVar35 = (ulong *)(puVar38 + 0x7fa + lVar39 * 8);
          puVar27 = (ulong *)(puVar38 + -0x40e);
          do {
            *puVar27 = *puVar27 | *puVar35;
            puVar27 = puVar27 + 1;
            puVar35 = puVar35 + 1;
          } while ((ulong *)(puVar38 + -0x406) != puVar27);
          lVar39 = lVar39 + 1;
          plVar48 = plVar48 + 3;
        } while (lVar39 != lVar46);
        *(undefined4 **)(puVar38 + -0x426) = puVar38 + -0x40e;
        *(undefined4 **)(puVar38 + -0x42a) = puVar38 + 0x7fa;
        pvVar25 = *(void **)(puVar38 + -0x412);
        if (*(char *)(puVar38 + -0x428) == '\0') {
          *(undefined8 *)(puVar38 + -0x42c) = 0x10ad4c;
          pvVar28 = calloc(8,0x100);
          *(void **)(*(long *)(puVar38 + -0x41c) + 0x58) = pvVar28;
          if (pvVar28 != (void *)0x0) {
            puVar27 = *(ulong **)(puVar38 + -0x42a);
            lVar39 = *(long *)(puVar38 + -0x426);
            lVar49 = 0;
            puVar35 = puVar27;
            do {
              uVar42 = 1;
              puVar44 = (undefined8 *)(lVar49 * 0x200 + (long)pvVar28);
              for (uVar29 = *(ulong *)(lVar39 + lVar49 * 8); uVar29 != 0; uVar29 = uVar29 >> 1) {
                if ((uVar29 & 1) != 0) {
                  lVar43 = 0;
                  uVar31 = *puVar35;
                  while ((uVar31 & uVar42) == 0) {
                    lVar43 = lVar43 + 1;
                    uVar31 = puVar35[lVar43 * 4];
                  }
                  if ((dfa_00->word_char[lVar49] & uVar42) == 0) {
                    *puVar44 = *(undefined8 *)(puVar38 + lVar43 * 2 + -0x406);
                  }
                  else {
                    *puVar44 = *(undefined8 *)(puVar38 + lVar43 * 2 + -0x206);
                  }
                }
                uVar42 = uVar42 * 2;
                puVar44 = puVar44 + 1;
              }
              lVar49 = lVar49 + 1;
              puVar35 = puVar35 + 1;
            } while (lVar49 != 4);
LAB_0010adb2:
            if ((*(byte *)((long)puVar38 + -0x1037) & 4) != 0) {
              lVar39 = 0;
              do {
                if ((*puVar27 & 0x400) != 0) {
                  uVar7 = *(undefined8 *)(puVar38 + lVar39 * 2 + -6);
                  cVar4 = *(char *)(puVar38 + -0x428);
                  *(undefined8 *)((long)pvVar28 + 0x50) = uVar7;
                  if (cVar4 != '\0') {
                    *(undefined8 *)((long)pvVar28 + 0x850) = uVar7;
                  }
                  break;
                }
                lVar39 = lVar39 + 1;
                puVar27 = puVar27 + 4;
              } while (lVar39 != lVar46);
            }
            ppvVar37 = (void **)(puVar38 + 0x1fe);
            *(undefined8 *)(puVar38 + -0x42c) = 0x10ade5;
            rpl_free(pvVar25);
            ppvVar1 = ppvVar37 + lVar46 * 3;
            do {
              pvVar25 = *ppvVar37;
              ppvVar37 = ppvVar37 + 3;
              *(undefined8 *)(puVar38 + -0x42c) = 0x10adfc;
              rpl_free(pvVar25);
            } while (ppvVar1 != ppvVar37);
            _Var50 = true;
            goto LAB_0010b151;
          }
        }
        else {
          *(undefined8 *)(puVar38 + -0x42c) = 0x10b4f7;
          pvVar28 = calloc(8,0x200);
          *(void **)(*(long *)(puVar38 + -0x41c) + 0x60) = pvVar28;
          if (pvVar28 != (void *)0x0) {
            puVar27 = *(ulong **)(puVar38 + -0x42a);
            lVar39 = *(long *)(puVar38 + -0x426);
            lVar49 = 0;
            puVar35 = puVar27;
            do {
              uVar42 = 1;
              puVar44 = (undefined8 *)(lVar49 * 0x200 + (long)pvVar28);
              for (uVar29 = *(ulong *)(lVar39 + lVar49 * 8); uVar29 != 0; uVar29 = uVar29 >> 1) {
                if ((uVar29 & 1) != 0) {
                  lVar43 = 0;
                  uVar31 = *puVar35;
                  while ((uVar31 & uVar42) == 0) {
                    lVar43 = lVar43 + 1;
                    uVar31 = puVar35[lVar43 * 4];
                  }
                  uVar7 = *(undefined8 *)(puVar38 + lVar43 * 2 + -0x206);
                  *puVar44 = *(undefined8 *)(puVar38 + lVar43 * 2 + -0x406);
                  puVar44[0x100] = uVar7;
                }
                uVar42 = uVar42 * 2;
                puVar44 = puVar44 + 1;
              }
              lVar49 = lVar49 + 1;
              puVar35 = puVar35 + 1;
            } while (lVar49 != 4);
            goto LAB_0010adb2;
          }
        }
      }
out_free:
      ppvVar37 = (void **)(puVar38 + 0x1fe);
      *(undefined8 *)(puVar38 + -0x42c) = 0x10b385;
      rpl_free(pvVar25);
      ppvVar1 = ppvVar37 + lVar46 * 3;
      do {
        pvVar25 = *ppvVar37;
        ppvVar37 = ppvVar37 + 3;
        *(undefined8 *)(puVar38 + -0x42c) = 0x10b39c;
        rpl_free(pvVar25);
      } while (ppvVar1 != ppvVar37);
    }
LAB_0010b14f:
    _Var50 = false;
  }
LAB_0010b151:
  if (*(long *)(puVar38 + 0xffc) == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var50;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar38 + -0x42c) = 0x10b58e;
  __stack_chk_fail();
}

