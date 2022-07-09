
_Bool xstrtold(char *str,char **ptr,longdouble *result,
              anon_subr_longdouble_char_ptr_char_ptr_ptr *convert)

{
  int *piVar1;
  long in_FS_OFFSET;
  _Bool _Var2;
  float10 in_ST0;
  char *terminator;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  piVar1 = __errno_location();
  *piVar1 = 0;
  (*convert)(str,&terminator);
  if (terminator == str) {
    _Var2 = false;
LAB_00106e6c:
    if (ptr == (char **)0x0) goto LAB_00106e75;
  }
  else {
    if (ptr == (char **)0x0) {
      _Var2 = false;
      if ((*terminator != '\0') || (_Var2 = true, in_ST0 == (float10)0)) goto LAB_00106e75;
LAB_00106e63:
      _Var2 = *piVar1 != 0x22;
      goto LAB_00106e6c;
    }
    _Var2 = true;
    if (in_ST0 != (float10)0) goto LAB_00106e63;
  }
  *ptr = terminator;
LAB_00106e75:
  *(float10 *)result = in_ST0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

