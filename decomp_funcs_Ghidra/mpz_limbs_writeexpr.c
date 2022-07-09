
mp_ptr mpz_limbs_write(__mpz_struct *x,mp_size_t n)

{
  mp_ptr pmVar1;
  
  pmVar1 = mpz_limbs_modify(x,n);
  return pmVar1;
}

