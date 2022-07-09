
void * xrealloc(void *p,size_t s)

{
  void *pvVar1;
  
  pvVar1 = realloc(p,s);
  if ((pvVar1 == (void *)0x0) && ((p == (void *)0x0 || (s != 0)))) {
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
  return pvVar1;
}

