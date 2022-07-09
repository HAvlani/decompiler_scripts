
int setlocale_null_r(int category,char *buf,size_t bufsize)

{
  char *__s;
  size_t sVar1;
  int iVar2;
  
  __s = setlocale(category,(char *)0x0);
  if (__s == (char *)0x0) {
    iVar2 = 0x16;
    if (bufsize != 0) {
      *buf = '\0';
    }
  }
  else {
    sVar1 = strlen(__s);
    if (sVar1 < bufsize) {
      memcpy(buf,__s,sVar1 + 1);
      return 0;
    }
    iVar2 = 0x22;
    if (bufsize != 0) {
      memcpy(buf,__s,bufsize - 1);
      buf[bufsize - 1] = '\0';
      return 0x22;
    }
  }
  return iVar2;
}

