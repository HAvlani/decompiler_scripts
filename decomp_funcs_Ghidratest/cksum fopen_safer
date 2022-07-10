
FILE * fopen_safer(char *file,char *mode)

{
  uint fd;
  int iVar1;
  int iVar2;
  FILE *__stream;
  FILE *pFVar3;
  int *piVar4;
  
  __stream = fopen(file,mode);
  pFVar3 = __stream;
  if ((__stream != (FILE *)0x0) && (fd = fileno(__stream), fd < 3)) {
    iVar1 = dup_safer(fd);
    if (iVar1 < 0) {
      piVar4 = __errno_location();
      pFVar3 = (FILE *)0x0;
      iVar1 = *piVar4;
      rpl_fclose((FILE *)__stream);
      *piVar4 = iVar1;
    }
    else {
      iVar2 = rpl_fclose((FILE *)__stream);
      if ((iVar2 == 0) && (pFVar3 = fdopen(iVar1,mode), pFVar3 != (FILE *)0x0)) {
        return (FILE *)pFVar3;
      }
      piVar4 = __errno_location();
      iVar2 = *piVar4;
      close(iVar1);
      *piVar4 = iVar2;
      pFVar3 = (FILE *)0x0;
    }
  }
  return (FILE *)pFVar3;
}

