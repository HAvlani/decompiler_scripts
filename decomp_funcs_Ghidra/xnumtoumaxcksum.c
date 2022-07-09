
uintmax_t xnumtoumax(char *n_str,int base,uintmax_t min,uintmax_t max,char *suffixes,char *err,
                    int err_exit)

{
  strtol_error sVar1;
  int *piVar2;
  int iVar3;
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
    piVar2 = __errno_location();
    if (tnum < 0x40000000) {
      *piVar2 = 0x22;
      goto LAB_00117dc8;
    }
  }
  else {
    piVar2 = __errno_location();
    if (sVar1 != LONGINT_OVERFLOW) {
      if (sVar1 == LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW) {
        *piVar2 = 0;
      }
      goto LAB_00117dc8;
    }
  }
  *piVar2 = 0x4b;
LAB_00117dc8:
  quote(n_str);
  iVar3 = *piVar2;
  if (iVar3 == 0x16) goto LAB_00117e00;
  do {
    if (err_exit == 0) {
      err_exit = 1;
    }
    error(err_exit,iVar3,"%s: %s",err);
LAB_00117e00:
    iVar3 = 0;
  } while( true );
}

