
void print_filename(char *file,_Bool escape)

{
  byte bVar1;
  byte *pbVar2;
  
  if (escape == false) {
    fputs_unlocked(file,stdout);
    return;
  }
  bVar1 = *file;
  do {
    while( true ) {
      if (bVar1 == 0) {
        return;
      }
      if (bVar1 != 0xd) break;
      fwrite_unlocked(&DAT_00109007,1,2,stdout);
LAB_0010399b:
      bVar1 = ((byte *)file)[1];
      file = (char *)((byte *)file + 1);
    }
    if (bVar1 != 0x5c) {
      if (bVar1 == 10) {
        fwrite_unlocked(&DAT_00109004,1,2,stdout);
      }
      else {
        pbVar2 = (byte *)stdout->_IO_write_ptr;
        if (pbVar2 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
          *pbVar2 = bVar1;
        }
        else {
          __overflow(stdout,(uint)bVar1);
        }
      }
      goto LAB_0010399b;
    }
    file = (char *)((byte *)file + 1);
    fwrite_unlocked(&DAT_0010900a,1,2,stdout);
    bVar1 = *file;
  } while( true );
}
