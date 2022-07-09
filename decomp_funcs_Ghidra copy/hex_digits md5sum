
_Bool hex_digits(uchar *s)

{
  size_t sVar1;
  ushort **ppuVar2;
  ulong uVar3;
  
  sVar1 = digest_hex_bytes;
  if (digest_hex_bytes != 0) {
    ppuVar2 = __ctype_b_loc();
    uVar3 = 0;
    do {
      if ((*(byte *)((long)*ppuVar2 + (ulong)*s * 2 + 1) & 0x10) == 0) {
        return false;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
      s = s + 1;
    } while (uVar3 < sVar1);
  }
  return *s == 0;
}

