
void write_block(uintmax_t current_offset,size_t n_bytes,char *prev_block,char *curr_block)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ushort **ppuVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  ulong uVar10;
  
  if ((((abbreviate_duplicate_blocks != false) && (write_block::first == false)) &&
      (bytes_per_block == n_bytes)) && (iVar5 = memcmp(prev_block,curr_block,n_bytes), iVar5 == 0))
  {
    if (write_block::prev_pair_equal != false) {
      write_block::first = false;
      return;
    }
    puts("*");
    write_block::first = false;
    write_block::prev_pair_equal = true;
    return;
  }
  write_block::prev_pair_equal = false;
  if (n_specs != 0) {
    uVar7 = 0;
    do {
      iVar5 = width_bytes[spec[uVar7].size];
      uVar10 = bytes_per_block - n_bytes;
      iVar4 = (int)(bytes_per_block / (ulong)(long)iVar5);
      if (uVar7 == 0) {
        (*format_address)(current_offset,'\0');
      }
      else {
        __printf_chk(1,&DAT_0010c01c,address_pad_len,"");
      }
      iVar5 = (int)(uVar10 / (ulong)(long)iVar5);
      (*spec[uVar7].print_function)
                ((long)iVar4,(long)iVar5,curr_block,spec[uVar7].fmt_string,spec[uVar7].field_width,
                 spec[uVar7].pad_width);
      if (spec[uVar7].hexl_mode_trailer != false) {
        __printf_chk(1,&DAT_0010c01c,
                     (spec[uVar7].pad_width * iVar5) / iVar4 + iVar5 * spec[uVar7].field_width,"");
        fwrite_unlocked(&DAT_0010c05d,1,3,stdout);
        if (n_bytes != 0) {
          ppuVar6 = __ctype_b_loc();
          pbVar8 = (byte *)curr_block;
          do {
            bVar3 = *pbVar8;
            pbVar8 = pbVar8 + 1;
            uVar9 = (uint)bVar3;
            if ((*(byte *)((long)*ppuVar6 + (ulong)bVar3 * 2 + 1) & 0x40) == 0) {
              uVar9 = 0x2e;
              bVar3 = 0x2e;
            }
            pbVar2 = (byte *)stdout->_IO_write_ptr;
            if (pbVar2 < stdout->_IO_write_end) {
              stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
              *pbVar2 = bVar3;
            }
            else {
              __overflow(stdout,uVar9);
            }
          } while (pbVar8 != (byte *)(curr_block + n_bytes));
        }
        pcVar1 = stdout->_IO_write_ptr;
        if (pcVar1 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar1 + 1;
          *pcVar1 = '<';
        }
        else {
          __overflow(stdout,0x3c);
        }
      }
      pcVar1 = stdout->_IO_write_ptr;
      if (pcVar1 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar1 + 1;
        *pcVar1 = '\n';
      }
      else {
        __overflow(stdout,10);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < n_specs);
  }
  write_block::first = false;
  return;
}

