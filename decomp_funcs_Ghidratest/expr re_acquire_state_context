
re_dfastate_t *
re_acquire_state_context(reg_errcode_t *err,re_dfa_t *dfa,re_node_set *nodes,uint context)

{
  re_node_set *dest;
  long *plVar1;
  char cVar2;
  re_dfastate_t **pprVar3;
  long lVar4;
  re_token_t *prVar5;
  uint uVar6;
  _Bool _Var7;
  byte bVar8;
  reg_errcode_t rVar9;
  long *plVar10;
  re_dfastate_t *prVar11;
  re_node_set *dest_00;
  uint uVar12;
  ulong hash;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  lVar15 = nodes->nelem;
  if (lVar15 == 0) {
    *err = _REG_NOERROR;
  }
  else {
    hash = (ulong)context + lVar15;
    if (0 < lVar15) {
      plVar10 = nodes->elems;
      plVar1 = plVar10 + lVar15;
      do {
        hash = hash + *plVar10;
        plVar10 = plVar10 + 1;
      } while (plVar1 != plVar10);
    }
    lVar15 = dfa->state_table[dfa->state_hash_mask & hash].num;
    if (0 < lVar15) {
      pprVar3 = dfa->state_table[dfa->state_hash_mask & hash].array;
      lVar14 = 0;
      uVar13 = (ulong)context;
      do {
        prVar11 = pprVar3[lVar14];
        if (((prVar11->hash == hash) && (((byte)prVar11->field_0x68 & 0xf) == (uint)uVar13)) &&
           (_Var7 = re_node_set_compare(prVar11->entrance_nodes,nodes), _Var7 != false)) {
          return prVar11;
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 != lVar15);
    }
    prVar11 = (re_dfastate_t *)calloc(0x70,1);
    if (prVar11 != (re_dfastate_t *)0x0) {
      dest = &prVar11->nodes;
      rVar9 = re_node_set_init_copy(dest,nodes);
      if (rVar9 == _REG_NOERROR) {
        prVar11->entrance_nodes = dest;
        lVar15 = nodes->nelem;
        prVar11->field_0x68 = prVar11->field_0x68 & 0xf0 | (byte)context & 0xf;
        if (0 < lVar15) {
          lVar14 = 0;
          lVar15 = 0;
          do {
            lVar4 = nodes->elems[lVar14];
            prVar5 = dfa->nodes;
            cVar2 = prVar5[lVar4].field_0x8;
            uVar12 = *(uint *)&prVar5[lVar4].field_0x8 >> 8;
            if ((cVar2 != '\x01') || ((uVar12 & 0x3ff) != 0)) {
              bVar8 = (byte)(((byte)((byte)prVar5[lVar4].field_0xa >> 4 |
                                    (byte)prVar11->field_0x68 >> 5) & 1) << 5) |
                      prVar11->field_0x68 & 0xdf;
              prVar11->field_0x68 = bVar8;
              if (cVar2 == '\x02') {
                prVar11->field_0x68 = bVar8 | 0x10;
              }
              else if (cVar2 == '\x04') {
                prVar11->field_0x68 = bVar8 | 0x40;
              }
              if ((uVar12 & 0x3ff) != 0) {
                if (dest == prVar11->entrance_nodes) {
                  dest_00 = (re_node_set *)malloc(0x18);
                  if (dest_00 == (re_node_set *)0x0) goto LAB_00112e49;
                  prVar11->entrance_nodes = dest_00;
                  rVar9 = re_node_set_init_copy(dest_00,nodes);
                  if (rVar9 != _REG_NOERROR) goto LAB_00112e49;
                  prVar11->field_0x68 = prVar11->field_0x68 | 0x80;
                  lVar15 = 0;
                }
                if ((uVar12 & 1) == 0) {
                  if ((uVar12 & 2) != 0) {
                    uVar6 = context & 1;
                    goto joined_r0x00112e86;
                  }
LAB_00112dcf:
                  if ((((uVar12 & 0x10) == 0) || ((context & 2) != 0)) &&
                     (((uVar12 & 0x40) == 0 || ((context & 4) != 0)))) goto LAB_00112e1d;
                }
                else if ((context & 1) != 0) {
                  uVar6 = uVar12 & 2;
joined_r0x00112e86:
                  if (uVar6 == 0) goto LAB_00112dcf;
                }
                if ((-1 < lVar14 - lVar15) &&
                   (lVar4 = (prVar11->nodes).nelem, lVar14 - lVar15 < lVar4)) {
                  (prVar11->nodes).nelem = lVar4 + -1;
                  re_node_set_remove_at();
                }
                lVar15 = lVar15 + 1;
              }
            }
LAB_00112e1d:
            lVar14 = lVar14 + 1;
          } while (lVar14 < nodes->nelem);
        }
        rVar9 = register_state(dfa,prVar11,hash);
        if (rVar9 == _REG_NOERROR) {
          return prVar11;
        }
LAB_00112e49:
        free_state(prVar11);
      }
      else {
        rpl_free(prVar11);
      }
    }
    *err = _REG_ESPACE;
  }
  return (re_dfastate_t *)0x0;
}

