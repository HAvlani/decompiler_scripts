
void * memchr2(void *s,int c1_in,int c2_in,size_t n)

{
  void *pvVar1;
  ulong *puVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  char cVar6;
  ulong uVar7;
  ulong uVar8;
  
  cVar3 = (char)c2_in;
  cVar6 = (char)c1_in;
  if (cVar6 == cVar3) {
    pvVar1 = (void *)(*(code *)PTR_memchr_0010cee0)(s,c1_in & 0xff,n);
    return pvVar1;
  }
  if (n == 0) {
    n = 0;
  }
  else {
    puVar2 = (ulong *)((long)s + n);
    uVar4 = (ulong)s & 7;
    while (uVar4 != 0) {
                    /* WARNING: Load size is inaccurate */
      if ((*s == cVar3) || (*s == cVar6)) {
        return (ulong *)s;
      }
      s = (void *)((long)s + 1);
      n = (long)puVar2 - (long)s;
      if ((ulong *)s == puVar2) {
        n = 0;
        break;
      }
      uVar4 = (ulong)s & 7;
    }
  }
  uVar7 = (ulong)(int)(c1_in & 0xffU | (c1_in & 0xffU) << 8);
  uVar4 = (ulong)(int)(c2_in & 0xffU | (c2_in & 0xffU) << 8);
  uVar7 = uVar7 | uVar7 << 0x10;
  uVar4 = uVar4 | uVar4 << 0x10;
  for (; 7 < n; n = n - 8) {
                    /* WARNING: Load size is inaccurate */
    uVar5 = *s ^ (uVar4 << 0x20 | uVar4);
    uVar8 = *s ^ (uVar7 << 0x20 | uVar7);
    if (((~uVar5 & uVar5 + 0xfefefefefefefeff | uVar8 + 0xfefefefefefefeff & ~uVar8) &
        0x8080808080808080) != 0) goto LAB_001046de;
    s = (void *)((long)s + 8);
  }
  if (n != 0) {
LAB_001046de:
    puVar2 = (ulong *)(n + (long)s);
    do {
                    /* WARNING: Load size is inaccurate */
      if ((*s == cVar6) || (*s == cVar3)) {
        return s;
      }
      s = (void *)((long)s + 1);
    } while ((ulong *)s != puVar2);
  }
  return (void *)0x0;
}

