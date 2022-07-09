
void fadvise(FILE *fp,fadvice_t advice)

{
  int __fd;
  
  if (fp != (FILE *)0x0) {
    __fd = fileno((FILE *)fp);
    posix_fadvise(__fd,0,0,advice);
    return;
  }
  return;
}

