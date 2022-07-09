
void * xalignalloc(idx_t alignment,idx_t size)

{
  void *pvVar1;
  
  pvVar1 = (void *)aligned_alloc();
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}

