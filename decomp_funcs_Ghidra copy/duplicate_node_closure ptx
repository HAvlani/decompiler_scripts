
/* WARNING: Type propagation algorithm not settling */

reg_errcode_t
duplicate_node_closure
          (re_dfa_t *dfa,Idx top_org_node,Idx top_clone_node,Idx root_node,uint init_constraint)

{
  re_token_t *prVar1;
  re_node_set *prVar2;
  long elem;
  long lVar3;
  _Bool _Var4;
  char cVar5;
  reg_errcode_t rVar6;
  re_token_t *prVar7;
  Idx IVar8;
  long lVar9;
  re_node_set *set;
  Idx local_48;
  
  do {
    prVar1 = dfa->nodes;
    prVar2 = dfa->edests;
    if (prVar1[top_org_node].field_0x8 == '\x04') {
      local_48 = dfa->nexts[top_org_node];
      prVar2[top_clone_node].nelem = 0;
      IVar8 = duplicate_node(dfa,local_48,init_constraint);
      if (IVar8 == -1) {
        return _REG_ESPACE;
      }
      dfa->nexts[top_clone_node] = dfa->nexts[top_org_node];
LAB_0010bd5d:
      cVar5 = re_node_set_insert(dfa->edests + top_clone_node,IVar8);
      top_clone_node = IVar8;
      top_org_node = local_48;
    }
    else {
      lVar9 = prVar2[top_org_node].nelem;
      if (lVar9 == 0) {
        dfa->nexts[top_clone_node] = dfa->nexts[top_org_node];
        return _REG_NOERROR;
      }
      set = prVar2 + top_clone_node;
      elem = *prVar2[top_org_node].elems;
      set->nelem = 0;
      if (lVar9 != 1) {
        lVar9 = dfa->nodes_len - 1;
        prVar7 = prVar1 + lVar9;
        if (((prVar7->field_0xa & 4) != 0) && (0 < lVar9)) {
          lVar3 = -0x20 - (long)prVar7;
          do {
            if ((dfa->org_indices[lVar9] == elem) &&
               (init_constraint == (*(uint *)&prVar7->field_0x8 >> 8 & 0x3ff))) {
              _Var4 = re_node_set_insert(set,lVar9);
              if (_Var4 == false) {
                return _REG_ESPACE;
              }
              goto LAB_0010bd32;
            }
            prVar7 = (re_token_t *)((long)prVar7 + (long)prVar1 + dfa->nodes_len * 0x10 + lVar3);
            lVar9 = lVar9 + -1;
          } while (((prVar7->field_0xa & 4) != 0) && (0 < lVar9));
        }
        IVar8 = duplicate_node(dfa,elem,init_constraint);
        if (IVar8 == -1) {
          return _REG_ESPACE;
        }
        _Var4 = re_node_set_insert(dfa->edests + top_clone_node,IVar8);
        if (_Var4 == false) {
          return _REG_ESPACE;
        }
        rVar6 = duplicate_node_closure(dfa,elem,IVar8,root_node,init_constraint);
        if (rVar6 != _REG_NOERROR) {
          return rVar6;
        }
LAB_0010bd32:
        local_48 = dfa->edests[top_org_node].elems[1];
        IVar8 = duplicate_node(dfa,local_48,init_constraint);
        if (IVar8 == -1) {
          return _REG_ESPACE;
        }
        goto LAB_0010bd5d;
      }
      if ((top_org_node == root_node) && (top_org_node != top_clone_node)) {
        _Var4 = re_node_set_insert(set,elem);
        if (_Var4 == false) {
          return _REG_ESPACE;
        }
        return _REG_NOERROR;
      }
      init_constraint = init_constraint | *(uint *)&prVar1[top_org_node].field_0x8 >> 8 & 0x3ff;
      IVar8 = duplicate_node(dfa,elem,init_constraint);
      if (IVar8 == -1) {
        return _REG_ESPACE;
      }
      cVar5 = re_node_set_insert(dfa->edests + top_clone_node,IVar8);
      top_clone_node = IVar8;
      top_org_node = elem;
    }
    if (cVar5 == '\0') {
      return _REG_ESPACE;
    }
  } while( true );
}

