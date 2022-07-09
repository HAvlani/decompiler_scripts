
/* WARNING: Could not reconcile some variable overlaps */

int blake2b_init(blake2b_state *S,size_t outlen)

{
  long lVar1;
  int iVar2;
  long lVar3;
  uint8_t uVar4;
  undefined7 uVar5;
  long in_FS_OFFSET;
  blake2b_param P [1];
  
  uVar4 = (uint8_t)outlen;
  uVar5 = (undefined7)(outlen >> 8);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (outlen - 1 < 0x40) {
    P[0].reserved._12_2_ = 0;
    P[0]._1_8_ = 0x10100;
    P[0]._9_8_ = 0;
    P[0].inner_length = '\0';
    P[0].reserved._0_8_ = 0;
    P[0].reserved._8_4_ = 0;
    P[0].salt = (undefined  [16])0x0;
    P[0].personal = (undefined  [16])0x0;
    P[0].digest_length = uVar4;
    blake2b_init0(S);
    lVar3 = 0;
    do {
      S->h[lVar3] = S->h[lVar3] ^ *(ulong *)(P[0].reserved + lVar3 * 8 + -0x12);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 8);
    S->outlen = CONCAT71(uVar5,uVar4);
    iVar2 = 0;
  }
  else {
    iVar2 = -1;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

