
void sm3_init_ctx(sm3_ctx *ctx)

{
  *(undefined8 *)ctx->total = 0;
  *(undefined8 *)ctx->state = 0x4914b2b97380166f;
  *(undefined8 *)(ctx->state + 2) = 0xda8a0600172442d7;
  *(undefined8 *)(ctx->state + 4) = 0x163138aaa96f30bc;
  *(undefined8 *)(ctx->state + 6) = 0xb0fb0e4ee38dee4d;
  ctx->buflen = 0;
  return;
}

