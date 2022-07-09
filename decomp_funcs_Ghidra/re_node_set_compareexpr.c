
_Bool re_node_set_compare(re_node_set *set1,re_node_set *set2)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = set1 == (re_node_set *)0x0 || set2 == (re_node_set *)0x0;
  if (bVar1) {
    return false;
  }
  lVar2 = set1->nelem;
  if (lVar2 == set2->nelem) {
    do {
      lVar2 = lVar2 + -1;
      if (lVar2 < 0) {
        return true;
      }
    } while (set1->elems[lVar2] == set2->elems[lVar2]);
  }
  return bVar1;
}

