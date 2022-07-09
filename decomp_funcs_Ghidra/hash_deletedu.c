
void * hash_delete(Hash_table *table,void *entry)

{
  void *pvVar1;
  
  pvVar1 = hash_remove(table,entry);
  return pvVar1;
}

