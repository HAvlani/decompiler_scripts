
size_t AD_hash(void *x,size_t table_size)

{
  return *(ulong *)((long)x + 8) % table_size;
}
