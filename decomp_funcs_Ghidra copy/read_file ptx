
char * read_file(char *filename,int flags,size_t *length)

{
  int iVar1;
  FILE *__stream;
  char *pcVar2;
  
  pcVar2 = "rbe";
  if ((flags & 1U) == 0) {
    pcVar2 = "re";
  }
  __stream = fopen(filename,pcVar2);
  if (__stream != (FILE *)0x0) {
    if ((flags & 2U) != 0) {
      setvbuf(__stream,(char *)0x0,2,0);
    }
    pcVar2 = fread_file((FILE *)__stream,flags,length);
    iVar1 = rpl_fclose((FILE *)__stream);
    if (iVar1 == 0) {
      return pcVar2;
    }
    if (pcVar2 != (char *)0x0) {
      if ((flags & 2U) != 0) {
        __explicit_bzero_chk(pcVar2,*length,0xffffffffffffffff);
      }
      rpl_free(pcVar2);
    }
  }
  return (char *)0x0;
}

