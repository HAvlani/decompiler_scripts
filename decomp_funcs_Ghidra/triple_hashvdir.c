
size_t triple_hash(void *x,size_t table_size)

{
  size_t sVar1;
  
                    /* WARNING: Load size is inaccurate */
  sVar1 = hash_pjw(*x,table_size);
  return (sVar1 ^ *(ulong *)((long)x + 8)) % table_size;
}

