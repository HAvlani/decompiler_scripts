
size_t ino_map_insert(ino_map *im,ino_t ino)

{
  size_t sVar1;
  ino_map_ent *piVar2;
  ino_map_ent *entry;
  
  entry = im->probe;
  if (entry == (ino_map_ent *)0x0) {
    entry = (ino_map_ent *)malloc(0x10);
    im->probe = entry;
    if (entry == (ino_map_ent *)0x0) {
      return 0xffffffffffffffff;
    }
  }
  else if (entry->ino == ino) {
    return entry->mapped_ino;
  }
  entry->ino = ino;
  piVar2 = (ino_map_ent *)hash_insert(im->map,entry);
  if (piVar2 == (ino_map_ent *)0x0) {
    return 0xffffffffffffffff;
  }
  if (entry == piVar2) {
    sVar1 = im->next_mapped_ino;
    im->probe = (ino_map_ent *)0x0;
    im->next_mapped_ino = sVar1 + 1;
    entry->mapped_ino = sVar1;
    return sVar1;
  }
  sVar1 = piVar2->mapped_ino;
  entry->mapped_ino = sVar1;
  return sVar1;
}

