
void c_strtold(char *param_1,char **param_2)

{
  int iVar1;
  __locale_t p_Var2;
  int *piVar3;
  
  if (c_locale_cache == (locale_t)0x0) {
    c_locale_cache = (locale_t)newlocale(0x1fbf,"C",(__locale_t)0x0);
  }
  if (c_locale_cache != (locale_t)0x0) {
    p_Var2 = uselocale((__locale_t)c_locale_cache);
    if (p_Var2 != (__locale_t)0x0) {
      strtold(param_1,param_2);
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      p_Var2 = uselocale(p_Var2);
      if (p_Var2 != (__locale_t)0x0) {
        *piVar3 = iVar1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  if (param_2 != (char **)0x0) {
    *param_2 = param_1;
    return;
  }
  return;
}

