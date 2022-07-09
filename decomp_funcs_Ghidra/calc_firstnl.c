
reg_errcode_t calc_first(void *extra,bin_tree_t *node)

{
  Idx IVar1;
  long lVar2;
  undefined8 unaff_RBX;
  reg_errcode_t rVar3;
  undefined8 in_stack_ffffffffffffffe8;
  
  if ((node->token).field_0x8 == '\x10') {
    rVar3 = _REG_NOERROR;
    IVar1 = node->left->node_idx;
    node->first = node->left->first;
    node->node_idx = IVar1;
  }
  else {
    node->first = node;
    IVar1 = re_dfa_add_node((re_dfa_t *)extra,
                            (re_token_t)CONCAT88(unaff_RBX,in_stack_ffffffffffffffe8));
    node->node_idx = IVar1;
    if (IVar1 == -1) {
      rVar3 = _REG_ESPACE;
    }
    else {
      rVar3 = _REG_NOERROR;
      if ((node->token).field_0x8 == '\f') {
                    /* WARNING: Load size is inaccurate */
        lVar2 = IVar1 * 0x10 + *extra;
        *(uint *)(lVar2 + 8) =
             *(uint *)(lVar2 + 8) & 0xfffc00ff | (*(uint *)&(node->token).opr & 0x3ff) << 8;
        return _REG_NOERROR;
      }
    }
  }
  return rVar3;
}

