
void base64_decode_ctx_init_wrapper(base_decode_context *ctx)

{
  base64_decode_ctx_init((base64_decode_context *)&ctx->ctx);
  return;
}

