
int get_space(FILE *f,int c)

{
  int iVar1;
  byte *pbVar2;
  
  do {
    while (c != 0x20) {
      if (c != 9) {
        return c;
      }
      tabs = true;
      iVar1 = in_column + 7;
      if (-1 < in_column) {
        iVar1 = in_column;
      }
      in_column = (iVar1 >> 3) * 8 + 8;
      pbVar2 = (byte *)f->_IO_read_ptr;
      if (pbVar2 < f->_IO_read_end) goto LAB_00102ea4;
LAB_00102ec5:
      c = __uflow((_IO_FILE *)f);
    }
    in_column = in_column + 1;
    pbVar2 = (byte *)f->_IO_read_ptr;
    if (f->_IO_read_end <= pbVar2) goto LAB_00102ec5;
LAB_00102ea4:
    f->_IO_read_ptr = (char *)(pbVar2 + 1);
    c = (int)*pbVar2;
  } while( true );
}

