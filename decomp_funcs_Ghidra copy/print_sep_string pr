
void print_sep_string(void)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  
  pbVar6 = (byte *)col_sep_string;
  uVar7 = col_sep_length;
  if (separators_not_printed < 1) {
    if (0 < spaces_not_printed) {
      print_white_space();
      return;
    }
    return;
  }
  do {
    uVar1 = uVar7 - 1;
    bVar3 = 0 < (int)uVar7;
    pbVar4 = pbVar6;
    uVar7 = uVar1;
    if (bVar3) {
      do {
        while( true ) {
          bVar2 = *pbVar4;
          pbVar5 = pbVar4 + 1;
          if (bVar2 != 0x20) break;
          spaces_not_printed = spaces_not_printed + 1;
          pbVar4 = pbVar5;
          if (pbVar6 + (ulong)uVar1 + 1 == pbVar5) goto LAB_00103c26;
        }
        if (0 < spaces_not_printed) {
          print_white_space();
          bVar2 = *pbVar4;
        }
        pbVar4 = (byte *)stdout->_IO_write_ptr;
        if (pbVar4 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = (char *)(pbVar4 + 1);
          *pbVar4 = bVar2;
        }
        else {
          __overflow(stdout,(uint)bVar2);
        }
        output_position = output_position + 1;
        pbVar4 = pbVar5;
      } while (pbVar6 + (ulong)uVar1 + 1 != pbVar5);
LAB_00103c26:
      pbVar6 = pbVar6 + (ulong)uVar1 + 1;
      uVar7 = 0xffffffff;
    }
    if (0 < spaces_not_printed) {
      print_white_space();
    }
    separators_not_printed = separators_not_printed + -1;
    if (separators_not_printed < 1) {
      return;
    }
  } while( true );
}

