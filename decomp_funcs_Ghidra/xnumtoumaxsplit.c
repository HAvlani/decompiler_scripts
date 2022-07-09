
uintmax_t xnumtoumax(char *n_str,int base,uintmax_t min,uintmax_t max,char *suffixes,char *err,
                    int err_exit)

{
  strtol_error sVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  long in_FS_OFFSET;
  uintmax_t tnum;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar1 = xstrtoumax(n_str,(char **)0x0,base,&tnum,suffixes);
  if (sVar1 == LONGINT_OK) {
    if ((min <= tnum) && (tnum <= max)) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return tnum;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar3 = __errno_location();
    if (tnum < 0x40000000) {
      *piVar3 = 0x22;
      goto LAB_00108eb8;
    }
  }
  else {
    piVar3 = __errno_location();
    if (sVar1 != LONGINT_OVERFLOW) {
      if (sVar1 == LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW) {
        *piVar3 = 0;
      }
      goto LAB_00108eb8;
    }
  }
  *piVar3 = 0x4b;
LAB_00108eb8:
  pcVar2 = quote(n_str);
  iVar4 = *piVar3;
  if (iVar4 == 0x16) {
    iVar4 = 0;
  }
  if (err_exit == 0) {
    err_exit = 1;
  }
                    /* WARNING: Subroutine does not return */
  error(err_exit,iVar4,"%s: %s",err,pcVar2);
}
