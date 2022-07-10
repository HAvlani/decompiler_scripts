
char * uinttostr(uint i,char *buf)

{
  uint uVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = (ulong)i;
  buf[10] = '\0';
  pcVar3 = buf + 10;
  do {
    pcVar3 = pcVar3 + -1;
    *pcVar3 = (char)uVar2 + (char)(uVar2 / 10) * -10 + '0';
    uVar1 = (uint)uVar2;
    uVar2 = uVar2 / 10;
  } while (9 < uVar1);
  return pcVar3;
}

