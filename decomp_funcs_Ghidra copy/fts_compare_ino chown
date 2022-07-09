
int fts_compare_ino(_ftsent **a,_ftsent **b)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (*a)->fts_statp[0].st_ino;
  uVar2 = (*b)->fts_statp[0].st_ino;
  return (uint)(uVar1 >= uVar2 && uVar1 != uVar2) - (uint)(uVar1 < uVar2);
}

