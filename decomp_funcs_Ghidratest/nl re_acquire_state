
re_dfastate_t * re_acquire_state(reg_errcode_t *err,re_dfa_t *dfa,re_node_set *nodes)

{
  long *plVar1;
  char cVar2;
  re_token_t *prVar3;
  _Bool _Var4;
  reg_errcode_t rVar5;
  long *plVar6;
  re_dfastate_t *prVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  re_dfastate_t **pprVar11;
  ulong hash;
  
  hash = nodes->nelem;
  if (hash == 0) {
    *err = _REG_NOERROR;
  }
  else {
    if (0 < (long)hash) {
      plVar6 = nodes->elems;
      plVar1 = plVar6 + hash;
      do {
        hash = hash + *plVar6;
        plVar6 = plVar6 + 1;
      } while (plVar1 != plVar6);
    }
    lVar10 = dfa->state_table[dfa->state_hash_mask & hash].num;
    if (0 < lVar10) {
      pprVar11 = dfa->state_table[dfa->state_hash_mask & hash].array;
      lVar9 = 0;
      do {
        prVar7 = pprVar11[lVar9];
        if ((prVar7->hash == hash) &&
           (_Var4 = re_node_set_compare(&prVar7->nodes,nodes), _Var4 != false)) {
          return prVar7;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != lVar10);
    }
    prVar7 = (re_dfastate_t *)calloc(0x70,1);
    if (prVar7 != (re_dfastate_t *)0x0) {
      rVar5 = re_node_set_init_copy(&prVar7->nodes,nodes);
      if (rVar5 == _REG_NOERROR) {
        lVar10 = nodes->nelem;
        prVar7->entrance_nodes = &prVar7->nodes;
        if (0 < lVar10) {
          plVar6 = nodes->elems;
          prVar3 = dfa->nodes;
          plVar1 = plVar6 + lVar10;
          do {
            while( true ) {
              lVar10 = *plVar6;
              cVar2 = prVar3[lVar10].field_0x8;
              if (cVar2 == '\x01') break;
              bVar8 = (byte)(((byte)((byte)prVar3[lVar10].field_0xa >> 4 |
                                    (byte)prVar7->field_0x68 >> 5) & 1) << 5) |
                      prVar7->field_0x68 & 0xdf;
              prVar7->field_0x68 = bVar8;
              if (cVar2 == '\x02') {
                prVar7->field_0x68 = bVar8 | 0x10;
              }
              else if (cVar2 == '\x04') {
                prVar7->field_0x68 = bVar8 | 0x40;
              }
              else if ((cVar2 == '\f') || ((*(uint *)&prVar3[lVar10].field_0x8 & 0x3ff00) != 0))
              goto LAB_00108a32;
LAB_001089e9:
              plVar6 = plVar6 + 1;
              if (plVar1 == plVar6) goto LAB_00108a41;
            }
            if ((*(uint *)&prVar3[lVar10].field_0x8 & 0x3ff00) == 0) goto LAB_001089e9;
            prVar7->field_0x68 =
                 (byte)(((byte)((byte)prVar3[lVar10].field_0xa >> 4 | (byte)prVar7->field_0x68 >> 5)
                        & 1) << 5) | prVar7->field_0x68 & 0xdf;
LAB_00108a32:
            plVar6 = plVar6 + 1;
            prVar7->field_0x68 = prVar7->field_0x68 | 0x80;
          } while (plVar1 != plVar6);
        }
LAB_00108a41:
        rVar5 = register_state(dfa,prVar7,hash);
        if (rVar5 == _REG_NOERROR) {
          return prVar7;
        }
        free_state(prVar7);
      }
      else {
        rpl_free(prVar7);
      }
    }
    *err = _REG_ESPACE;
  }
  return (re_dfastate_t *)0x0;
}

