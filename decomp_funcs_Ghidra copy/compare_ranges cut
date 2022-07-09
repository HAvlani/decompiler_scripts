
int compare_ranges(void *a,void *b)

{
  int iVar1;
  uint uVar2;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = *b;
  uVar2 = 0xffffffff;
                    /* WARNING: Load size is inaccurate */
  if (iVar1 <= *a) {
    uVar2 = (uint)(*a != iVar1 && iVar1 <= *a);
  }
  return uVar2;
}

