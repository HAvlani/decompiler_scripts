
int mpz_divisible_p(__mpz_struct *n,__mpz_struct *d)

{
  int iVar1;
  
  iVar1 = mpz_div_qr((__mpz_struct *)0x0,(__mpz_struct *)0x0,n,d,GMP_DIV_TRUNC);
  return (int)(iVar1 == 0);
}

