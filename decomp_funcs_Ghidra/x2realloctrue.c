
void * x2realloc(void *p,size_t *ps)

{
  void *pvVar1;
  
  pvVar1 = x2nrealloc(p,ps,1);
  return pvVar1;
}

