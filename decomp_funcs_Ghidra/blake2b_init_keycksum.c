
/* WARNING: Could not reconcile some variable overlaps */

int blake2b_init_key(blake2b_state *S,size_t outlen,void *key,size_t keylen)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  blake2b_param P [1];
  uint8_t block [128];
  long local_20;
  
  bVar4 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((outlen - 1 < 0x40) && (keylen - 1 < 0x40)) && (key != (void *)0x0)) {
    P[0].digest_length = (uint8_t)outlen;
    P[0].reserved._12_2_ = 0;
    P[0].key_length = (uint8_t)keylen;
    P[0]._2_8_ = 0x101;
    P[0]._10_8_ = 0;
    P[0].reserved._0_8_ = 0;
    P[0].reserved._8_4_ = 0;
    P[0].salt = (undefined  [16])0x0;
    P[0].personal = (undefined  [16])0x0;
    blake2b_init0(S);
    lVar2 = 0;
    do {
      S->h[lVar2] = S->h[lVar2] ^ *(ulong *)(P[0].reserved + lVar2 * 8 + -0x12);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 8);
    S->outlen = outlen;
    puVar3 = (undefined8 *)block;
    for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
    }
    __memcpy_chk(block,key,keylen,0x80);
    blake2b_update(S,block,0x80);
    (*(code *)memset_v_3606)(block,0,0x80);
    iVar1 = 0;
  }
  else {
    iVar1 = -1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

