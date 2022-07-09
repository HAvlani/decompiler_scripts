
size_t plain_read(char *buf,size_t size)

{
  size_t sVar1;
  size_t size_00;
  
  size_00 = 0;
  sVar1 = safe_read(0,buf,size);
  if (sVar1 != 0xffffffffffffffff) {
    return sVar1;
  }
                    /* WARNING: Subroutine does not return */
  plain_read(size_00,buf);
}

