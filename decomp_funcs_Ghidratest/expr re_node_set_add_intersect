
reg_errcode_t re_node_set_add_intersect(re_node_set *dest,re_node_set *src1,re_node_set *src2)

{
  long *plVar1;
  Idx *pIVar2;
  Idx *pIVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  Idx *__ptr;
  size_t __n;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  
  lVar6 = src1->nelem;
  if (lVar6 == 0) {
    return _REG_NOERROR;
  }
  lVar8 = src2->nelem;
  if (lVar8 == 0) {
    return _REG_NOERROR;
  }
  lVar10 = dest->nelem;
  __ptr = dest->elems;
  if (dest->alloc < lVar6 + lVar8 + lVar10) {
    lVar10 = dest->alloc + lVar6 + lVar8;
    __ptr = (Idx *)realloc(__ptr,lVar10 * 8);
    if (__ptr == (Idx *)0x0) {
      return _REG_ESPACE;
    }
    lVar6 = src1->nelem;
    lVar8 = src2->nelem;
    dest->elems = __ptr;
    dest->alloc = lVar10;
    lVar10 = dest->nelem;
  }
  pIVar2 = src1->elems;
  lVar7 = lVar6 + -1;
  lVar5 = lVar10 + -1;
  pIVar3 = src2->elems;
  lVar9 = lVar10 + lVar6 + lVar8;
  lVar8 = lVar8 + -1;
  lVar10 = pIVar2[lVar7];
  lVar6 = pIVar3[lVar8];
  do {
    bVar11 = SBORROW8(lVar10,lVar6);
    lVar4 = lVar10 - lVar6;
    if (lVar10 == lVar6) goto LAB_001123fa;
    while (bVar11 != lVar4 < 0) {
      lVar8 = lVar8 + -1;
      if (lVar8 < 0) goto LAB_00112470;
      while( true ) {
        lVar6 = pIVar3[lVar8];
        bVar11 = SBORROW8(lVar10,lVar6);
        lVar4 = lVar10 - lVar6;
        if (lVar4 != 0) break;
LAB_001123fa:
        if (-1 < lVar5) {
          do {
            bVar11 = __ptr[lVar5] == lVar10;
            if (bVar11 || __ptr[lVar5] < lVar10) {
              if (bVar11) goto LAB_00112422;
              break;
            }
            lVar5 = lVar5 + -1;
          } while (lVar5 != -1);
        }
        lVar9 = lVar9 + -1;
        __ptr[lVar9] = lVar10;
LAB_00112422:
        lVar7 = lVar7 + -1;
        if ((lVar7 < 0) || (lVar8 = lVar8 + -1, lVar8 < 0)) goto LAB_00112470;
        lVar10 = pIVar2[lVar7];
      }
    }
    lVar7 = lVar7 + -1;
    if (lVar7 < 0) break;
    lVar10 = pIVar2[lVar7];
  } while( true );
LAB_00112470:
  lVar10 = dest->nelem;
  lVar5 = src1->nelem + lVar10 + src2->nelem;
  lVar6 = lVar10 + -1;
  lVar8 = lVar5 + -1;
  lVar5 = lVar5 - lVar9;
  dest->nelem = lVar10 + lVar5;
  if ((0 < lVar5) && (-1 < lVar6)) {
    do {
      while( true ) {
        plVar1 = __ptr + lVar6;
        lVar10 = lVar6 + lVar5;
        if (__ptr[lVar8] <= *plVar1) break;
        __ptr[lVar10] = __ptr[lVar8];
        lVar8 = lVar8 + -1;
        lVar5 = lVar5 + -1;
        if (lVar5 == 0) {
          __n = 0;
          goto LAB_00112449;
        }
      }
      lVar6 = lVar6 + -1;
      __ptr[lVar10] = *plVar1;
    } while (lVar6 != -1);
  }
  __n = lVar5 << 3;
LAB_00112449:
  memcpy(__ptr,__ptr + lVar9,__n);
  return _REG_NOERROR;
}

