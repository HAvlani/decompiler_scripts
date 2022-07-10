
size_t hash_get_max_bucket_length(Hash_table *table)

{
  hash_entry *phVar1;
  hash_entry *phVar2;
  ulong uVar3;
  size_t sVar4;
  
  phVar2 = table->bucket;
  sVar4 = 0;
  do {
    if (table->bucket_limit <= phVar2) {
      return sVar4;
    }
    while (phVar2->data != (void *)0x0) {
      uVar3 = 1;
      for (phVar1 = phVar2->next; phVar1 != (hash_entry *)0x0; phVar1 = phVar1->next) {
        uVar3 = uVar3 + 1;
      }
      if (sVar4 < uVar3) {
        sVar4 = uVar3;
      }
      phVar2 = phVar2 + 1;
      if (table->bucket_limit <= phVar2) {
        return sVar4;
      }
    }
    phVar2 = phVar2 + 1;
  } while( true );
}

