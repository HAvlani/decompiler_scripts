
int memcasecmp(void *vs1,void *vs2,size_t n)

{
  int iVar1;
  __int32_t **pp_Var2;
  size_t sVar3;
  
  if (n == 0) {
    return 0;
  }
  pp_Var2 = __ctype_toupper_loc();
  sVar3 = 0;
  do {
    iVar1 = (*pp_Var2)[*(byte *)((long)vs1 + sVar3)] - (*pp_Var2)[*(byte *)((long)vs2 + sVar3)];
    if (iVar1 != 0) {
      return iVar1;
    }
    sVar3 = sVar3 + 1;
  } while (sVar3 != n);
  return iVar1;
}

