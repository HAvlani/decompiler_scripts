
uintmax_t powm2(uintmax_t *r1m,uintmax_t *bp,uintmax_t *ep,uintmax_t *np,uintmax_t ni,uintmax_t *one
               )

{
  uintmax_t m0;
  uintmax_t m1;
  uintmax_t b0;
  int iVar1;
  ulong uVar2;
  uintmax_t uVar3;
  uintmax_t b1;
  uintmax_t local_60;
  uintmax_t local_58;
  
  local_58 = *one;
  local_60 = one[1];
  b0 = *bp;
  b1 = bp[1];
  m0 = *np;
  m1 = np[1];
  iVar1 = 0x40;
  uVar3 = *ep;
  do {
    if ((uVar3 & 1) != 0) {
      local_58 = mulredc2(r1m,local_60,local_58,b1,b0,m1,m0,ni);
      local_60 = *r1m;
    }
    uVar3 = uVar3 >> 1;
    b0 = mulredc2(r1m,b1,b0,b1,b0,m1,m0,ni);
    b1 = *r1m;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  for (uVar2 = ep[1]; uVar2 != 0; uVar2 = uVar2 >> 1) {
    if ((uVar2 & 1) != 0) {
      local_58 = mulredc2(r1m,local_60,local_58,b1,b0,m1,m0,ni);
      local_60 = *r1m;
    }
    b0 = mulredc2(r1m,b1,b0,b1,b0,m1,m0,ni);
    b1 = *r1m;
  }
  *r1m = local_60;
  return local_58;
}

