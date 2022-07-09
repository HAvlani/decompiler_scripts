
size_t adjust_column(size_t column,char c)

{
  size_t sVar1;
  
  if (count_bytes == false) {
    if (c == '\b') {
      sVar1 = column - 1;
      if (column == 0) {
        sVar1 = 0;
      }
      return sVar1;
    }
    if (c == '\r') {
      return 0;
    }
    if (c == '\t') {
      return (column & 0xfffffffffffffff8) + 8;
    }
  }
  return column + 1;
}

