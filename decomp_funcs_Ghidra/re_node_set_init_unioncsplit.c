
reg_errcode_t re_node_set_init_union(re_node_set *dest,re_node_set *src1,re_node_set *src2)

{
  long lVar1;
  long lVar2;
  Idx *pIVar3;
  Idx *pIVar4;
  long lVar5;
  long lVar6;
  reg_errcode_t rVar7;
  Idx *pIVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if (src1 != (re_node_set *)0x0) {
    lVar1 = src1->nelem;
    if (src2 == (re_node_set *)0x0) {
      if (0 < lVar1) goto LAB_001098e3;
    }
    else if (0 < lVar1) {
      lVar2 = src2->nelem;
      if (0 < lVar2) {
        dest->alloc = lVar1 + lVar2;
        pIVar8 = (Idx *)malloc((lVar1 + lVar2) * 8);
        dest->elems = pIVar8;
        if (pIVar8 == (Idx *)0x0) {
          return _REG_ESPACE;
        }
        pIVar3 = src2->elems;
        pIVar4 = src1->elems;
        lVar10 = 0;
        lVar9 = 0;
        lVar11 = 0;
        while( true ) {
          lVar5 = pIVar4[lVar9];
          lVar6 = pIVar3[lVar10];
          lVar12 = lVar11 + 1;
          if (lVar6 < lVar5) {
            pIVar8[lVar11] = lVar6;
            lVar10 = lVar10 + 1;
          }
          else {
            pIVar8[lVar11] = lVar5;
            lVar9 = lVar9 + 1;
            lVar10 = lVar10 + (ulong)(lVar5 == lVar6);
          }
          if (lVar1 <= lVar9) break;
          lVar11 = lVar12;
          if (lVar2 <= lVar10) {
            pIVar8 = pIVar8 + lVar12;
            lVar12 = lVar12 + (lVar1 - lVar9);
            memcpy(pIVar8,pIVar4 + lVar9,(lVar1 - lVar9) * 8);
LAB_001098fd:
            dest->nelem = lVar12;
            return _REG_NOERROR;
          }
        }
        if (lVar10 < lVar2) {
          pIVar8 = pIVar8 + lVar12;
          lVar12 = lVar12 + (lVar2 - lVar10);
          memcpy(pIVar8,pIVar3 + lVar10,(lVar2 - lVar10) * 8);
        }
        goto LAB_001098fd;
      }
      goto LAB_001098e3;
    }
  }
  if ((src2 == (re_node_set *)0x0) || (src1 = src2, src2->nelem < 1)) {
    dest->elems = (Idx *)0x0;
    *(undefined (*) [16])dest = (undefined  [16])0x0;
    return _REG_NOERROR;
  }
LAB_001098e3:
  rVar7 = re_node_set_init_copy(dest,src1);
  return rVar7;
}

