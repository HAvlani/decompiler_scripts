
size_t safe_write(int fd,void *buf,size_t count)

{
  size_t sVar1;
  int *piVar2;
  
  while( true ) {
    do {
      sVar1 = write(fd,buf,count);
      if (-1 < (long)sVar1) {
        return sVar1;
      }
      piVar2 = __errno_location();
    } while (*piVar2 == 4);
    if (*piVar2 != 0x16) break;
    if (count < 0x7ff00001) {
      return sVar1;
    }
    count = 0x7ff00000;
  }
  return sVar1;
}

