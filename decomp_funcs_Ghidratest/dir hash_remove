
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * hash_remove(Hash_table *table,void *entry)

{
  hash_entry *phVar1;
  hash_entry *p;
  char cVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  Hash_tuning *pHVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  hash_entry *bucket;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pvVar3 = hash_find_entry(table,entry,&bucket,true);
  if ((pvVar3 == (void *)0x0) ||
     (table->n_entries = table->n_entries - 1, bucket->data != (void *)0x0)) goto LAB_0010f613;
  uVar4 = table->n_buckets_used - 1;
  table->n_buckets_used = uVar4;
  if ((long)uVar4 < 0) {
    uVar5 = table->n_buckets;
    fVar7 = (float)(uVar4 >> 1 | (ulong)((uint)uVar4 & 1));
    pHVar6 = table->tuning;
    fVar7 = fVar7 + fVar7;
    if ((long)uVar5 < 0) goto LAB_0010f74a;
LAB_0010f664:
    fVar8 = (float)uVar5;
  }
  else {
    pHVar6 = table->tuning;
    fVar7 = (float)uVar4;
    uVar5 = table->n_buckets;
    if (-1 < (long)uVar5) goto LAB_0010f664;
LAB_0010f74a:
    fVar8 = (float)(uVar5 >> 1 | (ulong)((uint)uVar5 & 1));
    fVar8 = fVar8 + fVar8;
  }
  if (fVar7 < fVar8 * pHVar6->shrink_threshold) {
    check_tuning((Hash_table *)&table->tuning);
    uVar4 = table->n_buckets;
    pHVar6 = table->tuning;
    if ((long)uVar4 < 0) {
      fVar7 = (float)(uVar4 >> 1 | (ulong)((uint)uVar4 & 1));
      fVar7 = fVar7 + fVar7;
    }
    else {
      fVar7 = (float)uVar4;
    }
    uVar4 = table->n_buckets_used;
    if ((long)uVar4 < 0) {
      fVar8 = (float)(uVar4 >> 1 | (ulong)((uint)uVar4 & 1));
      fVar8 = fVar8 + fVar8;
    }
    else {
      fVar8 = (float)uVar4;
    }
    if (fVar8 < pHVar6->shrink_threshold * fVar7) {
      fVar7 = fVar7 * pHVar6->shrink_factor;
      if (pHVar6->is_n_buckets == false) {
        fVar7 = fVar7 * pHVar6->growth_threshold;
      }
      if (_DAT_0011b33c <= fVar7) {
        uVar4 = (long)(fVar7 - _DAT_0011b33c) ^ 0x8000000000000000;
      }
      else {
        uVar4 = (ulong)fVar7;
      }
      cVar2 = hash_rehash(table,uVar4);
      if (cVar2 == '\0') {
        p = table->free_entry_list;
        while (p != (hash_entry *)0x0) {
          phVar1 = p->next;
          rpl_free(p);
          p = phVar1;
        }
        table->free_entry_list = (hash_entry *)0x0;
      }
    }
  }
LAB_0010f613:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pvVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

