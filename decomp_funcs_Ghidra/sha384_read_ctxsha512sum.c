
void * sha384_read_ctx(sha512_ctx *ctx,void *resbuf)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    uVar1 = *(ulong *)((long)ctx->state + lVar2);
    *(ulong *)((long)resbuf + lVar2) =
         uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
         (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
         (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x30);
  return resbuf;
}

