
int setenv_TZ(char *tz)

{
  int iVar1;
  
  if (tz != (char *)0x0) {
    iVar1 = (*(code *)PTR_setenv_0010ce08)(&DAT_0010a048,tz,1);
    return iVar1;
  }
  iVar1 = (*(code *)PTR_unsetenv_0010cf80)(&DAT_0010a048,0);
  return iVar1;
}

