
void * xmemdup(void *p,size_t s)

{
  void *pvVar1;
  
  pvVar1 = malloc(s);
  if (pvVar1 != (void *)0x0) {
    pvVar1 = memcpy(pvVar1,p,s);
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}

