
/* WARNING: Unknown calling convention yet parameter storage is locked */

passwd * getpwuid(__uid_t __uid)

{
  passwd *ppVar1;
  
  ppVar1 = (passwd *)(*(code *)PTR_getpwuid_00122d78)();
  return ppVar1;
}
