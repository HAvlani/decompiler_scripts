
ulong mpz_tdiv_qr_ui(__mpz_struct *q,__mpz_struct *r,__mpz_struct *n,ulong d)

{
  ulong uVar1;
  
  uVar1 = mpz_div_qr_ui(q,r,n,d,GMP_DIV_TRUNC);
  return uVar1;
}

