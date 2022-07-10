
/* WARNING: Unknown calling convention yet parameter storage is locked */

hash_table * map_device(void)

{
  hash_table *phVar1;
  long *plVar2;
  long *entry;
  Hash_table *pHVar3;
  long in_RDX;
  long **in_RSI;
  Hash_table *in_RDI;
  
  entry = *in_RSI;
  if (entry == (long *)0x0) {
    entry = (long *)malloc(0x10);
    *in_RSI = entry;
    if (entry == (long *)0x0) {
      return (hash_table *)0x0;
    }
  }
  else if (*entry == in_RDX) {
    return (hash_table *)entry[1];
  }
  *entry = in_RDX;
  plVar2 = (long *)hash_insert(in_RDI,entry);
  if (plVar2 == (long *)0x0) {
    return (hash_table *)0x0;
  }
  if (entry == plVar2) {
    *in_RSI = (long *)0x0;
    pHVar3 = hash_initialize(0x3fd,(Hash_tuning *)0x0,di_ino_hash,(Hash_comparator *)0x0,
                             (Hash_data_freer *)0x0);
    entry[1] = (long)pHVar3;
    return pHVar3;
  }
  phVar1 = (hash_table *)plVar2[1];
  entry[1] = (long)phVar1;
  return phVar1;
}

