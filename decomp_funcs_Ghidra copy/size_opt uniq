
size_t size_opt(char *opt,char *msgid)

{
  strtol_error sVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uintmax_t size;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  sVar1 = xstrtoumax(opt,(char **)0x0,10,&size,"");
  if (sVar1 < LONGINT_INVALID_SUFFIX_CHAR) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return size;
    }
  }
  else {
    uVar2 = dcgettext(0,msgid,5);
    error(1,0,"%s: %s",opt,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

