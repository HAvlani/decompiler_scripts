
void sha224_init_ctx(sha256_ctx *ctx)

{
  *(undefined8 *)ctx->total = 0;
  *(undefined8 *)ctx->state = 0x367cd507c1059ed8;
  *(undefined8 *)(ctx->state + 2) = 0xf70e59393070dd17;
  *(undefined8 *)(ctx->state + 4) = 0x68581511ffc00b31;
  *(undefined8 *)(ctx->state + 6) = 0xbefa4fa464f98fa7;
  ctx->buflen = 0;
  return;
}

