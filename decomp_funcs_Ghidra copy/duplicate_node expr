
Idx duplicate_node(re_dfa_t *dfa,Idx org_idx,uint constraint)

{
  uint uVar1;
  re_token_t *prVar2;
  Idx *pIVar3;
  Idx IVar4;
  undefined8 unaff_RBX;
  undefined8 in_stack_ffffffffffffffd8;
  
  IVar4 = re_dfa_add_node(dfa,(re_token_t)CONCAT88(unaff_RBX,in_stack_ffffffffffffffd8));
  if (IVar4 != -1) {
    prVar2 = dfa->nodes;
    uVar1 = *(uint *)&prVar2[IVar4].field_0x8;
    *(uint *)&prVar2[IVar4].field_0x8 = uVar1 & 0xfffc00ff | (constraint & 0x3ff) << 8;
    pIVar3 = dfa->org_indices;
    *(uint *)&prVar2[IVar4].field_0x8 =
         ((ushort)((ushort)constraint | *(ushort *)&prVar2[org_idx].field_0x9) & 0x3ff) << 8 |
         0x40000 | uVar1 & 0xfff800ff;
    pIVar3[IVar4] = org_idx;
  }
  return IVar4;
}

