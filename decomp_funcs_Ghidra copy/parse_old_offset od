
_Bool parse_old_offset(char *s,uintmax_t *offset)

{
  strtol_error sVar1;
  char *pcVar2;
  int strtol_base;
  
  if (*s != '\0') {
    if (*s == '+') {
      s = s + 1;
    }
    pcVar2 = strchr(s,0x2e);
    strtol_base = 10;
    if ((pcVar2 == (char *)0x0) && (strtol_base = 8, *s == '0')) {
      strtol_base = (uint)((s[1] & 0xdfU) == 0x58) * 8 + 8;
    }
    sVar1 = xstrtoumax(s,(char **)0x0,strtol_base,offset,"Bb");
    return sVar1 == LONGINT_OK;
  }
  return false;
}

