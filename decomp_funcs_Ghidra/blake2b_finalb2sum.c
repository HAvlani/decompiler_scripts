
/* WARNING: Could not reconcile some variable overlaps */

int blake2b_final(blake2b_state *S,void *out,size_t outlen)

{
  ulong uVar1;
  uint64_t uVar2;
  int iVar3;
  uint64_t uVar4;
  long in_FS_OFFSET;
  uint8_t buffer [64];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  buffer._0_16_ = (undefined  [16])0x0;
  buffer._16_16_ = (undefined  [16])0x0;
  buffer._32_16_ = (undefined  [16])0x0;
  buffer._48_16_ = (undefined  [16])0x0;
  if (((out == (void *)0x0) || (outlen <= S->outlen && S->outlen != outlen)) ||
     (uVar4 = S->f[0], uVar4 != 0)) {
    iVar3 = -1;
  }
  else {
    uVar1 = S->buflen;
    uVar2 = S->t[0];
    S->t[1] = S->t[1] + (ulong)CARRY8(uVar1,S->t[0]);
    S->t[0] = uVar1 + uVar2;
    if (S->last_node != '\0') {
      S->f[1] = 0xffffffffffffffff;
    }
    S->f[0] = 0xffffffffffffffff;
    memset(S->buf + uVar1,0,0x80 - uVar1);
    blake2b_compress(S,S->buf);
    do {
      *(uint64_t *)(buffer + uVar4 * 8) = S->h[uVar4];
      uVar4 = uVar4 + 1;
    } while (uVar4 != 8);
    memcpy(out,buffer,S->outlen);
    (*(code *)memset_v_3606)(buffer,0,0x40);
    iVar3 = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

