
void * x2nrealloc(void *p,size_t *pn,size_t s)

{
  ulong uVar1;
  void *pvVar2;
  ulong n;
  bool bVar3;
  
  n = *pn;
  if (p == (void *)0x0) {
    if (n == 0) {
      n = (ulong)(0x80 < s) + SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x80)) / ZEXT816(s),0);
    }
  }
  else {
    uVar1 = (n >> 1) + 1;
    bVar3 = CARRY8(n,uVar1);
    n = n + uVar1;
    if (bVar3) {
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
  }
  pvVar2 = xreallocarray(p,n,s);
  *pn = n;
  return pvVar2;
}

