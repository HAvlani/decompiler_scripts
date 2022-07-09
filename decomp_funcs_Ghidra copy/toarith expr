
undefined8 toarith(int *param_1)

{
  char cVar1;
  char *sp;
  int iVar2;
  char *pcVar3;
  
  if (*param_1 == 0) {
    return 1;
  }
  if (*param_1 != 1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  sp = *(char **)(param_1 + 2);
  pcVar3 = sp + (*sp == '-');
  cVar1 = *pcVar3;
  do {
    if (9 < (int)cVar1 - 0x30U) {
      return 0;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar2 = mpz_init_set_str((__mpz_struct *)(param_1 + 2),sp,10);
  if (iVar2 == 0) {
    rpl_free(sp);
    *param_1 = 0;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  error(3,0x22,"%s",sp);
}

