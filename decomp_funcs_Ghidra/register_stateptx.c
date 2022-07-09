
reg_errcode_t register_state(re_dfa_t *dfa,re_dfastate_t *newstate,re_hashval_t hash)

{
  re_state_table_entry *prVar1;
  Idx elem;
  _Bool _Var2;
  Idx *pIVar3;
  re_dfastate_t **__ptr;
  long lVar4;
  long lVar5;
  
  lVar5 = (newstate->nodes).nelem;
  newstate->hash = hash;
  (newstate->non_eps_nodes).nelem = 0;
  (newstate->non_eps_nodes).alloc = lVar5;
  pIVar3 = (Idx *)malloc(lVar5 * 8);
  (newstate->non_eps_nodes).elems = pIVar3;
  if (pIVar3 == (Idx *)0x0) {
    return _REG_ESPACE;
  }
  lVar4 = 0;
  if (0 < lVar5) {
    do {
      elem = (newstate->nodes).elems[lVar4];
      if (((dfa->nodes[elem].field_0x8 & 8) == 0) &&
         (_Var2 = re_node_set_insert_last(&newstate->non_eps_nodes,elem), _Var2 == false)) {
        return _REG_ESPACE;
      }
      lVar4 = lVar4 + 1;
      pIVar3 = &(newstate->nodes).nelem;
    } while (*pIVar3 != lVar4 && lVar4 <= *pIVar3);
  }
  prVar1 = dfa->state_table + (hash & dfa->state_hash_mask);
  lVar4 = prVar1->num;
  __ptr = prVar1->array;
  lVar5 = lVar4 + 1;
  if (prVar1->alloc == lVar4 || prVar1->alloc < lVar4) {
    __ptr = (re_dfastate_t **)realloc(__ptr,lVar5 * 0x10);
    if (__ptr == (re_dfastate_t **)0x0) {
      return _REG_ESPACE;
    }
    prVar1->array = __ptr;
    lVar4 = prVar1->num;
    prVar1->alloc = lVar5 * 2;
    lVar5 = lVar4 + 1;
  }
  prVar1->num = lVar5;
  __ptr[lVar4] = newstate;
  return _REG_NOERROR;
}

