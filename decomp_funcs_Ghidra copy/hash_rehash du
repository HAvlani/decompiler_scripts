
ulong hash_rehash(Hash_table *param_1)

{
  Hash_tuning *pHVar1;
  _Bool _Var2;
  size_t __nmemb;
  undefined7 extraout_var;
  ulong uVar3;
  long in_FS_OFFSET;
  Hash_table local_88;
  long local_30;
  
  pHVar1 = param_1->tuning;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __nmemb = compute_bucket_size();
  if (__nmemb != 0) {
    if (param_1->n_buckets == __nmemb) {
      uVar3 = 1;
      goto LAB_0010c67c;
    }
    local_88.bucket = (hash_entry *)calloc(__nmemb,0x10);
    if (local_88.bucket != (hash_entry *)0x0) {
      local_88.bucket_limit = local_88.bucket + __nmemb;
      local_88.hasher = param_1->hasher;
      local_88.comparator = param_1->comparator;
      local_88.data_freer = param_1->data_freer;
      local_88.n_buckets_used = 0;
      local_88.free_entry_list = param_1->free_entry_list;
      local_88.n_entries = 0;
      local_88.n_buckets = __nmemb;
      local_88.tuning = pHVar1;
      _Var2 = transfer_entries(&local_88,param_1,false);
      uVar3 = CONCAT71(extraout_var,_Var2) & 0xffffffff;
      if (_Var2 == false) {
        param_1->free_entry_list = local_88.free_entry_list;
        _Var2 = transfer_entries(param_1,&local_88,true);
        if (_Var2 != false) {
          _Var2 = transfer_entries(param_1,&local_88,false);
          if (_Var2 != false) {
            rpl_free(local_88.bucket);
            goto LAB_0010c67c;
          }
        }
                    /* WARNING: Subroutine does not return */
        abort();
      }
      rpl_free(param_1->bucket);
      param_1->bucket = local_88.bucket;
      param_1->bucket_limit = local_88.bucket_limit;
      param_1->n_buckets = local_88.n_buckets;
      param_1->n_buckets_used = local_88.n_buckets_used;
      param_1->free_entry_list = local_88.free_entry_list;
      goto LAB_0010c67c;
    }
  }
  uVar3 = 0;
LAB_0010c67c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

