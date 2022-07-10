
/* WARNING: Could not reconcile some variable overlaps */

reg_errcode_t calc_eclosure_iter(re_node_set *new_set,re_dfa_t *dfa,Idx node,_Bool root)

{
  long lVar1;
  re_token_t *prVar2;
  Idx node_00;
  bool bVar3;
  bool bVar4;
  reg_errcode_t rVar5;
  re_node_set *prVar6;
  re_token_t *prVar7;
  re_node_set *prVar8;
  re_node_set *prVar9;
  long lVar10;
  long in_FS_OFFSET;
  re_node_set eclosure;
  re_node_set eclosure_elem;
  
  prVar8 = dfa->edests;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  eclosure.alloc = prVar8[node].nelem + 1;
  eclosure.elems = (Idx *)malloc(eclosure.alloc * 8);
  if (eclosure.elems == (Idx *)0x0) {
    rVar5 = _REG_ESPACE;
    goto LAB_0010d9cd;
  }
  prVar2 = dfa->nodes;
  *eclosure.elems = node;
  prVar6 = dfa->eclosures;
  eclosure.nelem = 1;
  prVar7 = prVar2 + node;
  prVar6[node].nelem = -1;
  if ((*(uint *)&prVar7->field_0x8 & 0x3ff00) == 0) {
LAB_0010d8d6:
    if ((prVar7->field_0x8 & 8) == 0) goto LAB_0010d9a0;
    prVar9 = dfa->edests;
    prVar8 = prVar9 + node;
    if (prVar8->nelem < 1) goto LAB_0010d9a0;
    lVar10 = 0;
    bVar4 = false;
    do {
      while( true ) {
        bVar3 = bVar4;
        node_00 = prVar8->elems[lVar10];
        prVar8 = prVar6 + node_00;
        if (prVar8->nelem == -1) break;
        if (prVar8->nelem == 0) {
          rVar5 = calc_eclosure_iter(&eclosure_elem,dfa,node_00,false);
          if (rVar5 != _REG_NOERROR) goto LAB_0010d9cd;
        }
        else {
          eclosure_elem.alloc._0_4_ = *(undefined4 *)&prVar8->alloc;
          eclosure_elem.alloc._4_4_ = *(undefined4 *)((long)&prVar8->alloc + 4);
          eclosure_elem.nelem._0_4_ = *(undefined4 *)&prVar8->nelem;
          eclosure_elem.nelem._4_4_ = *(undefined4 *)((long)&prVar8->nelem + 4);
          eclosure_elem.elems = prVar8->elems;
        }
        rVar5 = re_node_set_merge(&eclosure,&eclosure_elem);
        if (rVar5 != _REG_NOERROR) goto LAB_0010d9cd;
        prVar6 = dfa->eclosures;
        if (prVar6[node_00].nelem == 0) {
          bVar3 = true;
          rpl_free(eclosure_elem.elems);
          prVar6 = dfa->eclosures;
        }
        prVar9 = dfa->edests;
        lVar10 = lVar10 + 1;
        prVar8 = prVar9 + node;
        bVar4 = bVar3;
        if (prVar8->nelem == lVar10 || prVar8->nelem < lVar10) goto LAB_0010da28;
      }
      prVar8 = prVar9 + node;
      bVar3 = true;
      lVar10 = lVar10 + 1;
      bVar4 = true;
    } while (prVar8->nelem != lVar10 && lVar10 <= prVar8->nelem);
LAB_0010da28:
    if ((root == true) || (!bVar3)) goto LAB_0010d9a0;
    prVar6[node].nelem = 0;
  }
  else {
    if (prVar8[node].nelem != 0) {
      if ((prVar2[*prVar8[node].elems].field_0xa & 4) == 0) {
        rVar5 = duplicate_node_closure(dfa,node,node,node,*(uint *)&prVar7->field_0x8 >> 8 & 0x3ff);
        if (rVar5 != _REG_NOERROR) goto LAB_0010d9cd;
        prVar6 = dfa->eclosures;
        prVar7 = dfa->nodes + node;
      }
      goto LAB_0010d8d6;
    }
LAB_0010d9a0:
    prVar8 = prVar6 + node;
    *(undefined4 *)&prVar8->alloc = (undefined4)eclosure.alloc;
    *(undefined4 *)((long)&prVar8->alloc + 4) = eclosure.alloc._4_4_;
    *(undefined4 *)&prVar8->nelem = (undefined4)eclosure.nelem;
    *(undefined4 *)((long)&prVar8->nelem + 4) = eclosure.nelem._4_4_;
    prVar6[node].elems = eclosure.elems;
  }
  new_set->elems = eclosure.elems;
  rVar5 = _REG_NOERROR;
  *(undefined4 *)&new_set->alloc = (undefined4)eclosure.alloc;
  *(undefined4 *)((long)&new_set->alloc + 4) = eclosure.alloc._4_4_;
  *(undefined4 *)&new_set->nelem = (undefined4)eclosure.nelem;
  *(undefined4 *)((long)&new_set->nelem + 4) = eclosure.nelem._4_4_;
LAB_0010d9cd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return rVar5;
}

