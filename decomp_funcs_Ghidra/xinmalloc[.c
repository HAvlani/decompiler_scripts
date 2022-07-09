
void * xinmalloc(idx_t n,idx_t s)

{
  void *pvVar1;
  
  pvVar1 = xireallocarray((void *)0x0,n,s);
  return pvVar1;
}

