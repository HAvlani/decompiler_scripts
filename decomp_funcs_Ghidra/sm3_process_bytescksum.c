
void sm3_process_bytes(void *buffer,size_t len,sm3_ctx *ctx)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint32_t *puVar10;
  ulong uVar11;
  size_t sVar12;
  ulong uVar13;
  
  sVar12 = ctx->buflen;
  if (sVar12 != 0) {
    puVar10 = ctx->buffer;
    uVar13 = 0x80 - sVar12;
    if (len < 0x80 - sVar12) {
      uVar13 = len;
    }
    memcpy((void *)((long)puVar10 + sVar12),buffer,uVar13);
    uVar11 = ctx->buflen + uVar13;
    ctx->buflen = uVar11;
    if (0x40 < uVar11) {
      sm3_process_block(puVar10,uVar11 & 0xffffffffffffffc0,ctx);
      uVar11 = ctx->buflen;
      puVar9 = (undefined8 *)((long)puVar10 + (sVar12 + uVar13 & 0xffffffffffffffc0));
      uVar4 = (uint)uVar11 & 0x3f;
      uVar7 = (ulong)uVar4;
      ctx->buflen = uVar7;
      if (uVar4 < 8) {
        if ((uVar11 & 4) == 0) {
          if (((uVar11 & 0x3f) != 0) &&
             (*(undefined *)ctx->buffer = *(undefined *)puVar9, (uVar11 & 2) != 0)) {
            *(undefined2 *)((long)ctx->buffer + (uVar7 - 2)) =
                 *(undefined2 *)((uVar7 - 2) + (long)puVar9);
          }
        }
        else {
          ctx->buffer[0] = *(uint32_t *)puVar9;
          *(undefined4 *)((long)ctx->buffer + (uVar7 - 4)) =
               *(undefined4 *)((uVar7 - 4) + (long)puVar9);
        }
      }
      else {
        uVar11 = (ulong)(ctx->buffer + 2) & 0xfffffffffffffff8;
        *(undefined8 *)ctx->buffer = *puVar9;
        *(undefined8 *)((long)ctx->total + uVar7 + 8) = *(undefined8 *)((uVar7 - 8) + (long)puVar9);
        lVar5 = (long)puVar10 - uVar11;
        uVar4 = (int)lVar5 + uVar4 & 0xfffffff8;
        if (7 < uVar4) {
          uVar7 = 0;
          do {
            uVar6 = (int)uVar7 + 8;
            *(undefined8 *)(uVar11 + uVar7) = *(undefined8 *)((long)puVar9 + (uVar7 - lVar5));
            uVar7 = (ulong)uVar6;
          } while (uVar6 < uVar4);
        }
      }
    }
    buffer = (void *)((long)buffer + uVar13);
    len = len - uVar13;
  }
  puVar9 = (undefined8 *)buffer;
  if (0x3f < len) {
    if (((ulong)buffer & 3) != 0) {
      if (len != 0x40) {
        uVar13 = len - 0x41 >> 6;
        do {
          uVar1 = *(uint32_t *)((long)puVar9 + 4);
          uVar2 = *(uint32_t *)(puVar9 + 1);
          uVar3 = *(uint32_t *)((long)puVar9 + 0xc);
          puVar8 = puVar9 + 8;
          ctx->buffer[0] = *(uint32_t *)puVar9;
          ctx->buffer[1] = uVar1;
          ctx->buffer[2] = uVar2;
          ctx->buffer[3] = uVar3;
          uVar1 = *(uint32_t *)((long)puVar9 + 0x14);
          uVar2 = *(uint32_t *)(puVar9 + 3);
          uVar3 = *(uint32_t *)((long)puVar9 + 0x1c);
          ctx->buffer[4] = *(uint32_t *)(puVar9 + 2);
          ctx->buffer[5] = uVar1;
          ctx->buffer[6] = uVar2;
          ctx->buffer[7] = uVar3;
          uVar1 = *(uint32_t *)((long)puVar9 + 0x24);
          uVar2 = *(uint32_t *)(puVar9 + 5);
          uVar3 = *(uint32_t *)((long)puVar9 + 0x2c);
          ctx->buffer[8] = *(uint32_t *)(puVar9 + 4);
          ctx->buffer[9] = uVar1;
          ctx->buffer[10] = uVar2;
          ctx->buffer[0xb] = uVar3;
          uVar1 = *(uint32_t *)((long)puVar9 + 0x34);
          uVar2 = *(uint32_t *)(puVar9 + 7);
          uVar3 = *(uint32_t *)((long)puVar9 + 0x3c);
          ctx->buffer[0xc] = *(uint32_t *)(puVar9 + 6);
          ctx->buffer[0xd] = uVar1;
          ctx->buffer[0xe] = uVar2;
          ctx->buffer[0xf] = uVar3;
          sm3_process_block(ctx->buffer,0x40,ctx);
          puVar9 = puVar8;
        } while (puVar8 != (undefined8 *)((long)buffer + (uVar13 + 1) * 8 * 8));
        len = (len - 0x40) + uVar13 * -0x40;
        puVar9 = (undefined8 *)((long)buffer + (uVar13 + 1) * 8 * 8);
      }
      goto LAB_001140e8;
    }
    puVar9 = (undefined8 *)((long)buffer + (len & 0xffffffffffffffc0));
    sm3_process_block(buffer,len & 0xffffffffffffffc0,ctx);
    len = (ulong)((uint)len & 0x3f);
  }
  if (len == 0) {
    return;
  }
LAB_001140e8:
  puVar10 = ctx->buffer;
  sVar12 = ctx->buflen;
  uVar4 = (uint)len;
  puVar8 = (undefined8 *)((long)puVar10 + sVar12);
  if (uVar4 < 8) {
    if ((len & 4) == 0) {
      if ((uVar4 != 0) && (*(undefined *)puVar8 = *(undefined *)puVar9, (len & 2) != 0)) {
        *(undefined2 *)((long)puVar8 + ((len & 0xffffffff) - 2)) =
             *(undefined2 *)((long)puVar9 + ((len & 0xffffffff) - 2));
      }
    }
    else {
      *(undefined4 *)puVar8 = *(undefined4 *)puVar9;
      *(undefined4 *)((long)puVar8 + ((len & 0xffffffff) - 4)) =
           *(undefined4 *)((long)puVar9 + ((len & 0xffffffff) - 4));
    }
  }
  else {
    *puVar8 = *puVar9;
    *(undefined8 *)((long)puVar8 + ((len & 0xffffffff) - 8)) =
         *(undefined8 *)((long)puVar9 + ((len & 0xffffffff) - 8));
    lVar5 = (long)puVar8 - ((ulong)(puVar8 + 1) & 0xfffffffffffffff8);
    uVar4 = uVar4 + (int)lVar5 & 0xfffffff8;
    if (7 < uVar4) {
      uVar13 = 0;
      do {
        uVar6 = (int)uVar13 + 8;
        *(undefined8 *)(((ulong)(puVar8 + 1) & 0xfffffffffffffff8) + uVar13) =
             *(undefined8 *)((long)puVar9 + (uVar13 - lVar5));
        uVar13 = (ulong)uVar6;
      } while (uVar6 < uVar4);
    }
  }
  sVar12 = len + sVar12;
  if (0x3f < sVar12) {
    sVar12 = sVar12 - 0x40;
    sm3_process_block(puVar10,0x40,ctx);
    memcpy(puVar10,ctx->buffer + 0x10,sVar12);
  }
  ctx->buflen = sVar12;
  return;
}

