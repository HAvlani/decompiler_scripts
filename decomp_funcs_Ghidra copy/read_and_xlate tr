
size_t read_and_xlate(char *buf,size_t size)

{
  size_t sVar1;
  char *buf_00;
  size_t size_00;
  byte *pbVar2;
  byte *pbVar3;
  
  size_00 = 0;
  buf_00 = buf;
  sVar1 = safe_read(0,buf,size);
  if (sVar1 != 0xffffffffffffffff) {
    pbVar2 = (byte *)buf;
    if (sVar1 != 0) {
      do {
        pbVar3 = pbVar2 + 1;
        *pbVar2 = xlate[*pbVar2];
        pbVar2 = pbVar3;
      } while ((byte *)(buf + sVar1) != pbVar3);
    }
    return sVar1;
  }
                    /* WARNING: Subroutine does not return */
  plain_read(size_00,buf_00);
}

