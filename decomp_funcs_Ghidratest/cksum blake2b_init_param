
int blake2b_init_param(blake2b_state *S,blake2b_param *P)

{
  long lVar1;
  
  blake2b_init0(S);
  lVar1 = 0;
  do {
    S->h[lVar1] = S->h[lVar1] ^ *(ulong *)(P->reserved + lVar1 * 8 + -0x12);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 8);
  S->outlen = (ulong)P->digest_length;
  return 0;
}

