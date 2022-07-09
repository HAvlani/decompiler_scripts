
_Bool base32hex_decode_ctx_wrapper
                (base_decode_context *ctx,char *in,idx_t inlen,char *out,idx_t *outlen)

{
  char cVar1;
  _Bool _Var2;
  char *in_00;
  long lVar3;
  
  in_00 = ctx->inbuf;
  if (ctx->bufsize < inlen) {
    ctx->bufsize = inlen * 2;
    in_00 = (char *)xreallocarray(in_00,inlen * 2,1);
    ctx->inbuf = in_00;
  }
  if (inlen != 0) {
    lVar3 = 0;
    do {
      while( true ) {
        cVar1 = in[lVar3];
        if ((9 < (byte)(cVar1 - 0x30U)) && (0x15 < (byte)(cVar1 + 0xbfU))) break;
        in_00[lVar3] = "ABCDEFGHIJ:;<=>?@KLMNOPQRSTUVWXYZ234567"[cVar1 + -0x30];
        lVar3 = lVar3 + 1;
        if (inlen == lVar3) goto LAB_00103d2e;
      }
      in_00[lVar3] = cVar1;
      lVar3 = lVar3 + 1;
    } while (inlen != lVar3);
LAB_00103d2e:
    in_00 = ctx->inbuf;
  }
  _Var2 = base32_decode_ctx((base32_decode_context *)&ctx->ctx,in_00,inlen,out,outlen);
  ctx->i = *(int *)&ctx->ctx;
  return _Var2;
}

