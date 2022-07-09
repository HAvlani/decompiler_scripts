
/* WARNING: Could not reconcile some variable overlaps */

reg_errcode_t
sub_epsilon_src_nodes(re_dfa_t *dfa,Idx node,re_node_set *dest_nodes,re_node_set *candidates)

{
  long lVar1;
  re_node_set *prVar2;
  reg_errcode_t rVar3;
  long lVar4;
  Idx IVar5;
  Idx IVar6;
  long lVar7;
  long lVar8;
  Idx *pIVar9;
  re_node_set *prVar10;
  long in_FS_OFFSET;
  re_node_set except_nodes;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  prVar2 = dfa->inveclosures;
  except_nodes._0_16_ = (undefined  [16])0x0;
  except_nodes.elems = (Idx *)0x0;
  IVar6 = prVar2[node].nelem;
  if (0 < IVar6) {
    lVar7 = 0;
    do {
      lVar4 = prVar2[node].elems[lVar7];
      if ((node != lVar4) && ((dfa->nodes[lVar4].field_0x8 & 8) != 0)) {
        lVar8 = lVar4 * 0x18;
        prVar10 = dfa->edests + lVar4;
        pIVar9 = prVar10->elems;
        lVar4 = re_node_set_contains();
        if (prVar10->nelem < 2) {
LAB_001132df:
          if ((lVar4 != 0) || (IVar5 = re_node_set_contains(), IVar5 == 0)) goto LAB_00113288;
        }
        else if ((lVar4 != 0) || (IVar5 = re_node_set_contains(), IVar5 == 0)) {
          if (pIVar9[1] < 1) goto LAB_00113288;
          lVar4 = re_node_set_contains();
          goto LAB_001132df;
        }
        rVar3 = re_node_set_add_intersect
                          (&except_nodes,candidates,
                           (re_node_set *)((long)&dfa->inveclosures->alloc + lVar8));
        if (rVar3 != _REG_NOERROR) {
          rpl_free(except_nodes.elems);
          goto LAB_00113399;
        }
        IVar6 = prVar2[node].nelem;
      }
LAB_00113288:
      lVar7 = lVar7 + 1;
    } while (lVar7 < IVar6);
    lVar7 = 0;
    if (0 < IVar6) {
      do {
        IVar6 = re_node_set_contains();
        if (IVar6 == 0) {
          IVar6 = dest_nodes->nelem;
          IVar5 = re_node_set_contains();
          if ((-1 < IVar5 + -1) && (IVar5 + -1 < IVar6)) {
            dest_nodes->nelem = IVar6 + -1;
            re_node_set_remove_at();
          }
        }
        lVar7 = lVar7 + 1;
      } while (prVar2[node].nelem != lVar7 && lVar7 <= prVar2[node].nelem);
    }
  }
  rpl_free(except_nodes.elems);
  rVar3 = _REG_NOERROR;
LAB_00113399:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return rVar3;
}

