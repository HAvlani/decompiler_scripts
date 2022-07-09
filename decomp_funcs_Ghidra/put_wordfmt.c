
/* WARNING: Unknown calling convention yet parameter storage is locked */

void put_word(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int *in_RSI;
  byte *in_RDI;
  
  iVar2 = *in_RSI;
  if (iVar2 != 0) {
    pbVar3 = in_RDI;
    do {
      pbVar4 = pbVar3 + 1;
      bVar1 = *pbVar3;
      pbVar3 = (byte *)stdout->_IO_write_ptr;
      if (pbVar3 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = (char *)(pbVar3 + 1);
        *pbVar3 = bVar1;
      }
      else {
        __overflow(stdout,(uint)bVar1);
      }
      pbVar3 = pbVar4;
    } while (pbVar4 != in_RDI + (ulong)(iVar2 - 1) + 1);
    out_column = out_column + *in_RSI;
    return;
  }
  return;
}

