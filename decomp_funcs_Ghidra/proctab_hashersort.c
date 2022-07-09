
size_t proctab_hasher(void *entry,size_t tabsize)

{
  return (ulong)(long)*(int *)((long)entry + 8) % tabsize;
}

