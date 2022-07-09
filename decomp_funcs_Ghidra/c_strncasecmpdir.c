
int c_strncasecmp(char *s1,char *s2,size_t n)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  
  if ((s1 != s2) && (n != 0)) {
    lVar3 = 0;
    do {
      bVar4 = s1[lVar3];
      uVar1 = (uint)bVar4;
      if (bVar4 - 0x41 < 0x1a) {
        uVar1 = uVar1 + 0x20;
        bVar4 = bVar4 + 0x20;
      }
      bVar2 = s2[lVar3];
      uVar5 = (uint)bVar2;
      if (bVar2 - 0x41 < 0x1a) {
        uVar5 = bVar2 + 0x20;
        bVar2 = bVar2 + 0x20;
      }
    } while (((lVar3 != n - 1) && (uVar1 != 0)) && (lVar3 = lVar3 + 1, bVar4 == bVar2));
    return uVar1 - uVar5;
  }
  return 0;
}

