
/* WARNING: Unknown calling convention yet parameter storage is locked */

lconv * localeconv(void)

{
  lconv *plVar1;
  
  plVar1 = (lconv *)(*(code *)PTR_localeconv_00113dd8)();
  return plVar1;
}

