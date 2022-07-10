
size_t getsize(__mpz_struct *i)

{
  int iVar1;
  ulong uVar2;
  size_t sVar3;
  
  sVar3 = 0xffffffffffffffff;
  iVar1 = mpz_sgn(i);
  if (-1 < iVar1) {
    sVar3 = 0xfffffffffffffffe;
    iVar1 = mpz_fits_ulong_p(i);
    if (iVar1 != 0) {
      uVar2 = mpz_get_ui(i);
      if (uVar2 != 0xffffffffffffffff) {
        sVar3 = uVar2;
      }
      return sVar3;
    }
  }
  return sVar3;
}

