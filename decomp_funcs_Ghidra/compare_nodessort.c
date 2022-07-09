
int compare_nodes(void *a,void *b)

{
  if (*(uint *)((long)a + 0x50) != *(uint *)((long)b + 0x50)) {
    return (int)(*(uint *)((long)a + 0x50) < *(uint *)((long)b + 0x50));
  }
  return (int)((ulong)(*(long *)((long)a + 0x30) + *(long *)((long)a + 0x28)) <
              (ulong)(*(long *)((long)b + 0x30) + *(long *)((long)b + 0x28)));
}

