
void * sha1_finish_ctx(sha1_ctx *ctx,void *resbuf)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  uint32_t uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar1 = ctx->buflen;
  uVar4 = ctx->total[1];
  uVar5 = ctx->total[0];
  uVar7 = uVar1 + ctx->total[0];
  ctx->total[0] = uVar7;
  if (CARRY4(uVar1,uVar5)) {
    uVar4 = uVar4 + 1;
    ctx->total[1] = uVar4;
  }
  uVar5 = uVar4 << 3;
  uVar3 = ((-(ulong)(uVar1 < 0x38) & 0xffffffffffffffc0) + 0x78) - (ulong)uVar1;
  uVar8 = uVar7 * 8;
  ctx->buffer[(-(ulong)(uVar1 < 0x38) & 0xfffffffffffffff0) + 0x1e] =
       uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
       (uVar5 | uVar7 >> 0x1d) << 0x18;
  ctx->buffer[(-(ulong)(uVar1 < 0x38) & 0xfffffffffffffff0) + 0x1f] =
       uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar7 * 0x8000000;
  puVar10 = (undefined8 *)((long)ctx->buffer + (ulong)uVar1);
  if (uVar3 < 8) {
    if ((uVar3 & 4) == 0) {
      if ((uVar3 != 0) && (*(char *)puVar10 = (char)fillbuf._0_4_, (uVar3 & 2) != 0)) {
        *(undefined2 *)((long)puVar10 + (uVar3 - 2)) = *(undefined2 *)(fillbuf + uVar3 + 0x3e);
      }
    }
    else {
      *(undefined4 *)puVar10 = fillbuf._0_4_;
      *(undefined4 *)((long)puVar10 + (uVar3 - 4)) = *(undefined4 *)(fillbuf + uVar3 + 0x3c);
    }
  }
  else {
    *puVar10 = CONCAT44(fillbuf._4_4_,fillbuf._0_4_);
    *(undefined8 *)((long)puVar10 + (uVar3 - 8)) = *(undefined8 *)(fillbuf + uVar3 + 0x38);
    lVar6 = (long)puVar10 - (long)(undefined8 *)((ulong)(puVar10 + 1) & 0xfffffffffffffff8);
    puVar9 = (undefined8 *)(fillbuf + -lVar6);
    puVar10 = (undefined8 *)((ulong)(puVar10 + 1) & 0xfffffffffffffff8);
    for (uVar3 = uVar3 + lVar6 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  sha1_process_block(ctx->buffer,(-(ulong)(uVar1 < 0x38) & 0xffffffffffffffc0) + 0x80,ctx);
  pvVar2 = sha1_read_ctx(ctx,resbuf);
  return pvVar2;
}

