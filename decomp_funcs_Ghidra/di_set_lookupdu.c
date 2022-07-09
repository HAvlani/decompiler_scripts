
int di_set_lookup(di_set *dis,dev_t dev,ino_t ino)

{
  hash_table *table;
  void *pvVar1;
  
  table = map_device();
  if (table != (hash_table *)0x0) {
    pvVar1 = (void *)map_inode_number((ino_t)&dis->ino_map,(di_set *)ino);
    if (pvVar1 != (void *)0xffffffffffffffff) {
      pvVar1 = hash_lookup(table,pvVar1);
      return (int)(pvVar1 != (void *)0x0);
    }
  }
  return -1;
}

