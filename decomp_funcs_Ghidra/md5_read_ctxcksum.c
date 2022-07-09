
void * md5_read_ctx(md5_ctx *ctx,void *resbuf)

{
  *(uint32_t *)resbuf = ctx->A;
  *(uint32_t *)((long)resbuf + 4) = ctx->B;
  *(uint32_t *)((long)resbuf + 8) = ctx->C;
  *(uint32_t *)((long)resbuf + 0xc) = ctx->D;
  return resbuf;
}

