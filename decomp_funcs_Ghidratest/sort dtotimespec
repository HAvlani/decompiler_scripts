
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

timespec dtotimespec(double sec)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  if (sec <= _DAT_00118098) {
    return (timespec)ZEXT816(0x8000000000000000);
  }
  if (DAT_00117110 <= sec) {
    return (timespec)CONCAT88(999999999,0x7fffffffffffffff);
  }
  dVar3 = (sec - (double)(long)sec) * _DAT_001180a0;
  lVar2 = (long)dVar3;
  lVar2 = (ulong)((double)lVar2 < dVar3) + lVar2;
  lVar1 = lVar2 / 1000000000 + (long)sec;
  lVar2 = lVar2 % 1000000000;
  if (-1 < lVar2) {
    return (timespec)CONCAT88(lVar2,lVar1);
  }
  return (timespec)CONCAT88(lVar2 + 1000000000,lVar1 + -1);
}

