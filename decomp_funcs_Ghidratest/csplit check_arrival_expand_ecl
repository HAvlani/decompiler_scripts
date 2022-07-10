
/* WARNING: Could not reconcile some variable overlaps */

reg_errcode_t check_arrival_expand_ecl(re_dfa_t *dfa,re_node_set *cur_nodes,Idx ex_subexp,int type)

{
  re_node_set *src;
  long lVar1;
  reg_errcode_t rVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  re_node_set new_nodes;
  
  lVar4 = cur_nodes->nelem;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  new_nodes.nelem = 0;
  new_nodes.alloc = lVar4;
  new_nodes.elems = (Idx *)malloc(lVar4 * 8);
  if (new_nodes.elems == (Idx *)0x0) {
    rVar2 = _REG_ESPACE;
  }
  else {
    if (0 < lVar4) {
      lVar4 = 0;
      do {
        src = dfa->eclosures + cur_nodes->elems[lVar4];
        if (0 < src->nelem) {
          lVar3 = 0;
          do {
            if ((type == (uint)(byte)dfa->nodes[src->elems[lVar3]].field_0x8) &&
               (ex_subexp == dfa->nodes[src->elems[lVar3]].opr)) {
              if (src->elems[lVar3] != -1) {
                rVar2 = check_arrival_expand_ecl_sub
                                  (dfa,&new_nodes,cur_nodes->elems[lVar4],ex_subexp,type);
                if (rVar2 == _REG_NOERROR) goto LAB_0010a6d4;
                goto LAB_0010a70f;
              }
              break;
            }
            lVar3 = lVar3 + 1;
          } while (src->nelem != lVar3);
        }
        rVar2 = re_node_set_merge(&new_nodes,src);
        if (rVar2 != _REG_NOERROR) {
LAB_0010a70f:
          rpl_free(new_nodes.elems);
          goto LAB_0010a721;
        }
LAB_0010a6d4:
        lVar4 = lVar4 + 1;
      } while (cur_nodes->nelem != lVar4 && lVar4 <= cur_nodes->nelem);
    }
    rpl_free(cur_nodes->elems);
    cur_nodes->elems = new_nodes.elems;
    rVar2 = _REG_NOERROR;
    *(undefined4 *)&cur_nodes->alloc = (undefined4)new_nodes.alloc;
    *(undefined4 *)((long)&cur_nodes->alloc + 4) = new_nodes.alloc._4_4_;
    *(undefined4 *)&cur_nodes->nelem = (undefined4)new_nodes.nelem;
    *(undefined4 *)((long)&cur_nodes->nelem + 4) = new_nodes.nelem._4_4_;
  }
LAB_0010a721:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return rVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

