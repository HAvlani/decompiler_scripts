
Hash_table *
hash_initialize(size_t candidate,Hash_tuning *tuning,Hash_hasher *hasher,Hash_comparator *comparator
               ,Hash_data_freer *data_freer)

{
  _Bool _Var1;
  Hash_table *p;
  size_t __nmemb;
  hash_entry *phVar2;
  Hash_table *pHVar3;
  
  if (hasher == (Hash_hasher *)0x0) {
    hasher = raw_hasher;
  }
  if (comparator == (Hash_comparator *)0x0) {
    comparator = raw_comparator;
  }
  p = (Hash_table *)malloc(0x50);
  pHVar3 = p;
  if (p != (Hash_table *)0x0) {
    if (tuning == (Hash_tuning *)0x0) {
      tuning = &default_tuning;
    }
    p->tuning = tuning;
    _Var1 = check_tuning((Hash_table *)&p->tuning);
    if (_Var1 != false) {
      __nmemb = compute_bucket_size();
      p->n_buckets = __nmemb;
      if (__nmemb != 0) {
        phVar2 = (hash_entry *)calloc(__nmemb,0x10);
        p->bucket = phVar2;
        if (phVar2 != (hash_entry *)0x0) {
          p->hasher = hasher;
          p->comparator = comparator;
          p->bucket_limit = phVar2 + __nmemb;
          p->n_buckets_used = 0;
          p->n_entries = 0;
          p->data_freer = data_freer;
          p->free_entry_list = (hash_entry *)0x0;
          return p;
        }
      }
    }
    pHVar3 = (Hash_table *)0x0;
    rpl_free(p);
  }
  return pHVar3;
}

