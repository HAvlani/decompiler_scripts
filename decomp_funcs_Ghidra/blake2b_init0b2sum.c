
void blake2b_init0(blake2b_state *S)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  S->t[0] = 0;
  *(undefined8 *)&S->last_node = 0;
  puVar2 = (undefined8 *)((ulong)(S->t + 1) & 0xfffffffffffffff8);
  uVar1 = (ulong)(((int)S - (int)puVar2) + 0xf8U >> 3);
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  S->h[0] = 0x6a09e667f3bcc908;
  S->h[1] = 0xbb67ae8584caa73b;
  S->h[2] = 0x3c6ef372fe94f82b;
  S->h[3] = 0xa54ff53a5f1d36f1;
  S->h[4] = 0x510e527fade682d1;
  S->h[5] = 0x9b05688c2b3e6c1f;
  S->h[6] = 0x1f83d9abfb41bd6b;
  S->h[7] = 0x5be0cd19137e2179;
  return;
}

