
void readtokens0_init(Tokens *t)

{
  undefined *chunkfun;
  
  chunkfun = PTR_malloc_0011cfd8;
  t->n_tok = 0;
  t->tok = (char **)0x0;
  t->tok_len = (size_t *)0x0;
  _obstack_begin(&t->o_data,0,0,(anon_subr_void_ptr_size_t *)chunkfun,rpl_free);
  _obstack_begin(&t->o_tok,0,0,(anon_subr_void_ptr_size_t *)chunkfun,rpl_free);
  _obstack_begin(&t->o_tok_len,0,0,(anon_subr_void_ptr_size_t *)chunkfun,rpl_free);
  return;
}

