
_Bool digest_file(char *filename,uchar *bin_result,_Bool *missing,uintmax_t *length,int *binary)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  FILE *__stream;
  undefined8 uVar5;
  uint uVar6;
  _Bool _Var7;
  
  uVar6 = (byte)*filename - 0x2d;
  if (uVar6 == 0) {
    uVar6 = (uint)(byte)filename[1];
  }
  *missing = false;
  if (uVar6 == 0) {
    have_read_stdin = true;
    __stream = stdin;
  }
  else {
    __stream = (FILE *)fopen_safer(filename,"r");
    if (__stream == (FILE *)0x0) {
      piVar4 = __errno_location();
      _Var7 = ignore_missing;
      if ((ignore_missing != false) && (*piVar4 == 2)) {
        *missing = true;
        return _Var7;
      }
      uVar5 = quotearg_n_style_colon(0,3,filename);
      error(0,*piVar4,&DAT_0011e11b,uVar5);
      return false;
    }
  }
  fadvise((FILE *)__stream,FADVISE_SEQUENTIAL);
  uVar3 = (ulong)cksum_algorithm;
  if (cksum_algorithm == blake2b) {
    *length = digest_length >> 3;
  }
  iVar1 = (*cksumfns[uVar3])((FILE *)__stream,bin_result,length);
  if (iVar1 == 0) {
    if (uVar6 == 0) {
      clearerr_unlocked(__stream);
      return true;
    }
    iVar1 = rpl_fclose((FILE *)__stream);
    if (iVar1 != 0) {
      piVar4 = __errno_location();
LAB_001042bd:
      iVar1 = *piVar4;
      goto LAB_001041f9;
    }
LAB_00104202:
    _Var7 = true;
  }
  else {
    piVar4 = __errno_location();
    iVar1 = *piVar4;
    if (uVar6 == 0) {
      clearerr_unlocked(__stream);
LAB_001041f9:
      if (iVar1 == 0) goto LAB_00104202;
    }
    else {
      iVar2 = rpl_fclose((FILE *)__stream);
      if (iVar2 == 0) goto LAB_001041f9;
      if (iVar1 == 0) goto LAB_001042bd;
    }
    _Var7 = false;
    uVar5 = quotearg_n_style_colon(0,3,filename);
    error(0,iVar1,&DAT_0011e11b,uVar5);
  }
  return _Var7;
}

