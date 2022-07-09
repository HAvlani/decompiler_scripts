
_Bool isbase32hex(char ch)

{
  return (byte)(ch - 0x30U) < 10 || (byte)(ch + 0xbfU) < 0x16;
}

