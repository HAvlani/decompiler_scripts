
int xstrcoll(char *a,char *b)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  *piVar2 = 0;
  iVar1 = (*(code *)PTR_strcoll_00122ed8)(a,b);
  return iVar1;
}

