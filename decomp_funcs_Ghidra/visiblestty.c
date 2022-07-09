
char * visible(cc_t ch)

{
  undefined *puVar1;
  
  if (ch < 0x20) {
    puVar1 = buf_7649 + 2;
    buf_7649._0_2_ = CONCAT11(ch + '@',0x5e);
  }
  else {
    if (ch < 0x7f) {
      buf_7649._0_2_ = (ushort)ch;
      return buf_7649;
    }
    if (ch == '\x7f') {
      puVar1 = buf_7649 + 2;
      buf_7649._0_2_ = 0x3f5e;
    }
    else {
      buf_7649._0_2_ = 0x2d4d;
      if (ch < 0xa0) {
        puVar1 = buf_7649 + 4;
        buf_7649._2_2_ = CONCAT11(ch + 0xc0,0x5e);
      }
      else if (ch == 0xff) {
        buf_7649._2_2_ = 0x3f5e;
        puVar1 = buf_7649 + 4;
      }
      else {
        puVar1 = buf_7649 + 3;
        buf_7649._2_2_ = buf_7649._2_2_ & 0xff00 | (ushort)(byte)(ch + 0x80);
      }
    }
  }
  *puVar1 = 0;
  return buf_7649;
}

