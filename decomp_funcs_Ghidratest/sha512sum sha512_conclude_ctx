
void sha512_conclude_ctx(sha512_ctx *ctx)

{
  ulong uVar1;
  u64 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = ctx->buflen;
  uVar2 = ctx->total[1];
  uVar3 = ctx->total[0];
  uVar4 = uVar1 + ctx->total[0];
  ctx->total[0] = uVar4;
  if (CARRY8(uVar1,uVar3)) {
    uVar2 = uVar2 + 1;
    ctx->total[1] = uVar2;
  }
  uVar3 = uVar2 << 3;
  uVar5 = uVar4 * 8;
  ctx->buffer[(-(ulong)(uVar1 < 0x70) & 0xfffffffffffffff0) + 0x1e] =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | (uVar3 | uVar4 >> 0x3d) << 0x38;
  ctx->buffer[(-(ulong)(uVar1 < 0x70) & 0xfffffffffffffff0) + 0x1f] =
       uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
       (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
       (uVar5 & 0xff00) << 0x28 | uVar4 << 0x3b;
  memcpy((void *)((long)ctx->buffer + uVar1),fillbuf,
         ((-(ulong)(uVar1 < 0x70) & 0xffffffffffffff80) + 0xf0) - uVar1);
  sha512_process_block(ctx->buffer,(-(ulong)(uVar1 < 0x70) & 0xffffffffffffff80) + 0x100,ctx);
  return;
}

