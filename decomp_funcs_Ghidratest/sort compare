
int compare(line *a,line *b)

{
  ulong uVar1;
  size_t s1size;
  size_t s2size;
  int iVar2;
  uint uVar3;
  ulong __n;
  ulong uVar4;
  
  if (keylist != (keyfield *)0x0) {
    iVar2 = keycompare(a,b);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (unique != false) {
      return 0;
    }
    if (stable != false) {
      return 0;
    }
  }
  s1size = a->length;
  s2size = b->length;
  uVar1 = s2size - 1;
  uVar4 = s1size - 1;
  if (uVar4 == 0) {
    uVar3 = -(uint)(uVar1 != 0);
  }
  else {
    uVar3 = 1;
    if (uVar1 != 0) {
      if (hard_LC_COLLATE == false) {
        __n = uVar1;
        if (uVar4 <= uVar1) {
          __n = uVar4;
        }
        uVar3 = memcmp(a->text,b->text,__n);
        if ((uVar3 == 0) && (uVar3 = 0xffffffff, uVar1 <= uVar4)) {
          uVar3 = (uint)(s1size != s2size);
        }
      }
      else {
        uVar3 = xmemcoll0(a->text,s1size,b->text,s2size);
      }
    }
  }
  if (reverse != false) {
    uVar3 = -uVar3;
  }
  return uVar3;
}

