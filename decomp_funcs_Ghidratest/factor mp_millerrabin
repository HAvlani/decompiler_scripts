
_Bool mp_millerrabin(mpz_srcptr n,mpz_srcptr nm1,mpz_ptr x,mpz_ptr y,mpz_srcptr q,ulong k)

{
  int iVar1;
  ulong uVar2;
  
  mpz_powm(y,x,q,n);
  iVar1 = mpz_cmp_ui(y,1);
  if ((iVar1 != 0) && (iVar1 = mpz_cmp(y,nm1), iVar1 != 0)) {
    uVar2 = 1;
    if (1 < k) {
      do {
        mpz_powm_ui(y,y,2,n);
        iVar1 = mpz_cmp(y,nm1);
        if (iVar1 == 0) {
          return true;
        }
        iVar1 = mpz_cmp_ui(y,1);
      } while ((iVar1 != 0) && (uVar2 = uVar2 + 1, k != uVar2));
    }
    return false;
  }
  return true;
}

