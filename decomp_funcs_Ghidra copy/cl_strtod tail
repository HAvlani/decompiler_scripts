
double cl_strtod(char *nptr,char **endptr)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  long in_FS_OFFSET;
  double dVar4;
  double dVar5;
  char *end;
  char *c_end;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  dVar4 = strtod(nptr,&end);
  dVar5 = dVar4;
  pcVar2 = end;
  if (*end != '\0') {
    piVar3 = __errno_location();
    iVar1 = *piVar3;
    dVar5 = c_strtod(nptr,&c_end);
    pcVar2 = c_end;
    if (c_end <= end) {
      *piVar3 = iVar1;
      dVar5 = dVar4;
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
  return dVar5;
}

