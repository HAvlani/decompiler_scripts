
size_t string_to_join_field(char *str)

{
  strtol_error sVar1;
  size_t sVar2;
  char *pcVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  uintmax_t val;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  sVar1 = xstrtoumax(str,(char **)0x0,10,&val,"");
  if (sVar1 == LONGINT_OVERFLOW) {
    sVar2 = 0xfffffffffffffffe;
  }
  else {
    if ((sVar1 != LONGINT_OK) || (val == 0)) {
      pcVar3 = quote(str);
      uVar4 = dcgettext(0,"invalid field number: %s",5);
                    /* WARNING: Subroutine does not return */
      error(1,0,uVar4,pcVar3);
    }
    sVar2 = val - 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

