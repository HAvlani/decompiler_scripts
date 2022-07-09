
size_t hash_string(char *string,size_t n_buckets)

{
  byte bVar1;
  size_t sVar2;
  
  sVar2 = 0;
  bVar1 = *string;
  while (bVar1 != 0) {
    string = (char *)((byte *)string + 1);
    sVar2 = (sVar2 * 0x1f + (ulong)bVar1) % n_buckets;
    bVar1 = *string;
  }
  return sVar2;
}

