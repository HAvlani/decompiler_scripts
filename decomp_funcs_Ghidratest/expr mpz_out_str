
size_t mpz_out_str(FILE *stream,int base,__mpz_struct *x)

{
  char *__s;
  size_t __n;
  size_t sVar1;
  
  sVar1 = 0;
  __s = mpz_get_str((char *)0x0,base,x);
  if (__s != (char *)0x0) {
    __n = strlen(__s);
    sVar1 = fwrite(__s,1,__n,(FILE *)stream);
    (*gmp_free_func)(__s,__n + 1);
  }
  return sVar1;
}

