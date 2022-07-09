
void hash_free(Hash_table *table)

{
  hash_entry *phVar1;
  hash_entry *phVar2;
  hash_entry *phVar3;
  void *pvVar4;
  
  phVar3 = table->bucket;
  phVar1 = table->bucket_limit;
  if ((table->data_freer != (Hash_data_freer *)0x0) && (table->n_entries != 0)) {
    if (phVar1 <= phVar3) goto LAB_00104a7c;
    do {
      while (pvVar4 = phVar3->data, phVar2 = phVar3, pvVar4 == (void *)0x0) {
        phVar3 = phVar3 + 1;
        if (phVar1 <= phVar3) goto LAB_00104a3f;
      }
      while( true ) {
        (*table->data_freer)(pvVar4);
        phVar2 = phVar2->next;
        if (phVar2 == (hash_entry *)0x0) break;
        pvVar4 = phVar2->data;
      }
      phVar1 = table->bucket_limit;
      phVar3 = phVar3 + 1;
    } while (phVar3 < phVar1);
LAB_00104a3f:
    phVar3 = table->bucket;
  }
  if (phVar3 < phVar1) {
    do {
      phVar1 = phVar3->next;
      while (phVar1 != (hash_entry *)0x0) {
        phVar2 = phVar1->next;
        rpl_free(phVar1);
        phVar1 = phVar2;
      }
      phVar3 = phVar3 + 1;
    } while (phVar3 <= table->bucket_limit && table->bucket_limit != phVar3);
  }
LAB_00104a7c:
  phVar3 = table->free_entry_list;
  while (phVar3 != (hash_entry *)0x0) {
    phVar1 = phVar3->next;
    rpl_free(phVar3);
    phVar3 = phVar1;
  }
  rpl_free(table->bucket);
  rpl_free(table);
  return;
}

