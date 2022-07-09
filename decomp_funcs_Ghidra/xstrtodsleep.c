
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
LAB_00105b2c:
    if (ptr == (char **)0x0) goto LAB_00105b35;
  }
  else {
    if (ptr == (char **)0x0) {
      _Var2 = false;
      if ((*terminator != '\0') || (_Var2 = true, dVar3 == _DAT_00107ee8)) goto LAB_00105b35;
LAB_00105b23:
      _Var2 = *piVar1 != 0x22;
      goto LAB_00105b2c;
    }
    _Var2 = true;
    if (dVar3 != _DAT_00107ee8) goto LAB_00105b23;
  }
  *ptr = terminator;
LAB_00105b35:
  *result = dVar3;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

