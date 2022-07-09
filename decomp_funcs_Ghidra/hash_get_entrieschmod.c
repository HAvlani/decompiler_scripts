
/* WARNING: Type propagation algorithm not settling */

size_t hash_get_entries(Hash_table *table,void **buffer,size_t buffer_size)

{
  hash_entry *phVar1;
  hash_entry *phVar2;
  ulong uVar3;
  hash_entry *phVar4;
  
  phVar4 = table->bucket;
  uVar3 = 0;
  if (table->bucket_limit < phVar4 || table->bucket_limit == phVar4) {
    return 0;
  }
  do {
    phVar1 = phVar4;
    phVar2 = (hash_entry *)phVar4->data;
    while (phVar2 != (hash_entry *)0x0) {
      if (buffer_size <= uVar3) {
        return uVar3;
      }
      buffer[uVar3] = phVar1->data;
      phVar1 = phVar1->next;
      uVar3 = uVar3 + 1;
      phVar2 = phVar1;
    }
    phVar4 = phVar4 + 1;
  } while (phVar4 <= table->bucket_limit && table->bucket_limit != phVar4);
  return uVar3;
}

