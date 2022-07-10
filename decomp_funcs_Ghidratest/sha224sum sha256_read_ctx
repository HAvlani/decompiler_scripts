
void * sha256_read_ctx(sha256_ctx *ctx,void *resbuf)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    uVar1 = *(uint *)((long)ctx->state + lVar2);
    *(uint *)((long)resbuf + lVar2) =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x20);
  return resbuf;
}

