
int rev_strcmp_size(V a,V b)

{
  long lVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  
  lVar1 = *(long *)((long)a + 0x48);
  lVar2 = *(long *)((long)b + 0x48);
  bVar4 = *(long *)((long)b + 0x48) != lVar1;
  if (bVar4 && lVar1 <= lVar2) {
    return -1;
  }
  if (!bVar4) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
    iVar3 = strcmp(*b,*a);
    return iVar3;
  }
  return (int)(lVar2 < lVar1);
}

