
_Bool cut_file(char *file,anon_subr_void_FILE_ptr *cut_stream)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  FILE *__stream;
  
  uVar1 = (byte)*file - 0x2d;
  if (uVar1 == 0) {
    uVar1 = (uint)(byte)file[1];
  }
  piVar4 = __errno_location();
  if (uVar1 == 0) {
    have_read_stdin = true;
    __stream = stdin;
  }
  else {
    __stream = fopen(file,"r");
    if (__stream == (FILE *)0x0) {
      uVar5 = quotearg_n_style_colon(0,3,file);
      error(0,*piVar4,"%s",uVar5);
      return false;
    }
  }
  fadvise((FILE *)__stream,FADVISE_SEQUENTIAL);
  (*cut_stream)((FILE *)__stream);
  iVar2 = *piVar4;
  if ((*(byte *)&__stream->_flags & 0x20) == 0) {
    iVar2 = 0;
  }
  if ((*file == '-') && (file[1] == '\0')) {
    clearerr_unlocked(__stream);
  }
  else {
    iVar3 = rpl_fclose((FILE *)__stream);
    if (iVar3 == -1) {
      iVar2 = *piVar4;
    }
  }
  if (iVar2 == 0) {
    return true;
  }
  uVar5 = quotearg_n_style_colon(0,3,file);
  error(0,iVar2,"%s",uVar5);
  return false;
}

