
char * mdir_name(char *file)

{
  size_t __n;
  char *__dest;
  
  __n = dir_len(file);
  __dest = (char *)malloc(__n + 1 + (ulong)(__n == 0));
  if (__dest != (char *)0x0) {
    __dest = (char *)memcpy(__dest,file,__n);
    if (__n == 0) {
      *__dest = '.';
      __n = 1;
    }
    __dest[__n] = '\0';
  }
  return __dest;
}

