
ptrdiff_t decode_line_length(char *spec)

{
  strtol_error sVar1;
  uintmax_t uVar2;
  long in_FS_OFFSET;
  uintmax_t val;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  sVar1 = xstrtoumax(spec,(char **)0x0,0,&val,"");
  if (sVar1 == LONGINT_OK) {
    uVar2 = 0;
    if (-1 < (long)val) {
      uVar2 = val;
    }
  }
  else {
    uVar2 = -(ulong)(sVar1 != LONGINT_OVERFLOW);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}

