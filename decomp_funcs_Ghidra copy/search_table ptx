
/* WARNING: Unknown calling convention yet parameter storage is locked */

_Bool search_table(void)

{
  int iVar1;
  long in_RDX;
  long lVar2;
  long lVar3;
  long in_RSI;
  void *in_RDI;
  long lVar4;
  
  lVar2 = in_RDX + -1;
  if (lVar2 < 0) {
    return false;
  }
  lVar4 = 0;
  do {
    while( true ) {
      lVar3 = lVar4 + lVar2 >> 1;
      iVar1 = compare_words(in_RDI,(void *)(lVar3 * 0x10 + in_RSI));
      if (-1 < iVar1) break;
      lVar2 = lVar3 + -1;
      if (lVar2 < lVar4) {
        return false;
      }
    }
    if (iVar1 == 0) {
      return true;
    }
    lVar4 = lVar3 + 1;
  } while (lVar4 <= lVar2);
  return false;
}

