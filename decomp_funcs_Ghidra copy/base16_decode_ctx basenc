
_Bool base16_decode_ctx(base_decode_context *ctx,char *in,idx_t inlen,char *out,idx_t *outlen)

{
  char *pcVar1;
  char cVar2;
  undefined uVar3;
  int iVar4;
  char *pcVar6;
  byte bVar7;
  uint uVar5;
  
  *outlen = 0;
  pcVar1 = in + inlen;
  if (inlen == 0) {
    return (_Bool)(*(byte *)((long)&ctx->ctx + 1) ^ 1);
  }
  do {
    cVar2 = *in;
    iVar4 = (int)cVar2;
    in = in + 1;
    pcVar6 = out;
    if (cVar2 != '\n') {
      uVar5 = iVar4 - 0x30;
      if (uVar5 < 10) {
        uVar3 = (undefined)uVar5;
        bVar7 = *(byte *)((long)&ctx->ctx + 1);
        if (bVar7 != 0) goto LAB_0010370a;
LAB_00103752:
        *(undefined *)&ctx->ctx = uVar3;
      }
      else {
        if (5 < iVar4 - 0x41U) {
          return false;
        }
        bVar7 = *(byte *)((long)&ctx->ctx + 1);
        uVar5 = iVar4 - 0x37;
        uVar3 = (undefined)uVar5;
        if (bVar7 == 0) goto LAB_00103752;
LAB_0010370a:
        cVar2 = *(char *)&ctx->ctx;
        *outlen = *outlen + 1;
        pcVar6 = out + 1;
        *out = (char)uVar5 + cVar2 * '\x10';
      }
      *(byte *)((long)&ctx->ctx + 1) = bVar7 ^ 1;
    }
    out = pcVar6;
    if (in == pcVar1) {
      return true;
    }
  } while( true );
}

