
void mp_set_memory_functions
               (anon_subr_void_ptr_size_t *alloc_func,
               anon_subr_void_ptr_void_ptr_size_t_size_t *realloc_func,
               anon_subr_void_void_ptr_size_t *free_func)

{
  if (alloc_func == (anon_subr_void_ptr_size_t *)0x0) {
    alloc_func = gmp_default_alloc;
  }
  if (realloc_func == (anon_subr_void_ptr_void_ptr_size_t_size_t *)0x0) {
    realloc_func = gmp_default_realloc;
  }
  if (free_func == (anon_subr_void_void_ptr_size_t *)0x0) {
    free_func = gmp_default_free;
  }
  gmp_free_func = free_func;
  gmp_reallocate_func = realloc_func;
  gmp_allocate_func = alloc_func;
  return;
}

