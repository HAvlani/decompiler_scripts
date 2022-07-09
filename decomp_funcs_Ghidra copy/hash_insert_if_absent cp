
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 hash_insert_if_absent(Hash_table *param_1,void *param_2,void **param_3)

{
  hash_entry *phVar1;
  void **ppvVar2;
  char cVar3;
  void *pvVar4;
  ulong uVar5;
  hash_entry *phVar6;
  Hash_tuning *pHVar7;
  ulong uVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  undefined local_38;
  undefined7 uStack55;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pvVar4 = hash_find_entry(param_1,param_2,(hash_entry **)&local_38,false);
  if (pvVar4 != (void *)0x0) {
    uVar9 = 0;
    if (param_3 != (void **)0x0) {
      *param_3 = pvVar4;
    }
    goto LAB_0010e17e;
  }
  uVar8 = param_1->n_buckets_used;
  if ((long)uVar8 < 0) {
    uVar5 = param_1->n_buckets;
    fVar10 = (float)(uVar8 >> 1 | (ulong)((uint)uVar8 & 1));
    pHVar7 = param_1->tuning;
    fVar10 = fVar10 + fVar10;
    if (-1 < (long)uVar5) goto LAB_0010e1c3;
LAB_0010e24a:
    fVar11 = (float)(uVar5 >> 1 | (ulong)((uint)uVar5 & 1));
    if (fVar10 <= (fVar11 + fVar11) * pHVar7->growth_threshold) goto LAB_0010e1da;
LAB_0010e271:
    check_tuning((Hash_table *)&param_1->tuning);
    pHVar7 = param_1->tuning;
    uVar8 = param_1->n_buckets;
    if ((long)uVar8 < 0) {
      fVar10 = (float)(uVar8 >> 1 | (ulong)((uint)uVar8 & 1));
      fVar10 = fVar10 + fVar10;
    }
    else {
      fVar10 = (float)uVar8;
    }
    uVar8 = param_1->n_buckets_used;
    if ((long)uVar8 < 0) {
      fVar11 = (float)(uVar8 >> 1 | (ulong)((uint)uVar8 & 1));
      fVar11 = fVar11 + fVar11;
    }
    else {
      fVar11 = (float)uVar8;
    }
    if (fVar11 <= pHVar7->growth_threshold * fVar10) goto LAB_0010e1da;
    fVar10 = fVar10 * pHVar7->growth_factor;
    if (pHVar7->is_n_buckets == false) {
      fVar10 = fVar10 * pHVar7->growth_threshold;
    }
    if (fVar10 < _DAT_00115628) {
      if (_DAT_0011562c <= fVar10) {
        uVar8 = (long)(fVar10 - _DAT_0011562c) ^ 0x8000000000000000;
      }
      else {
        uVar8 = (ulong)fVar10;
      }
      cVar3 = hash_rehash(param_1,uVar8);
      if (cVar3 != '\0') {
        pvVar4 = hash_find_entry(param_1,param_2,(hash_entry **)&local_38,false);
        if (pvVar4 != (void *)0x0) {
          uVar9 = hash_insert_if_absent_cold();
          return uVar9;
        }
        goto LAB_0010e1da;
      }
    }
LAB_0010e2d7:
    uVar9 = 0xffffffff;
  }
  else {
    pHVar7 = param_1->tuning;
    fVar10 = (float)uVar8;
    uVar5 = param_1->n_buckets;
    if ((long)uVar5 < 0) goto LAB_0010e24a;
LAB_0010e1c3:
    if ((float)uVar5 * pHVar7->growth_threshold < fVar10) goto LAB_0010e271;
LAB_0010e1da:
    ppvVar2 = (void **)CONCAT71(uStack55,local_38);
    if (*ppvVar2 == (void *)0x0) {
      *ppvVar2 = param_2;
      uVar9 = 1;
      param_1->n_entries = param_1->n_entries + 1;
      param_1->n_buckets_used = param_1->n_buckets_used + 1;
      goto LAB_0010e17e;
    }
    phVar6 = param_1->free_entry_list;
    if (phVar6 == (hash_entry *)0x0) {
      phVar6 = (hash_entry *)malloc(0x10);
      if (phVar6 == (hash_entry *)0x0) goto LAB_0010e2d7;
    }
    else {
      param_1->free_entry_list = phVar6->next;
    }
    phVar1 = (hash_entry *)ppvVar2[1];
    phVar6->data = param_2;
    uVar9 = 1;
    phVar6->next = phVar1;
    ppvVar2[1] = phVar6;
    param_1->n_entries = param_1->n_entries + 1;
  }
LAB_0010e17e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}

