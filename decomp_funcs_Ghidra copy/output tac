
void output(char *start,char *past_end)

{
  size_t __n;
  ulong __n_00;
  char *__dest;
  size_t sVar1;
  
  __n_00 = (long)past_end - (long)start;
  __n = 0x2000 - output::bytes_in_buffer;
  if (start != (char *)0x0) {
    sVar1 = __n_00;
    if (__n_00 < __n) {
      __dest = output::buffer + output::bytes_in_buffer;
      sVar1 = output::bytes_in_buffer + __n_00;
    }
    else {
      do {
        sVar1 = sVar1 - __n;
        memcpy(output::buffer + output::bytes_in_buffer,start,__n);
        start = start + __n;
        __n = 0x2000;
        fwrite_unlocked(output::buffer,1,0x2000,stdout);
        output::bytes_in_buffer = 0;
      } while (0x1fff < sVar1);
      __dest = output::buffer;
      __n_00 = sVar1;
    }
    memcpy(__dest,start,__n_00);
    output::bytes_in_buffer = sVar1;
    return;
  }
  fwrite_unlocked(output::buffer,1,output::bytes_in_buffer,stdout);
  output::bytes_in_buffer = 0;
  return;
}

