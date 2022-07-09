
_Bool write_zeros(int fd,off_t n_bytes)

{
  size_t sVar1;
  size_t count;
  
  if ((write_zeros::zeros == (char *)0x0) &&
     (write_zeros::zeros = (char *)calloc(write_zeros::nz,1), write_zeros::zeros == (char *)0x0)) {
    write_zeros::nz = 0x400;
    write_zeros::zeros = write_zeros::lexical_block_0::fallback;
  }
  if (n_bytes != 0) {
    do {
      count = n_bytes;
      if (write_zeros::nz <= (ulong)n_bytes) {
        count = write_zeros::nz;
      }
      sVar1 = full_write(fd,write_zeros::zeros,count);
      if (sVar1 != count) {
        return false;
      }
      n_bytes = n_bytes - sVar1;
    } while (n_bytes != 0);
  }
  return true;
}

