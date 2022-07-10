
void mp_factor_using_pollard_rho(__mpz_struct *n,ulong a,mp_factors *factors)

{
  long lVar1;
  long lVar2;
  _Bool _Var3;
  char cVar4;
  int iVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_d8;
  mpz_t x;
  mpz_t z;
  mpz_t y;
  mpz_t P;
  mpz_t t;
  mpz_t t2;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (dev_debug != false) {
    __fprintf_chk(stderr,1,"[pollard-rho (%lu)] ",a);
  }
  lVar6 = 1;
  mpz_va_init(mpz_init,t,t2,0);
  mpz_init_set_si(y,2);
  mpz_init_set_si(x,2);
  mpz_init_set_si(z,2);
  mpz_init_set_ui(P,1);
  local_d8 = 1;
LAB_00103f45:
  iVar5 = mpz_cmp_ui(n,1);
  lVar2 = lVar6;
  if (iVar5 != 0) {
LAB_00103f72:
    lVar6 = lVar2;
    mpz_mul(t,x,x);
    mpz_mod(x,t,n);
    mpz_add_ui(x,x,a);
    mpz_sub(t,z,x);
    mpz_mul(t2,P,t);
    mpz_mod(P,t2,n);
    if (((uint)lVar6 & 0x1f) == 1) {
      mpz_gcd(t,P,n);
      iVar5 = mpz_cmp_ui(t,1);
      if (iVar5 != 0) goto factor_found;
      mpz_set(y,x);
    }
    lVar2 = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      lVar6 = lVar6 + -1;
      mpz_set(z,x);
      if (local_d8 != 0) {
        do {
          lVar6 = lVar6 + 1;
          mpz_mul(t,x,x);
          mpz_mod(x,t,n);
          mpz_add_ui(x,x,a);
        } while (lVar6 != local_d8);
      }
      mpz_set(y,x);
      lVar2 = local_d8;
      local_d8 = local_d8 * 2;
    }
    goto LAB_00103f72;
  }
LAB_001041f6:
  mpz_va_init(mpz_clear,P,t2,t,z,x,y);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
factor_found:
  do {
    mpz_mul(t,y,y);
    mpz_mod(y,t,n);
    mpz_add_ui(y,y,a);
    mpz_sub(t,z,y);
    mpz_gcd(t,t,n);
    iVar5 = mpz_cmp_ui(t,1);
  } while (iVar5 == 0);
  mpz_divexact(n,n,t);
  _Var3 = mp_prime_p(t);
  if (_Var3 == false) {
    if (dev_debug != false) {
      fwrite("[composite factor--restarting pollard-rho] ",1,0x2b,stderr);
    }
    mp_factor_using_pollard_rho(t,a + 1,factors);
    cVar4 = mp_prime_p(n);
  }
  else {
    mp_factor_insert(factors,t);
    cVar4 = mp_prime_p(n);
  }
  if (cVar4 != '\0') {
    mp_factor_insert(factors,n);
    goto LAB_001041f6;
  }
  mpz_mod(x,x,n);
  mpz_mod(z,z,n);
  mpz_mod(y,y,n);
  goto LAB_00103f45;
}

