
void print_current_files(void)

{
  fileinfo *pfVar1;
  long lVar2;
  char *pcVar3;
  column_info *pcVar4;
  size_t sVar5;
  size_t sVar6;
  size_t sVar7;
  ulong uVar8;
  ulong uVar9;
  size_t sVar10;
  char cVar11;
  size_t to;
  long lVar12;
  ulong local_48;
  
  switch(format) {
  case long_format:
    uVar9 = 0;
    if (cwd_n_used == 0) {
      return;
    }
    do {
      set_normal_color();
      uVar9 = uVar9 + 1;
      print_long_format();
      dired_outbyte(eolbyte);
    } while (uVar9 < cwd_n_used);
    return;
  case one_per_line:
    uVar9 = 0;
    if (cwd_n_used != 0) {
      do {
        print_file_name_and_frills((fileinfo *)sorted_file[uVar9],0);
        cVar11 = eolbyte;
        pcVar3 = stdout->_IO_write_ptr;
        if (pcVar3 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar3 + 1;
          *pcVar3 = cVar11;
        }
        else {
          __overflow(stdout,(uint)(byte)eolbyte);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < cwd_n_used);
    }
    return;
  case many_per_line:
    if (line_length != 0) {
      sVar7 = calculate_columns(true);
      pcVar4 = column_info;
      local_48 = 0;
      uVar9 = (ulong)(cwd_n_used % sVar7 != 0) + cwd_n_used / sVar7;
      if (uVar9 == 0) {
        return;
      }
      do {
        lVar12 = 0;
        uVar8 = local_48;
        sVar5 = 0;
        while( true ) {
          pfVar1 = (fileinfo *)sorted_file[uVar8];
          sVar6 = length_of_file_name_and_frills(pfVar1);
          lVar2 = *(long *)((long)pcVar4[sVar7 - 1].col_arr + lVar12);
          lVar12 = lVar12 + 8;
          print_file_name_and_frills(pfVar1,sVar5);
          cVar11 = eolbyte;
          uVar8 = uVar8 + uVar9;
          if (cwd_n_used <= uVar8) break;
          sVar10 = lVar2 + sVar5;
          indent(sVar6 + sVar5,sVar10);
          sVar5 = sVar10;
        }
        pcVar3 = stdout->_IO_write_ptr;
        if (pcVar3 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar3 + 1;
          *pcVar3 = cVar11;
        }
        else {
          __overflow(stdout,(uint)(byte)eolbyte);
        }
        local_48 = local_48 + 1;
      } while (uVar9 != local_48);
      return;
    }
    break;
  case horizontal:
    if (line_length != 0) {
      sVar5 = calculate_columns(false);
      pcVar4 = column_info;
      pfVar1 = (fileinfo *)*sorted_file;
      sVar6 = length_of_file_name_and_frills(pfVar1);
      sVar7 = *pcVar4[sVar5 - 1].col_arr;
      print_file_name_and_frills(pfVar1,0);
      if (1 < cwd_n_used) {
        uVar9 = 1;
        sVar10 = 0;
        do {
          cVar11 = eolbyte;
          uVar8 = uVar9 % sVar5;
          if (uVar8 == 0) {
            pcVar3 = stdout->_IO_write_ptr;
            if (pcVar3 < stdout->_IO_write_end) {
              to = 0;
              stdout->_IO_write_ptr = pcVar3 + 1;
              *pcVar3 = cVar11;
            }
            else {
              __overflow(stdout,(uint)(byte)eolbyte);
              to = 0;
            }
          }
          else {
            to = sVar7 + sVar10;
            indent(sVar10 + sVar6,to);
          }
          pfVar1 = (fileinfo *)sorted_file[uVar9];
          uVar9 = uVar9 + 1;
          print_file_name_and_frills(pfVar1,to);
          sVar6 = length_of_file_name_and_frills(pfVar1);
          sVar7 = pcVar4[sVar5 - 1].col_arr[uVar8];
          sVar10 = to;
        } while (uVar9 < cwd_n_used);
      }
      cVar11 = eolbyte;
      pcVar3 = stdout->_IO_write_ptr;
      if (pcVar3 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar3 + 1;
        *pcVar3 = cVar11;
        return;
      }
      __overflow(stdout,(uint)(byte)eolbyte);
      return;
    }
    break;
  case with_commas:
    cVar11 = ',';
    goto LAB_0010aa45;
  default:
    return;
  }
  cVar11 = ' ';
LAB_0010aa45:
  print_with_separator(cVar11);
  return;
}

