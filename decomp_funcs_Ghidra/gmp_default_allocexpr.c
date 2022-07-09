
void * gmp_default_alloc(size_t size)

{
  void *pvVar1;
  
  if (size == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("size > 0","lib/mini-gmp.c",0x123,"gmp_default_alloc");
  }
  pvVar1 = malloc(size);
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  gmp_die("gmp_default_alloc: Virtual memory exhausted.");
}

