
ino_map * ino_map_alloc(size_t next_mapped_ino)

{
  ino_map *p;
  Hash_table *pHVar1;
  ino_map *piVar2;
  
  p = (ino_map *)malloc(0x18);
  piVar2 = p;
  if (p != (ino_map *)0x0) {
    pHVar1 = hash_initialize(0x3fd,(Hash_tuning *)0x0,ino_hash,ino_compare,rpl_free);
    p->map = pHVar1;
    if (pHVar1 == (Hash_table *)0x0) {
      piVar2 = (ino_map *)0x0;
      rpl_free(p);
    }
    else {
      p->next_mapped_ino = next_mapped_ino;
      p->probe = (ino_map_ent *)0x0;
    }
  }
  return piVar2;
}

