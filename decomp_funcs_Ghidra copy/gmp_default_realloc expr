
void * gmp_default_realloc(void *old,size_t unused_old_size,size_t new_size)

{
  void *pvVar1;
  
  pvVar1 = realloc(old,new_size);
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  gmp_die("gmp_default_realloc: Virtual memory exhausted.");
}

