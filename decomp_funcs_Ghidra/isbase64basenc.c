
_Bool isbase64(char ch)

{
  return (_Bool)((byte)~b64[(byte)ch] >> 7);
}

