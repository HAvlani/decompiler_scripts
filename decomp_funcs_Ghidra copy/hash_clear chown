
void hash_clear(Hash_table *table)

{
  hash_entry *phVar1;
  hash_entry *phVar2;
  Hash_data_freer *pHVar3;
  hash_entry *phVar4;
  hash_entry *phVar5;
  
  phVar4 = table->bucket;
  if (table->bucket < table->bucket_limit) {
    do {
      while (phVar4->data != (void *)0x0) {
        pHVar3 = table->data_freer;
        phVar5 = phVar4->next;
        while (phVar5 != (hash_entry *)0x0) {
          if (pHVar3 != (Hash_data_freer *)0x0) {
            (*pHVar3)(phVar5->data);
            pHVar3 = table->data_freer;
          }
          phVar1 = phVar5->next;
          phVar2 = table->free_entry_list;
          phVar5->data = (void *)0x0;
          phVar5->next = phVar2;
          table->free_entry_list = phVar5;
          phVar5 = phVar1;
        }
        if (pHVar3 != (Hash_data_freer *)0x0) {
          (*pHVar3)(phVar4->data);
        }
        phVar4->data = (void *)0x0;
        phVar5 = phVar4 + 1;
        phVar4->next = (hash_entry *)0x0;
        phVar4 = phVar5;
        if (table->bucket_limit < phVar5 || table->bucket_limit == phVar5) goto LAB_0010759b;
      }
      phVar4 = phVar4 + 1;
    } while (phVar4 <= table->bucket_limit && table->bucket_limit != phVar4);
  }
LAB_0010759b:
  table->n_buckets_used = 0;
  table->n_entries = 0;
  return;
}

