
void mp_factor_clear(mp_factors *factors)

{
  ulong uVar1;
  
  if (factors->nfactors != 0) {
    uVar1 = 0;
    do {
      mpz_clear((__mpz_struct *)factors->p[uVar1]);
      uVar1 = (ulong)((int)uVar1 + 1);
    } while (uVar1 < factors->nfactors);
  }
  rpl_free(factors->p);
  rpl_free(factors->e);
  return;
}

