
Idx pop_fail_stack(re_fail_stack_t *fs,Idx *pidx,Idx nregs,regmatch_t *regs,regmatch_t *prevregs,
                  re_node_set *eps_via_nodes)

{
  re_fail_stack_ent_t *prVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  Idx IVar6;
  
  if ((fs == (re_fail_stack_t *)0x0) || (fs->num == 0)) {
    IVar6 = -1;
  }
  else {
    lVar5 = fs->num + -1;
    fs->num = lVar5;
    prVar1 = fs->stack;
    *pidx = prVar1[lVar5].idx;
    memcpy(regs,prVar1[lVar5].regs,nregs * 0x10);
    memcpy(prevregs,fs->stack[lVar5].regs + nregs,nregs * 0x10);
    rpl_free(eps_via_nodes->elems);
    rpl_free(fs->stack[lVar5].regs);
    prVar1 = fs->stack;
    uVar2 = *(undefined4 *)((long)&prVar1[lVar5].eps_via_nodes.alloc + 4);
    uVar3 = *(undefined4 *)&prVar1[lVar5].eps_via_nodes.nelem;
    uVar4 = *(undefined4 *)((long)&prVar1[lVar5].eps_via_nodes.nelem + 4);
    *(undefined4 *)&eps_via_nodes->alloc = *(undefined4 *)&prVar1[lVar5].eps_via_nodes.alloc;
    *(undefined4 *)((long)&eps_via_nodes->alloc + 4) = uVar2;
    *(undefined4 *)&eps_via_nodes->nelem = uVar3;
    *(undefined4 *)((long)&eps_via_nodes->nelem + 4) = uVar4;
    eps_via_nodes->elems = prVar1[lVar5].eps_via_nodes.elems;
    IVar6 = prVar1[lVar5].node;
  }
  return IVar6;
}

