
_Bool different(char *old,char *new,size_t oldlen,size_t newlen)

{
  int iVar1;
  size_t sVar2;
  undefined uVar3;
  
  if (check_chars <= oldlen) {
    oldlen = check_chars;
  }
  sVar2 = check_chars;
  if (newlen < check_chars) {
    sVar2 = newlen;
  }
  if (ignore_case == false) {
    uVar3 = 1;
    if (oldlen == sVar2) {
      iVar1 = memcmp(old,new,oldlen);
      return iVar1 != 0;
    }
  }
  else {
    uVar3 = ignore_case;
    if (oldlen == sVar2) {
      iVar1 = memcasecmp(old,new,oldlen);
      return iVar1 != 0;
    }
  }
  return (_Bool)uVar3;
}

