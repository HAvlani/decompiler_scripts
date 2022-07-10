
void * hash_lookup(Hash_table *table,void *entry)

{
  _Bool _Var1;
  void **ppvVar2;
  void *pvVar3;
  
  ppvVar2 = (void **)safe_hasher();
  pvVar3 = *ppvVar2;
  if (pvVar3 == (void *)0x0) {
    return (void *)0x0;
  }
  while( true ) {
    if (pvVar3 == entry) {
      return entry;
    }
    _Var1 = (*table->comparator)(entry,pvVar3);
    if (_Var1 != false) break;
    ppvVar2 = (void **)ppvVar2[1];
    if (ppvVar2 == (void **)0x0) {
      return (void *)0x0;
    }
    pvVar3 = *ppvVar2;
  }
  return *ppvVar2;
}

