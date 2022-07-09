
_Bool re_node_set_insert_last(re_node_set *set,Idx elem)

{
  Idx *__ptr;
  long lVar1;
  
  lVar1 = set->nelem;
  __ptr = set->elems;
  if (set->alloc == lVar1) {
    set->alloc = (lVar1 + 1) * 2;
    __ptr = (Idx *)realloc(__ptr,(lVar1 + 1) * 0x10);
    if (__ptr == (Idx *)0x0) {
      return false;
    }
    set->elems = __ptr;
    lVar1 = set->nelem;
  }
  set->nelem = lVar1 + 1;
  __ptr[lVar1] = elem;
  return true;
}

