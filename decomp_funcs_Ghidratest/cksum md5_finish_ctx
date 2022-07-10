
void * md5_finish_ctx(md5_ctx *ctx,void *resbuf)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  ulong uVar4;
  uint32_t uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  uVar1 = ctx->buflen;
  uVar5 = ctx->total[1];
  uVar2 = ctx->total[0];
  uVar8 = uVar1 + ctx->total[0];
  ctx->total[0] = uVar8;
  if (CARRY4(uVar1,uVar2)) {
    uVar5 = uVar5 + 1;
    ctx->total[1] = uVar5;
  }
  uVar4 = ((-(ulong)(uVar1 < 0x38) & 0xffffffffffffffc0) + 0x78) - (ulong)uVar1;
  ctx->buffer[(-(ulong)(uVar1 < 0x38) & 0xfffffffffffffff0) + 0x1e] = uVar8 * 8;
  ctx->buffer[(-(ulong)(uVar1 < 0x38) & 0xfffffffffffffff0) + 0x1f] = uVar5 << 3 | uVar8 >> 0x1d;
  puVar9 = (undefined8 *)((long)ctx->buffer + (ulong)uVar1);
  if (uVar4 < 8) {
    if ((uVar4 & 4) == 0) {
      if ((uVar4 != 0) && (*(char *)puVar9 = (char)fillbuf._0_4_, (uVar4 & 2) != 0)) {
        *(undefined2 *)((long)puVar9 + (uVar4 - 2)) = *(undefined2 *)(&DAT_0011e13e + uVar4);
      }
    }
    else {
      *(undefined4 *)puVar9 = fillbuf._0_4_;
      *(undefined4 *)((long)puVar9 + (uVar4 - 4)) = *(undefined4 *)(&DAT_0011e13c + uVar4);
    }
  }
  else {
    *puVar9 = CONCAT44(fillbuf._4_4_,fillbuf._0_4_);
    *(undefined8 *)((long)puVar9 + (uVar4 - 8)) = *(undefined8 *)(&DAT_0011e138 + uVar4);
    lVar6 = (long)puVar9 - (long)(undefined8 *)((ulong)(puVar9 + 1) & 0xfffffffffffffff8);
    puVar7 = (undefined8 *)(fillbuf + -lVar6);
    puVar9 = (undefined8 *)((ulong)(puVar9 + 1) & 0xfffffffffffffff8);
    for (uVar4 = uVar4 + lVar6 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  md5_process_block(ctx->buffer,(-(ulong)(uVar1 < 0x38) & 0xffffffffffffffc0) + 0x80,ctx);
  pvVar3 = md5_read_ctx(ctx,resbuf);
  return pvVar3;
}

