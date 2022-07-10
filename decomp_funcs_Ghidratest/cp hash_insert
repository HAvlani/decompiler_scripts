
void * hash_insert(Hash_table *table,void *entry)

{
  int iVar1;
  long in_FS_OFFSET;
  void *matched_ent;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = hash_insert_if_absent(table,entry,&matched_ent);
  if (iVar1 == -1) {
    entry = (void *)0x0;
  }
  else if (iVar1 == 0) {
    entry = matched_ent;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return entry;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

