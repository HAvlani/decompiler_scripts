
int c_strcasecmp(char *s1,char *s2)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  
  if (s1 == s2) {
    return 0;
  }
  lVar3 = 0;
  do {
    uVar1 = (uint)(byte)s1[lVar3];
    bVar2 = s2[lVar3];
    uVar4 = (uint)bVar2;
    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 + 0x20;
      if (uVar4 - 0x41 < 0x1a) goto LAB_0011381d;
    }
    else {
      if (uVar4 - 0x41 < 0x1a) {
LAB_0011381d:
        uVar4 = uVar4 + 0x20;
        bVar2 = bVar2 + 0x20;
      }
      if (uVar1 == 0) break;
    }
    lVar3 = lVar3 + 1;
  } while ((byte)uVar1 == bVar2);
  return uVar1 - uVar4;
}

