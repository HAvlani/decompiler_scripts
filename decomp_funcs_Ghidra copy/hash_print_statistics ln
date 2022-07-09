
void hash_print_statistics(Hash_table *table,FILE *stream)

{
  size_t sVar1;
  size_t sVar2;
  hash_entry *phVar3;
  hash_entry *phVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = 0;
  sVar1 = table->n_buckets;
  sVar2 = table->n_buckets_used;
  for (phVar4 = table->bucket; phVar4 < table->bucket_limit; phVar4 = phVar4 + 1) {
    while (phVar4->data == (void *)0x0) {
      phVar4 = phVar4 + 1;
      if (table->bucket_limit <= phVar4) goto LAB_0010647d;
    }
    uVar5 = 1;
    for (phVar3 = phVar4->next; phVar3 != (hash_entry *)0x0; phVar3 = phVar3->next) {
      uVar5 = uVar5 + 1;
    }
    if (uVar6 < uVar5) {
      uVar6 = uVar5;
    }
  }
LAB_0010647d:
  __fprintf_chk(stream,1,"# entries:         %lu\n",table->n_entries);
  __fprintf_chk(stream,1,"# buckets:         %lu\n",sVar1);
  __fprintf_chk(stream,1,"# buckets used:    %lu (%.2f%%)\n",sVar2);
  __fprintf_chk(stream,1,"max bucket length: %lu\n",uVar6);
  return;
}

