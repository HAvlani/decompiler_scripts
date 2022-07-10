
int di_set_insert(di_set *dis,dev_t dev,ino_t ino)

{
  int iVar1;
  hash_table *phVar2;
  hashint hVar3;
  
  phVar2 = map_device();
  if (phVar2 != (hash_table *)0x0) {
    hVar3 = map_inode_number((ino_t)&dis->ino_map,(di_set *)ino);
    if (hVar3 != 0xffffffffffffffff) {
      iVar1 = hash_insert_if_absent(phVar2,hVar3,0);
      return iVar1;
    }
  }
  return -1;
}

