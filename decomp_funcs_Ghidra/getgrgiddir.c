
/* WARNING: Unknown calling convention yet parameter storage is locked */

group * getgrgid(__gid_t __gid)

{
  group *pgVar1;
  
  pgVar1 = (group *)(*(code *)PTR_getgrgid_00122dc0)();
  return pgVar1;
}

