
reg_errcode_t re_node_set_merge(re_node_set *dest,re_node_set *src)

{
  long *plVar1;
  Idx *pIVar2;
  long lVar3;
  long lVar4;
  Idx *pIVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if (src == (re_node_set *)0x0) {
    return _REG_NOERROR;
  }
  lVar10 = src->nelem;
  if (lVar10 == 0) {
    return _REG_NOERROR;
  }
  lVar3 = dest->nelem;
  lVar9 = lVar3 + lVar10 * 2;
  if (dest->alloc < lVar9) {
    lVar10 = lVar10 + dest->alloc;
    pIVar5 = (Idx *)realloc(dest->elems,lVar10 * 0x10);
    if (pIVar5 == (Idx *)0x0) {
      return _REG_ESPACE;
    }
    dest->elems = pIVar5;
    lVar3 = dest->nelem;
    dest->alloc = lVar10 * 2;
    if (lVar3 == 0) {
      lVar10 = src->nelem;
      goto LAB_0010d7e7;
    }
    lVar10 = src->nelem;
    lVar9 = lVar3 + lVar10 * 2;
  }
  else if (lVar3 == 0) {
    pIVar5 = dest->elems;
LAB_0010d7e7:
    dest->nelem = lVar10;
    memcpy(pIVar5,src->elems,src->nelem * 8);
    return _REG_NOERROR;
  }
  uVar7 = lVar10 - 1;
  uVar6 = -lVar10;
  lVar3 = lVar3 + -1;
  if ((0 < lVar10) && (-1 < lVar3)) {
    pIVar5 = dest->elems;
    pIVar2 = src->elems;
    do {
      lVar10 = pIVar2[uVar7];
      plVar1 = pIVar5 + lVar3;
      if (*plVar1 == lVar10) {
        uVar7 = uVar7 - 1;
        lVar3 = lVar3 + -1;
        uVar6 = ~uVar7;
        if ((long)uVar7 < 0) break;
      }
      else {
        if (*plVar1 < lVar10) {
          lVar9 = lVar9 + -1;
          uVar7 = uVar7 - 1;
          pIVar5[lVar9] = lVar10;
          uVar6 = ~uVar7;
        }
        else {
          lVar3 = lVar3 + -1;
        }
        if (-1 < (long)uVar6) break;
      }
    } while (-1 < lVar3);
  }
  if (-1 < (long)uVar7) {
    lVar9 = lVar9 - (uVar7 + 1);
    memcpy(dest->elems + lVar9,src->elems,(uVar7 + 1) * 8);
  }
  lVar3 = dest->nelem;
  lVar10 = lVar3 + -1 + src->nelem * 2;
  lVar8 = (lVar10 - lVar9) + 1;
  if (lVar8 != 0) {
    lVar4 = lVar3 + -1;
    pIVar5 = dest->elems;
    dest->nelem = lVar3 + lVar8;
    do {
      while( true ) {
        if (pIVar5[lVar4] < pIVar5[lVar10]) break;
        pIVar5[lVar4 + lVar8] = pIVar5[lVar4];
        lVar4 = lVar4 + -1;
        if (lVar4 < 0) {
          memcpy(pIVar5,pIVar5 + lVar9,lVar8 << 3);
          return _REG_NOERROR;
        }
      }
      pIVar5[lVar4 + lVar8] = pIVar5[lVar10];
      lVar10 = lVar10 + -1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return _REG_NOERROR;
}

