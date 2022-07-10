
void * hash_get_next(Hash_table *table,void *entry)

{
  void **ppvVar1;
  hash_entry *phVar2;
  hash_entry *phVar3;
  
  phVar2 = (hash_entry *)safe_hasher();
  phVar3 = phVar2;
  do {
    ppvVar1 = &phVar3->data;
    phVar3 = phVar3->next;
    if (*ppvVar1 == entry) {
      if (phVar3 != (hash_entry *)0x0) {
        return phVar3->data;
      }
      break;
    }
  } while (phVar3 != (hash_entry *)0x0);
  do {
    phVar2 = phVar2 + 1;
    if (table->bucket_limit <= phVar2) {
      return (void *)0x0;
    }
  } while (phVar2->data == (void *)0x0);
  return phVar2->data;
}

