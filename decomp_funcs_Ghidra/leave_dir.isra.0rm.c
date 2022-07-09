
void leave_dir_isra_0(uint param_1,Hash_table **param_2,long param_3)

{
  long lVar1;
  Hash_table *pHVar2;
  void *p;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 & 0x102) == 0) {
    lVar1 = *(long *)(param_3 + 8);
    if ((lVar1 != 0) && (-1 < *(long *)(lVar1 + 0x58))) {
      pHVar2 = *param_2;
      if (pHVar2->n_buckets == 0) goto leave_dir_isra_0_cold;
      if ((pHVar2->bucket == *(hash_entry **)(param_3 + 0x78)) &&
         (pHVar2->bucket_limit == *(hash_entry **)(param_3 + 0x70))) {
        pHVar2->bucket_limit = *(hash_entry **)(lVar1 + 0x70);
        pHVar2->bucket = *(hash_entry **)(lVar1 + 0x78);
      }
    }
  }
  else {
    local_28 = *(undefined8 *)(param_3 + 0x70);
    local_20 = *(undefined8 *)(param_3 + 0x78);
    p = hash_remove(*param_2,&local_28);
    if (p == (void *)0x0) {
leave_dir_isra_0_cold:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    rpl_free(p);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

