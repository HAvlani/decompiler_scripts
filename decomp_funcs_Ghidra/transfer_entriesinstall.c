
_Bool transfer_entries(Hash_table *dst,Hash_table *src,_Bool safe)

{
  hash_entry *phVar1;
  void **ppvVar2;
  hash_entry *phVar3;
  hash_entry *phVar4;
  void *pvVar5;
  
  phVar4 = src->bucket;
  if (src->bucket_limit <= phVar4) {
    return true;
  }
  do {
    while (pvVar5 = phVar4->data, pvVar5 == (void *)0x0) {
LAB_0010d148:
      phVar4 = phVar4 + 1;
      if (src->bucket_limit < phVar4 || src->bucket_limit == phVar4) {
        return true;
      }
    }
    phVar3 = phVar4->next;
    if (phVar4->next != (hash_entry *)0x0) {
      do {
        while( true ) {
          pvVar5 = phVar3->data;
          ppvVar2 = (void **)safe_hasher(dst,pvVar5);
          phVar1 = phVar3->next;
          if (*ppvVar2 != (void *)0x0) break;
          *ppvVar2 = pvVar5;
          dst->n_buckets_used = dst->n_buckets_used + 1;
          phVar3->data = (void *)0x0;
          phVar3->next = dst->free_entry_list;
          dst->free_entry_list = phVar3;
          phVar3 = phVar1;
          if (phVar1 == (hash_entry *)0x0) goto LAB_0010d1bc;
        }
        phVar3->next = (hash_entry *)ppvVar2[1];
        ppvVar2[1] = phVar3;
        phVar3 = phVar1;
      } while (phVar1 != (hash_entry *)0x0);
LAB_0010d1bc:
      pvVar5 = phVar4->data;
    }
    phVar4->next = (hash_entry *)0x0;
    if (safe != false) goto LAB_0010d148;
    ppvVar2 = (void **)safe_hasher(dst,pvVar5);
    if (*ppvVar2 == (void *)0x0) {
      *ppvVar2 = pvVar5;
      dst->n_buckets_used = dst->n_buckets_used + 1;
    }
    else {
      phVar3 = dst->free_entry_list;
      if (phVar3 == (hash_entry *)0x0) {
        phVar3 = (hash_entry *)malloc(0x10);
        if (phVar3 == (hash_entry *)0x0) {
          return false;
        }
      }
      else {
        dst->free_entry_list = phVar3->next;
      }
      phVar1 = (hash_entry *)ppvVar2[1];
      phVar3->data = pvVar5;
      phVar3->next = phVar1;
      ppvVar2[1] = phVar3;
    }
    phVar4->data = (void *)0x0;
    phVar4 = phVar4 + 1;
    src->n_buckets_used = src->n_buckets_used - 1;
    if (src->bucket_limit < phVar4 || src->bucket_limit == phVar4) {
      return true;
    }
  } while( true );
}

