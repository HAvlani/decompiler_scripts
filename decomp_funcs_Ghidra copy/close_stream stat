
int close_stream(FILE *stream)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  
  lVar3 = __fpending();
  uVar1 = stream->_flags;
  iVar2 = rpl_fclose(stream);
  if ((uVar1 & 0x20) == 0) {
    if (iVar2 == 0) {
      return 0;
    }
    if (lVar3 == 0) {
      piVar4 = __errno_location();
      return -(uint)(*piVar4 != 9);
    }
  }
  else if (iVar2 == 0) {
    piVar4 = __errno_location();
    *piVar4 = 0;
    return -1;
  }
  return -1;
}

