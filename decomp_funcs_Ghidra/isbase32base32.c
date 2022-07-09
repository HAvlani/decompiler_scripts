
_Bool isbase32(char ch)

{
  return (_Bool)((byte)~b32[(byte)ch] >> 7);
}

