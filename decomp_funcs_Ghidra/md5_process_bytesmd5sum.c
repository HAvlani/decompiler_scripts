
void md5_process_bytes(void *buffer,size_t len,md5_ctx *ctx)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  uint32_t *puVar13;
  
  if (ctx->buflen != 0) {
    uVar12 = (ulong)ctx->buflen;
    puVar13 = ctx->buffer;
    uVar4 = 0x80 - uVar12;
    if (len < 0x80 - uVar12) {
      uVar4 = len;
    }
    memcpy((void *)((long)puVar13 + uVar12),buffer,uVar4);
    uVar11 = ctx->buflen + (int)uVar4;
    ctx->buflen = uVar11;
    if (0x40 < uVar11) {
      md5_process_block(puVar13,(ulong)(uVar11 & 0xffffffc0),ctx);
      uVar11 = ctx->buflen;
      puVar10 = (undefined8 *)((uVar12 + uVar4 & 0xffffffffffffffc0) + (long)puVar13);
      uVar7 = uVar11 & 0x3f;
      uVar12 = (ulong)uVar7;
      ctx->buflen = uVar7;
      if (uVar7 < 8) {
        if ((uVar11 & 4) == 0) {
          if ((uVar7 != 0) && (*(undefined *)ctx->buffer = *(undefined *)puVar10, (uVar11 & 2) != 0)
             ) {
            *(undefined2 *)((long)ctx->buffer + (uVar12 - 2)) =
                 *(undefined2 *)((long)puVar10 + (uVar12 - 2));
          }
        }
        else {
          ctx->buffer[0] = *(uint32_t *)puVar10;
          *(undefined4 *)((long)ctx->buffer + (uVar12 - 4)) =
               *(undefined4 *)((long)puVar10 + (uVar12 - 4));
        }
      }
      else {
        *(undefined8 *)ctx->buffer = *puVar10;
        *(undefined8 *)((long)ctx->total + uVar12 + 4) =
             *(undefined8 *)((long)puVar10 + (uVar12 - 8));
        uVar12 = (ulong)(ctx->buffer + 2) & 0xfffffffffffffff8;
        lVar6 = (long)puVar13 - uVar12;
        uVar11 = (int)lVar6 + uVar7 & 0xfffffff8;
        if (7 < uVar11) {
          uVar8 = 0;
          do {
            uVar7 = (int)uVar8 + 8;
            *(undefined8 *)(uVar12 + uVar8) = *(undefined8 *)((long)puVar10 + (uVar8 - lVar6));
            uVar8 = (ulong)uVar7;
          } while (uVar7 < uVar11);
        }
      }
    }
    buffer = (void *)((long)buffer + uVar4);
    len = len - uVar4;
  }
  puVar10 = (undefined8 *)buffer;
  if (0x3f < len) {
    if (((ulong)buffer & 3) != 0) {
      if (len != 0x40) {
        uVar4 = len - 0x41 >> 6;
        do {
          uVar1 = *(uint32_t *)((long)puVar10 + 4);
          uVar2 = *(uint32_t *)(puVar10 + 1);
          uVar3 = *(uint32_t *)((long)puVar10 + 0xc);
          puVar9 = puVar10 + 8;
          ctx->buffer[0] = *(uint32_t *)puVar10;
          ctx->buffer[1] = uVar1;
          ctx->buffer[2] = uVar2;
          ctx->buffer[3] = uVar3;
          uVar1 = *(uint32_t *)((long)puVar10 + 0x14);
          uVar2 = *(uint32_t *)(puVar10 + 3);
          uVar3 = *(uint32_t *)((long)puVar10 + 0x1c);
          ctx->buffer[4] = *(uint32_t *)(puVar10 + 2);
          ctx->buffer[5] = uVar1;
          ctx->buffer[6] = uVar2;
          ctx->buffer[7] = uVar3;
          uVar1 = *(uint32_t *)((long)puVar10 + 0x24);
          uVar2 = *(uint32_t *)(puVar10 + 5);
          uVar3 = *(uint32_t *)((long)puVar10 + 0x2c);
          ctx->buffer[8] = *(uint32_t *)(puVar10 + 4);
          ctx->buffer[9] = uVar1;
          ctx->buffer[10] = uVar2;
          ctx->buffer[0xb] = uVar3;
          uVar1 = *(uint32_t *)((long)puVar10 + 0x34);
          uVar2 = *(uint32_t *)(puVar10 + 7);
          uVar3 = *(uint32_t *)((long)puVar10 + 0x3c);
          ctx->buffer[0xc] = *(uint32_t *)(puVar10 + 6);
          ctx->buffer[0xd] = uVar1;
          ctx->buffer[0xe] = uVar2;
          ctx->buffer[0xf] = uVar3;
          md5_process_block(ctx->buffer,0x40,ctx);
          puVar10 = puVar9;
        } while (puVar9 != (undefined8 *)((long)buffer + (uVar4 + 1) * 8 * 8));
        len = (len - 0x40) + uVar4 * -0x40;
        puVar10 = (undefined8 *)((long)buffer + (uVar4 + 1) * 8 * 8);
      }
      goto LAB_00104c22;
    }
    puVar10 = (undefined8 *)((long)buffer + (len & 0xffffffffffffffc0));
    md5_process_block(buffer,len & 0xffffffffffffffc0,ctx);
    len = (ulong)((uint)len & 0x3f);
  }
  if (len == 0) {
    return;
  }
LAB_00104c22:
  puVar13 = ctx->buffer;
  uVar11 = ctx->buflen;
  puVar9 = (undefined8 *)((long)puVar13 + (ulong)uVar11);
  uVar7 = (uint)len;
  if (uVar7 < 8) {
    if ((len & 4) == 0) {
      if ((uVar7 != 0) && (*(undefined *)puVar9 = *(undefined *)puVar10, (len & 2) != 0)) {
        *(undefined2 *)((long)puVar9 + ((len & 0xffffffff) - 2)) =
             *(undefined2 *)((long)puVar10 + ((len & 0xffffffff) - 2));
      }
    }
    else {
      *(undefined4 *)puVar9 = *(undefined4 *)puVar10;
      *(undefined4 *)((long)puVar9 + ((len & 0xffffffff) - 4)) =
           *(undefined4 *)((long)puVar10 + ((len & 0xffffffff) - 4));
    }
  }
  else {
    *puVar9 = *puVar10;
    *(undefined8 *)((long)puVar9 + ((len & 0xffffffff) - 8)) =
         *(undefined8 *)((long)puVar10 + ((len & 0xffffffff) - 8));
    lVar6 = (long)puVar9 - ((ulong)(puVar9 + 1) & 0xfffffffffffffff8);
    uVar7 = (int)lVar6 + uVar7 & 0xfffffff8;
    if (7 < uVar7) {
      uVar5 = 0;
      do {
        uVar4 = (ulong)uVar5;
        uVar5 = uVar5 + 8;
        *(undefined8 *)(((ulong)(puVar9 + 1) & 0xfffffffffffffff8) + uVar4) =
             *(undefined8 *)((long)puVar10 + (uVar4 - lVar6));
      } while (uVar5 < uVar7);
    }
  }
  uVar4 = len + uVar11;
  if (0x3f < uVar4) {
    uVar4 = uVar4 - 0x40;
    md5_process_block(puVar13,0x40,ctx);
    memcpy(puVar13,ctx->buffer + 0x10,uVar4);
  }
  ctx->buflen = (uint32_t)uVar4;
  return;
}

