
timezone_t tzalloc(char *name)

{
  ulong __n;
  size_t sVar1;
  timezone_t ptVar2;
  ulong uVar3;
  
  if (name == (char *)0x0) {
    ptVar2 = (timezone_t)malloc(0x80);
    if (ptVar2 != (timezone_t)0x0) {
      ptVar2->next = (tm_zone *)0x0;
      *(undefined2 *)&ptVar2->tz_is_set = 0;
      return ptVar2;
    }
  }
  else {
    sVar1 = strlen(name);
    __n = sVar1 + 1;
    uVar3 = 0x76;
    if (0x75 < __n) {
      uVar3 = __n;
    }
    ptVar2 = (timezone_t)malloc(uVar3 + 0x11 & 0xfffffffffffffff8);
    if (ptVar2 != (timezone_t)0x0) {
      ptVar2->next = (tm_zone *)0x0;
      *(undefined2 *)&ptVar2->tz_is_set = 1;
      memcpy(&ptVar2->field_0x9,name,__n);
      (&ptVar2->field_0xa)[sVar1] = 0;
    }
  }
  return ptVar2;
}

