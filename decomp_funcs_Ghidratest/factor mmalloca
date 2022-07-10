
void * mmalloca(size_t n)

{
  void *pvVar1;
  long lVar2;
  ulong __size;
  
  __size = n + 0x20;
  if ((-1 < (long)__size) && (n <= __size)) {
    pvVar1 = malloc(__size);
    if (pvVar1 != (void *)0x0) {
      lVar2 = (((long)pvVar1 + 0x10U & 0xffffffffffffffe0) - (long)pvVar1) + 0x10;
      pvVar1 = (void *)((long)pvVar1 + lVar2);
      *(char *)((long)pvVar1 + -1) = (char)lVar2;
      return pvVar1;
    }
    return (void *)0x0;
  }
  return (void *)0x0;
}

