
int mpz_cmp(__mpz_struct *a,__mpz_struct *b)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = (ulong)a->_mp_size;
  uVar3 = (ulong)b->_mp_size;
  if (uVar1 != uVar3) {
    return (((long)uVar3 <= (long)uVar1) - 1) + (uint)((long)uVar3 <= (long)uVar1);
  }
  if ((long)uVar1 < 0) {
    uVar1 = ~uVar1;
    while( true ) {
      uVar3 = b->_mp_d[uVar1];
      uVar2 = a->_mp_d[uVar1];
      if (uVar3 != uVar2) break;
      uVar1 = uVar1 - 1;
      if (uVar1 == 0xffffffffffffffff) {
        return 0;
      }
    }
  }
  else {
    do {
      uVar1 = uVar1 - 1;
      if (uVar1 == 0xffffffffffffffff) {
        return 0;
      }
      uVar3 = a->_mp_d[uVar1];
      uVar2 = b->_mp_d[uVar1];
    } while (uVar3 == uVar2);
  }
  return (-(uint)(uVar2 < uVar3) & 2) - 1;
}

