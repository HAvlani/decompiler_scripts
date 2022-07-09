
int setenv_TZ(char *tz)

{
  int iVar1;
  
  if (tz != (char *)0x0) {
    iVar1 = (*(code *)PTR_setenv_0011ce08)(&DAT_0011412e,tz,1);
    return iVar1;
  }
  iVar1 = (*(code *)PTR_unsetenv_0011cf80)(&DAT_0011412e,0);
  return iVar1;
}

