
void * xireallocarray(void *p,idx_t n,idx_t s)

{
  void *pvVar1;
  
  if ((n == 0) || (s == 0)) {
    n = 1;
    s = 1;
  }
  pvVar1 = (void *)reallocarray(p,n,s);
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}

