
void sha512_process_bytes(void *buffer,size_t len,sha512_ctx *ctx)

{
  u64 *puVar1;
  size_t sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar8;
  undefined8 *puVar9;
  u64 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  byte bVar14;
  ulong uVar7;
  
  bVar14 = 0;
  sVar2 = ctx->buflen;
  if (sVar2 != 0) {
    puVar10 = ctx->buffer;
    uVar13 = 0x100 - sVar2;
    if (len < 0x100 - sVar2) {
      uVar13 = len;
    }
    memcpy((void *)((long)puVar10 + sVar2),buffer,uVar13);
    uVar11 = ctx->buflen + uVar13;
    ctx->buflen = uVar11;
    if (0x80 < uVar11) {
      sha512_process_block(puVar10,uVar11 & 0xffffffffffffff80,ctx);
      uVar11 = ctx->buflen;
      puVar1 = (u64 *)((long)puVar10 + (sVar2 + uVar13 & 0xffffffffffffff80));
      uVar6 = (uint)uVar11 & 0x7f;
      uVar7 = (ulong)uVar6;
      ctx->buflen = uVar7;
      if (uVar6 < 8) {
        if ((uVar11 & 4) == 0) {
          if (((uVar11 & 0x7f) != 0) &&
             (*(undefined *)ctx->buffer = *(undefined *)puVar1, (uVar11 & 2) != 0)) {
            *(undefined2 *)((long)ctx->buffer + (uVar7 - 2)) =
                 *(undefined2 *)((uVar7 - 2) + (long)puVar1);
          }
        }
        else {
          *(undefined4 *)ctx->buffer = *(undefined4 *)puVar1;
          *(undefined4 *)((long)ctx->buffer + (uVar7 - 4)) =
               *(undefined4 *)((uVar7 - 4) + (long)puVar1);
        }
      }
      else {
        puVar12 = (undefined8 *)((ulong)(ctx->buffer + 1) & 0xfffffffffffffff8);
        ctx->buffer[0] = *puVar1;
        *(undefined8 *)((long)ctx->buffer + (uVar7 - 8)) =
             *(undefined8 *)((uVar7 - 8) + (long)puVar1);
        lVar8 = (long)puVar10 - (long)puVar12;
        puVar9 = (undefined8 *)((long)puVar1 - lVar8);
        for (uVar11 = (ulong)(uVar6 + (int)lVar8 >> 3); uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar12 = *puVar9;
          puVar9 = puVar9 + (ulong)bVar14 * -2 + 1;
          puVar12 = puVar12 + (ulong)bVar14 * -2 + 1;
        }
      }
    }
    buffer = (void *)((long)buffer + uVar13);
    len = len - uVar13;
  }
  puVar9 = (undefined8 *)buffer;
  if (0x7f < len) {
    if (((ulong)buffer & 7) != 0) {
      if (len != 0x80) {
        uVar13 = len - 0x81 >> 7;
        do {
          uVar3 = *(undefined4 *)((long)puVar9 + 4);
          uVar4 = *(undefined4 *)(puVar9 + 1);
          uVar5 = *(undefined4 *)((long)puVar9 + 0xc);
          puVar12 = puVar9 + 0x10;
          *(undefined4 *)ctx->buffer = *(undefined4 *)puVar9;
          *(undefined4 *)((long)ctx->buffer + 4) = uVar3;
          *(undefined4 *)(ctx->buffer + 1) = uVar4;
          *(undefined4 *)((long)ctx->buffer + 0xc) = uVar5;
          uVar3 = *(undefined4 *)((long)puVar9 + 0x14);
          uVar4 = *(undefined4 *)(puVar9 + 3);
          uVar5 = *(undefined4 *)((long)puVar9 + 0x1c);
          *(undefined4 *)(ctx->buffer + 2) = *(undefined4 *)(puVar9 + 2);
          *(undefined4 *)((long)ctx->buffer + 0x14) = uVar3;
          *(undefined4 *)(ctx->buffer + 3) = uVar4;
          *(undefined4 *)((long)ctx->buffer + 0x1c) = uVar5;
          uVar3 = *(undefined4 *)((long)puVar9 + 0x24);
          uVar4 = *(undefined4 *)(puVar9 + 5);
          uVar5 = *(undefined4 *)((long)puVar9 + 0x2c);
          *(undefined4 *)(ctx->buffer + 4) = *(undefined4 *)(puVar9 + 4);
          *(undefined4 *)((long)ctx->buffer + 0x24) = uVar3;
          *(undefined4 *)(ctx->buffer + 5) = uVar4;
          *(undefined4 *)((long)ctx->buffer + 0x2c) = uVar5;
          uVar3 = *(undefined4 *)((long)puVar9 + 0x34);
          uVar4 = *(undefined4 *)(puVar9 + 7);
          uVar5 = *(undefined4 *)((long)puVar9 + 0x3c);
          *(undefined4 *)(ctx->buffer + 6) = *(undefined4 *)(puVar9 + 6);
          *(undefined4 *)((long)ctx->buffer + 0x34) = uVar3;
          *(undefined4 *)(ctx->buffer + 7) = uVar4;
          *(undefined4 *)((long)ctx->buffer + 0x3c) = uVar5;
          uVar3 = *(undefined4 *)((long)puVar9 + 0x44);
          uVar4 = *(undefined4 *)(puVar9 + 9);
          uVar5 = *(undefined4 *)((long)puVar9 + 0x4c);
          *(undefined4 *)(ctx->buffer + 8) = *(undefined4 *)(puVar9 + 8);
          *(undefined4 *)((long)ctx->buffer + 0x44) = uVar3;
          *(undefined4 *)(ctx->buffer + 9) = uVar4;
          *(undefined4 *)((long)ctx->buffer + 0x4c) = uVar5;
          uVar3 = *(undefined4 *)((long)puVar9 + 0x54);
          uVar4 = *(undefined4 *)(puVar9 + 0xb);
          uVar5 = *(undefined4 *)((long)puVar9 + 0x5c);
          *(undefined4 *)(ctx->buffer + 10) = *(undefined4 *)(puVar9 + 10);
          *(undefined4 *)((long)ctx->buffer + 0x54) = uVar3;
          *(undefined4 *)(ctx->buffer + 0xb) = uVar4;
          *(undefined4 *)((long)ctx->buffer + 0x5c) = uVar5;
          uVar3 = *(undefined4 *)((long)puVar9 + 100);
          uVar4 = *(undefined4 *)(puVar9 + 0xd);
          uVar5 = *(undefined4 *)((long)puVar9 + 0x6c);
          *(undefined4 *)(ctx->buffer + 0xc) = *(undefined4 *)(puVar9 + 0xc);
          *(undefined4 *)((long)ctx->buffer + 100) = uVar3;
          *(undefined4 *)(ctx->buffer + 0xd) = uVar4;
          *(undefined4 *)((long)ctx->buffer + 0x6c) = uVar5;
          uVar3 = *(undefined4 *)((long)puVar9 + 0x74);
          uVar4 = *(undefined4 *)(puVar9 + 0xf);
          uVar5 = *(undefined4 *)((long)puVar9 + 0x7c);
          *(undefined4 *)(ctx->buffer + 0xe) = *(undefined4 *)(puVar9 + 0xe);
          *(undefined4 *)((long)ctx->buffer + 0x74) = uVar3;
          *(undefined4 *)(ctx->buffer + 0xf) = uVar4;
          *(undefined4 *)((long)ctx->buffer + 0x7c) = uVar5;
          sha512_process_block(ctx->buffer,0x80,ctx);
          puVar9 = puVar12;
        } while (puVar12 != (undefined8 *)((long)buffer + (uVar13 + 1) * 0x10 * 8));
        len = (len - 0x80) + uVar13 * -0x80;
        puVar9 = (undefined8 *)((long)buffer + (uVar13 + 1) * 0x10 * 8);
      }
      goto LAB_001085a4;
    }
    puVar9 = (undefined8 *)((long)buffer + (len & 0xffffffffffffff80));
    sha512_process_block(buffer,len & 0xffffffffffffff80,ctx);
    len = (ulong)((uint)len & 0x7f);
  }
  if (len == 0) {
    return;
  }
LAB_001085a4:
  puVar10 = ctx->buffer;
  sVar2 = ctx->buflen;
  puVar12 = (undefined8 *)((long)puVar10 + sVar2);
  uVar6 = (uint)len;
  if (uVar6 < 8) {
    if ((len & 4) == 0) {
      if ((uVar6 != 0) && (*(undefined *)puVar12 = *(undefined *)puVar9, (len & 2) != 0)) {
        *(undefined2 *)((long)puVar12 + ((len & 0xffffffff) - 2)) =
             *(undefined2 *)((long)puVar9 + ((len & 0xffffffff) - 2));
      }
    }
    else {
      *(undefined4 *)puVar12 = *(undefined4 *)puVar9;
      *(undefined4 *)((long)puVar12 + ((len & 0xffffffff) - 4)) =
           *(undefined4 *)((long)puVar9 + ((len & 0xffffffff) - 4));
    }
  }
  else {
    *puVar12 = *puVar9;
    *(undefined8 *)((long)puVar12 + ((len & 0xffffffff) - 8)) =
         *(undefined8 *)((long)puVar9 + ((len & 0xffffffff) - 8));
    lVar8 = (long)puVar12 - (long)(undefined8 *)((ulong)(puVar12 + 1) & 0xfffffffffffffff8);
    puVar9 = (undefined8 *)((long)puVar9 - lVar8);
    puVar12 = (undefined8 *)((ulong)(puVar12 + 1) & 0xfffffffffffffff8);
    for (uVar13 = (ulong)((int)lVar8 + uVar6 >> 3); uVar13 != 0; uVar13 = uVar13 - 1) {
      *puVar12 = *puVar9;
      puVar9 = puVar9 + (ulong)bVar14 * -2 + 1;
      puVar12 = puVar12 + (ulong)bVar14 * -2 + 1;
    }
  }
  uVar13 = len + sVar2;
  if (0x7f < uVar13) {
    uVar13 = (len + sVar2) - 0x80;
    sha512_process_block(puVar10,0x80,ctx);
    memcpy(puVar10,ctx->buffer + 0x10,uVar13);
  }
  ctx->buflen = uVar13;
  return;
}

