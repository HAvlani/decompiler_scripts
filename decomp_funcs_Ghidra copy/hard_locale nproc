
/* WARNING: Could not reconcile some variable overlaps */

_Bool hard_locale(int category)

{
  long lVar1;
  _Bool _Var2;
  int iVar3;
  long in_FS_OFFSET;
  char locale [257];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = setlocale_null_r(category,locale,0x101);
  _Var2 = false;
  if (((iVar3 == 0) && (locale._0_2_ != 0x43)) &&
     ((locale._0_4_ != 0x49534f50 || (_Var2 = false, locale._4_2_ != 0x58)))) {
    _Var2 = true;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return _Var2;
}

