
size_t debug_width(char *text,char *lim)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  iVar1 = mbsnwidth(text,(long)lim - (long)text,0);
  sVar2 = (size_t)iVar1;
  if (text < lim) {
    do {
      pcVar3 = text + 1;
      sVar2 = sVar2 + (*text == '\t');
      text = pcVar3;
    } while (lim != pcVar3);
  }
  return sVar2;
}

