
_Bool seen_file(Hash_table *ht,char *file,stat *stats)

{
  long lVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  _Bool _Var3;
  F_triple new_ent;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  _Var3 = false;
  if (ht != (Hash_table *)0x0) {
    new_ent.st_ino = stats->st_ino;
    new_ent.st_dev = stats->st_dev;
    new_ent.name = file;
    pvVar2 = hash_lookup(ht,&new_ent);
    _Var3 = pvVar2 != (void *)0x0;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

