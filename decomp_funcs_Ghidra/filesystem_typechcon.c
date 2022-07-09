
long filesystem_type(long param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  void *pvVar3;
  Hash_table *table;
  undefined8 *entry;
  undefined8 *puVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_b8 [2];
  statfs local_a8;
  long local_30;
  
  lVar5 = *(long *)(param_1 + 0x50);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(byte *)(lVar5 + 0x49) & 2) != 0) {
    table = *(Hash_table **)(lVar5 + 0x50);
    if (table == (Hash_table *)0x0) {
      table = hash_initialize(0xd,(Hash_tuning *)0x0,dev_type_hash,dev_type_compare,rpl_free);
      *(Hash_table **)(lVar5 + 0x50) = table;
      if (table != (Hash_table *)0x0) goto LAB_00103e3c;
    }
    else {
LAB_00103e3c:
      local_b8[0] = *(undefined8 *)(param_1 + 0x70);
      pvVar3 = hash_lookup(table,local_b8);
      if (pvVar3 != (void *)0x0) {
        lVar5 = *(long *)((long)pvVar3 + 8);
        goto LAB_00103eab;
      }
    }
    if ((-1 < param_2) && (iVar2 = fstatfs(param_2,&local_a8), lVar5 = local_a8.f_type, iVar2 == 0))
    {
      if ((table != (Hash_table *)0x0) &&
         (entry = (undefined8 *)malloc(0x10), entry != (undefined8 *)0x0)) {
        uVar1 = *(undefined8 *)(param_1 + 0x70);
        entry[1] = lVar5;
        *entry = uVar1;
        puVar4 = (undefined8 *)hash_insert(table,entry);
        if (puVar4 == (undefined8 *)0x0) {
          rpl_free(entry);
          lVar5 = local_a8.f_type;
        }
        else {
          lVar5 = local_a8.f_type;
          if (entry != puVar4) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
      }
      goto LAB_00103eab;
    }
  }
  lVar5 = 0;
LAB_00103eab:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar5;
}

