
reg_errcode_t merge_state_array(re_dfa_t *dfa,re_dfastate_t **dst,re_dfastate_t **src,Idx num)

{
  long lVar1;
  reg_errcode_t rVar2;
  re_dfastate_t *prVar3;
  long lVar4;
  long in_FS_OFFSET;
  reg_errcode_t err;
  re_node_set merged_set;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < num) {
    lVar4 = 0;
    do {
      while( true ) {
        prVar3 = src[lVar4];
        if (dst[lVar4] != (re_dfastate_t *)0x0) break;
        dst[lVar4] = prVar3;
        lVar4 = lVar4 + 1;
        if (num == lVar4) goto LAB_00108cba;
      }
      if (prVar3 != (re_dfastate_t *)0x0) {
        err = re_node_set_init_union(&merged_set,&dst[lVar4]->nodes,&prVar3->nodes);
        rVar2 = err;
        if (err != _REG_NOERROR) goto LAB_00108cbc;
        prVar3 = re_acquire_state(&err,dfa,&merged_set);
        dst[lVar4] = prVar3;
        rpl_free(merged_set.elems);
        rVar2 = err;
        if (err != _REG_NOERROR) goto LAB_00108cbc;
      }
      lVar4 = lVar4 + 1;
    } while (num != lVar4);
  }
LAB_00108cba:
  rVar2 = _REG_NOERROR;
LAB_00108cbc:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return rVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

