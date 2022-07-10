
_Bool re_node_set_insert(re_node_set *set,Idx elem)

{
  Idx *pIVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *__ptr;
  long lVar5;
  
  if (set->alloc == 0) {
    set->alloc = 1;
    set->nelem = 1;
    pIVar1 = (Idx *)malloc(8);
    set->elems = pIVar1;
    if (pIVar1 != (Idx *)0x0) {
      *pIVar1 = elem;
      return true;
    }
    set->nelem = 0;
    set->alloc = 0;
  }
  else {
    lVar5 = set->nelem;
    __ptr = set->elems;
    if (lVar5 == 0) {
      *__ptr = elem;
      pIVar1 = (Idx *)0x1;
      set->nelem = set->nelem + 1;
    }
    else {
      if (set->alloc == lVar5) {
        set->alloc = lVar5 * 2;
        __ptr = (long *)realloc(__ptr,lVar5 << 4);
        if (__ptr == (long *)0x0) {
          pIVar1 = (Idx *)0x0;
          goto LAB_001072ce;
        }
        set->elems = __ptr;
        lVar5 = set->nelem;
      }
      lVar4 = lVar5 * 8;
      if (*__ptr == elem || *__ptr < elem) {
        lVar4 = __ptr[lVar5 + -1];
        while (elem < lVar4) {
          __ptr[lVar5] = lVar4;
          lVar4 = __ptr[lVar5 + -2];
          lVar5 = lVar5 + -1;
        }
        lVar4 = lVar5 * 8;
      }
      else if (0 < lVar5) {
        plVar2 = __ptr + lVar5;
        do {
          plVar3 = plVar2 + -1;
          *plVar2 = plVar2[-1];
          plVar2 = plVar3;
        } while (plVar3 != __ptr);
        lVar4 = 0;
      }
      *(Idx *)((long)__ptr + lVar4) = elem;
      pIVar1 = (Idx *)0x1;
      set->nelem = set->nelem + 1;
    }
  }
LAB_001072ce:
  return SUB81(pIVar1,0);
}

