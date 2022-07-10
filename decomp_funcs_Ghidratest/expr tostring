
void tostring(int *param_1)

{
  char *pcVar1;
  
  if (*param_1 == 0) {
    pcVar1 = mpz_get_str((char *)0x0,10,(__mpz_struct *)(param_1 + 2));
    mpz_clear((__mpz_struct *)(param_1 + 2));
    *(char **)(param_1 + 2) = pcVar1;
    *param_1 = 1;
  }
  else if (*param_1 != 1) {
    tostring_cold();
    return;
  }
  return;
}

