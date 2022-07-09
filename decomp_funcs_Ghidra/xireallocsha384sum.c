
void * xirealloc(void *p,idx_t s)

{
  void *pvVar1;
  
  pvVar1 = realloc(p,s | (ulong)(s == 0));
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}

