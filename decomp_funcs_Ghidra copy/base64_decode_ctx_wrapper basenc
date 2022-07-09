
_Bool base64_decode_ctx_wrapper
                (base_decode_context *ctx,char *in,idx_t inlen,char *out,idx_t *outlen)

{
  _Bool _Var1;
  
  _Var1 = base64_decode_ctx((base64_decode_context *)&ctx->ctx,in,inlen,out,outlen);
  ctx->i = *(int *)&ctx->ctx;
  return _Var1;
}

