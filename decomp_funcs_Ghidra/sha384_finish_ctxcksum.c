
void * sha384_finish_ctx(sha512_ctx *ctx,void *resbuf)

{
  void *pvVar1;
  
  sha512_conclude_ctx(ctx);
  pvVar1 = sha384_read_ctx(ctx,resbuf);
  return pvVar1;
}

