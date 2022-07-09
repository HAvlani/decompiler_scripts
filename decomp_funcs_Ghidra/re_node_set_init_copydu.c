
reg_errcode_t re_node_set_init_copy(re_node_set *dest,re_node_set *src)

{
  long lVar1;
  reg_errcode_t rVar2;
  Idx *__dest;
  
  lVar1 = src->nelem;
  dest->nelem = lVar1;
  if (0 < lVar1) {
    dest->alloc = lVar1;
    __dest = (Idx *)malloc(lVar1 * 8);
    dest->elems = __dest;
    if (__dest == (Idx *)0x0) {
      dest->nelem = 0;
      rVar2 = _REG_ESPACE;
      dest->alloc = 0;
    }
    else {
      memcpy(__dest,src->elems,lVar1 * 8);
      rVar2 = _REG_NOERROR;
    }
    return rVar2;
  }
  dest->elems = (Idx *)0x0;
  *(undefined (*) [16])dest = (undefined  [16])0x0;
  return _REG_NOERROR;
}

