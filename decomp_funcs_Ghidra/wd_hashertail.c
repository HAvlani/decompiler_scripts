
size_t wd_hasher(void *entry,size_t tabsize)

{
  return (ulong)(long)*(int *)((long)entry + 0x44) % tabsize;
}

