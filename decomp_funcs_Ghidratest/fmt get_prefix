
int get_prefix(FILE *f)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  pbVar2 = (byte *)f->_IO_read_ptr;
  in_column = 0;
  if (pbVar2 < f->_IO_read_end) {
    f->_IO_read_ptr = (char *)(pbVar2 + 1);
    uVar3 = (uint)*pbVar2;
  }
  else {
    uVar3 = __uflow((_IO_FILE *)f);
  }
  uVar3 = get_space(f,uVar3);
  if (prefix_length == 0) {
    next_prefix_indent = prefix_lead_space;
    if (in_column <= prefix_lead_space) {
      next_prefix_indent = in_column;
    }
  }
  else {
    bVar1 = *prefix;
    next_prefix_indent = in_column;
    pcVar5 = prefix;
    while( true ) {
      if (bVar1 == 0) {
        iVar4 = get_space(f,uVar3);
        return iVar4;
      }
      if (uVar3 != bVar1) break;
      in_column = in_column + 1;
      pbVar2 = (byte *)f->_IO_read_ptr;
      if (pbVar2 < f->_IO_read_end) {
        f->_IO_read_ptr = (char *)(pbVar2 + 1);
        uVar3 = (uint)*pbVar2;
      }
      else {
        uVar3 = __uflow((_IO_FILE *)f);
      }
      bVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 1;
    }
  }
  return uVar3;
}

