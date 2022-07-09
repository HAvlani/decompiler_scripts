
void * xreallocarray(void *p,size_t n,size_t s)

{
  void *pvVar1;
  
  pvVar1 = (void *)reallocarray();
  if ((pvVar1 == (void *)0x0) && ((p == (void *)0x0 || ((n != 0 && (s != 0)))))) {
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
  return pvVar1;
}

