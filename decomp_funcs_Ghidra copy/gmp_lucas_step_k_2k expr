
void gmp_lucas_step_k_2k(__mpz_struct *V,__mpz_struct *Qk,__mpz_struct *n)

{
  mpz_div_qr((__mpz_struct *)0x0,Qk,Qk,n,(uint)n->_mp_size >> 0x1f);
  mpz_mul(V,V,V);
  mpz_submul_ui(V,Qk,2);
  mpz_div_qr((__mpz_struct *)0x0,V,V,n,GMP_DIV_TRUNC);
  mpz_mul(Qk,Qk,Qk);
  return;
}

