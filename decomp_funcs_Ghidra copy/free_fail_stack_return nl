
reg_errcode_t free_fail_stack_return(re_fail_stack_t *fs)

{
  reg_errcode_t extraout_EAX;
  long lVar1;
  long lVar2;
  
  if (0 < fs->num) {
    lVar1 = 0;
    do {
      lVar2 = lVar1 + 1;
      rpl_free(fs->stack[lVar1].eps_via_nodes.elems);
      rpl_free(fs->stack[lVar1].regs);
      lVar1 = lVar2;
    } while (lVar2 < fs->num);
  }
  rpl_free(fs->stack);
  return extraout_EAX;
}

