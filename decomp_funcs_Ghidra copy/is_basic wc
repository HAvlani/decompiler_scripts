
_Bool is_basic(char c)

{
  return (_Bool)((byte)(*(uint *)(is_basic_table + (ulong)((byte)c >> 5) * 4) >> (c & 0x1fU)) & 1);
}

