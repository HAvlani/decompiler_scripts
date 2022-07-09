
ulong mpz_fdiv_ui(__mpz_struct *n,ulong d)

{
  ulong uVar1;
  
  uVar1 = mpz_div_qr_ui((__mpz_struct *)0x0,(__mpz_struct *)0x0,n,d,GMP_DIV_FLOOR);
  return uVar1;
}

