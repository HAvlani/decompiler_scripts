
_Bool z85_decode_ctx(base_decode_context *ctx,char *in,idx_t inlen,char *out,idx_t *outlen)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  
  *outlen = 0;
  if (inlen == 0) {
    return *(int *)&ctx->ctx < 1;
  }
  pcVar7 = in + 1;
  pcVar6 = pcVar7 + inlen;
  do {
    bVar1 = pcVar7[-1];
    if (bVar1 != 10) {
      if ((0x5c < (byte)(bVar1 - 0x21)) || (cVar2 = z85_decoding[(int)(bVar1 - 0x21)], cVar2 < '\0')
         ) {
        return false;
      }
      iVar3 = *(int *)&ctx->ctx;
      iVar8 = iVar3 + 1;
      *(int *)&ctx->ctx = iVar8;
      *(char *)((long)&ctx->ctx + (long)iVar3 + 4) = cVar2;
      if (iVar8 == 5) {
        lVar5 = (long)(int)((uint)*(byte *)((long)&ctx->ctx + 5) * 0x95eed +
                            (uint)*(byte *)((long)&ctx->ctx + 6) * 0x1c39 +
                            (uint)*(byte *)((long)&ctx->ctx + 7) * 0x55 +
                           (uint)*(byte *)((long)&ctx->ctx + 8)) +
                (ulong)*(byte *)((long)&ctx->ctx + 4) * 0x31c84b1;
        if ((lVar5 >> 0x18 & 0x700U) != 0) {
          return false;
        }
        *outlen = *outlen + 4;
        uVar4 = (uint)lVar5;
        *(uint *)out = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                       uVar4 << 0x18;
        *(undefined4 *)&ctx->ctx = 0;
        out = (char *)((long)out + 4);
      }
    }
    pcVar7 = pcVar7 + 1;
    if (pcVar6 == pcVar7) {
      ctx->i = *(int *)&ctx->ctx;
      return true;
    }
  } while( true );
}

