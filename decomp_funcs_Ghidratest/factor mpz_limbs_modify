
mp_ptr mpz_limbs_modify(__mpz_struct *x,mp_size_t n)

{
  mp_ptr pmVar1;
  
  if (n < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("n > 0","lib/mini-gmp.c",0x67f,"mpz_limbs_modify");
  }
  if (n <= x->_mp_alloc) {
    return x->_mp_d;
  }
  pmVar1 = mpz_realloc(x,n);
  return pmVar1;
}

