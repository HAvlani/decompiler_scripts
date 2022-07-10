
int u8_uctomb_aux(uint8_t *s,ucs4_t uc,ptrdiff_t n)

{
  byte bVar1;
  int iVar2;
  
  if (uc < 0x80) {
LAB_001065e0:
    iVar2 = -2;
  }
  else {
    if (uc < 0x800) {
      if (n < 2) goto LAB_001065e0;
      iVar2 = 2;
    }
    else {
      if (uc < 0x10000) {
        if (uc - 0xd800 < 0x800) {
          return -1;
        }
        if (n < 3) goto LAB_001065e0;
        iVar2 = 3;
      }
      else {
        if (0x10ffff < uc) {
          return -1;
        }
        if (n < 4) goto LAB_001065e0;
        iVar2 = 4;
        bVar1 = (byte)uc;
        uc = uc >> 6 | 0x10000;
        s[3] = bVar1 & 0x3f | 0x80;
      }
      bVar1 = (byte)uc;
      uc = uc >> 6 | 0x800;
      s[2] = bVar1 & 0x3f | 0x80;
    }
    *s = (byte)(uc >> 6) | 0xc0;
    s[1] = (byte)uc & 0x3f | 0x80;
  }
  return iVar2;
}

