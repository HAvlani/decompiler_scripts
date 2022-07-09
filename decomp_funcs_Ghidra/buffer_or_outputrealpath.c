
_Bool buffer_or_output(char *str,char **pbuf,size_t *plen)

{
  char *__dest;
  size_t sVar1;
  
  __dest = *pbuf;
  if (__dest == (char *)0x0) {
    fputs_unlocked(str,stdout);
    return false;
  }
  sVar1 = strlen(str);
  if (*plen < sVar1 || *plen == sVar1) {
    return true;
  }
  memcpy(__dest,str,sVar1 + 1);
  *pbuf = *pbuf + sVar1;
  *plen = *plen - sVar1;
  return false;
}

