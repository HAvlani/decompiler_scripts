
void sha256_conclude_ctx(sha256_ctx *ctx)

{
  ulong uVar1;
  uint32_t uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = ctx->total[1];
  uVar1 = ctx->buflen;
  uVar4 = ctx->total[0] + (int)uVar1;
  ctx->total[0] = uVar4;
  if (uVar4 < uVar1) {
    uVar2 = uVar2 + 1;
    ctx->total[1] = uVar2;
  }
  uVar3 = uVar2 << 3;
  uVar5 = uVar4 * 8;
  ctx->buffer[(-(ulong)(uVar1 < 0x38) & 0xfffffffffffffff0) + 0x1e] =
       uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
       (uVar3 | uVar4 >> 0x1d) << 0x18;
  ctx->buffer[(-(ulong)(uVar1 < 0x38) & 0xfffffffffffffff0) + 0x1f] =
       uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar4 * 0x8000000;
  memcpy((void *)((long)ctx->buffer + uVar1),fillbuf,
         ((-(ulong)(uVar1 < 0x38) & 0xffffffffffffffc0) + 0x78) - uVar1);
  sha256_process_block(ctx->buffer,(-(ulong)(uVar1 < 0x38) & 0xffffffffffffffc0) + 0x80,ctx);
  return;
}

