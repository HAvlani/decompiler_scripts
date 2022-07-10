
bin_tree_t * lower_subexp(reg_errcode_t *err,regex_t *preg,bin_tree_t *node)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte bVar4;
  bin_tree_t *pbVar5;
  bin_tree_t *pbVar6;
  bin_tree_t *pbVar7;
  bin_tree_t *pbVar8;
  long in_FS_OFFSET;
  re_token_t t;
  
  pbVar8 = node->left;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((preg->field_0x38 & 0x10) == 0) {
    pbVar5 = create_token_tree();
    pbVar7 = create_token_tree();
    pbVar6 = pbVar7;
    if (pbVar8 != (bin_tree_t *)0x0) goto LAB_001094e8;
  }
  else if (pbVar8 == (bin_tree_t *)0x0) {
    pbVar5 = create_token_tree();
    pbVar7 = create_token_tree();
    pbVar6 = pbVar7;
  }
  else {
    uVar2 = (node->token).opr;
    if ((0x3f < (long)uVar2) || ((preg->buffer->used_bkref_map >> (uVar2 & 0x3f) & 1) == 0))
    goto LAB_0010958e;
    pbVar5 = create_token_tree();
    pbVar6 = create_token_tree();
LAB_001094e8:
    pbVar7 = create_token_tree();
  }
  pbVar8 = create_token_tree();
  if ((((pbVar8 == (bin_tree_t *)0x0) || (pbVar7 == (bin_tree_t *)0x0)) ||
      (pbVar5 == (bin_tree_t *)0x0)) || (pbVar6 == (bin_tree_t *)0x0)) {
    pbVar8 = (bin_tree_t *)0x0;
    *err = _REG_ESPACE;
  }
  else {
    uVar3 = (node->token).opr;
    (pbVar6->token).opr = uVar3;
    (pbVar5->token).opr = uVar3;
    bVar4 = (node->token).field_0xa & 8;
    (pbVar6->token).field_0xa = (pbVar6->token).field_0xa & 0xf7 | bVar4;
    (pbVar5->token).field_0xa = (pbVar5->token).field_0xa & 0xf7 | bVar4;
  }
LAB_0010958e:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pbVar8;
}

