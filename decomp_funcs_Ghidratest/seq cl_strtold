
longdouble cl_strtold(char *nptr,char **endptr)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  ulong extraout_RDX;
  ulong uVar4;
  ulong extraout_RDX_00;
  long in_FS_OFFSET;
  char *end;
  char *c_end;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  strtold(nptr,&end);
  uVar4 = extraout_RDX;
  pcVar2 = end;
  if (*end != '\0') {
    piVar3 = __errno_location();
    iVar1 = *piVar3;
    c_strtold(nptr,&c_end);
    uVar4 = extraout_RDX_00;
    pcVar2 = c_end;
    if (c_end <= end) {
      *piVar3 = iVar1;
      pcVar2 = end;
    }
  }
  end = pcVar2;
  if (endptr != (char **)0x0) {
    *endptr = end;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (longdouble)(ZEXT816(uVar4) << 0x40);
}

