
size_t hash_pjw(void *x,size_t tablesize)

{
  char cVar1;
  ulong uVar2;
  
                    /* WARNING: Load size is inaccurate */
  cVar1 = *x;
  if (cVar1 != '\0') {
    uVar2 = 0;
    do {
      x = (void *)((long)x + 1);
      uVar2 = (uVar2 << 9 | uVar2 >> 0x37) + (long)cVar1;
                    /* WARNING: Load size is inaccurate */
      cVar1 = *x;
    } while (cVar1 != '\0');
    return uVar2 % tablesize;
  }
  return 0;
}

