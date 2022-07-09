
void base64url_decode_ctx_init_wrapper(base_decode_context *ctx)

{
  char *pcVar1;
  
  base64_decode_ctx_init((base64_decode_context *)&ctx->ctx);
  ctx->bufsize = 0x1068;
  pcVar1 = xcharalloc(0x1068);
  ctx->inbuf = pcVar1;
  return;
}

