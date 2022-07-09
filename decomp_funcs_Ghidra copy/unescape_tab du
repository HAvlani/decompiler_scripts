
void unescape_tab(char *str)

{
  ulong uVar1;
  size_t sVar2;
  char *pcVar3;
  ulong uVar4;
  
  sVar2 = strlen(str);
  uVar4 = 0;
  pcVar3 = str;
  do {
    uVar1 = uVar4 + 1;
    if ((((str[uVar4] == '\\') && (uVar4 + 4 < sVar2 + 1)) && ((byte)(str[uVar1] - 0x30U) < 4)) &&
       (((byte)(str[uVar4 + 2] - 0x30U) < 8 && ((byte)(str[uVar4 + 3] - 0x30U) < 8)))) {
      *pcVar3 = str[uVar4 + 3] + 'P' + (str[uVar4 + 2] + str[uVar1] * '\b') * '\b';
      uVar4 = uVar4 + 4;
    }
    else {
      *pcVar3 = str[uVar4];
      uVar4 = uVar1;
      if (sVar2 + 1 <= uVar1) {
        return;
      }
    }
    pcVar3 = pcVar3 + 1;
  } while( true );
}

