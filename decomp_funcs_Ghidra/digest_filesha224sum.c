
_Bool digest_file(char *filename,uchar *bin_result,_Bool *missing,uintmax_t *length,int *binary)

{
  FILE *__stream;
  _Bool _Var1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  FILE *fp;
  
  uVar2 = (byte)*filename - 0x2d;
  if (uVar2 == 0) {
    uVar2 = (uint)(byte)filename[1];
  }
  *missing = false;
  __stream = stdin;
  if (uVar2 == 0) {
    have_read_stdin = true;
    fadvise((FILE *)stdin,FADVISE_SEQUENTIAL);
    iVar3 = sha224_stream((FILE *)__stream,bin_result);
    if (iVar3 == 0) {
      clearerr_unlocked(__stream);
      return true;
    }
    piVar5 = __errno_location();
    iVar3 = *piVar5;
    clearerr_unlocked(__stream);
  }
  else {
    fp = fopen_safer(filename,"r");
    if (fp == (FILE *)0x0) {
      piVar5 = __errno_location();
      _Var1 = ignore_missing;
      if ((ignore_missing != false) && (*piVar5 == 2)) {
        *missing = true;
        return _Var1;
      }
      uVar6 = quotearg_n_style_colon(0,3,filename);
      error(0,*piVar5,"%s",uVar6);
      return false;
    }
    fadvise(fp,FADVISE_SEQUENTIAL);
    iVar3 = sha224_stream(fp,bin_result);
    if (iVar3 == 0) {
      iVar3 = rpl_fclose(fp);
      if (iVar3 == 0) {
        return true;
      }
      piVar5 = __errno_location();
      iVar3 = *piVar5;
    }
    else {
      piVar5 = __errno_location();
      iVar3 = *piVar5;
      iVar4 = rpl_fclose(fp);
      if (iVar4 != 0) {
        if (iVar3 != 0) goto LAB_00103af3;
        iVar3 = *piVar5;
      }
    }
  }
  if (iVar3 == 0) {
    return true;
  }
LAB_00103af3:
  uVar6 = quotearg_n_style_colon(0,3,filename);
  error(0,iVar3,"%s",uVar6);
  return false;
}

