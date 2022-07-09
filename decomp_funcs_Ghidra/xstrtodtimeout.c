
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

_Bool xstrtod(char *str,char **ptr,double *result,anon_subr_double_char_ptr_char_ptr_ptr *convert)

{
  int *piVar1;
  long in_FS_OFFSET;
  _Bool _Var2;
  double dVar3;
  char *terminator;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  piVar1 = __errno_location();
  *piVar1 = 0;
  dVar3 = (*convert)(str,&terminator);
  if (terminator == str) {
    _Var2 = false;
LAB_001069ec:
    if (ptr == (char **)0x0) goto LAB_001069f5;
  }
  else {
    if (ptr == (char **)0x0) {
      _Var2 = false;
      if ((*terminator != '\0') || (_Var2 = true, dVar3 == _DAT_00107b00)) goto LAB_001069f5;
LAB_001069e3:
      _Var2 = *piVar1 != 0x22;
      goto LAB_001069ec;
    }
    _Var2 = true;
    if (dVar3 != _DAT_00107b00) goto LAB_001069e3;
  }
  *ptr = terminator;
LAB_001069f5:
  *result = dVar3;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

