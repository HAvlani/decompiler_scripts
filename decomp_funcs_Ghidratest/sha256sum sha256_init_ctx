
void sha256_init_ctx(sha256_ctx *ctx)

{
  *(undefined8 *)ctx->total = 0;
  *(undefined8 *)ctx->state = 0xbb67ae856a09e667;
  *(undefined8 *)(ctx->state + 2) = 0xa54ff53a3c6ef372;
  *(undefined8 *)(ctx->state + 4) = 0x9b05688c510e527f;
  *(undefined8 *)(ctx->state + 6) = 0x5be0cd191f83d9ab;
  ctx->buflen = 0;
  return;
}

