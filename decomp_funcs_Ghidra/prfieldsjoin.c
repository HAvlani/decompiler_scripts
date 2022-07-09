
void prfields(line *line,size_t join_field,size_t autocount)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  char cVar5;
  size_t local_48;
  
  local_48 = autocount;
  if (autoformat == false) {
    local_48 = line->nfields;
  }
  iVar2 = tab;
  if (tab < 0) {
    iVar2 = 0x20;
  }
  cVar5 = (char)iVar2;
  uVar4 = join_field;
  if (local_48 <= join_field) {
    uVar4 = local_48;
  }
  sVar3 = 0;
  if (uVar4 != 0) {
    do {
      pcVar1 = stdout->_IO_write_ptr;
      if (pcVar1 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar1 + 1;
        *pcVar1 = cVar5;
      }
      else {
        __overflow(stdout,(int)cVar5 & 0xff);
      }
      sVar3 = sVar3 + 1;
      prfield();
    } while (sVar3 != uVar4);
  }
  uVar4 = join_field + 1;
  if (uVar4 < local_48) {
    do {
      pcVar1 = stdout->_IO_write_ptr;
      if (pcVar1 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar1 + 1;
        *pcVar1 = cVar5;
      }
      else {
        __overflow(stdout,(int)cVar5 & 0xff);
      }
      uVar4 = uVar4 + 1;
      prfield();
    } while (local_48 != uVar4);
  }
  return;
}

