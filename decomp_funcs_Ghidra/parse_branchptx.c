
bin_tree_t *
parse_branch(re_string_t *regexp,regex_t *preg,re_token_t *token,reg_syntax_t syntax,Idx nest,
            reg_errcode_t *err)

{
  long lVar1;
  byte bVar2;
  bin_tree_t *pbVar3;
  bin_tree_t *root;
  bin_tree_t *root_00;
  long in_FS_OFFSET;
  re_token_t t;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar3 = parse_expression(regexp,preg,token,syntax,nest,err);
  if ((*err == _REG_NOERROR) || (pbVar3 != (bin_tree_t *)0x0)) {
    bVar2 = token->field_0x8;
    if ((bVar2 & 0xf7) != 2) {
      root_00 = pbVar3;
      do {
        while( true ) {
          pbVar3 = root_00;
          if ((bVar2 == 9) && (nest != 0)) goto LAB_00116a9a;
          root = parse_expression(regexp,preg,token,syntax,nest,err);
          if ((*err != _REG_NOERROR) && (root == (bin_tree_t *)0x0)) {
            if (root_00 == (bin_tree_t *)0x0) goto LAB_00116ae4;
            pbVar3 = (bin_tree_t *)0x0;
            postorder(root_00,free_tree,(void *)0x0);
            goto LAB_00116a9a;
          }
          if ((root_00 != (bin_tree_t *)0x0) && (root != (bin_tree_t *)0x0)) break;
          bVar2 = token->field_0x8;
          if (root_00 == (bin_tree_t *)0x0) {
            pbVar3 = root;
          }
          root_00 = pbVar3;
          if ((bVar2 & 0xf7) == 2) goto LAB_00116a9a;
        }
        pbVar3 = create_token_tree();
        if (pbVar3 == (bin_tree_t *)0x0) {
          postorder(root,free_tree,(void *)0x0);
          postorder(root_00,free_tree,(void *)0x0);
          *err = _REG_ESPACE;
          goto LAB_00116ae4;
        }
        bVar2 = token->field_0x8;
        root_00 = pbVar3;
      } while ((bVar2 & 0xf7) != 2);
    }
  }
  else {
LAB_00116ae4:
    pbVar3 = (bin_tree_t *)0x0;
  }
LAB_00116a9a:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pbVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

