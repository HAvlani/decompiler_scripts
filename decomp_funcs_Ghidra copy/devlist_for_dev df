
devlist * devlist_for_dev(dev_t dev)

{
  long lVar1;
  void *pvVar2;
  devlist *pdVar3;
  long in_FS_OFFSET;
  devlist dev_entry;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (devlist_table != (Hash_table *)0x0) {
    dev_entry.dev_num = dev;
    pvVar2 = hash_lookup(devlist_table,&dev_entry);
    if (pvVar2 != (void *)0x0) {
      pdVar3 = *(devlist **)((long)pvVar2 + 0x18);
      goto LAB_001055e8;
    }
  }
  pdVar3 = (devlist *)0x0;
LAB_001055e8:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pdVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

