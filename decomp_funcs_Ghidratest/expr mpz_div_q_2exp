
/* WARNING: Unknown calling convention yet parameter storage is locked */

void mpz_div_q_2exp(void)

{
  long lVar1;
  ulong uVar2;
  mp_limb_t *rp;
  uint cnt;
  ulong in_RCX;
  long *in_RDX;
  long size;
  uint in_ESI;
  mp_srcptr up;
  __mpz_struct *in_RDI;
  ulong uVar3;
  uint in_R8D;
  bool bVar4;
  
  if (in_ESI == 0) {
    in_RDI->_mp_size = 0;
    return;
  }
  uVar3 = in_RCX >> 6;
  cnt = (uint)in_RCX & 0x3f;
  size = ((in_ESI ^ (int)in_ESI >> 0x1f) - ((int)in_ESI >> 0x1f)) - uVar3;
  if (in_R8D == 0 < (int)in_ESI) {
    if (0 < size) {
      for (uVar2 = uVar3; uVar2 != 0; uVar2 = uVar2 - 1) {
        if (*(long *)(*in_RDX + -8 + uVar2 * 8) != 0) {
          bVar4 = true;
          goto LAB_0010846c;
        }
      }
      bVar4 = (*(ulong *)(*in_RDX + uVar3 * 8) & ~(-1 << (sbyte)cnt)) != 0;
      goto LAB_0010846c;
    }
    in_RDI->_mp_size = 0;
  }
  else {
    if (size < 1) {
      in_RDI->_mp_size = 0;
      goto joined_r0x0010853a;
    }
    bVar4 = false;
LAB_0010846c:
    if (in_RDI->_mp_alloc < size) {
      rp = mpz_realloc(in_RDI,size);
    }
    else {
      rp = in_RDI->_mp_d;
    }
    lVar1 = 0;
    up = (mp_srcptr)(*in_RDX + uVar3 * 8);
    if ((in_RCX & 0x3f) == 0) {
      do {
        rp[lVar1] = up[lVar1];
        lVar1 = lVar1 + 1;
      } while (lVar1 < size);
    }
    else {
      mpn_rshift(rp,up,size,cnt);
      size = size - (ulong)(rp[size + -1] == 0);
    }
    in_RDI->_mp_size = (int)size;
    if (!bVar4) goto joined_r0x0010853a;
  }
  mpz_add_ui(in_RDI,in_RDI,1);
joined_r0x0010853a:
  if (-1 < (int)in_ESI) {
    return;
  }
  mpz_set(in_RDI,in_RDI);
  in_RDI->_mp_size = -in_RDI->_mp_size;
  return;
}

