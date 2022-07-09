
char * locale_charset(void)

{
  char *pcVar1;
  
  pcVar1 = nl_langinfo(0xe);
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 == '\0') {
      pcVar1 = "ASCII";
    }
    return pcVar1;
  }
  return "ASCII";
}

