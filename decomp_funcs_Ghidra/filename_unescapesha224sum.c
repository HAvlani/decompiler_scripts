
char * filename_unescape(char *s,size_t s_len)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  
  uVar4 = 0;
  pcVar2 = s + 1;
  if (s_len != 0) {
    do {
      pcVar3 = pcVar2;
      cVar1 = s[uVar4];
      if (cVar1 == '\0') {
        return (char *)0x0;
      }
      if (cVar1 == '\\') {
        if (s_len - 1 == uVar4) {
          return (char *)0x0;
        }
        uVar4 = uVar4 + 1;
        cVar1 = s[uVar4];
        if (cVar1 == 'n') {
          pcVar3[-1] = '\n';
        }
        else if (cVar1 == 'r') {
          pcVar3[-1] = '\r';
        }
        else {
          if (cVar1 != '\\') {
            return (char *)0x0;
          }
          pcVar3[-1] = '\\';
        }
      }
      else {
        pcVar3[-1] = cVar1;
      }
      uVar4 = uVar4 + 1;
      pcVar2 = pcVar3 + 1;
    } while (uVar4 < s_len);
    if (pcVar3 < s + s_len) {
      *pcVar3 = '\0';
    }
  }
  return s;
}

