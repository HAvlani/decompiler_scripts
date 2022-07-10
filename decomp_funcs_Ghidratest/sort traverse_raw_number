
char traverse_raw_number(char **number)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  
  pcVar2 = *number;
  cVar4 = *pcVar2;
  iVar3 = (int)cVar4;
  pcVar5 = pcVar2 + 1;
  if (iVar3 - 0x30U < 10) {
    iVar7 = 0;
    do {
      if ((char)iVar7 < (char)iVar3) {
        iVar7 = iVar3;
      }
      pcVar1 = pcVar2 + 1;
      pcVar2 = pcVar2 + 2;
      if (*pcVar1 != thousands_sep) {
        pcVar2 = pcVar5;
      }
      cVar4 = *pcVar2;
      iVar3 = (int)cVar4;
      pcVar5 = pcVar2 + 1;
    } while (iVar3 - 0x30U < 10);
    if (*pcVar1 == thousands_sep) {
      *number = pcVar2 + -1;
      return (char)iVar7;
    }
  }
  else {
    iVar7 = 0;
  }
  cVar6 = (char)iVar7;
  if (decimal_point == cVar4) {
    cVar4 = *pcVar5;
    while ((int)cVar4 - 0x30U < 10) {
      pcVar5 = pcVar5 + 1;
      if ((char)iVar7 < cVar4) {
        iVar7 = (int)cVar4;
      }
      cVar6 = (char)iVar7;
      cVar4 = *pcVar5;
    }
  }
  else {
    pcVar5 = pcVar5 + -1;
  }
  *number = pcVar5;
  return cVar6;
}

