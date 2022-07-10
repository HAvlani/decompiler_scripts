
hashint map_inode_number(ino_t ino,di_set *dis)

{
  size_t sVar1;
  ino_map *im;
  
  if ((undefined *)((long)&dis[-1].probe + 7U) < (undefined *)0x7ffffffffffffffe) {
    return (hashint)dis;
  }
  im = *(ino_map **)ino;
  if (im == (ino_map *)0x0) {
    im = ino_map_alloc(0x7fffffffffffffff);
    *(ino_map **)ino = im;
    if (im == (ino_map *)0x0) {
      return 0xffffffffffffffff;
    }
  }
  sVar1 = ino_map_insert(im,(ino_t)dis);
  return sVar1;
}

