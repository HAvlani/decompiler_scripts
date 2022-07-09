
size_t * randperm_new(randint_source *r,size_t h,size_t n)

{
  ulong uVar1;
  bool bVar2;
  randint *p;
  randint rVar3;
  ulong *entry;
  ulong *entry_00;
  void *pvVar4;
  Hash_table *table;
  ulong uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  ulong local_68;
  undefined8 local_60;
  ulong local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (h == 0) {
    p = (randint *)0x0;
    goto LAB_001061d3;
  }
  if (h == 1) {
    p = (randint *)xmalloc(8);
    rVar3 = randint_genmax(r,n - 1);
    *p = rVar3;
    goto LAB_001061d3;
  }
  if (n < 0x20000) {
    p = (randint *)xnmalloc(n,8);
    if (n != 0) goto LAB_00106237;
LAB_0010624d:
    bVar2 = false;
    table = (Hash_table *)0x0;
  }
  else {
    if (n / h < 0x20) {
      p = (randint *)xnmalloc(n,8);
LAB_00106237:
      rVar3 = 0;
      do {
        p[rVar3] = rVar3;
        rVar3 = rVar3 + 1;
      } while (rVar3 < n);
      goto LAB_0010624d;
    }
    table = hash_initialize(h * 2,(Hash_tuning *)0x0,sparse_hash_,sparse_cmp_,rpl_free);
    if (table == (Hash_table *)0x0) {
LAB_0010645b:
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
    p = (randint *)xnmalloc(h,8);
    bVar2 = true;
  }
  uVar5 = 0;
  do {
    while( true ) {
      rVar3 = randint_genmax(r,(n - 1) - uVar5);
      uVar6 = rVar3 + uVar5;
      if (!bVar2) break;
      local_50 = 0;
      local_58 = uVar5;
      entry = (ulong *)hash_remove(table,&local_58);
      local_60 = 0;
      local_68 = uVar6;
      entry_00 = (ulong *)hash_remove(table,&local_68);
      if (entry == (ulong *)0x0) {
        entry = (ulong *)xmalloc(0x10);
        entry[1] = uVar5;
        *entry = uVar5;
      }
      if (entry_00 == (ulong *)0x0) {
        entry_00 = (ulong *)xmalloc(0x10);
        entry_00[1] = uVar6;
        *entry_00 = uVar6;
      }
      else {
        uVar6 = entry_00[1];
      }
      uVar1 = entry[1];
      entry[1] = uVar6;
      entry_00[1] = uVar1;
      pvVar4 = hash_insert(table,entry);
      if ((pvVar4 == (void *)0x0) || (pvVar4 = hash_insert(table,entry_00), pvVar4 == (void *)0x0))
      goto LAB_0010645b;
      p[uVar5] = entry[1];
      uVar5 = uVar5 + 1;
      if (h <= uVar5) goto LAB_00106361;
    }
    rVar3 = p[uVar5];
    p[uVar5] = p[uVar6];
    uVar5 = uVar5 + 1;
    p[uVar6] = rVar3;
  } while (uVar5 < h);
LAB_00106361:
  if (bVar2) {
    hash_free(table);
  }
  else {
    p = (randint *)xreallocarray(p,h,8);
  }
LAB_001061d3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return p;
}

