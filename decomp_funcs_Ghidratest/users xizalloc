
void * xizalloc(idx_t s)

{
  void *pvVar1;
  
  pvVar1 = calloc(s,1);
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}

