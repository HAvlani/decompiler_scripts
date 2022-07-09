
_Bool base64url_decode_ctx_wrapper
                (base_decode_context *ctx,char *in,idx_t inlen,char *out,idx_t *outlen)

{
  byte *pbVar1;
  byte bVar2;
  _Bool _Var3;
  char *p;
  byte *in_00;
  
  p = ctx->inbuf;
  if (ctx->bufsize < inlen) {
    ctx->bufsize = inlen * 2;
    p = (char *)xreallocarray(p,inlen * 2,1);
    ctx->inbuf = p;
  }
  memcpy(p,in,inlen);
  in_00 = (byte *)ctx->inbuf;
  if (inlen != 0) {
    pbVar1 = in_00 + inlen;
    do {
      while( true ) {
        bVar2 = *in_00;
        if ((bVar2 & 0xfb) == 0x2b) {
          *outlen = 0;
          return false;
        }
        if (bVar2 != 0x2d) break;
        *in_00 = 0x2b;
        in_00 = in_00 + 1;
        if (in_00 == pbVar1) goto LAB_00103c55;
      }
      if (bVar2 == 0x5f) {
        *in_00 = 0x2f;
      }
      in_00 = in_00 + 1;
    } while (in_00 != pbVar1);
LAB_00103c55:
    in_00 = (byte *)ctx->inbuf;
  }
  _Var3 = base64_decode_ctx((base64_decode_context *)&ctx->ctx,(char *)in_00,inlen,out,outlen);
  ctx->i = *(int *)&ctx->ctx;
  return _Var3;
}

