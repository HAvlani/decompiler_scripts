
int _obstack_begin_1(obstack *h,size_t size,size_t alignment,
                    anon_subr_void_ptr_void_ptr_size_t *chunkfun,
                    anon_subr_void_void_ptr_void_ptr *freefun,void *arg)

{
  int iVar1;
  
  h->field_0x50 = h->field_0x50 | 1;
  h->chunkfun = chunkfun;
  h->freefun = freefun;
  h->extra_arg = arg;
  iVar1 = _obstack_begin_worker(h,size,alignment);
  return iVar1;
}

