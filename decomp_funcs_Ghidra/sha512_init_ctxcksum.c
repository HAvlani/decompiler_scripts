
void sha512_init_ctx(sha512_ctx *ctx)

{
  ctx->total[1] = 0;
  ctx->state[0] = 0x6a09e667f3bcc908;
  ctx->state[1] = 0xbb67ae8584caa73b;
  ctx->state[2] = 0x3c6ef372fe94f82b;
  ctx->state[3] = 0xa54ff53a5f1d36f1;
  ctx->state[4] = 0x510e527fade682d1;
  ctx->state[5] = 0x9b05688c2b3e6c1f;
  ctx->state[6] = 0x1f83d9abfb41bd6b;
  ctx->state[7] = 0x5be0cd19137e2179;
  ctx->total[0] = 0;
  ctx->buflen = 0;
  return;
}

