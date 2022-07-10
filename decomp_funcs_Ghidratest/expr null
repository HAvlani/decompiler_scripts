
ulong null(int *param_1)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  ulong in_R8;
  ulong uVar4;
  
  if (*param_1 == 0) {
    iVar1 = mpz_sgn((__mpz_struct *)(param_1 + 2));
    uVar4 = in_R8 & 0xffffffffffffff00 | (ulong)(iVar1 == 0);
  }
  else {
    if (*param_1 != 1) {
      uVar4 = null_cold();
      return uVar4;
    }
    uVar4 = 1;
    cVar3 = **(char **)(param_1 + 2);
    if (cVar3 != '\0') {
      pcVar2 = *(char **)(param_1 + 2) + (cVar3 == '-');
      cVar3 = *pcVar2;
      do {
        if (cVar3 != '0') {
          return 0;
        }
        cVar3 = pcVar2[1];
        pcVar2 = pcVar2 + 1;
      } while (cVar3 != '\0');
      return 1;
    }
  }
  return uVar4 & 0xffffffff;
}

