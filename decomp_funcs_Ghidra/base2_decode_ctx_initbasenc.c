
void base2_decode_ctx_init(base_decode_context *ctx)

{
  char *pcVar1;
  
  ctx->bufsize = 0x1068;
  pcVar1 = xcharalloc(0x1068);
  *(undefined *)&ctx->ctx = 0;
  ctx->inbuf = pcVar1;
  ctx->i = 0;
  return;
}

