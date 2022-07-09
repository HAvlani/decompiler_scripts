
void sha256_process_block(void *buffer,size_t len,sha256_ctx *ctx)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  long in_FS_OFFSET;
  uint32_t local_e4;
  uint32_t local_e0;
  uint32_t local_dc;
  uint32_t local_d8;
  uint32_t local_d4;
  uint32_t local_b8;
  uint32_t local_b4;
  void *local_b0;
  uint32_t local_a8;
  uint32_t x [16];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pvVar4 = (void *)((len & 0xfffffffffffffffc) + (long)buffer);
  local_b8 = ctx->state[0];
  local_e4 = ctx->state[1];
  local_e0 = ctx->state[2];
  local_b4 = ctx->state[3];
  local_dc = ctx->state[4];
  local_d8 = ctx->state[5];
  local_d4 = ctx->state[6];
  local_a8 = ctx->state[7];
  uVar3 = ctx->total[0];
  ctx->total[0] = (uint)len + ctx->total[0];
  ctx->total[1] = ctx->total[1] + (int)(len >> 0x20) + (uint)CARRY4((uint)len,uVar3);
  local_b0 = buffer;
  if (buffer < pvVar4) {
    do {
      lVar5 = 0;
      do {
        uVar3 = *(uint *)((long)local_b0 + lVar5);
        *(uint *)((long)x + lVar5) =
             uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
        lVar5 = lVar5 + 4;
      } while (lVar5 != 0x40);
      local_b0 = (void *)((long)local_b0 + 0x40);
      iVar6 = x[0] + 0x428a2f98 + local_a8 +
              ((local_dc >> 6 | local_dc << 0x1a) ^ (local_dc >> 0xb | local_dc << 0x15) ^
              (local_dc << 7 | local_dc >> 0x19)) + ((local_d8 ^ local_d4) & local_dc ^ local_d4);
      uVar15 = local_b4 + iVar6;
      uVar8 = ((local_b8 | local_e4) & local_e0 | local_b8 & local_e4) +
              ((local_b8 >> 0xd | local_b8 << 0x13) ^ (local_b8 >> 2 | local_b8 << 0x1e) ^
              (local_b8 << 10 | local_b8 >> 0x16)) + iVar6;
      iVar6 = ((uVar15 * 0x80 | uVar15 >> 0x19) ^
              (uVar15 >> 0xb | uVar15 * 0x200000) ^ (uVar15 >> 6 | uVar15 * 0x4000000)) +
              x[1] + 0x71374491 + local_d4 + ((local_dc ^ local_d8) & uVar15 ^ local_d8);
      uVar3 = iVar6 + local_e0;
      uVar2 = ((local_b8 | uVar8) & local_e4 | local_b8 & uVar8) +
              ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 2 | uVar8 * 0x40000000) ^
              (uVar8 * 0x400 | uVar8 >> 0x16)) + iVar6;
      iVar6 = ((uVar3 * 0x80 | uVar3 >> 0x19) ^
              (uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000)) +
              x[2] + 0xb5c0fbcf + local_d8 + ((local_dc ^ uVar15) & uVar3 ^ local_dc);
      uVar7 = iVar6 + local_e4;
      uVar27 = ((uVar8 | uVar2) & local_b8 | uVar8 & uVar2) +
               ((uVar2 >> 0xd | uVar2 * 0x80000) ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^
               (uVar2 * 0x400 | uVar2 >> 0x16)) + iVar6;
      iVar6 = ((uVar7 * 0x80 | uVar7 >> 0x19) ^
              (uVar7 >> 0xb | uVar7 * 0x200000) ^ (uVar7 >> 6 | uVar7 * 0x4000000)) +
              x[3] + 0xe9b5dba5 + local_dc + ((uVar15 ^ uVar3) & uVar7 ^ uVar15);
      uVar9 = iVar6 + local_b8;
      uVar23 = ((uVar2 | uVar27) & uVar8 | uVar2 & uVar27) +
               ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 >> 2 | uVar27 * 0x40000000) ^
               (uVar27 * 0x400 | uVar27 >> 0x16)) + iVar6;
      iVar6 = ((uVar9 * 0x80 | uVar9 >> 0x19) ^
              (uVar9 >> 0xb | uVar9 * 0x200000) ^ (uVar9 >> 6 | uVar9 * 0x4000000)) +
              x[4] + 0x3956c25b + uVar15 + ((uVar3 ^ uVar7) & uVar9 ^ uVar3);
      uVar8 = uVar8 + iVar6;
      uVar11 = ((uVar27 | uVar23) & uVar2 | uVar27 & uVar23) +
               ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 2 | uVar23 * 0x40000000) ^
               (uVar23 * 0x400 | uVar23 >> 0x16)) + iVar6;
      iVar6 = ((uVar8 >> 0xb | uVar8 * 0x200000) ^ (uVar8 >> 6 | uVar8 * 0x4000000) ^
              (uVar8 * 0x80 | uVar8 >> 0x19)) +
              x[5] + 0x59f111f1 + uVar3 + ((uVar7 ^ uVar9) & uVar8 ^ uVar7);
      uVar2 = uVar2 + iVar6;
      uVar3 = ((uVar23 | uVar11) & uVar27 | uVar23 & uVar11) +
              ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^
              (uVar11 * 0x400 | uVar11 >> 0x16)) + iVar6;
      iVar6 = ((uVar2 * 0x80 | uVar2 >> 0x19) ^
              (uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000)) +
              x[6] + 0x923f82a4 + uVar7 + ((uVar9 ^ uVar8) & uVar2 ^ uVar9);
      uVar27 = uVar27 + iVar6;
      uVar7 = ((uVar11 | uVar3) & uVar23 | uVar11 & uVar3) +
              ((uVar3 >> 0xd | uVar3 * 0x80000) ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^
              (uVar3 * 0x400 | uVar3 >> 0x16)) + iVar6;
      iVar6 = ((uVar27 * 0x80 | uVar27 >> 0x19) ^
              (uVar27 >> 0xb | uVar27 * 0x200000) ^ (uVar27 >> 6 | uVar27 * 0x4000000)) +
              x[7] + 0xab1c5ed5 + uVar9 + ((uVar8 ^ uVar2) & uVar27 ^ uVar8);
      uVar23 = uVar23 + iVar6;
      uVar9 = ((uVar3 | uVar7) & uVar11 | uVar3 & uVar7) +
              ((uVar7 >> 0xd | uVar7 * 0x80000) ^ (uVar7 >> 2 | uVar7 * 0x40000000) ^
              (uVar7 * 0x400 | uVar7 >> 0x16)) + iVar6;
      iVar6 = ((uVar23 * 0x80 | uVar23 >> 0x19) ^
              (uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 6 | uVar23 * 0x4000000)) +
              ((uVar2 ^ uVar27) & uVar23 ^ uVar2) + x[8] + 0xd807aa98 + uVar8;
      uVar11 = uVar11 + iVar6;
      uVar21 = ((uVar7 | uVar9) & uVar3 | uVar7 & uVar9) +
               ((uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 >> 2 | uVar9 * 0x40000000) ^
               (uVar9 * 0x400 | uVar9 >> 0x16)) + iVar6;
      iVar6 = ((uVar11 * 0x80 | uVar11 >> 0x19) ^
              (uVar11 >> 0xb | uVar11 * 0x200000) ^ (uVar11 >> 6 | uVar11 * 0x4000000)) +
              x[9] + 0x12835b01 + uVar2 + ((uVar27 ^ uVar23) & uVar11 ^ uVar27);
      uVar3 = uVar3 + iVar6;
      uVar19 = ((uVar9 | uVar21) & uVar7 | uVar9 & uVar21) +
               ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 >> 2 | uVar21 * 0x40000000) ^
               (uVar21 * 0x400 | uVar21 >> 0x16)) + iVar6;
      iVar6 = ((uVar3 * 0x80 | uVar3 >> 0x19) ^
              (uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000)) +
              x[10] + 0x243185be + uVar27 + ((uVar23 ^ uVar11) & uVar3 ^ uVar23);
      uVar7 = uVar7 + iVar6;
      uVar15 = ((uVar21 | uVar19) & uVar9 | uVar21 & uVar19) +
               ((uVar19 >> 0xd | uVar19 * 0x80000) ^ (uVar19 >> 2 | uVar19 * 0x40000000) ^
               (uVar19 * 0x400 | uVar19 >> 0x16)) + iVar6;
      iVar6 = ((uVar7 * 0x80 | uVar7 >> 0x19) ^
              (uVar7 >> 0xb | uVar7 * 0x200000) ^ (uVar7 >> 6 | uVar7 * 0x4000000)) +
              x[11] + 0x550c7dc3 + uVar23 + ((uVar11 ^ uVar3) & uVar7 ^ uVar11);
      uVar9 = uVar9 + iVar6;
      uVar28 = ((uVar19 | uVar15) & uVar21 | uVar19 & uVar15) +
               ((uVar15 >> 0xd | uVar15 * 0x80000) ^ (uVar15 >> 2 | uVar15 * 0x40000000) ^
               (uVar15 * 0x400 | uVar15 >> 0x16)) + iVar6;
      iVar6 = ((uVar9 * 0x80 | uVar9 >> 0x19) ^
              (uVar9 >> 0xb | uVar9 * 0x200000) ^ (uVar9 >> 6 | uVar9 * 0x4000000)) +
              x[12] + 0x72be5d74 + uVar11 + ((uVar3 ^ uVar7) & uVar9 ^ uVar3);
      uVar21 = uVar21 + iVar6;
      uVar23 = ((uVar15 | uVar28) & uVar19 | uVar15 & uVar28) +
               ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 >> 2 | uVar28 * 0x40000000) ^
               (uVar28 * 0x400 | uVar28 >> 0x16)) + iVar6;
      iVar6 = ((uVar21 * 0x80 | uVar21 >> 0x19) ^
              (uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 >> 6 | uVar21 * 0x4000000)) +
              ((uVar7 ^ uVar9) & uVar21 ^ uVar7) + x[13] + 0x80deb1fe + uVar3;
      uVar19 = uVar19 + iVar6;
      uVar27 = ((uVar28 | uVar23) & uVar15 | uVar28 & uVar23) +
               ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 2 | uVar23 * 0x40000000) ^
               (uVar23 * 0x400 | uVar23 >> 0x16)) + iVar6;
      iVar6 = ((uVar19 * 0x80 | uVar19 >> 0x19) ^
              (uVar19 >> 0xb | uVar19 * 0x200000) ^ (uVar19 >> 6 | uVar19 * 0x4000000)) +
              x[14] + 0x9bdc06a7 + uVar7 + ((uVar9 ^ uVar21) & uVar19 ^ uVar9);
      uVar15 = uVar15 + iVar6;
      uVar30 = ((uVar23 | uVar27) & uVar28 | uVar23 & uVar27) +
               ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 >> 2 | uVar27 * 0x40000000) ^
               (uVar27 * 0x400 | uVar27 >> 0x16)) + iVar6;
      iVar6 = ((uVar15 * 0x80 | uVar15 >> 0x19) ^
              (uVar15 >> 0xb | uVar15 * 0x200000) ^ (uVar15 >> 6 | uVar15 * 0x4000000)) +
              x[15] + 0xc19bf174 + uVar9 + ((uVar21 ^ uVar19) & uVar15 ^ uVar21);
      uVar28 = uVar28 + iVar6;
      uVar8 = ((uVar27 | uVar30) & uVar23 | uVar27 & uVar30) +
              ((uVar30 >> 0xd | uVar30 * 0x80000) ^ (uVar30 >> 2 | uVar30 * 0x40000000) ^
              (uVar30 * 0x400 | uVar30 >> 0x16)) + iVar6;
      uVar24 = ((x[1] << 0xe | x[1] >> 0x12) ^ (x[1] >> 7 | x[1] << 0x19) ^ x[1] >> 3) +
               (x[14] >> 10 ^ (x[14] << 0xd | x[14] >> 0x13) ^ (x[14] << 0xf | x[14] >> 0x11)) +
               x[9] + x[0];
      iVar6 = ((uVar28 * 0x80 | uVar28 >> 0x19) ^
              (uVar28 >> 0xb | uVar28 * 0x200000) ^ (uVar28 >> 6 | uVar28 * 0x4000000)) +
              uVar21 + 0xe49b69c1 + uVar24 + ((uVar19 ^ uVar15) & uVar28 ^ uVar19);
      uVar23 = uVar23 + iVar6;
      uVar2 = ((uVar30 | uVar8) & uVar27 | uVar30 & uVar8) +
              ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 2 | uVar8 * 0x40000000) ^
              (uVar8 * 0x400 | uVar8 >> 0x16)) + iVar6;
      uVar22 = ((x[2] << 0xe | x[2] >> 0x12) ^ (x[2] >> 7 | x[2] << 0x19) ^ x[2] >> 3) +
               (x[15] >> 10 ^ (x[15] << 0xd | x[15] >> 0x13) ^ (x[15] << 0xf | x[15] >> 0x11)) +
               x[1] + x[10];
      iVar6 = ((uVar23 * 0x80 | uVar23 >> 0x19) ^
              (uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 6 | uVar23 * 0x4000000)) +
              uVar19 + 0xefbe4786 + uVar22 + ((uVar15 ^ uVar28) & uVar23 ^ uVar15);
      uVar27 = uVar27 + iVar6;
      uVar29 = ((uVar8 | uVar2) & uVar30 | uVar8 & uVar2) +
               ((uVar2 >> 0xd | uVar2 * 0x80000) ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^
               (uVar2 * 0x400 | uVar2 >> 0x16)) + iVar6;
      uVar20 = (x[3] >> 3 ^ (x[3] >> 7 | x[3] << 0x19) ^ (x[3] << 0xe | x[3] >> 0x12)) +
               x[2] + x[11] +
               (uVar24 >> 10 ^
               (uVar24 * 0x2000 | uVar24 >> 0x13) ^ (uVar24 * 0x8000 | uVar24 >> 0x11));
      iVar6 = ((uVar27 * 0x80 | uVar27 >> 0x19) ^
              (uVar27 >> 0xb | uVar27 * 0x200000) ^ (uVar27 >> 6 | uVar27 * 0x4000000)) +
              uVar15 + 0xfc19dc6 + uVar20 + ((uVar28 ^ uVar23) & uVar27 ^ uVar28);
      uVar30 = uVar30 + iVar6;
      uVar11 = ((uVar2 | uVar29) & uVar8 | uVar2 & uVar29) +
               ((uVar29 >> 0xd | uVar29 * 0x80000) ^ (uVar29 >> 2 | uVar29 * 0x40000000) ^
               (uVar29 * 0x400 | uVar29 >> 0x16)) + iVar6;
      uVar31 = ((uVar22 * 0x2000 | uVar22 >> 0x13) ^ (uVar22 * 0x8000 | uVar22 >> 0x11) ^
               uVar22 >> 10) +
               x[3] + x[12] +
               (x[4] >> 3 ^ (x[4] >> 7 | x[4] << 0x19) ^ (x[4] << 0xe | x[4] >> 0x12));
      iVar6 = ((uVar30 * 0x80 | uVar30 >> 0x19) ^
              (uVar30 >> 0xb | uVar30 * 0x200000) ^ (uVar30 >> 6 | uVar30 * 0x4000000)) +
              uVar28 + 0x240ca1cc + uVar31 + ((uVar23 ^ uVar27) & uVar30 ^ uVar23);
      uVar8 = uVar8 + iVar6;
      uVar19 = ((uVar29 | uVar11) & uVar2 | uVar29 & uVar11) +
               ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^
               (uVar11 * 0x400 | uVar11 >> 0x16)) + iVar6;
      uVar3 = x[4] + x[13] + (x[5] >> 3 ^ (x[5] >> 7 | x[5] << 0x19) ^ (x[5] << 0xe | x[5] >> 0x12))
              + ((uVar20 * 0x2000 | uVar20 >> 0x13) ^ (uVar20 * 0x8000 | uVar20 >> 0x11) ^
                uVar20 >> 10);
      iVar6 = ((uVar8 * 0x80 | uVar8 >> 0x19) ^
              (uVar8 >> 0xb | uVar8 * 0x200000) ^ (uVar8 >> 6 | uVar8 * 0x4000000)) +
              uVar23 + 0x2de92c6f + uVar3 + ((uVar27 ^ uVar30) & uVar8 ^ uVar27);
      uVar2 = uVar2 + iVar6;
      uVar28 = ((uVar11 | uVar19) & uVar29 | uVar11 & uVar19) +
               ((uVar19 >> 0xd | uVar19 * 0x80000) ^ (uVar19 >> 2 | uVar19 * 0x40000000) ^
               (uVar19 * 0x400 | uVar19 >> 0x16)) + iVar6;
      uVar23 = x[5] + x[14] +
               (x[6] >> 3 ^ (x[6] >> 7 | x[6] << 0x19) ^ (x[6] << 0xe | x[6] >> 0x12)) +
               ((uVar31 * 0x2000 | uVar31 >> 0x13) ^ (uVar31 * 0x8000 | uVar31 >> 0x11) ^
               uVar31 >> 10);
      iVar6 = ((uVar2 * 0x80 | uVar2 >> 0x19) ^
              (uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000)) +
              uVar27 + 0x4a7484aa + uVar23 + ((uVar30 ^ uVar8) & uVar2 ^ uVar30);
      uVar29 = uVar29 + iVar6;
      uVar7 = ((uVar19 | uVar28) & uVar11 | uVar19 & uVar28) +
              ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 >> 2 | uVar28 * 0x40000000) ^
              (uVar28 * 0x400 | uVar28 >> 0x16)) + iVar6;
      uVar16 = ((uVar3 * 0x2000 | uVar3 >> 0x13) ^ (uVar3 * 0x8000 | uVar3 >> 0x11) ^ uVar3 >> 10) +
               x[6] + x[15] +
               (x[7] >> 3 ^ (x[7] >> 7 | x[7] << 0x19) ^ (x[7] << 0xe | x[7] >> 0x12));
      iVar6 = ((uVar29 * 0x80 | uVar29 >> 0x19) ^
              (uVar29 >> 0xb | uVar29 * 0x200000) ^ (uVar29 >> 6 | uVar29 * 0x4000000)) +
              uVar30 + 0x5cb0a9dc + uVar16 + ((uVar8 ^ uVar2) & uVar29 ^ uVar8);
      uVar11 = uVar11 + iVar6;
      uVar9 = ((uVar28 | uVar7) & uVar19 | uVar28 & uVar7) +
              ((uVar7 >> 0xd | uVar7 * 0x80000) ^ (uVar7 >> 2 | uVar7 * 0x40000000) ^
              (uVar7 * 0x400 | uVar7 >> 0x16)) + iVar6;
      uVar12 = ((x[8] << 0xe | x[8] >> 0x12) ^ (x[8] >> 7 | x[8] << 0x19) ^ x[8] >> 3) + x[7] +
               uVar24 + ((uVar23 * 0x2000 | uVar23 >> 0x13) ^ (uVar23 * 0x8000 | uVar23 >> 0x11) ^
                        uVar23 >> 10);
      iVar6 = ((uVar11 * 0x80 | uVar11 >> 0x19) ^
              (uVar11 >> 0xb | uVar11 * 0x200000) ^ (uVar11 >> 6 | uVar11 * 0x4000000)) +
              ((uVar2 ^ uVar29) & uVar11 ^ uVar2) + uVar8 + 0x76f988da + uVar12;
      uVar19 = uVar19 + iVar6;
      uVar8 = ((uVar7 | uVar9) & uVar28 | uVar7 & uVar9) +
              ((uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 >> 2 | uVar9 * 0x40000000) ^
              (uVar9 * 0x400 | uVar9 >> 0x16)) + iVar6;
      uVar21 = ((x[9] << 0xe | x[9] >> 0x12) ^ (x[9] >> 7 | x[9] << 0x19) ^ x[9] >> 3) + x[8] +
               uVar22 + ((uVar16 * 0x2000 | uVar16 >> 0x13) ^ (uVar16 * 0x8000 | uVar16 >> 0x11) ^
                        uVar16 >> 10);
      iVar6 = ((uVar19 * 0x80 | uVar19 >> 0x19) ^
              (uVar19 >> 0xb | uVar19 * 0x200000) ^ (uVar19 >> 6 | uVar19 * 0x4000000)) +
              ((uVar29 ^ uVar11) & uVar19 ^ uVar29) + uVar2 + 0x983e5152 + uVar21;
      uVar28 = uVar28 + iVar6;
      uVar2 = ((uVar9 | uVar8) & uVar7 | uVar9 & uVar8) +
              ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 2 | uVar8 * 0x40000000) ^
              (uVar8 * 0x400 | uVar8 >> 0x16)) + iVar6;
      uVar30 = ((x[10] << 0xe | x[10] >> 0x12) ^ (x[10] >> 7 | x[10] << 0x19) ^ x[10] >> 3) + x[9] +
               uVar20 + ((uVar12 * 0x2000 | uVar12 >> 0x13) ^ (uVar12 * 0x8000 | uVar12 >> 0x11) ^
                        uVar12 >> 10);
      iVar6 = ((uVar28 * 0x80 | uVar28 >> 0x19) ^
              (uVar28 >> 0xb | uVar28 * 0x200000) ^ (uVar28 >> 6 | uVar28 * 0x4000000)) +
              uVar29 + 0xa831c66d + uVar30 + ((uVar11 ^ uVar19) & uVar28 ^ uVar11);
      uVar7 = uVar7 + iVar6;
      uVar15 = ((uVar8 | uVar2) & uVar9 | uVar8 & uVar2) +
               ((uVar2 >> 0xd | uVar2 * 0x80000) ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^
               (uVar2 * 0x400 | uVar2 >> 0x16)) + iVar6;
      uVar27 = ((x[11] << 0xe | x[11] >> 0x12) ^ (x[11] >> 7 | x[11] << 0x19) ^ x[11] >> 3) + x[10]
               + uVar31 +
               ((uVar21 * 0x2000 | uVar21 >> 0x13) ^ (uVar21 * 0x8000 | uVar21 >> 0x11) ^
               uVar21 >> 10);
      iVar6 = ((uVar7 * 0x80 | uVar7 >> 0x19) ^
              (uVar7 >> 0xb | uVar7 * 0x200000) ^ (uVar7 >> 6 | uVar7 * 0x4000000)) +
              uVar11 + 0xb00327c8 + uVar27 + ((uVar19 ^ uVar28) & uVar7 ^ uVar19);
      uVar9 = uVar9 + iVar6;
      uVar11 = ((uVar2 | uVar15) & uVar8 | uVar2 & uVar15) +
               ((uVar15 >> 0xd | uVar15 * 0x80000) ^ (uVar15 >> 2 | uVar15 * 0x40000000) ^
               (uVar15 * 0x400 | uVar15 >> 0x16)) + iVar6;
      uVar17 = ((x[12] << 0xe | x[12] >> 0x12) ^ (x[12] >> 7 | x[12] << 0x19) ^ x[12] >> 3) + x[11]
               + uVar3 + ((uVar30 * 0x2000 | uVar30 >> 0x13) ^ (uVar30 * 0x8000 | uVar30 >> 0x11) ^
                         uVar30 >> 10);
      iVar6 = ((uVar9 * 0x80 | uVar9 >> 0x19) ^
              (uVar9 >> 0xb | uVar9 * 0x200000) ^ (uVar9 >> 6 | uVar9 * 0x4000000)) +
              uVar19 + 0xbf597fc7 + uVar17 + ((uVar28 ^ uVar7) & uVar9 ^ uVar28);
      uVar8 = uVar8 + iVar6;
      uVar18 = ((uVar15 | uVar11) & uVar2 | uVar15 & uVar11) +
               ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^
               (uVar11 * 0x400 | uVar11 >> 0x16)) + iVar6;
      uVar13 = ((x[13] << 0xe | x[13] >> 0x12) ^ (x[13] >> 7 | x[13] << 0x19) ^ x[13] >> 3) + x[12]
               + uVar23 +
               ((uVar27 * 0x2000 | uVar27 >> 0x13) ^ (uVar27 * 0x8000 | uVar27 >> 0x11) ^
               uVar27 >> 10);
      iVar6 = ((uVar8 * 0x80 | uVar8 >> 0x19) ^
              (uVar8 >> 0xb | uVar8 * 0x200000) ^ (uVar8 >> 6 | uVar8 * 0x4000000)) +
              uVar28 + 0xc6e00bf3 + uVar13 + ((uVar7 ^ uVar9) & uVar8 ^ uVar7);
      uVar2 = uVar2 + iVar6;
      uVar14 = ((uVar11 | uVar18) & uVar15 | uVar11 & uVar18) +
               ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 2 | uVar18 * 0x40000000) ^
               (uVar18 * 0x400 | uVar18 >> 0x16)) + iVar6;
      uVar28 = ((x[14] << 0xe | x[14] >> 0x12) ^ (x[14] >> 7 | x[14] << 0x19) ^ x[14] >> 3) + x[13]
               + uVar16 +
               ((uVar17 * 0x2000 | uVar17 >> 0x13) ^ (uVar17 * 0x8000 | uVar17 >> 0x11) ^
               uVar17 >> 10);
      iVar6 = ((uVar2 * 0x80 | uVar2 >> 0x19) ^
              (uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000)) +
              uVar7 + 0xd5a79147 + uVar28 + ((uVar9 ^ uVar8) & uVar2 ^ uVar9);
      uVar15 = uVar15 + iVar6;
      uVar29 = ((uVar18 | uVar14) & uVar11 | uVar18 & uVar14) +
               ((uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 2 | uVar14 * 0x40000000) ^
               (uVar14 * 0x400 | uVar14 >> 0x16)) + iVar6;
      uVar10 = ((x[15] << 0xe | x[15] >> 0x12) ^ (x[15] >> 7 | x[15] << 0x19) ^ x[15] >> 3) + x[14]
               + uVar12 +
               ((uVar13 * 0x2000 | uVar13 >> 0x13) ^ (uVar13 * 0x8000 | uVar13 >> 0x11) ^
               uVar13 >> 10);
      iVar6 = ((uVar15 * 0x80 | uVar15 >> 0x19) ^
              (uVar15 >> 0xb | uVar15 * 0x200000) ^ (uVar15 >> 6 | uVar15 * 0x4000000)) +
              ((uVar8 ^ uVar2) & uVar15 ^ uVar8) + uVar9 + 0x6ca6351 + uVar10;
      uVar11 = uVar11 + iVar6;
      uVar7 = ((uVar14 | uVar29) & uVar18 | uVar14 & uVar29) +
              ((uVar29 >> 0xd | uVar29 * 0x80000) ^ (uVar29 >> 2 | uVar29 * 0x40000000) ^
              (uVar29 * 0x400 | uVar29 >> 0x16)) + iVar6;
      uVar19 = ((uVar24 * 0x4000 | uVar24 >> 0x12) ^ (uVar24 >> 7 | uVar24 * 0x2000000) ^
               uVar24 >> 3) + x[15] + uVar21 +
               ((uVar28 * 0x2000 | uVar28 >> 0x13) ^ (uVar28 * 0x8000 | uVar28 >> 0x11) ^
               uVar28 >> 10);
      iVar6 = ((uVar11 * 0x80 | uVar11 >> 0x19) ^
              (uVar11 >> 0xb | uVar11 * 0x200000) ^ (uVar11 >> 6 | uVar11 * 0x4000000)) +
              ((uVar2 ^ uVar15) & uVar11 ^ uVar2) + uVar8 + 0x14292967 + uVar19;
      uVar18 = uVar18 + iVar6;
      uVar8 = ((uVar29 | uVar7) & uVar14 | uVar29 & uVar7) +
              ((uVar7 >> 0xd | uVar7 * 0x80000) ^ (uVar7 >> 2 | uVar7 * 0x40000000) ^
              (uVar7 * 0x400 | uVar7 >> 0x16)) + iVar6;
      uVar25 = uVar24 + ((uVar22 * 0x4000 | uVar22 >> 0x12) ^ (uVar22 >> 7 | uVar22 * 0x2000000) ^
                        uVar22 >> 3) + uVar30 +
               ((uVar10 * 0x2000 | uVar10 >> 0x13) ^ (uVar10 * 0x8000 | uVar10 >> 0x11) ^
               uVar10 >> 10);
      iVar6 = ((uVar18 * 0x80 | uVar18 >> 0x19) ^
              (uVar18 >> 0xb | uVar18 * 0x200000) ^ (uVar18 >> 6 | uVar18 * 0x4000000)) +
              ((uVar15 ^ uVar11) & uVar18 ^ uVar15) + uVar2 + 0x27b70a85 + uVar25;
      uVar14 = uVar14 + iVar6;
      uVar26 = ((uVar7 | uVar8) & uVar29 | uVar7 & uVar8) +
               ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 2 | uVar8 * 0x40000000) ^
               (uVar8 * 0x400 | uVar8 >> 0x16)) + iVar6;
      uVar22 = uVar22 + ((uVar20 * 0x4000 | uVar20 >> 0x12) ^ (uVar20 >> 7 | uVar20 * 0x2000000) ^
                        uVar20 >> 3) + uVar27 +
               ((uVar19 * 0x2000 | uVar19 >> 0x13) ^ (uVar19 * 0x8000 | uVar19 >> 0x11) ^
               uVar19 >> 10);
      iVar6 = ((uVar14 * 0x80 | uVar14 >> 0x19) ^
              (uVar14 >> 0xb | uVar14 * 0x200000) ^ (uVar14 >> 6 | uVar14 * 0x4000000)) +
              uVar15 + 0x2e1b2138 + uVar22 + ((uVar11 ^ uVar18) & uVar14 ^ uVar11);
      uVar29 = uVar29 + iVar6;
      uVar24 = ((uVar8 | uVar26) & uVar7 | uVar8 & uVar26) +
               ((uVar26 >> 0xd | uVar26 * 0x80000) ^ (uVar26 >> 2 | uVar26 * 0x40000000) ^
               (uVar26 * 0x400 | uVar26 >> 0x16)) + iVar6;
      uVar20 = uVar20 + ((uVar31 * 0x4000 | uVar31 >> 0x12) ^ (uVar31 >> 7 | uVar31 * 0x2000000) ^
                        uVar31 >> 3) + uVar17 +
               ((uVar25 * 0x2000 | uVar25 >> 0x13) ^ (uVar25 * 0x8000 | uVar25 >> 0x11) ^
               uVar25 >> 10);
      iVar6 = ((uVar29 * 0x80 | uVar29 >> 0x19) ^
              (uVar29 >> 0xb | uVar29 * 0x200000) ^ (uVar29 >> 6 | uVar29 * 0x4000000)) +
              uVar11 + 0x4d2c6dfc + uVar20 + ((uVar18 ^ uVar14) & uVar29 ^ uVar18);
      uVar7 = uVar7 + iVar6;
      uVar2 = ((uVar26 | uVar24) & uVar8 | uVar26 & uVar24) +
              ((uVar24 >> 0xd | uVar24 * 0x80000) ^ (uVar24 >> 2 | uVar24 * 0x40000000) ^
              (uVar24 * 0x400 | uVar24 >> 0x16)) + iVar6;
      uVar9 = ((uVar22 * 0x2000 | uVar22 >> 0x13) ^ (uVar22 * 0x8000 | uVar22 >> 0x11) ^
              uVar22 >> 10) +
              ((uVar3 * 0x4000 | uVar3 >> 0x12) ^ (uVar3 >> 7 | uVar3 * 0x2000000) ^ uVar3 >> 3) +
              uVar31 + uVar13;
      iVar6 = ((uVar7 * 0x80 | uVar7 >> 0x19) ^
              (uVar7 >> 0xb | uVar7 * 0x200000) ^ (uVar7 >> 6 | uVar7 * 0x4000000)) +
              uVar18 + 0x53380d13 + uVar9 + ((uVar14 ^ uVar29) & uVar7 ^ uVar14);
      uVar8 = uVar8 + iVar6;
      uVar18 = ((uVar24 | uVar2) & uVar26 | uVar24 & uVar2) +
               ((uVar2 >> 0xd | uVar2 * 0x80000) ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^
               (uVar2 * 0x400 | uVar2 >> 0x16)) + iVar6;
      uVar15 = ((uVar20 * 0x2000 | uVar20 >> 0x13) ^ (uVar20 * 0x8000 | uVar20 >> 0x11) ^
               uVar20 >> 10) +
               ((uVar23 * 0x4000 | uVar23 >> 0x12) ^ (uVar23 >> 7 | uVar23 * 0x2000000) ^
               uVar23 >> 3) + uVar3 + uVar28;
      iVar6 = ((uVar8 * 0x80 | uVar8 >> 0x19) ^
              (uVar8 >> 0xb | uVar8 * 0x200000) ^ (uVar8 >> 6 | uVar8 * 0x4000000)) +
              uVar14 + 0x650a7354 + uVar15 + ((uVar29 ^ uVar7) & uVar8 ^ uVar29);
      uVar26 = uVar26 + iVar6;
      uVar31 = ((uVar2 | uVar18) & uVar24 | uVar2 & uVar18) +
               ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 2 | uVar18 * 0x40000000) ^
               (uVar18 * 0x400 | uVar18 >> 0x16)) + iVar6;
      uVar11 = ((uVar16 * 0x4000 | uVar16 >> 0x12) ^ (uVar16 >> 7 | uVar16 * 0x2000000) ^
               uVar16 >> 3) + uVar23 + uVar10 +
               ((uVar9 * 0x2000 | uVar9 >> 0x13) ^ (uVar9 * 0x8000 | uVar9 >> 0x11) ^ uVar9 >> 10);
      iVar6 = ((uVar26 * 0x80 | uVar26 >> 0x19) ^
              (uVar26 >> 0xb | uVar26 * 0x200000) ^ (uVar26 >> 6 | uVar26 * 0x4000000)) +
              uVar29 + 0x766a0abb + uVar11 + ((uVar7 ^ uVar8) & uVar26 ^ uVar7);
      uVar24 = uVar24 + iVar6;
      uVar3 = ((uVar18 | uVar31) & uVar2 | uVar18 & uVar31) +
              ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 >> 2 | uVar31 * 0x40000000) ^
              (uVar31 * 0x400 | uVar31 >> 0x16)) + iVar6;
      uVar14 = ((uVar12 * 0x4000 | uVar12 >> 0x12) ^ (uVar12 >> 7 | uVar12 * 0x2000000) ^
               uVar12 >> 3) + uVar16 + uVar19 +
               ((uVar15 * 0x2000 | uVar15 >> 0x13) ^ (uVar15 * 0x8000 | uVar15 >> 0x11) ^
               uVar15 >> 10);
      iVar6 = ((uVar24 * 0x80 | uVar24 >> 0x19) ^
              (uVar24 >> 0xb | uVar24 * 0x200000) ^ (uVar24 >> 6 | uVar24 * 0x4000000)) +
              uVar7 + 0x81c2c92e + uVar14 + ((uVar8 ^ uVar26) & uVar24 ^ uVar8);
      uVar2 = uVar2 + iVar6;
      uVar7 = ((uVar31 | uVar3) & uVar18 | uVar31 & uVar3) +
              ((uVar3 >> 0xd | uVar3 * 0x80000) ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^
              (uVar3 * 0x400 | uVar3 >> 0x16)) + iVar6;
      uVar12 = ((uVar21 * 0x4000 | uVar21 >> 0x12) ^ (uVar21 >> 7 | uVar21 * 0x2000000) ^
               uVar21 >> 3) + uVar12 + uVar25 +
               ((uVar11 * 0x2000 | uVar11 >> 0x13) ^ (uVar11 * 0x8000 | uVar11 >> 0x11) ^
               uVar11 >> 10);
      iVar6 = ((uVar2 * 0x80 | uVar2 >> 0x19) ^
              (uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000)) +
              uVar8 + 0x92722c85 + uVar12 + ((uVar26 ^ uVar24) & uVar2 ^ uVar26);
      uVar18 = uVar18 + iVar6;
      uVar8 = ((uVar3 | uVar7) & uVar31 | uVar3 & uVar7) +
              ((uVar7 >> 0xd | uVar7 * 0x80000) ^ (uVar7 >> 2 | uVar7 * 0x40000000) ^
              (uVar7 * 0x400 | uVar7 >> 0x16)) + iVar6;
      uVar21 = ((uVar14 * 0x2000 | uVar14 >> 0x13) ^ (uVar14 * 0x8000 | uVar14 >> 0x11) ^
               uVar14 >> 10) +
               ((uVar30 * 0x4000 | uVar30 >> 0x12) ^ (uVar30 >> 7 | uVar30 * 0x2000000) ^
               uVar30 >> 3) + uVar21 + uVar22;
      iVar6 = ((uVar18 * 0x80 | uVar18 >> 0x19) ^
              (uVar18 >> 0xb | uVar18 * 0x200000) ^ (uVar18 >> 6 | uVar18 * 0x4000000)) +
              uVar26 + 0xa2bfe8a1 + uVar21 + ((uVar24 ^ uVar2) & uVar18 ^ uVar24);
      uVar31 = uVar31 + iVar6;
      uVar26 = ((uVar7 | uVar8) & uVar3 | uVar7 & uVar8) +
               ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 2 | uVar8 * 0x40000000) ^
               (uVar8 * 0x400 | uVar8 >> 0x16)) + iVar6;
      uVar29 = ((uVar27 * 0x4000 | uVar27 >> 0x12) ^ (uVar27 >> 7 | uVar27 * 0x2000000) ^
               uVar27 >> 3) + uVar30 + uVar20 +
               ((uVar12 * 0x2000 | uVar12 >> 0x13) ^ (uVar12 * 0x8000 | uVar12 >> 0x11) ^
               uVar12 >> 10);
      iVar6 = ((uVar31 * 0x80 | uVar31 >> 0x19) ^
              (uVar31 >> 0xb | uVar31 * 0x200000) ^ (uVar31 >> 6 | uVar31 * 0x4000000)) +
              uVar24 + 0xa81a664b + uVar29 + ((uVar2 ^ uVar18) & uVar31 ^ uVar2);
      uVar3 = uVar3 + iVar6;
      uVar30 = ((uVar8 | uVar26) & uVar7 | uVar8 & uVar26) +
               ((uVar26 >> 0xd | uVar26 * 0x80000) ^ (uVar26 >> 2 | uVar26 * 0x40000000) ^
               (uVar26 * 0x400 | uVar26 >> 0x16)) + iVar6;
      uVar23 = ((uVar17 * 0x4000 | uVar17 >> 0x12) ^ (uVar17 >> 7 | uVar17 * 0x2000000) ^
               uVar17 >> 3) + uVar27 + uVar9 +
               ((uVar21 * 0x2000 | uVar21 >> 0x13) ^ (uVar21 * 0x8000 | uVar21 >> 0x11) ^
               uVar21 >> 10);
      iVar6 = ((uVar3 * 0x80 | uVar3 >> 0x19) ^
              (uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000)) +
              uVar2 + 0xc24b8b70 + uVar23 + ((uVar18 ^ uVar31) & uVar3 ^ uVar18);
      uVar7 = uVar7 + iVar6;
      uVar2 = ((uVar26 | uVar30) & uVar8 | uVar26 & uVar30) +
              ((uVar30 >> 0xd | uVar30 * 0x80000) ^ (uVar30 >> 2 | uVar30 * 0x40000000) ^
              (uVar30 * 0x400 | uVar30 >> 0x16)) + iVar6;
      uVar16 = ((uVar29 * 0x2000 | uVar29 >> 0x13) ^ (uVar29 * 0x8000 | uVar29 >> 0x11) ^
               uVar29 >> 10) +
               ((uVar13 * 0x4000 | uVar13 >> 0x12) ^ (uVar13 >> 7 | uVar13 * 0x2000000) ^
               uVar13 >> 3) + uVar17 + uVar15;
      iVar6 = ((uVar7 >> 0xb | uVar7 * 0x200000) ^ (uVar7 >> 6 | uVar7 * 0x4000000) ^
              (uVar7 * 0x80 | uVar7 >> 0x19)) +
              uVar18 + 0xc76c51a3 + uVar16 + ((uVar31 ^ uVar3) & uVar7 ^ uVar31);
      uVar8 = uVar8 + iVar6;
      uVar18 = ((uVar30 | uVar2) & uVar26 | uVar30 & uVar2) +
               ((uVar2 >> 0xd | uVar2 * 0x80000) ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^
               (uVar2 * 0x400 | uVar2 >> 0x16)) + iVar6;
      uVar13 = ((uVar23 * 0x2000 | uVar23 >> 0x13) ^ (uVar23 * 0x8000 | uVar23 >> 0x11) ^
               uVar23 >> 10) +
               ((uVar28 * 0x4000 | uVar28 >> 0x12) ^ (uVar28 >> 7 | uVar28 * 0x2000000) ^
               uVar28 >> 3) + uVar13 + uVar11;
      iVar6 = ((uVar8 * 0x80 | uVar8 >> 0x19) ^
              (uVar8 >> 0xb | uVar8 * 0x200000) ^ (uVar8 >> 6 | uVar8 * 0x4000000)) +
              uVar31 + 0xd192e819 + uVar13 + ((uVar3 ^ uVar7) & uVar8 ^ uVar3);
      uVar26 = uVar26 + iVar6;
      uVar27 = ((uVar2 | uVar18) & uVar30 | uVar2 & uVar18) +
               ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 2 | uVar18 * 0x40000000) ^
               (uVar18 * 0x400 | uVar18 >> 0x16)) + iVar6;
      uVar17 = ((uVar16 * 0x2000 | uVar16 >> 0x13) ^ (uVar16 * 0x8000 | uVar16 >> 0x11) ^
               uVar16 >> 10) +
               ((uVar10 * 0x4000 | uVar10 >> 0x12) ^ (uVar10 >> 7 | uVar10 * 0x2000000) ^
               uVar10 >> 3) + uVar28 + uVar14;
      iVar6 = ((uVar26 * 0x80 | uVar26 >> 0x19) ^
              (uVar26 >> 0xb | uVar26 * 0x200000) ^ (uVar26 >> 6 | uVar26 * 0x4000000)) +
              uVar3 + 0xd6990624 + uVar17 + ((uVar7 ^ uVar8) & uVar26 ^ uVar7);
      uVar30 = uVar30 + iVar6;
      uVar24 = ((uVar18 | uVar27) & uVar2 | uVar18 & uVar27) +
               ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 >> 2 | uVar27 * 0x40000000) ^
               (uVar27 * 0x400 | uVar27 >> 0x16)) + iVar6;
      uVar3 = ((uVar13 * 0x2000 | uVar13 >> 0x13) ^ (uVar13 * 0x8000 | uVar13 >> 0x11) ^
              uVar13 >> 10) +
              ((uVar19 * 0x4000 | uVar19 >> 0x12) ^ (uVar19 >> 7 | uVar19 * 0x2000000) ^ uVar19 >> 3
              ) + uVar10 + uVar12;
      iVar6 = ((uVar30 * 0x80 | uVar30 >> 0x19) ^
              (uVar30 >> 0xb | uVar30 * 0x200000) ^ (uVar30 >> 6 | uVar30 * 0x4000000)) +
              ((uVar8 ^ uVar26) & uVar30 ^ uVar8) + uVar7 + 0xf40e3585 + uVar3;
      uVar2 = uVar2 + iVar6;
      uVar31 = ((uVar27 | uVar24) & uVar18 | uVar27 & uVar24) +
               ((uVar24 >> 0xd | uVar24 * 0x80000) ^ (uVar24 >> 2 | uVar24 * 0x40000000) ^
               (uVar24 * 0x400 | uVar24 >> 0x16)) + iVar6;
      uVar7 = ((uVar25 * 0x4000 | uVar25 >> 0x12) ^ (uVar25 >> 7 | uVar25 * 0x2000000) ^ uVar25 >> 3
              ) + uVar19 + uVar21 +
              ((uVar17 * 0x2000 | uVar17 >> 0x13) ^ (uVar17 * 0x8000 | uVar17 >> 0x11) ^
              uVar17 >> 10);
      iVar6 = ((uVar2 * 0x80 | uVar2 >> 0x19) ^
              (uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000)) +
              ((uVar26 ^ uVar30) & uVar2 ^ uVar26) + uVar8 + 0x106aa070 + uVar7;
      uVar18 = uVar18 + iVar6;
      uVar8 = ((uVar24 | uVar31) & uVar27 | uVar24 & uVar31) +
              ((uVar31 >> 0xd | uVar31 * 0x80000) ^ (uVar31 >> 2 | uVar31 * 0x40000000) ^
              (uVar31 * 0x400 | uVar31 >> 0x16)) + iVar6;
      x[0] = ((uVar3 * 0x2000 | uVar3 >> 0x13) ^ (uVar3 * 0x8000 | uVar3 >> 0x11) ^ uVar3 >> 10) +
             ((uVar22 * 0x4000 | uVar22 >> 0x12) ^ (uVar22 >> 7 | uVar22 * 0x2000000) ^ uVar22 >> 3)
             + uVar25 + uVar29;
      iVar6 = ((uVar18 * 0x80 | uVar18 >> 0x19) ^
              (uVar18 >> 0xb | uVar18 * 0x200000) ^ (uVar18 >> 6 | uVar18 * 0x4000000)) +
              uVar26 + 0x19a4c116 + x[0] + ((uVar30 ^ uVar2) & uVar18 ^ uVar30);
      uVar27 = uVar27 + iVar6;
      uVar10 = ((uVar31 | uVar8) & uVar24 | uVar31 & uVar8) +
               ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 2 | uVar8 * 0x40000000) ^
               (uVar8 * 0x400 | uVar8 >> 0x16)) + iVar6;
      x[1] = ((uVar7 * 0x2000 | uVar7 >> 0x13) ^ (uVar7 * 0x8000 | uVar7 >> 0x11) ^ uVar7 >> 10) +
             ((uVar20 * 0x4000 | uVar20 >> 0x12) ^ (uVar20 >> 7 | uVar20 * 0x2000000) ^ uVar20 >> 3)
             + uVar22 + uVar23;
      iVar6 = ((uVar27 * 0x80 | uVar27 >> 0x19) ^
              (uVar27 >> 0xb | uVar27 * 0x200000) ^ (uVar27 >> 6 | uVar27 * 0x4000000)) +
              ((uVar2 ^ uVar18) & uVar27 ^ uVar2) + uVar30 + 0x1e376c08 + x[1];
      uVar24 = uVar24 + iVar6;
      uVar30 = ((uVar8 | uVar10) & uVar31 | uVar8 & uVar10) +
               ((uVar10 >> 0xd | uVar10 * 0x80000) ^ (uVar10 >> 2 | uVar10 * 0x40000000) ^
               (uVar10 * 0x400 | uVar10 >> 0x16)) + iVar6;
      x[2] = ((x[0] * 0x2000 | x[0] >> 0x13) ^ (x[0] * 0x8000 | x[0] >> 0x11) ^ x[0] >> 10) +
             ((uVar9 * 0x4000 | uVar9 >> 0x12) ^ (uVar9 >> 7 | uVar9 * 0x2000000) ^ uVar9 >> 3) +
             uVar20 + uVar16;
      iVar6 = ((uVar24 * 0x80 | uVar24 >> 0x19) ^
              (uVar24 >> 0xb | uVar24 * 0x200000) ^ (uVar24 >> 6 | uVar24 * 0x4000000)) +
              uVar2 + 0x2748774c + x[2] + ((uVar18 ^ uVar27) & uVar24 ^ uVar18);
      uVar31 = uVar31 + iVar6;
      uVar28 = ((uVar10 | uVar30) & uVar8 | uVar10 & uVar30) +
               ((uVar30 >> 0xd | uVar30 * 0x80000) ^ (uVar30 >> 2 | uVar30 * 0x40000000) ^
               (uVar30 * 0x400 | uVar30 >> 0x16)) + iVar6;
      x[3] = ((x[1] * 0x2000 | x[1] >> 0x13) ^ (x[1] * 0x8000 | x[1] >> 0x11) ^ x[1] >> 10) +
             ((uVar15 * 0x4000 | uVar15 >> 0x12) ^ (uVar15 >> 7 | uVar15 * 0x2000000) ^ uVar15 >> 3)
             + uVar9 + uVar13;
      iVar6 = ((uVar31 * 0x80 | uVar31 >> 0x19) ^
              (uVar31 >> 0xb | uVar31 * 0x200000) ^ (uVar31 >> 6 | uVar31 * 0x4000000)) +
              uVar18 + 0x34b0bcb5 + x[3] + ((uVar27 ^ uVar24) & uVar31 ^ uVar27);
      uVar8 = uVar8 + iVar6;
      uVar19 = ((uVar30 | uVar28) & uVar10 | uVar30 & uVar28) +
               ((uVar28 >> 0xd | uVar28 * 0x80000) ^ (uVar28 >> 2 | uVar28 * 0x40000000) ^
               (uVar28 * 0x400 | uVar28 >> 0x16)) + iVar6;
      x[4] = ((x[2] * 0x2000 | x[2] >> 0x13) ^ (x[2] * 0x8000 | x[2] >> 0x11) ^ x[2] >> 10) +
             ((uVar11 * 0x4000 | uVar11 >> 0x12) ^ (uVar11 >> 7 | uVar11 * 0x2000000) ^ uVar11 >> 3)
             + uVar15 + uVar17;
      iVar6 = ((uVar8 * 0x80 | uVar8 >> 0x19) ^
              (uVar8 >> 0xb | uVar8 * 0x200000) ^ (uVar8 >> 6 | uVar8 * 0x4000000)) +
              uVar27 + 0x391c0cb3 + x[4] + ((uVar24 ^ uVar31) & uVar8 ^ uVar24);
      uVar10 = uVar10 + iVar6;
      uVar27 = ((uVar28 | uVar19) & uVar30 | uVar28 & uVar19) +
               ((uVar19 >> 0xd | uVar19 * 0x80000) ^ (uVar19 >> 2 | uVar19 * 0x40000000) ^
               (uVar19 * 0x400 | uVar19 >> 0x16)) + iVar6;
      x[5] = ((x[3] * 0x2000 | x[3] >> 0x13) ^ (x[3] * 0x8000 | x[3] >> 0x11) ^ x[3] >> 10) +
             ((uVar14 * 0x4000 | uVar14 >> 0x12) ^ (uVar14 >> 7 | uVar14 * 0x2000000) ^ uVar14 >> 3)
             + uVar11 + uVar3;
      iVar6 = ((uVar10 * 0x80 | uVar10 >> 0x19) ^
              (uVar10 >> 0xb | uVar10 * 0x200000) ^ (uVar10 >> 6 | uVar10 * 0x4000000)) +
              uVar24 + 0x4ed8aa4a + x[5] + ((uVar31 ^ uVar8) & uVar10 ^ uVar31);
      uVar30 = uVar30 + iVar6;
      uVar2 = ((uVar19 | uVar27) & uVar28 | uVar19 & uVar27) +
              ((uVar27 >> 0xd | uVar27 * 0x80000) ^ (uVar27 >> 2 | uVar27 * 0x40000000) ^
              (uVar27 * 0x400 | uVar27 >> 0x16)) + iVar6;
      x[6] = ((uVar12 * 0x4000 | uVar12 >> 0x12) ^ (uVar12 >> 7 | uVar12 * 0x2000000) ^ uVar12 >> 3)
             + uVar14 + uVar7 +
             ((x[4] * 0x2000 | x[4] >> 0x13) ^ (x[4] * 0x8000 | x[4] >> 0x11) ^ x[4] >> 10);
      iVar6 = ((uVar30 * 0x80 | uVar30 >> 0x19) ^
              (uVar30 >> 0xb | uVar30 * 0x200000) ^ (uVar30 >> 6 | uVar30 * 0x4000000)) +
              uVar31 + 0x5b9cca4f + x[6] + ((uVar8 ^ uVar10) & uVar30 ^ uVar8);
      uVar28 = uVar28 + iVar6;
      uVar15 = ((uVar27 | uVar2) & uVar19 | uVar27 & uVar2) +
               ((uVar2 >> 0xd | uVar2 * 0x80000) ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^
               (uVar2 * 0x400 | uVar2 >> 0x16)) + iVar6;
      x[7] = ((uVar21 * 0x4000 | uVar21 >> 0x12) ^ (uVar21 >> 7 | uVar21 * 0x2000000) ^ uVar21 >> 3)
             + uVar12 + x[0] +
             ((x[5] * 0x2000 | x[5] >> 0x13) ^ (x[5] * 0x8000 | x[5] >> 0x11) ^ x[5] >> 10);
      iVar6 = ((uVar28 * 0x80 | uVar28 >> 0x19) ^
              (uVar28 >> 0xb | uVar28 * 0x200000) ^ (uVar28 >> 6 | uVar28 * 0x4000000)) +
              uVar8 + 0x682e6ff3 + x[7] + ((uVar10 ^ uVar30) & uVar28 ^ uVar10);
      uVar19 = uVar19 + iVar6;
      uVar9 = ((uVar2 | uVar15) & uVar27 | uVar2 & uVar15) +
              ((uVar15 >> 0xd | uVar15 * 0x80000) ^ (uVar15 >> 2 | uVar15 * 0x40000000) ^
              (uVar15 * 0x400 | uVar15 >> 0x16)) + iVar6;
      x[8] = ((x[6] * 0x2000 | x[6] >> 0x13) ^ (x[6] * 0x8000 | x[6] >> 0x11) ^ x[6] >> 10) +
             x[1] + ((uVar29 * 0x4000 | uVar29 >> 0x12) ^ (uVar29 >> 7 | uVar29 * 0x2000000) ^
                    uVar29 >> 3) + uVar21;
      iVar6 = ((uVar19 * 0x80 | uVar19 >> 0x19) ^
              (uVar19 >> 0xb | uVar19 * 0x200000) ^ (uVar19 >> 6 | uVar19 * 0x4000000)) +
              uVar10 + 0x748f82ee + x[8] + ((uVar30 ^ uVar28) & uVar19 ^ uVar30);
      uVar27 = uVar27 + iVar6;
      uVar10 = ((uVar15 | uVar9) & uVar2 | uVar15 & uVar9) +
               ((uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 >> 2 | uVar9 * 0x40000000) ^
               (uVar9 * 0x400 | uVar9 >> 0x16)) + iVar6;
      x[9] = x[2] + ((uVar23 * 0x4000 | uVar23 >> 0x12) ^ (uVar23 >> 7 | uVar23 * 0x2000000) ^
                    uVar23 >> 3) + uVar29 +
             ((x[7] * 0x2000 | x[7] >> 0x13) ^ (x[7] * 0x8000 | x[7] >> 0x11) ^ x[7] >> 10);
      iVar6 = ((uVar27 * 0x80 | uVar27 >> 0x19) ^
              (uVar27 >> 0xb | uVar27 * 0x200000) ^ (uVar27 >> 6 | uVar27 * 0x4000000)) +
              uVar30 + 0x78a5636f + x[9] + ((uVar28 ^ uVar19) & uVar27 ^ uVar28);
      uVar2 = uVar2 + iVar6;
      uVar21 = ((uVar9 | uVar10) & uVar15 | uVar9 & uVar10) +
               ((uVar10 >> 0xd | uVar10 * 0x80000) ^ (uVar10 >> 2 | uVar10 * 0x40000000) ^
               (uVar10 * 0x400 | uVar10 >> 0x16)) + iVar6;
      x[10] = x[3] + ((uVar16 * 0x4000 | uVar16 >> 0x12) ^ (uVar16 >> 7 | uVar16 * 0x2000000) ^
                     uVar16 >> 3) + uVar23 +
              ((x[8] * 0x2000 | x[8] >> 0x13) ^ (x[8] * 0x8000 | x[8] >> 0x11) ^ x[8] >> 10);
      iVar6 = ((uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000) ^
              (uVar2 * 0x80 | uVar2 >> 0x19)) +
              uVar28 + 0x84c87814 + x[10] + ((uVar19 ^ uVar27) & uVar2 ^ uVar19);
      uVar15 = uVar15 + iVar6;
      uVar23 = iVar6 + ((uVar10 | uVar21) & uVar9 | uVar10 & uVar21) +
                       ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 >> 2 | uVar21 * 0x40000000) ^
                       (uVar21 * 0x400 | uVar21 >> 0x16));
      x[11] = x[4] + ((uVar13 * 0x4000 | uVar13 >> 0x12) ^ (uVar13 >> 7 | uVar13 * 0x2000000) ^
                     uVar13 >> 3) + uVar16 +
              (x[9] >> 10 ^ (x[9] * 0x2000 | x[9] >> 0x13) ^ (x[9] * 0x8000 | x[9] >> 0x11));
      iVar6 = ((uVar15 >> 0xb | uVar15 * 0x200000) ^ (uVar15 >> 6 | uVar15 * 0x4000000) ^
              (uVar15 * 0x80 | uVar15 >> 0x19)) +
              uVar19 + 0x8cc70208 + x[11] + ((uVar27 ^ uVar2) & uVar15 ^ uVar27);
      uVar9 = uVar9 + iVar6;
      uVar11 = iVar6 + ((uVar21 | uVar23) & uVar10 | uVar21 & uVar23) +
                       ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 2 | uVar23 * 0x40000000) ^
                       (uVar23 * 0x400 | uVar23 >> 0x16));
      x[12] = ((uVar17 * 0x4000 | uVar17 >> 0x12) ^ (uVar17 >> 7 | uVar17 * 0x2000000) ^ uVar17 >> 3
              ) + uVar13 + x[5] +
              (x[10] >> 10 ^ (x[10] * 0x2000 | x[10] >> 0x13) ^ (x[10] * 0x8000 | x[10] >> 0x11));
      iVar6 = ((uVar9 >> 0xb | uVar9 * 0x200000) ^ (uVar9 >> 6 | uVar9 * 0x4000000) ^
              (uVar9 * 0x80 | uVar9 >> 0x19)) +
              uVar27 + 0x90befffa + x[12] + ((uVar2 ^ uVar15) & uVar9 ^ uVar2);
      uVar10 = uVar10 + iVar6;
      uVar8 = iVar6 + ((uVar23 | uVar11) & uVar21 | uVar23 & uVar11) +
                      ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^
                      (uVar11 * 0x400 | uVar11 >> 0x16));
      x[13] = ((uVar3 * 0x4000 | uVar3 >> 0x12) ^ (uVar3 >> 7 | uVar3 * 0x2000000) ^ uVar3 >> 3) +
              uVar17 + x[6] +
              (x[11] >> 10 ^ (x[11] * 0x2000 | x[11] >> 0x13) ^ (x[11] * 0x8000 | x[11] >> 0x11));
      iVar6 = ((uVar10 >> 0xb | uVar10 * 0x200000) ^ (uVar10 >> 6 | uVar10 * 0x4000000) ^
              (uVar10 * 0x80 | uVar10 >> 0x19)) +
              uVar2 + 0xa4506ceb + x[13] + ((uVar15 ^ uVar9) & uVar10 ^ uVar15);
      uVar21 = uVar21 + iVar6;
      uVar2 = iVar6 + ((uVar11 | uVar8) & uVar23 | uVar11 & uVar8) +
                      ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 2 | uVar8 * 0x40000000) ^
                      (uVar8 * 0x400 | uVar8 >> 0x16));
      x[14] = (x[12] >> 10 ^ (x[12] * 0x2000 | x[12] >> 0x13) ^ (x[12] * 0x8000 | x[12] >> 0x11)) +
              ((uVar7 * 0x4000 | uVar7 >> 0x12) ^ (uVar7 >> 7 | uVar7 * 0x2000000) ^ uVar7 >> 3) +
              uVar3 + x[7];
      iVar6 = ((uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 >> 6 | uVar21 * 0x4000000) ^
              (uVar21 * 0x80 | uVar21 >> 0x19)) +
              uVar15 + 0xbef9a3f7 + x[14] + ((uVar9 ^ uVar10) & uVar21 ^ uVar9);
      uVar23 = uVar23 + iVar6;
      uVar3 = iVar6 + ((uVar8 | uVar2) & uVar11 | uVar8 & uVar2) +
                      ((uVar2 >> 0xd | uVar2 * 0x80000) ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^
                      (uVar2 * 0x400 | uVar2 >> 0x16));
      x[15] = (x[13] >> 10 ^ (x[13] * 0x2000 | x[13] >> 0x13) ^ (x[13] * 0x8000 | x[13] >> 0x11)) +
              ((x[0] * 0x4000 | x[0] >> 0x12) ^ (x[0] >> 7 | x[0] * 0x2000000) ^ x[0] >> 3) + uVar7
              + x[8];
      local_e0 = local_e0 + uVar2;
      local_e4 = local_e4 + uVar3;
      local_b4 = local_b4 + uVar8;
      iVar6 = ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 6 | uVar23 * 0x4000000) ^
              (uVar23 * 0x80 | uVar23 >> 0x19)) +
              ((uVar10 ^ uVar21) & uVar23 ^ uVar10) + uVar9 + 0xc67178f2 + x[15];
      local_b8 = ((uVar2 | uVar3) & uVar8 | uVar2 & uVar3) +
                 ((uVar3 >> 0xd | uVar3 * 0x80000) ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^
                 (uVar3 * 0x400 | uVar3 >> 0x16)) + local_b8 + iVar6;
      ctx->state[2] = local_e0;
      ctx->state[0] = local_b8;
      ctx->state[1] = local_e4;
      ctx->state[3] = local_b4;
      local_d4 = local_d4 + uVar21;
      local_dc = local_dc + uVar11 + iVar6;
      local_d8 = local_d8 + uVar23;
      local_a8 = local_a8 + uVar10;
      ctx->state[6] = local_d4;
      ctx->state[4] = local_dc;
      ctx->state[7] = local_a8;
      ctx->state[5] = local_d8;
    } while (local_b0 < pvVar4);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

