
char * parse_field_count(char *string,size_t *val,char *msgid)

{
  strtol_error sVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  char *suffix;
  uintmax_t n;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  sVar1 = xstrtoumax(string,&suffix,10,&n,"");
  switch(sVar1) {
  case LONGINT_OK:
  case LONGINT_INVALID_SUFFIX_CHAR:
    *val = n;
    break;
  case LONGINT_OVERFLOW:
  case LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW:
    *val = 0xffffffffffffffff;
    break;
  case LONGINT_INVALID:
    if (msgid != (char *)0x0) {
      pcVar2 = quote(string);
      uVar3 = dcgettext(0,msgid,5);
      uVar4 = dcgettext(0,"%s: invalid count at start of %s",5);
                    /* WARNING: Subroutine does not return */
      error(2,0,uVar4,uVar3,pcVar2);
    }
    suffix = (char *)0x0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return suffix;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

