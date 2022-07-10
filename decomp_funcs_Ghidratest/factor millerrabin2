
_Bool millerrabin2(uintmax_t *np,uintmax_t ni,uintmax_t *bp,uintmax_t *qp,uint k,uintmax_t *one)

{
  ulong uVar1;
  uintmax_t a0;
  ulong m0;
  uintmax_t uVar2;
  uintmax_t m1;
  uintmax_t uVar3;
  uint uVar4;
  long in_FS_OFFSET;
  bool local_49;
  uintmax_t r1m;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  a0 = powm2(&r1m,bp,qp,np,ni,one);
  uVar1 = *one;
  if ((uVar1 != a0) || (one[1] != r1m)) {
    m1 = np[1];
    m0 = *np;
    uVar2 = m0 - uVar1;
    uVar3 = (m1 - one[1]) - (ulong)(m0 < uVar1);
    local_49 = a0 == uVar2 && r1m == uVar3;
    if (a0 != uVar2 || r1m != uVar3) {
      uVar4 = 1;
      if (1 < k) {
        while( true ) {
          a0 = mulredc2(&r1m,r1m,a0,r1m,a0,m1,m0,ni);
          if ((uVar2 == a0) && (uVar3 == r1m)) goto LAB_00103160;
          if (((*one == a0) && (one[1] == r1m)) || (uVar4 = uVar4 + 1, k == uVar4)) break;
          m0 = *np;
          m1 = np[1];
        }
      }
      goto LAB_00103128;
    }
  }
LAB_00103160:
  local_49 = true;
LAB_00103128:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_49;
}

