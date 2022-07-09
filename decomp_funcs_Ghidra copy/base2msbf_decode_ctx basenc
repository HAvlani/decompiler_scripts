
_Bool base2msbf_decode_ctx(base_decode_context *ctx,char *in,idx_t inlen,char *out,idx_t *outlen)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  char *pcVar5;
  
  *outlen = 0;
  if (inlen == 0) {
    return ctx->i == 0;
  }
  pcVar5 = in + 1;
  pcVar1 = pcVar5 + inlen;
  do {
    cVar2 = pcVar5[-1];
    if (cVar2 != '\n') {
      if (1 < (byte)(cVar2 - 0x30U)) {
        return false;
      }
      if (ctx->i == 0) {
        ctx->i = 7;
        *(byte *)&ctx->ctx = *(byte *)&ctx->ctx | (cVar2 == '1') << 7;
      }
      else {
        iVar3 = ctx->i + -1;
        ctx->i = iVar3;
        bVar4 = *(byte *)&ctx->ctx | (cVar2 == '1') << ((byte)iVar3 & 0x1f);
        *(byte *)&ctx->ctx = bVar4;
        if (iVar3 == 0) {
          *out = bVar4;
          out = (char *)((byte *)out + 1);
          *(undefined *)&ctx->ctx = 0;
          *outlen = *outlen + 1;
          ctx->i = 0;
        }
      }
    }
    pcVar5 = pcVar5 + 1;
  } while (pcVar1 != pcVar5);
  return true;
}

