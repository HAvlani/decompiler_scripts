
void put_space(int space)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = out_column + space;
  if (tabs != false) {
    uVar3 = uVar1 + 7;
    if (-1 < (int)uVar1) {
      uVar3 = uVar1;
    }
    if ((out_column + 1 < (int)(uVar3 & 0xfffffff8)) && (out_column < (int)(uVar3 & 0xfffffff8))) {
      do {
        pcVar2 = stdout->_IO_write_ptr;
        if (pcVar2 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar2 + 1;
          *pcVar2 = '\t';
        }
        else {
          __overflow(stdout,9);
        }
        iVar4 = out_column + 7;
        if (-1 < out_column) {
          iVar4 = out_column;
        }
        iVar4 = (iVar4 >> 3) + 1;
        out_column = iVar4 * 8;
      } while (iVar4 < (int)uVar3 >> 3);
    }
  }
  for (; out_column < (int)uVar1; out_column = out_column + 1) {
    pcVar2 = stdout->_IO_write_ptr;
    if (pcVar2 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar2 + 1;
      *pcVar2 = ' ';
    }
    else {
      __overflow(stdout,0x20);
    }
  }
  return;
}

