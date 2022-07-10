
_Bool isz85(char ch)

{
  char *pcVar1;
  
  if (ch < '[') {
    if ('@' < ch) {
      return true;
    }
    if ((byte)(ch - 0x30U) < 10) {
      return true;
    }
  }
  else if ((byte)(ch + 0x9fU) < 0x1a) {
    return true;
  }
  pcVar1 = strchr(".-:+=^!/*?&<>()[]{}@%$#",(int)ch);
  return pcVar1 != (char *)0x0;
}

