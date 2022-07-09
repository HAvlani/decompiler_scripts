
ssize_t iread_fullblock(int fd,char *buf,idx_t size)

{
  ssize_t sVar1;
  long lVar2;
  
  if (size < 1) {
    return 0;
  }
  lVar2 = 0;
  while( true ) {
    sVar1 = iread(fd,buf,size);
    if (sVar1 < 0) {
      return sVar1;
    }
    if (sVar1 == 0) break;
    size = size - sVar1;
    lVar2 = lVar2 + sVar1;
    buf = buf + sVar1;
    if (size < 1) {
      return lVar2;
    }
  }
  return lVar2;
}

