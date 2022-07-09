
size_t hash_do_for_each(Hash_table *table,Hash_processor *processor,void *processor_data)

{
  _Bool _Var1;
  hash_entry *phVar2;
  void *pvVar3;
  size_t sVar4;
  hash_entry *phVar5;
  
  phVar5 = table->bucket;
  if (table->bucket_limit < phVar5 || table->bucket_limit == phVar5) {
    sVar4 = 0;
  }
  else {
    sVar4 = 0;
    do {
      pvVar3 = phVar5->data;
      phVar2 = phVar5;
      if (pvVar3 != (void *)0x0) {
        while( true ) {
          _Var1 = (*processor)(pvVar3,processor_data);
          if (_Var1 == false) {
            return sVar4;
          }
          phVar2 = phVar2->next;
          sVar4 = sVar4 + 1;
          if (phVar2 == (hash_entry *)0x0) break;
          pvVar3 = phVar2->data;
        }
      }
      phVar5 = phVar5 + 1;
    } while (phVar5 <= table->bucket_limit && table->bucket_limit != phVar5);
  }
  return sVar4;
}

