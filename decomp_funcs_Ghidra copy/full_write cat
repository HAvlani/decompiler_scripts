
size_t full_write(int fd,void *buf,size_t count)

{
  size_t sVar1;
  int *piVar2;
  size_t sVar3;
  
  if (count == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = 0;
    do {
      sVar1 = safe_write(fd,buf,count);
      if (sVar1 == 0xffffffffffffffff) {
        return sVar3;
      }
      if (sVar1 == 0) {
        piVar2 = __errno_location();
        *piVar2 = 0x1c;
        return sVar3;
      }
      sVar3 = sVar3 + sVar1;
      buf = (void *)((long)buf + sVar1);
      count = count - sVar1;
    } while (count != 0);
  }
  return sVar3;
}

