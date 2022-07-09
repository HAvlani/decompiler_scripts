
size_t strnlen1(char *string,size_t maxlen)

{
  void *pvVar1;
  size_t sVar2;
  
  pvVar1 = memchr(string,0,maxlen);
  sVar2 = (long)pvVar1 + (1 - (long)string);
  if (pvVar1 == (void *)0x0) {
    sVar2 = maxlen;
  }
  return sVar2;
}

