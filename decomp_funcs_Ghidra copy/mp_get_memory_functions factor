
void mp_get_memory_functions
               (anon_subr_void_ptr_size_t **alloc_func,
               anon_subr_void_ptr_void_ptr_size_t_size_t **realloc_func,
               anon_subr_void_void_ptr_size_t **free_func)

{
  if (alloc_func != (anon_subr_void_ptr_size_t **)0x0) {
    *alloc_func = gmp_allocate_func;
  }
  if (realloc_func != (anon_subr_void_ptr_void_ptr_size_t_size_t **)0x0) {
    *realloc_func = gmp_reallocate_func;
  }
  if (free_func != (anon_subr_void_void_ptr_size_t **)0x0) {
    *free_func = gmp_free_func;
  }
  return;
}

