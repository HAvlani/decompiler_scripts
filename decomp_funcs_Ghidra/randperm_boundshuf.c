
size_t randperm_bound(size_t h,size_t n)

{
  long lVar1;
  
  if (n != 0) {
    lVar1 = 0x3f;
    if (n != 0) {
      for (; n >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    return (long)(int)(0x40 - ((uint)lVar1 ^ 0x3f)) * h + 7 >> 3;
  }
  return 0;
}

