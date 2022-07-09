
_Bool isbase16(char ch)

{
  return (byte)(ch - 0x30U) < 10 || (byte)(ch + 0xbfU) < 6;
}

