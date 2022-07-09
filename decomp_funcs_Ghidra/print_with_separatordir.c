
void print_with_separator(char sep)

{
  ulong uVar1;
  fileinfo *f;
  char *pcVar2;
  byte *pbVar3;
  char cVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  ulong start_col;
  
  if (cwd_n_used != 0) {
    uVar7 = 0;
    start_col = 0;
    do {
      f = (fileinfo *)sorted_file[uVar7];
      if (line_length == 0) {
        uVar5 = start_col;
        if (uVar7 != 0) {
          uVar1 = start_col + 2;
LAB_00109930:
          uVar5 = uVar1;
          start_col = start_col + 2;
          bVar6 = 0x20;
          goto LAB_0010993a;
        }
      }
      else {
        uVar5 = length_of_file_name_and_frills(f);
        if (uVar7 == 0) {
          uVar5 = start_col + uVar5;
        }
        else {
          uVar1 = uVar5 + start_col + 2;
          if ((line_length == 0) || ((uVar1 < line_length && (start_col <= -uVar5 - 3))))
          goto LAB_00109930;
          start_col = 0;
          bVar6 = eolbyte;
LAB_0010993a:
          pcVar2 = stdout->_IO_write_ptr;
          if (pcVar2 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar2 + 1;
            *pcVar2 = sep;
          }
          else {
            __overflow(stdout,(int)sep);
          }
          pbVar3 = (byte *)stdout->_IO_write_ptr;
          if (pbVar3 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = (char *)(pbVar3 + 1);
            *pbVar3 = bVar6;
          }
          else {
            __overflow(stdout,(uint)bVar6);
          }
        }
      }
      uVar7 = uVar7 + 1;
      print_file_name_and_frills(f,start_col);
      start_col = uVar5;
    } while (uVar7 < cwd_n_used);
  }
  cVar4 = eolbyte;
  pcVar2 = stdout->_IO_write_ptr;
  if (stdout->_IO_write_end <= pcVar2) {
    __overflow(stdout,(uint)(byte)eolbyte);
    return;
  }
  stdout->_IO_write_ptr = pcVar2 + 1;
  *pcVar2 = cVar4;
  return;
}

