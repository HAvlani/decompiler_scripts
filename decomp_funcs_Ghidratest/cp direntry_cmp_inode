
int direntry_cmp_inode(void *a,void *b)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)((long)a + 8);
  uVar2 = *(ulong *)((long)b + 8);
  return (uint)(uVar1 >= uVar2 && uVar1 != uVar2) - (uint)(uVar1 < uVar2);
}

