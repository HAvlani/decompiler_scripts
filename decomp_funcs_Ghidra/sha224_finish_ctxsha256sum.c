
void * sha224_finish_ctx(sha256_ctx *ctx,void *resbuf)

{
  void *pvVar1;
  
  sha256_conclude_ctx(ctx);
  pvVar1 = sha224_read_ctx(ctx,resbuf);
  return pvVar1;
}

