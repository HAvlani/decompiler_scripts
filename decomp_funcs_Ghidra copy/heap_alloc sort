
heap * heap_alloc(anon_subr_int_void_ptr_void_ptr *compare,size_t n_reserve)

{
  heap *phVar1;
  void **ppvVar2;
  
  phVar1 = (heap *)xmalloc(0x20);
  if (n_reserve == 0) {
    n_reserve = 1;
  }
  ppvVar2 = (void **)xnmalloc(n_reserve,8);
  phVar1->capacity = n_reserve;
  *ppvVar2 = (void *)0x0;
  phVar1->array = ppvVar2;
  phVar1->count = 0;
  if (compare == (anon_subr_int_void_ptr_void_ptr *)0x0) {
    compare = heap_default_compare;
  }
  phVar1->compare = (anon_subr_int_void_ptr_void_ptr_for_compare *)compare;
  return phVar1;
}

