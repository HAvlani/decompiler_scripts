
_Bool hash_table_ok(Hash_table *table)

{
  hash_entry *phVar1;
  hash_entry *phVar2;
  size_t sVar3;
  size_t sVar4;
  
  phVar2 = table->bucket;
  sVar3 = 0;
  sVar4 = 0;
  do {
    while( true ) {
      if (table->bucket_limit <= phVar2) {
        if (table->n_buckets_used != sVar4) {
          return false;
        }
        return table->n_entries == sVar3;
      }
      if (phVar2->data != (void *)0x0) break;
LAB_0010d8e0:
      phVar2 = phVar2 + 1;
    }
    phVar1 = phVar2->next;
    sVar4 = sVar4 + 1;
    sVar3 = sVar3 + 1;
    if (phVar1 == (hash_entry *)0x0) goto LAB_0010d8e0;
    do {
      phVar1 = phVar1->next;
      sVar3 = sVar3 + 1;
    } while (phVar1 != (hash_entry *)0x0);
    phVar2 = phVar2 + 1;
  } while( true );
}

