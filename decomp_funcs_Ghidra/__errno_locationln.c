
/* WARNING: Unknown calling convention yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00111d98)();
  return piVar1;
}
