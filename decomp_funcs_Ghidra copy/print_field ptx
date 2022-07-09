
void print_field(BLOCK field)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  byte *in_RSI;
  byte *in_RDI;
  
  if (in_RSI <= in_RDI) {
    return;
  }
  do {
    bVar1 = *in_RDI;
    if (edited_flag[bVar1] == '\0') {
LAB_001065f9:
      pbVar3 = (byte *)stdout->_IO_write_ptr;
      if (pbVar3 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = (char *)(pbVar3 + 1);
        *pbVar3 = bVar1;
      }
      else {
        __overflow(stdout,(uint)bVar1);
      }
    }
    else if (bVar1 == 0x5c) {
      fwrite_unlocked("\\backslash{}",1,0xc,stdout);
    }
    else if ((char)bVar1 < ']') {
      if (bVar1 == 0x22) {
        pcVar2 = stdout->_IO_write_ptr;
        if (pcVar2 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar2 + 1;
          *pcVar2 = '\"';
        }
        else {
          __overflow(stdout,0x22);
        }
        pcVar2 = stdout->_IO_write_ptr;
        if (pcVar2 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar2 + 1;
          *pcVar2 = '\"';
        }
        else {
          __overflow(stdout,0x22);
        }
      }
      else {
        if ((byte)(bVar1 - 0x23) < 4) {
LAB_00106637:
          pcVar2 = stdout->_IO_write_ptr;
          if (pcVar2 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar2 + 1;
            *pcVar2 = '\\';
          }
          else {
            __overflow(stdout,0x5c);
          }
          goto LAB_001065f9;
        }
LAB_0010666c:
        pcVar2 = stdout->_IO_write_ptr;
        if (pcVar2 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar2 + 1;
          *pcVar2 = ' ';
        }
        else {
          __overflow(stdout,0x20);
        }
      }
    }
    else {
      if ((bVar1 + 0x85 & 0xfd) != 0) {
        if (bVar1 == 0x5f) goto LAB_00106637;
        goto LAB_0010666c;
      }
      __printf_chk(1);
    }
    in_RDI = in_RDI + 1;
    if (in_RSI == in_RDI) {
      return;
    }
  } while( true );
}

