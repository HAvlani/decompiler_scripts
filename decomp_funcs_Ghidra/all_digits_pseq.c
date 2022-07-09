
_Bool all_digits_p(char *s)

{
  char cVar1;
  size_t sVar2;
  ulong uVar3;
  char *pcVar4;
  
  if (9 < (int)*s - 0x30U) {
    return false;
  }
  uVar3 = 0xffffffffffffffff;
  pcVar4 = s;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  sVar2 = strspn(s,"0123456789");
  return sVar2 == ~uVar3 - 1;
}

