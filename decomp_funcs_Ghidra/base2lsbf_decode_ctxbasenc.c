
_Bool base2lsbf_decode_ctx(base_decode_context *ctx,char *in,idx_t inlen,char *out,idx_t *outlen)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte *pbVar6;
  
  *outlen = 0;
  if (inlen == 0) {
    return ctx->i == 0;
  }
  pcVar5 = in + 1;
  pcVar4 = pcVar5 + inlen;
  do {
    cVar1 = pcVar5[-1];
    pbVar6 = (byte *)out;
    if (cVar1 != '\n') {
      if (1 < (byte)(cVar1 - 0x30U)) {
        return false;
      }
      iVar3 = ctx->i + 1;
      bVar2 = (cVar1 == '1') << ((byte)ctx->i & 0x1f) | *(byte *)&ctx->ctx;
      *(byte *)&ctx->ctx = bVar2;
      ctx->i = iVar3;
      if (iVar3 == 8) {
        *(undefined *)&ctx->ctx = 0;
        pbVar6 = (byte *)out + 1;
        *outlen = *outlen + 1;
        *out = bVar2;
        ctx->i = 0;
      }
    }
    pcVar5 = pcVar5 + 1;
    out = (char *)pbVar6;
  } while (pcVar4 != pcVar5);
  return true;
}

