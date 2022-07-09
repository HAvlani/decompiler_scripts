
reg_errcode_t
check_arrival_expand_ecl_sub(re_dfa_t *dfa,re_node_set *dst_nodes,Idx target,Idx ex_subexp,int type)

{
  long lVar1;
  _Bool _Var2;
  reg_errcode_t rVar3;
  Idx IVar4;
  Idx *pIVar5;
  
  while( true ) {
    IVar4 = re_node_set_contains();
    if (IVar4 != 0) {
      return _REG_NOERROR;
    }
    if (((uint)(byte)dfa->nodes[target].field_0x8 == type) && (dfa->nodes[target].opr == ex_subexp))
    {
      if (type != 9) {
        return _REG_NOERROR;
      }
      _Var2 = re_node_set_insert(dst_nodes,target);
      if (_Var2 == false) {
        return _REG_ESPACE;
      }
      return _REG_NOERROR;
    }
    _Var2 = re_node_set_insert(dst_nodes,target);
    if (_Var2 == false) {
      return _REG_ESPACE;
    }
    lVar1 = dfa->edests[target].nelem;
    if (lVar1 == 0) break;
    pIVar5 = dfa->edests[target].elems;
    if (lVar1 == 2) {
      rVar3 = check_arrival_expand_ecl_sub(dfa,dst_nodes,pIVar5[1],ex_subexp,type);
      if (rVar3 != _REG_NOERROR) {
        return rVar3;
      }
      pIVar5 = dfa->edests[target].elems;
    }
    target = *pIVar5;
  }
  return _REG_NOERROR;
}

