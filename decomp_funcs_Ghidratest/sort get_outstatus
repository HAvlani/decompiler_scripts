
stat * get_outstatus(void)

{
  int iVar1;
  int *piVar2;
  stat *psVar3;
  
  if (get_outstatus::outstat_errno != 0) {
    psVar3 = (stat *)0x0;
    if (get_outstatus::outstat_errno < 0) {
      psVar3 = &get_outstatus::outstat;
    }
    return psVar3;
  }
  iVar1 = __fxstat(1,1,(stat *)&get_outstatus::outstat);
  if (iVar1 == 0) {
    get_outstatus::outstat_errno = -1;
  }
  else {
    piVar2 = __errno_location();
    get_outstatus::outstat_errno = *piVar2;
    if (-1 < get_outstatus::outstat_errno) {
      return (stat *)0x0;
    }
  }
  return &get_outstatus::outstat;
}

