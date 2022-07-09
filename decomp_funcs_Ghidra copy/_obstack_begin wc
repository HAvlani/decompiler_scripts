
int _obstack_begin(obstack *h,size_t size,size_t alignment,anon_subr_void_ptr_size_t *chunkfun,
                  anon_subr_void_void_ptr *freefun)

{
  int iVar1;
  
  h->field_0x50 = h->field_0x50 & 0xfe;
  h->chunkfun = chunkfun;
  h->freefun = freefun;
  iVar1 = _obstack_begin_worker(h,size,alignment);
  return iVar1;
}

