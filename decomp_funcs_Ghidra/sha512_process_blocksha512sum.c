
void sha512_process_block(void *buffer,size_t len,sha512_ctx *ctx)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  long in_FS_OFFSET;
  u64 local_180;
  u64 local_178;
  u64 local_170;
  u64 local_168;
  u64 local_160;
  u64 local_108;
  u64 local_100;
  u64 local_f8;
  void *local_e8;
  u64 x [16];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pvVar2 = (void *)((len & 0xfffffffffffffff8) + (long)buffer);
  local_108 = ctx->state[0];
  uVar4 = ctx->total[0];
  local_180 = ctx->state[1];
  ctx->total[0] = len + ctx->total[0];
  local_178 = ctx->state[2];
  local_100 = ctx->state[3];
  local_170 = ctx->state[4];
  local_168 = ctx->state[5];
  local_160 = ctx->state[6];
  local_f8 = ctx->state[7];
  ctx->total[1] = ctx->total[1] + (ulong)CARRY8(len,uVar4);
  local_e8 = buffer;
  if (buffer < pvVar2) {
    do {
      lVar3 = 0;
      do {
        uVar4 = *(ulong *)((long)local_e8 + lVar3);
        *(ulong *)((long)x + lVar3) =
             uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
             (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
             (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0x80);
      local_e8 = (void *)((long)local_e8 + 0x80);
      lVar3 = x[0] + 0x428a2f98d728ae22 + local_f8 +
              ((local_170 >> 0xe | local_170 << 0x32) ^ (local_170 >> 0x12 | local_170 << 0x2e) ^
              (local_170 << 0x17 | local_170 >> 0x29)) +
              ((local_168 ^ local_160) & local_170 ^ local_160);
      uVar4 = lVar3 + local_100;
      uVar7 = ((local_108 | local_180) & local_178 | local_108 & local_180) +
              ((local_108 << 0x1e | local_108 >> 0x22) ^ (local_108 >> 0x1c | local_108 << 0x24) ^
              (local_108 << 0x19 | local_108 >> 0x27)) + lVar3;
      lVar3 = ((uVar4 * 0x800000 | uVar4 >> 0x29) ^
              (uVar4 >> 0x12 | uVar4 << 0x2e) ^ (uVar4 >> 0xe | uVar4 << 0x32)) +
              x[1] + 0x7137449123ef65cd + local_160 + ((local_170 ^ local_168) & uVar4 ^ local_168);
      uVar17 = local_178 + lVar3;
      uVar20 = ((local_108 | uVar7) & local_180 | local_108 & uVar7) +
               ((uVar7 * 0x40000000 | uVar7 >> 0x22) ^ (uVar7 >> 0x1c | uVar7 << 0x24) ^
               (uVar7 * 0x2000000 | uVar7 >> 0x27)) + lVar3;
      lVar3 = ((uVar17 * 0x800000 | uVar17 >> 0x29) ^
              (uVar17 >> 0x12 | uVar17 << 0x2e) ^ (uVar17 >> 0xe | uVar17 << 0x32)) +
              x[2] + 0xb5c0fbcfec4d3b2f + local_168 + ((local_170 ^ uVar4) & uVar17 ^ local_170);
      uVar5 = lVar3 + local_180;
      uVar10 = ((uVar7 | uVar20) & local_108 | uVar7 & uVar20) +
               ((uVar20 * 0x40000000 | uVar20 >> 0x22) ^ (uVar20 >> 0x1c | uVar20 << 0x24) ^
               (uVar20 * 0x2000000 | uVar20 >> 0x27)) + lVar3;
      lVar3 = ((uVar5 * 0x800000 | uVar5 >> 0x29) ^
              (uVar5 >> 0x12 | uVar5 << 0x2e) ^ (uVar5 >> 0xe | uVar5 << 0x32)) +
              x[3] + 0xe9b5dba58189dbbc + local_170 + ((uVar4 ^ uVar17) & uVar5 ^ uVar4);
      uVar8 = lVar3 + local_108;
      uVar27 = ((uVar20 | uVar10) & uVar7 | uVar20 & uVar10) +
               ((uVar10 * 0x40000000 | uVar10 >> 0x22) ^ (uVar10 >> 0x1c | uVar10 << 0x24) ^
               (uVar10 * 0x2000000 | uVar10 >> 0x27)) + lVar3;
      lVar3 = ((uVar8 * 0x800000 | uVar8 >> 0x29) ^
              (uVar8 >> 0x12 | uVar8 << 0x2e) ^ (uVar8 >> 0xe | uVar8 << 0x32)) +
              x[4] + 0x3956c25bf348b538 + uVar4 + ((uVar17 ^ uVar5) & uVar8 ^ uVar17);
      uVar7 = uVar7 + lVar3;
      uVar23 = ((uVar10 | uVar27) & uVar20 | uVar10 & uVar27) +
               ((uVar27 * 0x40000000 | uVar27 >> 0x22) ^ (uVar27 >> 0x1c | uVar27 << 0x24) ^
               (uVar27 * 0x2000000 | uVar27 >> 0x27)) + lVar3;
      lVar3 = ((uVar7 * 0x800000 | uVar7 >> 0x29) ^
              (uVar7 >> 0x12 | uVar7 << 0x2e) ^ (uVar7 >> 0xe | uVar7 << 0x32)) +
              uVar17 + x[5] + 0x59f111f1b605d019 + ((uVar5 ^ uVar8) & uVar7 ^ uVar5);
      uVar20 = uVar20 + lVar3;
      uVar4 = ((uVar27 | uVar23) & uVar10 | uVar27 & uVar23) +
              ((uVar23 * 0x40000000 | uVar23 >> 0x22) ^ (uVar23 >> 0x1c | uVar23 << 0x24) ^
              (uVar23 * 0x2000000 | uVar23 >> 0x27)) + lVar3;
      lVar3 = ((uVar20 * 0x800000 | uVar20 >> 0x29) ^
              (uVar20 >> 0x12 | uVar20 << 0x2e) ^ (uVar20 >> 0xe | uVar20 << 0x32)) +
              uVar5 + x[6] + 0x923f82a4af194f9b + ((uVar8 ^ uVar7) & uVar20 ^ uVar8);
      uVar10 = uVar10 + lVar3;
      uVar18 = ((uVar23 | uVar4) & uVar27 | uVar23 & uVar4) +
               ((uVar4 * 0x40000000 | uVar4 >> 0x22) ^ (uVar4 >> 0x1c | uVar4 << 0x24) ^
               (uVar4 * 0x2000000 | uVar4 >> 0x27)) + lVar3;
      lVar3 = ((uVar10 * 0x800000 | uVar10 >> 0x29) ^
              (uVar10 >> 0x12 | uVar10 << 0x2e) ^ (uVar10 >> 0xe | uVar10 << 0x32)) +
              uVar8 + x[7] + 0xab1c5ed5da6d8118 + ((uVar7 ^ uVar20) & uVar10 ^ uVar7);
      uVar27 = uVar27 + lVar3;
      uVar14 = ((uVar4 | uVar18) & uVar23 | uVar4 & uVar18) +
               ((uVar18 * 0x40000000 | uVar18 >> 0x22) ^ (uVar18 >> 0x1c | uVar18 << 0x24) ^
               (uVar18 * 0x2000000 | uVar18 >> 0x27)) + lVar3;
      lVar3 = ((uVar27 * 0x800000 | uVar27 >> 0x29) ^
              (uVar27 >> 0x12 | uVar27 << 0x2e) ^ (uVar27 >> 0xe | uVar27 << 0x32)) +
              ((uVar20 ^ uVar10) & uVar27 ^ uVar20) + uVar7 + x[8] + 0xd807aa98a3030242;
      uVar23 = uVar23 + lVar3;
      uVar17 = ((uVar18 | uVar14) & uVar4 | uVar18 & uVar14) +
               ((uVar14 * 0x40000000 | uVar14 >> 0x22) ^ (uVar14 >> 0x1c | uVar14 << 0x24) ^
               (uVar14 * 0x2000000 | uVar14 >> 0x27)) + lVar3;
      lVar3 = ((uVar23 * 0x800000 | uVar23 >> 0x29) ^
              (uVar23 >> 0x12 | uVar23 << 0x2e) ^ (uVar23 >> 0xe | uVar23 << 0x32)) +
              uVar20 + x[9] + 0x12835b0145706fbe + ((uVar10 ^ uVar27) & uVar23 ^ uVar10);
      uVar4 = uVar4 + lVar3;
      uVar5 = ((uVar14 | uVar17) & uVar18 | uVar14 & uVar17) +
              ((uVar17 * 0x40000000 | uVar17 >> 0x22) ^ (uVar17 >> 0x1c | uVar17 << 0x24) ^
              (uVar17 * 0x2000000 | uVar17 >> 0x27)) + lVar3;
      lVar3 = ((uVar4 * 0x800000 | uVar4 >> 0x29) ^
              (uVar4 >> 0x12 | uVar4 << 0x2e) ^ (uVar4 >> 0xe | uVar4 << 0x32)) +
              uVar10 + x[10] + 0x243185be4ee4b28c + ((uVar27 ^ uVar23) & uVar4 ^ uVar27);
      uVar18 = uVar18 + lVar3;
      uVar8 = ((uVar17 | uVar5) & uVar14 | uVar17 & uVar5) +
              ((uVar5 * 0x40000000 | uVar5 >> 0x22) ^ (uVar5 >> 0x1c | uVar5 << 0x24) ^
              (uVar5 * 0x2000000 | uVar5 >> 0x27)) + lVar3;
      lVar3 = ((uVar18 * 0x800000 | uVar18 >> 0x29) ^
              (uVar18 >> 0x12 | uVar18 << 0x2e) ^ (uVar18 >> 0xe | uVar18 << 0x32)) +
              uVar27 + x[11] + 0x550c7dc3d5ffb4e2 + ((uVar23 ^ uVar4) & uVar18 ^ uVar23);
      uVar14 = uVar14 + lVar3;
      uVar27 = ((uVar5 | uVar8) & uVar17 | uVar5 & uVar8) +
               ((uVar8 * 0x40000000 | uVar8 >> 0x22) ^ (uVar8 >> 0x1c | uVar8 << 0x24) ^
               (uVar8 * 0x2000000 | uVar8 >> 0x27)) + lVar3;
      lVar3 = ((uVar14 * 0x800000 | uVar14 >> 0x29) ^
              (uVar14 >> 0x12 | uVar14 << 0x2e) ^ (uVar14 >> 0xe | uVar14 << 0x32)) +
              uVar23 + x[12] + 0x72be5d74f27b896f + ((uVar4 ^ uVar18) & uVar14 ^ uVar4);
      uVar17 = uVar17 + lVar3;
      uVar32 = ((uVar8 | uVar27) & uVar5 | uVar8 & uVar27) +
               ((uVar27 * 0x40000000 | uVar27 >> 0x22) ^ (uVar27 >> 0x1c | uVar27 << 0x24) ^
               (uVar27 * 0x2000000 | uVar27 >> 0x27)) + lVar3;
      lVar3 = ((uVar17 * 0x800000 | uVar17 >> 0x29) ^
              (uVar17 >> 0x12 | uVar17 << 0x2e) ^ (uVar17 >> 0xe | uVar17 << 0x32)) +
              ((uVar18 ^ uVar14) & uVar17 ^ uVar18) + uVar4 + x[13] + 0x80deb1fe3b1696b1;
      uVar5 = uVar5 + lVar3;
      uVar20 = ((uVar27 | uVar32) & uVar8 | uVar27 & uVar32) +
               ((uVar32 * 0x40000000 | uVar32 >> 0x22) ^ (uVar32 >> 0x1c | uVar32 << 0x24) ^
               (uVar32 * 0x2000000 | uVar32 >> 0x27)) + lVar3;
      lVar3 = ((uVar5 * 0x800000 | uVar5 >> 0x29) ^
              (uVar5 >> 0x12 | uVar5 << 0x2e) ^ (uVar5 >> 0xe | uVar5 << 0x32)) +
              uVar18 + x[14] + 0x9bdc06a725c71235 + ((uVar14 ^ uVar17) & uVar5 ^ uVar14);
      uVar8 = uVar8 + lVar3;
      uVar10 = ((uVar32 | uVar20) & uVar27 | uVar32 & uVar20) +
               ((uVar20 * 0x40000000 | uVar20 >> 0x22) ^ (uVar20 >> 0x1c | uVar20 << 0x24) ^
               (uVar20 * 0x2000000 | uVar20 >> 0x27)) + lVar3;
      lVar3 = ((uVar8 * 0x800000 | uVar8 >> 0x29) ^
              (uVar8 >> 0x12 | uVar8 << 0x2e) ^ (uVar8 >> 0xe | uVar8 << 0x32)) +
              uVar14 + x[15] + 0xc19bf174cf692694 + ((uVar17 ^ uVar5) & uVar8 ^ uVar17);
      uVar27 = uVar27 + lVar3;
      uVar23 = ((uVar20 | uVar10) & uVar32 | uVar20 & uVar10) +
               ((uVar10 * 0x40000000 | uVar10 >> 0x22) ^ (uVar10 >> 0x1c | uVar10 << 0x24) ^
               (uVar10 * 0x2000000 | uVar10 >> 0x27)) + lVar3;
      uVar7 = ((x[1] >> 8 | x[1] << 0x38) ^ (x[1] >> 1 | (ulong)((x[1] & 1) != 0) << 0x3f) ^
              x[1] >> 7) +
              (x[14] >> 6 ^ (x[14] << 3 | x[14] >> 0x3d) ^ (x[14] >> 0x13 | x[14] << 0x2d)) +
              x[0] + x[9];
      lVar3 = ((uVar27 * 0x800000 | uVar27 >> 0x29) ^
              (uVar27 >> 0x12 | uVar27 << 0x2e) ^ (uVar27 >> 0xe | uVar27 << 0x32)) +
              uVar17 + uVar7 + 0xe49b69c19ef14ad2 + ((uVar5 ^ uVar8) & uVar27 ^ uVar5);
      uVar32 = uVar32 + lVar3;
      uVar14 = ((uVar10 | uVar23) & uVar20 | uVar10 & uVar23) +
               ((uVar23 * 0x40000000 | uVar23 >> 0x22) ^ (uVar23 >> 0x1c | uVar23 << 0x24) ^
               (uVar23 * 0x2000000 | uVar23 >> 0x27)) + lVar3;
      uVar28 = ((x[2] >> 8 | x[2] << 0x38) ^ (x[2] >> 1 | (ulong)((x[2] & 1) != 0) << 0x3f) ^
               x[2] >> 7) +
               (x[15] >> 6 ^ (x[15] << 3 | x[15] >> 0x3d) ^ (x[15] >> 0x13 | x[15] << 0x2d)) +
               x[1] + x[10];
      lVar3 = ((uVar32 * 0x800000 | uVar32 >> 0x29) ^
              (uVar32 >> 0x12 | uVar32 << 0x2e) ^ (uVar32 >> 0xe | uVar32 << 0x32)) +
              uVar5 + uVar28 + 0xefbe4786384f25e3 + ((uVar8 ^ uVar27) & uVar32 ^ uVar8);
      uVar20 = uVar20 + lVar3;
      uVar17 = ((uVar23 | uVar14) & uVar10 | uVar23 & uVar14) +
               ((uVar14 * 0x40000000 | uVar14 >> 0x22) ^ (uVar14 >> 0x1c | uVar14 << 0x24) ^
               (uVar14 * 0x2000000 | uVar14 >> 0x27)) + lVar3;
      uVar24 = ((uVar7 * 8 | uVar7 >> 0x3d) ^ (uVar7 >> 0x13 | uVar7 << 0x2d) ^ uVar7 >> 6) +
               (x[3] >> 7 ^
               (x[3] >> 8 | x[3] << 0x38) ^ (x[3] >> 1 | (ulong)((x[3] & 1) != 0) << 0x3f)) +
               x[2] + x[11];
      lVar3 = ((uVar20 * 0x800000 | uVar20 >> 0x29) ^
              (uVar20 >> 0x12 | uVar20 << 0x2e) ^ (uVar20 >> 0xe | uVar20 << 0x32)) +
              uVar8 + uVar24 + 0xfc19dc68b8cd5b5 + ((uVar27 ^ uVar32) & uVar20 ^ uVar27);
      uVar10 = uVar10 + lVar3;
      uVar4 = ((uVar14 | uVar17) & uVar23 | uVar14 & uVar17) +
              ((uVar17 * 0x40000000 | uVar17 >> 0x22) ^ (uVar17 >> 0x1c | uVar17 << 0x24) ^
              (uVar17 * 0x2000000 | uVar17 >> 0x27)) + lVar3;
      uVar21 = ((uVar28 * 8 | uVar28 >> 0x3d) ^ (uVar28 >> 0x13 | uVar28 << 0x2d) ^ uVar28 >> 6) +
               (x[4] >> 7 ^
               (x[4] >> 8 | x[4] << 0x38) ^ (x[4] >> 1 | (ulong)((x[4] & 1) != 0) << 0x3f)) +
               x[3] + x[12];
      lVar3 = ((uVar10 * 0x800000 | uVar10 >> 0x29) ^
              (uVar10 >> 0x12 | uVar10 << 0x2e) ^ (uVar10 >> 0xe | uVar10 << 0x32)) +
              uVar27 + uVar21 + 0x240ca1cc77ac9c65 + ((uVar32 ^ uVar20) & uVar10 ^ uVar32);
      uVar23 = uVar23 + lVar3;
      uVar5 = ((uVar17 | uVar4) & uVar14 | uVar17 & uVar4) +
              ((uVar4 * 0x40000000 | uVar4 >> 0x22) ^ (uVar4 >> 0x1c | uVar4 << 0x24) ^
              (uVar4 * 0x2000000 | uVar4 >> 0x27)) + lVar3;
      uVar18 = (x[5] >> 7 ^
               (x[5] >> 1 | (ulong)((x[5] & 1) != 0) << 0x3f) ^ (x[5] >> 8 | x[5] << 0x38)) +
               x[4] + x[13] +
               ((uVar24 * 8 | uVar24 >> 0x3d) ^ (uVar24 >> 0x13 | uVar24 << 0x2d) ^ uVar24 >> 6);
      lVar3 = ((uVar23 * 0x800000 | uVar23 >> 0x29) ^
              (uVar23 >> 0x12 | uVar23 << 0x2e) ^ (uVar23 >> 0xe | uVar23 << 0x32)) +
              uVar32 + uVar18 + 0x2de92c6f592b0275 + ((uVar20 ^ uVar10) & uVar23 ^ uVar20);
      uVar14 = uVar14 + lVar3;
      uVar8 = ((uVar4 | uVar5) & uVar17 | uVar4 & uVar5) +
              ((uVar5 * 0x40000000 | uVar5 >> 0x22) ^ (uVar5 >> 0x1c | uVar5 << 0x24) ^
              (uVar5 * 0x2000000 | uVar5 >> 0x27)) + lVar3;
      uVar31 = ((uVar21 * 8 | uVar21 >> 0x3d) ^ (uVar21 >> 0x13 | uVar21 << 0x2d) ^ uVar21 >> 6) +
               (x[6] >> 7 ^
               (x[6] >> 1 | (ulong)((x[6] & 1) != 0) << 0x3f) ^ (x[6] >> 8 | x[6] << 0x38)) +
               x[5] + x[14];
      lVar3 = ((uVar14 * 0x800000 | uVar14 >> 0x29) ^
              (uVar14 >> 0x12 | uVar14 << 0x2e) ^ (uVar14 >> 0xe | uVar14 << 0x32)) +
              ((uVar10 ^ uVar23) & uVar14 ^ uVar10) + uVar20 + uVar31 + 0x4a7484aa6ea6e483;
      uVar17 = uVar17 + lVar3;
      uVar33 = ((uVar5 | uVar8) & uVar4 | uVar5 & uVar8) +
               ((uVar8 * 0x40000000 | uVar8 >> 0x22) ^ (uVar8 >> 0x1c | uVar8 << 0x24) ^
               (uVar8 * 0x2000000 | uVar8 >> 0x27)) + lVar3;
      uVar20 = (x[7] >> 7 ^
               (x[7] >> 1 | (ulong)((x[7] & 1) != 0) << 0x3f) ^ (x[7] >> 8 | x[7] << 0x38)) +
               x[6] + x[15] +
               ((uVar18 * 8 | uVar18 >> 0x3d) ^ (uVar18 >> 0x13 | uVar18 << 0x2d) ^ uVar18 >> 6);
      lVar3 = ((uVar17 * 0x800000 | uVar17 >> 0x29) ^
              (uVar17 >> 0x12 | uVar17 << 0x2e) ^ (uVar17 >> 0xe | uVar17 << 0x32)) +
              ((uVar23 ^ uVar14) & uVar17 ^ uVar23) + uVar10 + uVar20 + 0x5cb0a9dcbd41fbd4;
      uVar4 = uVar4 + lVar3;
      uVar27 = ((uVar8 | uVar33) & uVar5 | uVar8 & uVar33) +
               ((uVar33 * 0x40000000 | uVar33 >> 0x22) ^ (uVar33 >> 0x1c | uVar33 << 0x24) ^
               (uVar33 * 0x2000000 | uVar33 >> 0x27)) + lVar3;
      uVar11 = ((x[8] >> 8 | x[8] << 0x38) ^ (x[8] >> 1 | (ulong)((x[8] & 1) != 0) << 0x3f) ^
               x[8] >> 7) + x[7] + uVar7 +
               ((uVar31 * 8 | uVar31 >> 0x3d) ^ (uVar31 >> 0x13 | uVar31 << 0x2d) ^ uVar31 >> 6);
      lVar3 = ((uVar4 * 0x800000 | uVar4 >> 0x29) ^
              (uVar4 >> 0x12 | uVar4 << 0x2e) ^ (uVar4 >> 0xe | uVar4 << 0x32)) +
              ((uVar14 ^ uVar17) & uVar4 ^ uVar14) + uVar23 + uVar11 + 0x76f988da831153b5;
      uVar5 = uVar5 + lVar3;
      uVar30 = ((uVar33 | uVar27) & uVar8 | uVar33 & uVar27) +
               ((uVar27 * 0x40000000 | uVar27 >> 0x22) ^ (uVar27 >> 0x1c | uVar27 << 0x24) ^
               (uVar27 * 0x2000000 | uVar27 >> 0x27)) + lVar3;
      uVar19 = ((x[9] >> 8 | x[9] << 0x38) ^ (x[9] >> 1 | (ulong)((x[9] & 1) != 0) << 0x3f) ^
               x[9] >> 7) + x[8] + uVar28 +
               ((uVar20 * 8 | uVar20 >> 0x3d) ^ (uVar20 >> 0x13 | uVar20 << 0x2d) ^ uVar20 >> 6);
      lVar3 = ((uVar5 * 0x800000 | uVar5 >> 0x29) ^
              (uVar5 >> 0x12 | uVar5 << 0x2e) ^ (uVar5 >> 0xe | uVar5 << 0x32)) +
              ((uVar17 ^ uVar4) & uVar5 ^ uVar17) + uVar14 + uVar19 + 0x983e5152ee66dfab;
      uVar8 = uVar8 + lVar3;
      uVar10 = ((uVar27 | uVar30) & uVar33 | uVar27 & uVar30) +
               ((uVar30 * 0x40000000 | uVar30 >> 0x22) ^ (uVar30 >> 0x1c | uVar30 << 0x24) ^
               (uVar30 * 0x2000000 | uVar30 >> 0x27)) + lVar3;
      uVar15 = ((x[10] >> 8 | x[10] << 0x38) ^ (x[10] >> 1 | (ulong)((x[10] & 1) != 0) << 0x3f) ^
               x[10] >> 7) + x[9] + uVar24 +
               ((uVar11 * 8 | uVar11 >> 0x3d) ^ (uVar11 >> 0x13 | uVar11 << 0x2d) ^ uVar11 >> 6);
      lVar3 = ((uVar8 * 0x800000 | uVar8 >> 0x29) ^
              (uVar8 >> 0x12 | uVar8 << 0x2e) ^ (uVar8 >> 0xe | uVar8 << 0x32)) +
              ((uVar4 ^ uVar5) & uVar8 ^ uVar4) + uVar17 + uVar15 + 0xa831c66d2db43210;
      uVar33 = uVar33 + lVar3;
      uVar14 = ((uVar30 | uVar10) & uVar27 | uVar30 & uVar10) +
               ((uVar10 * 0x40000000 | uVar10 >> 0x22) ^ (uVar10 >> 0x1c | uVar10 << 0x24) ^
               (uVar10 * 0x2000000 | uVar10 >> 0x27)) + lVar3;
      uVar12 = ((x[11] >> 8 | x[11] << 0x38) ^ (x[11] >> 1 | (ulong)((x[11] & 1) != 0) << 0x3f) ^
               x[11] >> 7) + x[10] + uVar21 +
               ((uVar19 * 8 | uVar19 >> 0x3d) ^ (uVar19 >> 0x13 | uVar19 << 0x2d) ^ uVar19 >> 6);
      lVar3 = ((uVar33 * 0x800000 | uVar33 >> 0x29) ^
              (uVar33 >> 0x12 | uVar33 << 0x2e) ^ (uVar33 >> 0xe | uVar33 << 0x32)) +
              ((uVar5 ^ uVar8) & uVar33 ^ uVar5) + uVar4 + uVar12 + 0xb00327c898fb213f;
      uVar27 = uVar27 + lVar3;
      uVar4 = ((uVar10 | uVar14) & uVar30 | uVar10 & uVar14) +
              ((uVar14 * 0x40000000 | uVar14 >> 0x22) ^ (uVar14 >> 0x1c | uVar14 << 0x24) ^
              (uVar14 * 0x2000000 | uVar14 >> 0x27)) + lVar3;
      uVar32 = ((x[12] >> 8 | x[12] << 0x38) ^ (x[12] >> 1 | (ulong)((x[12] & 1) != 0) << 0x3f) ^
               x[12] >> 7) + x[11] + uVar18 +
               ((uVar15 * 8 | uVar15 >> 0x3d) ^ (uVar15 >> 0x13 | uVar15 << 0x2d) ^ uVar15 >> 6);
      lVar3 = ((uVar27 * 0x800000 | uVar27 >> 0x29) ^
              (uVar27 >> 0x12 | uVar27 << 0x2e) ^ (uVar27 >> 0xe | uVar27 << 0x32)) +
              ((uVar8 ^ uVar33) & uVar27 ^ uVar8) + uVar5 + uVar32 + 0xbf597fc7beef0ee4;
      uVar30 = uVar30 + lVar3;
      uVar5 = ((uVar14 | uVar4) & uVar10 | uVar14 & uVar4) +
              ((uVar4 * 0x40000000 | uVar4 >> 0x22) ^ (uVar4 >> 0x1c | uVar4 << 0x24) ^
              (uVar4 * 0x2000000 | uVar4 >> 0x27)) + lVar3;
      uVar6 = ((x[13] >> 8 | x[13] << 0x38) ^ (x[13] >> 1 | (ulong)((x[13] & 1) != 0) << 0x3f) ^
              x[13] >> 7) + x[12] + uVar31 +
              ((uVar12 * 8 | uVar12 >> 0x3d) ^ (uVar12 >> 0x13 | uVar12 << 0x2d) ^ uVar12 >> 6);
      lVar3 = ((uVar30 * 0x800000 | uVar30 >> 0x29) ^
              (uVar30 >> 0x12 | uVar30 << 0x2e) ^ (uVar30 >> 0xe | uVar30 << 0x32)) +
              ((uVar33 ^ uVar27) & uVar30 ^ uVar33) + uVar8 + uVar6 + 0xc6e00bf33da88fc2;
      uVar10 = uVar10 + lVar3;
      uVar13 = ((uVar4 | uVar5) & uVar14 | uVar4 & uVar5) +
               ((uVar5 * 0x40000000 | uVar5 >> 0x22) ^ (uVar5 >> 0x1c | uVar5 << 0x24) ^
               (uVar5 * 0x2000000 | uVar5 >> 0x27)) + lVar3;
      uVar9 = ((x[14] >> 8 | x[14] << 0x38) ^ (x[14] >> 1 | (ulong)((x[14] & 1) != 0) << 0x3f) ^
              x[14] >> 7) + x[13] + uVar20 +
              ((uVar32 * 8 | uVar32 >> 0x3d) ^ (uVar32 >> 0x13 | uVar32 << 0x2d) ^ uVar32 >> 6);
      lVar3 = ((uVar10 * 0x800000 | uVar10 >> 0x29) ^
              (uVar10 >> 0x12 | uVar10 << 0x2e) ^ (uVar10 >> 0xe | uVar10 << 0x32)) +
              uVar33 + uVar9 + 0xd5a79147930aa725 + ((uVar27 ^ uVar30) & uVar10 ^ uVar27);
      uVar14 = uVar14 + lVar3;
      uVar23 = ((uVar5 | uVar13) & uVar4 | uVar5 & uVar13) +
               ((uVar13 * 0x40000000 | uVar13 >> 0x22) ^ (uVar13 >> 0x1c | uVar13 << 0x24) ^
               (uVar13 * 0x2000000 | uVar13 >> 0x27)) + lVar3;
      uVar33 = ((x[15] >> 8 | x[15] << 0x38) ^ (x[15] >> 1 | (ulong)((x[15] & 1) != 0) << 0x3f) ^
               x[15] >> 7) + x[14] + uVar11 +
               ((uVar6 * 8 | uVar6 >> 0x3d) ^ (uVar6 >> 0x13 | uVar6 << 0x2d) ^ uVar6 >> 6);
      lVar3 = ((uVar14 * 0x800000 | uVar14 >> 0x29) ^
              (uVar14 >> 0x12 | uVar14 << 0x2e) ^ (uVar14 >> 0xe | uVar14 << 0x32)) +
              uVar27 + uVar33 + 0x6ca6351e003826f + ((uVar30 ^ uVar10) & uVar14 ^ uVar30);
      uVar4 = uVar4 + lVar3;
      uVar27 = ((uVar13 | uVar23) & uVar5 | uVar13 & uVar23) +
               ((uVar23 * 0x40000000 | uVar23 >> 0x22) ^ (uVar23 >> 0x1c | uVar23 << 0x24) ^
               (uVar23 * 0x2000000 | uVar23 >> 0x27)) + lVar3;
      uVar16 = ((uVar7 >> 8 | uVar7 << 0x38) ^ (uVar7 >> 1 | (ulong)((uVar7 & 1) != 0) << 0x3f) ^
               uVar7 >> 7) + x[15] + uVar19 +
               ((uVar9 * 8 | uVar9 >> 0x3d) ^ (uVar9 >> 0x13 | uVar9 << 0x2d) ^ uVar9 >> 6);
      lVar3 = ((uVar4 >> 0x12 | uVar4 << 0x2e) ^ (uVar4 >> 0xe | uVar4 << 0x32) ^
              (uVar4 * 0x800000 | uVar4 >> 0x29)) +
              ((uVar10 ^ uVar14) & uVar4 ^ uVar10) + uVar30 + uVar16 + 0x142929670a0e6e70;
      uVar5 = uVar5 + lVar3;
      uVar17 = lVar3 + ((uVar23 | uVar27) & uVar13 | uVar23 & uVar27) +
                       ((uVar27 * 0x40000000 | uVar27 >> 0x22) ^ (uVar27 >> 0x1c | uVar27 << 0x24) ^
                       (uVar27 * 0x2000000 | uVar27 >> 0x27));
      uVar8 = uVar7 + ((uVar28 >> 8 | uVar28 << 0x38) ^
                       (uVar28 >> 1 | (ulong)((uVar28 & 1) != 0) << 0x3f) ^ uVar28 >> 7) + uVar15 +
              ((uVar33 * 8 | uVar33 >> 0x3d) ^ (uVar33 >> 0x13 | uVar33 << 0x2d) ^ uVar33 >> 6);
      lVar3 = ((uVar5 >> 0x12 | uVar5 << 0x2e) ^ (uVar5 >> 0xe | uVar5 << 0x32) ^
              (uVar5 * 0x800000 | uVar5 >> 0x29)) +
              uVar10 + uVar8 + 0x27b70a8546d22ffc + ((uVar14 ^ uVar4) & uVar5 ^ uVar14);
      uVar13 = uVar13 + lVar3;
      uVar30 = ((uVar17 * 0x40000000 | uVar17 >> 0x22) ^ (uVar17 >> 0x1c | uVar17 << 0x24) ^
               (uVar17 * 0x2000000 | uVar17 >> 0x27)) +
               ((uVar27 | uVar17) & uVar23 | uVar27 & uVar17) + lVar3;
      uVar7 = uVar28 + ((uVar24 >> 8 | uVar24 << 0x38) ^
                        (uVar24 >> 1 | (ulong)((uVar24 & 1) != 0) << 0x3f) ^ uVar24 >> 7) + uVar12 +
              ((uVar16 * 8 | uVar16 >> 0x3d) ^ (uVar16 >> 0x13 | uVar16 << 0x2d) ^ uVar16 >> 6);
      lVar3 = ((uVar13 >> 0x12 | uVar13 << 0x2e) ^ (uVar13 >> 0xe | uVar13 << 0x32) ^
              (uVar13 * 0x800000 | uVar13 >> 0x29)) +
              uVar14 + uVar7 + 0x2e1b21385c26c926 + ((uVar4 ^ uVar5) & uVar13 ^ uVar4);
      uVar23 = uVar23 + lVar3;
      uVar14 = ((uVar30 * 0x40000000 | uVar30 >> 0x22) ^ (uVar30 >> 0x1c | uVar30 << 0x24) ^
               (uVar30 * 0x2000000 | uVar30 >> 0x27)) +
               ((uVar17 | uVar30) & uVar27 | uVar17 & uVar30) + lVar3;
      uVar10 = uVar24 + ((uVar21 >> 8 | uVar21 << 0x38) ^
                         (uVar21 >> 1 | (ulong)((uVar21 & 1) != 0) << 0x3f) ^ uVar21 >> 7) + uVar32
               + ((uVar8 * 8 | uVar8 >> 0x3d) ^ (uVar8 >> 0x13 | uVar8 << 0x2d) ^ uVar8 >> 6);
      lVar3 = ((uVar23 >> 0x12 | uVar23 << 0x2e) ^ (uVar23 >> 0xe | uVar23 << 0x32) ^
              (uVar23 * 0x800000 | uVar23 >> 0x29)) +
              uVar4 + uVar10 + 0x4d2c6dfc5ac42aed + ((uVar5 ^ uVar13) & uVar23 ^ uVar5);
      uVar27 = uVar27 + lVar3;
      uVar25 = ((uVar14 * 0x40000000 | uVar14 >> 0x22) ^ (uVar14 >> 0x1c | uVar14 << 0x24) ^
               (uVar14 * 0x2000000 | uVar14 >> 0x27)) +
               ((uVar30 | uVar14) & uVar17 | uVar30 & uVar14) + lVar3;
      uVar22 = uVar21 + ((uVar18 >> 8 | uVar18 << 0x38) ^
                         (uVar18 >> 1 | (ulong)((uVar18 & 1) != 0) << 0x3f) ^ uVar18 >> 7) + uVar6 +
               ((uVar7 * 8 | uVar7 >> 0x3d) ^ (uVar7 >> 0x13 | uVar7 << 0x2d) ^ uVar7 >> 6);
      lVar3 = ((uVar27 >> 0x12 | uVar27 << 0x2e) ^ (uVar27 >> 0xe | uVar27 << 0x32) ^
              (uVar27 * 0x800000 | uVar27 >> 0x29)) +
              uVar5 + uVar22 + 0x53380d139d95b3df + ((uVar13 ^ uVar23) & uVar27 ^ uVar13);
      uVar17 = uVar17 + lVar3;
      uVar5 = ((uVar25 * 0x40000000 | uVar25 >> 0x22) ^ (uVar25 >> 0x1c | uVar25 << 0x24) ^
              (uVar25 * 0x2000000 | uVar25 >> 0x27)) +
              ((uVar14 | uVar25) & uVar30 | uVar14 & uVar25) + lVar3;
      uVar21 = ((uVar31 >> 8 | uVar31 << 0x38) ^ (uVar31 >> 1 | (ulong)((uVar31 & 1) != 0) << 0x3f)
               ^ uVar31 >> 7) + uVar18 + uVar9 +
               ((uVar10 * 8 | uVar10 >> 0x3d) ^ (uVar10 >> 0x13 | uVar10 << 0x2d) ^ uVar10 >> 6);
      lVar3 = ((uVar17 >> 0x12 | uVar17 << 0x2e) ^ (uVar17 >> 0xe | uVar17 << 0x32) ^
              (uVar17 * 0x800000 | uVar17 >> 0x29)) +
              uVar13 + uVar21 + 0x650a73548baf63de + ((uVar23 ^ uVar27) & uVar17 ^ uVar23);
      uVar30 = uVar30 + lVar3;
      uVar18 = ((uVar5 * 0x40000000 | uVar5 >> 0x22) ^ (uVar5 >> 0x1c | uVar5 << 0x24) ^
               (uVar5 * 0x2000000 | uVar5 >> 0x27)) + ((uVar25 | uVar5) & uVar14 | uVar25 & uVar5) +
               lVar3;
      uVar13 = ((uVar20 >> 8 | uVar20 << 0x38) ^ (uVar20 >> 1 | (ulong)((uVar20 & 1) != 0) << 0x3f)
               ^ uVar20 >> 7) + uVar31 + uVar33 +
               ((uVar22 * 8 | uVar22 >> 0x3d) ^ (uVar22 >> 0x13 | uVar22 << 0x2d) ^ uVar22 >> 6);
      lVar3 = ((uVar30 >> 0x12 | uVar30 << 0x2e) ^ (uVar30 >> 0xe | uVar30 << 0x32) ^
              (uVar30 * 0x800000 | uVar30 >> 0x29)) +
              uVar23 + uVar13 + 0x766a0abb3c77b2a8 + ((uVar27 ^ uVar17) & uVar30 ^ uVar27);
      uVar14 = uVar14 + lVar3;
      uVar23 = ((uVar18 * 0x40000000 | uVar18 >> 0x22) ^ (uVar18 >> 0x1c | uVar18 << 0x24) ^
               (uVar18 * 0x2000000 | uVar18 >> 0x27)) + ((uVar5 | uVar18) & uVar25 | uVar5 & uVar18)
               + lVar3;
      uVar4 = ((uVar11 >> 8 | uVar11 << 0x38) ^ (uVar11 >> 1 | (ulong)((uVar11 & 1) != 0) << 0x3f) ^
              uVar11 >> 7) + uVar20 + uVar16 +
              ((uVar21 * 8 | uVar21 >> 0x3d) ^ (uVar21 >> 0x13 | uVar21 << 0x2d) ^ uVar21 >> 6);
      lVar3 = ((uVar14 >> 0x12 | uVar14 << 0x2e) ^ (uVar14 >> 0xe | uVar14 << 0x32) ^
              (uVar14 * 0x800000 | uVar14 >> 0x29)) +
              uVar27 + uVar4 + 0x81c2c92e47edaee6 + ((uVar17 ^ uVar30) & uVar14 ^ uVar17);
      uVar25 = uVar25 + lVar3;
      uVar28 = ((uVar23 * 0x40000000 | uVar23 >> 0x22) ^ (uVar23 >> 0x1c | uVar23 << 0x24) ^
               (uVar23 * 0x2000000 | uVar23 >> 0x27)) +
               ((uVar18 | uVar23) & uVar5 | uVar18 & uVar23) + lVar3;
      uVar24 = ((uVar13 * 8 | uVar13 >> 0x3d) ^ (uVar13 >> 0x13 | uVar13 << 0x2d) ^ uVar13 >> 6) +
               ((uVar19 >> 8 | uVar19 << 0x38) ^ (uVar19 >> 1 | (ulong)((uVar19 & 1) != 0) << 0x3f)
               ^ uVar19 >> 7) + uVar11 + uVar8;
      lVar3 = ((uVar25 >> 0x12 | uVar25 << 0x2e) ^ (uVar25 >> 0xe | uVar25 << 0x32) ^
              (uVar25 * 0x800000 | uVar25 >> 0x29)) +
              uVar17 + uVar24 + 0x92722c851482353b + ((uVar30 ^ uVar14) & uVar25 ^ uVar30);
      uVar5 = uVar5 + lVar3;
      uVar17 = ((uVar23 | uVar28) & uVar18 | uVar23 & uVar28) +
               ((uVar28 * 0x40000000 | uVar28 >> 0x22) ^ (uVar28 >> 0x1c | uVar28 << 0x24) ^
               (uVar28 * 0x2000000 | uVar28 >> 0x27)) + lVar3;
      uVar11 = ((uVar15 >> 8 | uVar15 << 0x38) ^ (uVar15 >> 1 | (ulong)((uVar15 & 1) != 0) << 0x3f)
               ^ uVar15 >> 7) + uVar19 + uVar7 +
               ((uVar4 * 8 | uVar4 >> 0x3d) ^ (uVar4 >> 0x13 | uVar4 << 0x2d) ^ uVar4 >> 6);
      lVar3 = ((uVar5 >> 0x12 | uVar5 << 0x2e) ^ (uVar5 >> 0xe | uVar5 << 0x32) ^
              (uVar5 * 0x800000 | uVar5 >> 0x29)) +
              uVar30 + uVar11 + 0xa2bfe8a14cf10364 + ((uVar14 ^ uVar25) & uVar5 ^ uVar14);
      uVar18 = uVar18 + lVar3;
      uVar20 = ((uVar28 | uVar17) & uVar23 | uVar28 & uVar17) +
               ((uVar17 * 0x40000000 | uVar17 >> 0x22) ^ (uVar17 >> 0x1c | uVar17 << 0x24) ^
               (uVar17 * 0x2000000 | uVar17 >> 0x27)) + lVar3;
      uVar30 = ((uVar24 * 8 | uVar24 >> 0x3d) ^ (uVar24 >> 0x13 | uVar24 << 0x2d) ^ uVar24 >> 6) +
               ((uVar12 >> 8 | uVar12 << 0x38) ^ (uVar12 >> 1 | (ulong)((uVar12 & 1) != 0) << 0x3f)
               ^ uVar12 >> 7) + uVar15 + uVar10;
      lVar3 = ((uVar18 >> 0x12 | uVar18 << 0x2e) ^ (uVar18 >> 0xe | uVar18 << 0x32) ^
              (uVar18 * 0x800000 | uVar18 >> 0x29)) +
              uVar30 + 0xa81a664bbc423001 + uVar14 + ((uVar25 ^ uVar5) & uVar18 ^ uVar25);
      uVar23 = uVar23 + lVar3;
      uVar14 = ((uVar17 | uVar20) & uVar28 | uVar17 & uVar20) +
               ((uVar20 * 0x40000000 | uVar20 >> 0x22) ^ (uVar20 >> 0x1c | uVar20 << 0x24) ^
               (uVar20 * 0x2000000 | uVar20 >> 0x27)) + lVar3;
      uVar12 = ((uVar11 * 8 | uVar11 >> 0x3d) ^ (uVar11 >> 0x13 | uVar11 << 0x2d) ^ uVar11 >> 6) +
               ((uVar32 >> 8 | uVar32 << 0x38) ^ (uVar32 >> 1 | (ulong)((uVar32 & 1) != 0) << 0x3f)
               ^ uVar32 >> 7) + uVar12 + uVar22;
      lVar3 = ((uVar23 >> 0x12 | uVar23 << 0x2e) ^ (uVar23 >> 0xe | uVar23 << 0x32) ^
              (uVar23 * 0x800000 | uVar23 >> 0x29)) +
              uVar25 + uVar12 + 0xc24b8b70d0f89791 + ((uVar5 ^ uVar18) & uVar23 ^ uVar5);
      uVar28 = uVar28 + lVar3;
      uVar27 = ((uVar20 | uVar14) & uVar17 | uVar20 & uVar14) +
               ((uVar14 * 0x40000000 | uVar14 >> 0x22) ^ (uVar14 >> 0x1c | uVar14 << 0x24) ^
               (uVar14 * 0x2000000 | uVar14 >> 0x27)) + lVar3;
      uVar32 = ((uVar6 >> 8 | uVar6 << 0x38) ^ (uVar6 >> 1 | (ulong)((uVar6 & 1) != 0) << 0x3f) ^
               uVar6 >> 7) + uVar32 + uVar21 +
               ((uVar30 * 8 | uVar30 >> 0x3d) ^ (uVar30 >> 0x13 | uVar30 << 0x2d) ^ uVar30 >> 6);
      lVar3 = ((uVar28 >> 0x12 | uVar28 << 0x2e) ^ (uVar28 >> 0xe | uVar28 << 0x32) ^
              (uVar28 * 0x800000 | uVar28 >> 0x29)) +
              uVar32 + 0xc76c51a30654be30 + uVar5 + ((uVar18 ^ uVar23) & uVar28 ^ uVar18);
      uVar17 = uVar17 + lVar3;
      uVar5 = ((uVar14 | uVar27) & uVar20 | uVar14 & uVar27) +
              ((uVar27 * 0x40000000 | uVar27 >> 0x22) ^ (uVar27 >> 0x1c | uVar27 << 0x24) ^
              (uVar27 * 0x2000000 | uVar27 >> 0x27)) + lVar3;
      uVar19 = ((uVar9 >> 8 | uVar9 << 0x38) ^ (uVar9 >> 1 | (ulong)((uVar9 & 1) != 0) << 0x3f) ^
               uVar9 >> 7) + uVar6 + uVar13 +
               ((uVar12 * 8 | uVar12 >> 0x3d) ^ (uVar12 >> 0x13 | uVar12 << 0x2d) ^ uVar12 >> 6);
      lVar3 = ((uVar17 >> 0x12 | uVar17 << 0x2e) ^ (uVar17 >> 0xe | uVar17 << 0x32) ^
              (uVar17 * 0x800000 | uVar17 >> 0x29)) +
              uVar19 + 0xd192e819d6ef5218 + uVar18 + ((uVar23 ^ uVar28) & uVar17 ^ uVar23);
      uVar20 = uVar20 + lVar3;
      uVar18 = ((uVar27 | uVar5) & uVar14 | uVar27 & uVar5) +
               ((uVar5 * 0x40000000 | uVar5 >> 0x22) ^ (uVar5 >> 0x1c | uVar5 << 0x24) ^
               (uVar5 * 0x2000000 | uVar5 >> 0x27)) + lVar3;
      uVar6 = ((uVar32 * 8 | uVar32 >> 0x3d) ^ (uVar32 >> 0x13 | uVar32 << 0x2d) ^ uVar32 >> 6) +
              ((uVar33 >> 8 | uVar33 << 0x38) ^ (uVar33 >> 1 | (ulong)((uVar33 & 1) != 0) << 0x3f) ^
              uVar33 >> 7) + uVar9 + uVar4;
      lVar3 = ((uVar20 >> 0x12 | uVar20 << 0x2e) ^ (uVar20 >> 0xe | uVar20 << 0x32) ^
              (uVar20 * 0x800000 | uVar20 >> 0x29)) +
              uVar6 + 0xd69906245565a910 + uVar23 + ((uVar28 ^ uVar17) & uVar20 ^ uVar28);
      uVar14 = uVar14 + lVar3;
      uVar15 = ((uVar18 * 0x40000000 | uVar18 >> 0x22) ^ (uVar18 >> 0x1c | uVar18 << 0x24) ^
               (uVar18 * 0x2000000 | uVar18 >> 0x27)) + ((uVar5 | uVar18) & uVar27 | uVar5 & uVar18)
               + lVar3;
      uVar23 = ((uVar16 >> 8 | uVar16 << 0x38) ^ (uVar16 >> 1 | (ulong)((uVar16 & 1) != 0) << 0x3f)
               ^ uVar16 >> 7) + uVar33 + uVar24 +
               ((uVar19 * 8 | uVar19 >> 0x3d) ^ (uVar19 >> 0x13 | uVar19 << 0x2d) ^ uVar19 >> 6);
      lVar3 = ((uVar14 >> 0x12 | uVar14 << 0x2e) ^ (uVar14 >> 0xe | uVar14 << 0x32) ^
              (uVar14 * 0x800000 | uVar14 >> 0x29)) +
              uVar28 + uVar23 + 0xf40e35855771202a + ((uVar17 ^ uVar20) & uVar14 ^ uVar17);
      uVar27 = uVar27 + lVar3;
      uVar28 = ((uVar15 * 0x40000000 | uVar15 >> 0x22) ^ (uVar15 >> 0x1c | uVar15 << 0x24) ^
               (uVar15 * 0x2000000 | uVar15 >> 0x27)) +
               ((uVar18 | uVar15) & uVar5 | uVar18 & uVar15) + lVar3;
      uVar9 = ((uVar8 >> 8 | uVar8 << 0x38) ^ (uVar8 >> 1 | (ulong)((uVar8 & 1) != 0) << 0x3f) ^
              uVar8 >> 7) + uVar16 + uVar11 +
              ((uVar6 * 8 | uVar6 >> 0x3d) ^ (uVar6 >> 0x13 | uVar6 << 0x2d) ^ uVar6 >> 6);
      lVar3 = ((uVar27 >> 0x12 | uVar27 << 0x2e) ^ (uVar27 >> 0xe | uVar27 << 0x32) ^
              (uVar27 * 0x800000 | uVar27 >> 0x29)) +
              uVar17 + uVar9 + 0x106aa07032bbd1b8 + ((uVar20 ^ uVar14) & uVar27 ^ uVar20);
      uVar5 = uVar5 + lVar3;
      uVar33 = ((uVar28 * 0x40000000 | uVar28 >> 0x22) ^ (uVar28 >> 0x1c | uVar28 << 0x24) ^
               (uVar28 * 0x2000000 | uVar28 >> 0x27)) +
               ((uVar15 | uVar28) & uVar18 | uVar15 & uVar28) + lVar3;
      uVar8 = ((uVar7 >> 8 | uVar7 << 0x38) ^ (uVar7 >> 1 | (ulong)((uVar7 & 1) != 0) << 0x3f) ^
              uVar7 >> 7) + uVar8 + uVar30 +
              ((uVar23 * 8 | uVar23 >> 0x3d) ^ (uVar23 >> 0x13 | uVar23 << 0x2d) ^ uVar23 >> 6);
      lVar3 = ((uVar5 >> 0x12 | uVar5 << 0x2e) ^ (uVar5 >> 0xe | uVar5 << 0x32) ^
              (uVar5 * 0x800000 | uVar5 >> 0x29)) +
              uVar20 + uVar8 + 0x19a4c116b8d2d0c8 + ((uVar14 ^ uVar27) & uVar5 ^ uVar14);
      uVar18 = uVar18 + lVar3;
      uVar16 = ((uVar33 * 0x40000000 | uVar33 >> 0x22) ^ (uVar33 >> 0x1c | uVar33 << 0x24) ^
               (uVar33 * 0x2000000 | uVar33 >> 0x27)) +
               ((uVar28 | uVar33) & uVar15 | uVar28 & uVar33) + lVar3;
      uVar17 = ((uVar10 >> 8 | uVar10 << 0x38) ^ (uVar10 >> 1 | (ulong)((uVar10 & 1) != 0) << 0x3f)
               ^ uVar10 >> 7) + uVar7 + uVar12 +
               ((uVar9 * 8 | uVar9 >> 0x3d) ^ (uVar9 >> 0x13 | uVar9 << 0x2d) ^ uVar9 >> 6);
      lVar3 = ((uVar18 >> 0x12 | uVar18 << 0x2e) ^ (uVar18 >> 0xe | uVar18 << 0x32) ^
              (uVar18 * 0x800000 | uVar18 >> 0x29)) +
              uVar14 + uVar17 + 0x1e376c085141ab53 + ((uVar27 ^ uVar5) & uVar18 ^ uVar27);
      uVar15 = uVar15 + lVar3;
      uVar7 = ((uVar33 | uVar16) & uVar28 | uVar33 & uVar16) +
              ((uVar16 * 0x40000000 | uVar16 >> 0x22) ^ (uVar16 >> 0x1c | uVar16 << 0x24) ^
              (uVar16 * 0x2000000 | uVar16 >> 0x27)) + lVar3;
      uVar10 = ((uVar22 >> 8 | uVar22 << 0x38) ^ (uVar22 >> 1 | (ulong)((uVar22 & 1) != 0) << 0x3f)
               ^ uVar22 >> 7) + uVar10 + uVar32 +
               ((uVar8 * 8 | uVar8 >> 0x3d) ^ (uVar8 >> 0x13 | uVar8 << 0x2d) ^ uVar8 >> 6);
      lVar3 = ((uVar15 >> 0x12 | uVar15 << 0x2e) ^ (uVar15 >> 0xe | uVar15 << 0x32) ^
              (uVar15 * 0x800000 | uVar15 >> 0x29)) +
              uVar27 + uVar10 + 0x2748774cdf8eeb99 + ((uVar5 ^ uVar18) & uVar15 ^ uVar5);
      uVar28 = uVar28 + lVar3;
      uVar26 = ((uVar7 * 0x40000000 | uVar7 >> 0x22) ^ (uVar7 >> 0x1c | uVar7 << 0x24) ^
               (uVar7 * 0x2000000 | uVar7 >> 0x27)) + ((uVar16 | uVar7) & uVar33 | uVar16 & uVar7) +
               lVar3;
      uVar14 = ((uVar21 >> 8 | uVar21 << 0x38) ^ (uVar21 >> 1 | (ulong)((uVar21 & 1) != 0) << 0x3f)
               ^ uVar21 >> 7) + uVar22 + uVar19 +
               ((uVar17 * 8 | uVar17 >> 0x3d) ^ (uVar17 >> 0x13 | uVar17 << 0x2d) ^ uVar17 >> 6);
      lVar3 = ((uVar28 >> 0x12 | uVar28 << 0x2e) ^ (uVar28 >> 0xe | uVar28 << 0x32) ^
              (uVar28 * 0x800000 | uVar28 >> 0x29)) +
              uVar5 + uVar14 + 0x34b0bcb5e19b48a8 + ((uVar18 ^ uVar15) & uVar28 ^ uVar18);
      uVar33 = uVar33 + lVar3;
      uVar25 = ((uVar26 * 0x40000000 | uVar26 >> 0x22) ^ (uVar26 >> 0x1c | uVar26 << 0x24) ^
               (uVar26 * 0x2000000 | uVar26 >> 0x27)) + ((uVar7 | uVar26) & uVar16 | uVar7 & uVar26)
               + lVar3;
      uVar20 = ((uVar10 * 8 | uVar10 >> 0x3d) ^ (uVar10 >> 0x13 | uVar10 << 0x2d) ^ uVar10 >> 6) +
               ((uVar13 >> 8 | uVar13 << 0x38) ^ (uVar13 >> 1 | (ulong)((uVar13 & 1) != 0) << 0x3f)
               ^ uVar13 >> 7) + uVar21 + uVar6;
      lVar3 = ((uVar33 >> 0x12 | uVar33 << 0x2e) ^ (uVar33 >> 0xe | uVar33 << 0x32) ^
              (uVar33 * 0x800000 | uVar33 >> 0x29)) +
              uVar18 + uVar20 + 0x391c0cb3c5c95a63 + ((uVar15 ^ uVar28) & uVar33 ^ uVar15);
      uVar16 = uVar16 + lVar3;
      uVar31 = ((uVar25 * 0x40000000 | uVar25 >> 0x22) ^ (uVar25 >> 0x1c | uVar25 << 0x24) ^
               (uVar25 * 0x2000000 | uVar25 >> 0x27)) +
               ((uVar26 | uVar25) & uVar7 | uVar26 & uVar25) + lVar3;
      uVar18 = ((uVar14 * 8 | uVar14 >> 0x3d) ^ (uVar14 >> 0x13 | uVar14 << 0x2d) ^ uVar14 >> 6) +
               ((uVar4 >> 8 | uVar4 << 0x38) ^ (uVar4 >> 1 | (ulong)((uVar4 & 1) != 0) << 0x3f) ^
               uVar4 >> 7) + uVar13 + uVar23;
      lVar3 = ((uVar16 >> 0x12 | uVar16 << 0x2e) ^ (uVar16 >> 0xe | uVar16 << 0x32) ^
              (uVar16 * 0x800000 | uVar16 >> 0x29)) +
              uVar15 + uVar18 + 0x4ed8aa4ae3418acb + ((uVar28 ^ uVar33) & uVar16 ^ uVar28);
      uVar7 = uVar7 + lVar3;
      uVar22 = ((uVar31 * 0x40000000 | uVar31 >> 0x22) ^ (uVar31 >> 0x1c | uVar31 << 0x24) ^
               (uVar31 * 0x2000000 | uVar31 >> 0x27)) +
               ((uVar25 | uVar31) & uVar26 | uVar25 & uVar31) + lVar3;
      uVar27 = ((uVar24 >> 8 | uVar24 << 0x38) ^ (uVar24 >> 1 | (ulong)((uVar24 & 1) != 0) << 0x3f)
               ^ uVar24 >> 7) + uVar4 + uVar9 +
               ((uVar20 * 8 | uVar20 >> 0x3d) ^ (uVar20 >> 0x13 | uVar20 << 0x2d) ^ uVar20 >> 6);
      lVar3 = ((uVar7 >> 0x12 | uVar7 << 0x2e) ^ (uVar7 >> 0xe | uVar7 << 0x32) ^
              (uVar7 * 0x800000 | uVar7 >> 0x29)) +
              uVar28 + uVar27 + 0x5b9cca4f7763e373 + ((uVar33 ^ uVar16) & uVar7 ^ uVar33);
      uVar26 = uVar26 + lVar3;
      uVar15 = ((uVar22 * 0x40000000 | uVar22 >> 0x22) ^ (uVar22 >> 0x1c | uVar22 << 0x24) ^
               (uVar22 * 0x2000000 | uVar22 >> 0x27)) +
               ((uVar31 | uVar22) & uVar25 | uVar31 & uVar22) + lVar3;
      uVar21 = ((uVar11 >> 8 | uVar11 << 0x38) ^ (uVar11 >> 1 | (ulong)((uVar11 & 1) != 0) << 0x3f)
               ^ uVar11 >> 7) + uVar24 + uVar8 +
               ((uVar18 * 8 | uVar18 >> 0x3d) ^ (uVar18 >> 0x13 | uVar18 << 0x2d) ^ uVar18 >> 6);
      lVar3 = ((uVar26 >> 0x12 | uVar26 << 0x2e) ^ (uVar26 >> 0xe | uVar26 << 0x32) ^
              (uVar26 * 0x800000 | uVar26 >> 0x29)) +
              uVar33 + uVar21 + 0x682e6ff3d6b2b8a3 + ((uVar16 ^ uVar7) & uVar26 ^ uVar16);
      uVar25 = uVar25 + lVar3;
      uVar4 = ((uVar22 | uVar15) & uVar31 | uVar22 & uVar15) +
              ((uVar15 * 0x40000000 | uVar15 >> 0x22) ^ (uVar15 >> 0x1c | uVar15 << 0x24) ^
              (uVar15 * 0x2000000 | uVar15 >> 0x27)) + lVar3;
      uVar33 = uVar17 + ((uVar30 >> 8 | uVar30 << 0x38) ^
                         (uVar30 >> 1 | (ulong)((uVar30 & 1) != 0) << 0x3f) ^ uVar30 >> 7) + uVar11
               + ((uVar27 * 8 | uVar27 >> 0x3d) ^ (uVar27 >> 0x13 | uVar27 << 0x2d) ^ uVar27 >> 6);
      lVar3 = ((uVar25 * 0x800000 | uVar25 >> 0x29) ^
              (uVar25 >> 0x12 | uVar25 << 0x2e) ^ (uVar25 >> 0xe | uVar25 << 0x32)) +
              uVar16 + uVar33 + 0x748f82ee5defb2fc + ((uVar7 ^ uVar26) & uVar25 ^ uVar7);
      uVar31 = uVar31 + lVar3;
      uVar28 = ((uVar15 | uVar4) & uVar22 | uVar15 & uVar4) +
               ((uVar4 * 0x40000000 | uVar4 >> 0x22) ^ (uVar4 >> 0x1c | uVar4 << 0x24) ^
               (uVar4 * 0x2000000 | uVar4 >> 0x27)) + lVar3;
      uVar16 = uVar10 + ((uVar12 >> 8 | uVar12 << 0x38) ^
                         (uVar12 >> 1 | (ulong)((uVar12 & 1) != 0) << 0x3f) ^ uVar12 >> 7) + uVar30
               + ((uVar21 * 8 | uVar21 >> 0x3d) ^ (uVar21 >> 0x13 | uVar21 << 0x2d) ^ uVar21 >> 6);
      lVar3 = ((uVar31 * 0x800000 | uVar31 >> 0x29) ^
              (uVar31 >> 0x12 | uVar31 << 0x2e) ^ (uVar31 >> 0xe | uVar31 << 0x32)) +
              uVar7 + uVar16 + 0x78a5636f43172f60 + ((uVar26 ^ uVar25) & uVar31 ^ uVar26);
      uVar22 = uVar22 + lVar3;
      uVar29 = ((uVar4 | uVar28) & uVar15 | uVar4 & uVar28) +
               ((uVar28 * 0x40000000 | uVar28 >> 0x22) ^ (uVar28 >> 0x1c | uVar28 << 0x24) ^
               (uVar28 * 0x2000000 | uVar28 >> 0x27)) + lVar3;
      uVar12 = uVar14 + ((uVar32 >> 8 | uVar32 << 0x38) ^
                         (uVar32 >> 1 | (ulong)((uVar32 & 1) != 0) << 0x3f) ^ uVar32 >> 7) + uVar12
               + ((uVar33 * 8 | uVar33 >> 0x3d) ^ (uVar33 >> 0x13 | uVar33 << 0x2d) ^ uVar33 >> 6);
      lVar3 = ((uVar22 * 0x800000 | uVar22 >> 0x29) ^
              (uVar22 >> 0x12 | uVar22 << 0x2e) ^ (uVar22 >> 0xe | uVar22 << 0x32)) +
              ((uVar25 ^ uVar31) & uVar22 ^ uVar25) + uVar26 + uVar12 + 0x84c87814a1f0ab72;
      uVar15 = uVar15 + lVar3;
      uVar5 = ((uVar28 | uVar29) & uVar4 | uVar28 & uVar29) +
              ((uVar29 * 0x40000000 | uVar29 >> 0x22) ^ (uVar29 >> 0x1c | uVar29 << 0x24) ^
              (uVar29 * 0x2000000 | uVar29 >> 0x27)) + lVar3;
      uVar32 = ((uVar16 * 8 | uVar16 >> 0x3d) ^ (uVar16 >> 0x13 | uVar16 << 0x2d) ^ uVar16 >> 6) +
               uVar20 + ((uVar19 >> 8 | uVar19 << 0x38) ^
                         (uVar19 >> 1 | (ulong)((uVar19 & 1) != 0) << 0x3f) ^ uVar19 >> 7) + uVar32;
      lVar3 = ((uVar15 * 0x800000 | uVar15 >> 0x29) ^
              (uVar15 >> 0x12 | uVar15 << 0x2e) ^ (uVar15 >> 0xe | uVar15 << 0x32)) +
              uVar25 + uVar32 + 0x8cc702081a6439ec + ((uVar31 ^ uVar22) & uVar15 ^ uVar31);
      uVar4 = uVar4 + lVar3;
      uVar7 = ((uVar29 | uVar5) & uVar28 | uVar29 & uVar5) +
              ((uVar5 * 0x40000000 | uVar5 >> 0x22) ^ (uVar5 >> 0x1c | uVar5 << 0x24) ^
              (uVar5 * 0x2000000 | uVar5 >> 0x27)) + lVar3;
      uVar11 = ((uVar6 >> 8 | uVar6 << 0x38) ^ (uVar6 >> 1 | (ulong)((uVar6 & 1) != 0) << 0x3f) ^
               uVar6 >> 7) + uVar19 + uVar18 +
               ((uVar12 * 8 | uVar12 >> 0x3d) ^ (uVar12 >> 0x13 | uVar12 << 0x2d) ^ uVar12 >> 6);
      lVar3 = ((uVar4 * 0x800000 | uVar4 >> 0x29) ^
              (uVar4 >> 0x12 | uVar4 << 0x2e) ^ (uVar4 >> 0xe | uVar4 << 0x32)) +
              uVar31 + uVar11 + 0x90befffa23631e28 + ((uVar22 ^ uVar15) & uVar4 ^ uVar22);
      uVar28 = uVar28 + lVar3;
      uVar19 = ((uVar5 | uVar7) & uVar29 | uVar5 & uVar7) +
               ((uVar7 * 0x40000000 | uVar7 >> 0x22) ^ (uVar7 >> 0x1c | uVar7 << 0x24) ^
               (uVar7 * 0x2000000 | uVar7 >> 0x27)) + lVar3;
      uVar13 = ((uVar23 >> 8 | uVar23 << 0x38) ^ (uVar23 >> 1 | (ulong)((uVar23 & 1) != 0) << 0x3f)
               ^ uVar23 >> 7) + uVar6 + uVar27 +
               ((uVar32 * 8 | uVar32 >> 0x3d) ^ (uVar32 >> 0x13 | uVar32 << 0x2d) ^ uVar32 >> 6);
      lVar3 = ((uVar28 * 0x800000 | uVar28 >> 0x29) ^
              (uVar28 >> 0x12 | uVar28 << 0x2e) ^ (uVar28 >> 0xe | uVar28 << 0x32)) +
              uVar22 + uVar13 + 0xa4506cebde82bde9 + ((uVar15 ^ uVar4) & uVar28 ^ uVar15);
      uVar29 = uVar29 + lVar3;
      uVar22 = ((uVar7 | uVar19) & uVar5 | uVar7 & uVar19) +
               ((uVar19 * 0x40000000 | uVar19 >> 0x22) ^ (uVar19 >> 0x1c | uVar19 << 0x24) ^
               (uVar19 * 0x2000000 | uVar19 >> 0x27)) + lVar3;
      uVar23 = ((uVar9 >> 8 | uVar9 << 0x38) ^ (uVar9 >> 1 | (ulong)((uVar9 & 1) != 0) << 0x3f) ^
               uVar9 >> 7) + uVar23 + uVar21 +
               ((uVar11 * 8 | uVar11 >> 0x3d) ^ (uVar11 >> 0x13 | uVar11 << 0x2d) ^ uVar11 >> 6);
      lVar3 = ((uVar29 * 0x800000 | uVar29 >> 0x29) ^
              (uVar29 >> 0x12 | uVar29 << 0x2e) ^ (uVar29 >> 0xe | uVar29 << 0x32)) +
              ((uVar4 ^ uVar28) & uVar29 ^ uVar4) + uVar15 + uVar23 + 0xbef9a3f7b2c67915;
      uVar5 = uVar5 + lVar3;
      uVar30 = ((uVar19 | uVar22) & uVar7 | uVar19 & uVar22) +
               ((uVar22 * 0x40000000 | uVar22 >> 0x22) ^ (uVar22 >> 0x1c | uVar22 << 0x24) ^
               (uVar22 * 0x2000000 | uVar22 >> 0x27)) + lVar3;
      uVar24 = ((uVar8 >> 8 | uVar8 << 0x38) ^ (uVar8 >> 1 | (ulong)((uVar8 & 1) != 0) << 0x3f) ^
               uVar8 >> 7) + uVar9 + uVar33 +
               ((uVar13 * 8 | uVar13 >> 0x3d) ^ (uVar13 >> 0x13 | uVar13 << 0x2d) ^ uVar13 >> 6);
      lVar3 = ((uVar5 * 0x800000 | uVar5 >> 0x29) ^
              (uVar5 >> 0x12 | uVar5 << 0x2e) ^ (uVar5 >> 0xe | uVar5 << 0x32)) +
              ((uVar28 ^ uVar29) & uVar5 ^ uVar28) + uVar4 + uVar24 + 0xc67178f2e372532b;
      uVar7 = uVar7 + lVar3;
      uVar6 = ((uVar22 | uVar30) & uVar19 | uVar22 & uVar30) +
              ((uVar30 * 0x40000000 | uVar30 >> 0x22) ^ (uVar30 >> 0x1c | uVar30 << 0x24) ^
              (uVar30 * 0x2000000 | uVar30 >> 0x27)) + lVar3;
      x[0] = ((uVar23 * 8 | uVar23 >> 0x3d) ^ (uVar23 >> 0x13 | uVar23 << 0x2d) ^ uVar23 >> 6) +
             uVar8 + ((uVar17 >> 8 | uVar17 << 0x38) ^
                      (uVar17 >> 1 | (ulong)((uVar17 & 1) != 0) << 0x3f) ^ uVar17 >> 7) + uVar16;
      lVar3 = ((uVar7 * 0x800000 | uVar7 >> 0x29) ^
              (uVar7 >> 0x12 | uVar7 << 0x2e) ^ (uVar7 >> 0xe | uVar7 << 0x32)) +
              ((uVar29 ^ uVar5) & uVar7 ^ uVar29) + uVar28 + x[0] + 0xca273eceea26619c;
      uVar19 = uVar19 + lVar3;
      uVar9 = ((uVar30 | uVar6) & uVar22 | uVar30 & uVar6) +
              ((uVar6 * 0x40000000 | uVar6 >> 0x22) ^ (uVar6 >> 0x1c | uVar6 << 0x24) ^
              (uVar6 * 0x2000000 | uVar6 >> 0x27)) + lVar3;
      x[1] = ((uVar24 * 8 | uVar24 >> 0x3d) ^ (uVar24 >> 0x13 | uVar24 << 0x2d) ^ uVar24 >> 6) +
             ((uVar10 >> 8 | uVar10 << 0x38) ^ (uVar10 >> 1 | (ulong)((uVar10 & 1) != 0) << 0x3f) ^
             uVar10 >> 7) + uVar17 + uVar12;
      lVar3 = ((uVar19 * 0x800000 | uVar19 >> 0x29) ^
              (uVar19 >> 0x12 | uVar19 << 0x2e) ^ (uVar19 >> 0xe | uVar19 << 0x32)) +
              uVar29 + x[1] + 0xd186b8c721c0c207 + ((uVar5 ^ uVar7) & uVar19 ^ uVar5);
      uVar22 = uVar22 + lVar3;
      uVar17 = ((uVar6 | uVar9) & uVar30 | uVar6 & uVar9) +
               ((uVar9 * 0x40000000 | uVar9 >> 0x22) ^ (uVar9 >> 0x1c | uVar9 << 0x24) ^
               (uVar9 * 0x2000000 | uVar9 >> 0x27)) + lVar3;
      x[2] = ((x[0] * 8 | x[0] >> 0x3d) ^ (x[0] >> 0x13 | x[0] << 0x2d) ^ x[0] >> 6) +
             ((uVar14 >> 8 | uVar14 << 0x38) ^ (uVar14 >> 1 | (ulong)((uVar14 & 1) != 0) << 0x3f) ^
             uVar14 >> 7) + uVar10 + uVar32;
      lVar3 = ((uVar22 * 0x800000 | uVar22 >> 0x29) ^
              (uVar22 >> 0x12 | uVar22 << 0x2e) ^ (uVar22 >> 0xe | uVar22 << 0x32)) +
              uVar5 + x[2] + 0xeada7dd6cde0eb1e + ((uVar7 ^ uVar19) & uVar22 ^ uVar7);
      uVar30 = uVar30 + lVar3;
      uVar10 = ((uVar9 | uVar17) & uVar6 | uVar9 & uVar17) +
               ((uVar17 * 0x40000000 | uVar17 >> 0x22) ^ (uVar17 >> 0x1c | uVar17 << 0x24) ^
               (uVar17 * 0x2000000 | uVar17 >> 0x27)) + lVar3;
      x[3] = ((x[1] * 8 | x[1] >> 0x3d) ^ (x[1] >> 0x13 | x[1] << 0x2d) ^ x[1] >> 6) +
             ((uVar20 >> 8 | uVar20 << 0x38) ^ (uVar20 >> 1 | (ulong)((uVar20 & 1) != 0) << 0x3f) ^
             uVar20 >> 7) + uVar14 + uVar11;
      lVar3 = ((uVar30 * 0x800000 | uVar30 >> 0x29) ^
              (uVar30 >> 0x12 | uVar30 << 0x2e) ^ (uVar30 >> 0xe | uVar30 << 0x32)) +
              ((uVar19 ^ uVar22) & uVar30 ^ uVar19) + uVar7 + x[3] + 0xf57d4f7fee6ed178;
      uVar6 = uVar6 + lVar3;
      uVar4 = ((uVar17 | uVar10) & uVar9 | uVar17 & uVar10) +
              ((uVar10 * 0x40000000 | uVar10 >> 0x22) ^ (uVar10 >> 0x1c | uVar10 << 0x24) ^
              (uVar10 * 0x2000000 | uVar10 >> 0x27)) + lVar3;
      x[4] = ((x[2] * 8 | x[2] >> 0x3d) ^ (x[2] >> 0x13 | x[2] << 0x2d) ^ x[2] >> 6) +
             ((uVar18 >> 8 | uVar18 << 0x38) ^ (uVar18 >> 1 | (ulong)((uVar18 & 1) != 0) << 0x3f) ^
             uVar18 >> 7) + uVar20 + uVar13;
      lVar3 = ((uVar6 * 0x800000 | uVar6 >> 0x29) ^
              (uVar6 >> 0x12 | uVar6 << 0x2e) ^ (uVar6 >> 0xe | uVar6 << 0x32)) +
              uVar19 + x[4] + 0x6f067aa72176fba + ((uVar22 ^ uVar30) & uVar6 ^ uVar22);
      uVar9 = uVar9 + lVar3;
      uVar7 = ((uVar10 | uVar4) & uVar17 | uVar10 & uVar4) +
              ((uVar4 * 0x40000000 | uVar4 >> 0x22) ^ (uVar4 >> 0x1c | uVar4 << 0x24) ^
              (uVar4 * 0x2000000 | uVar4 >> 0x27)) + lVar3;
      x[5] = ((uVar27 >> 8 | uVar27 << 0x38) ^ (uVar27 >> 1 | (ulong)((uVar27 & 1) != 0) << 0x3f) ^
             uVar27 >> 7) + uVar18 + uVar23 +
             ((x[3] * 8 | x[3] >> 0x3d) ^ (x[3] >> 0x13 | x[3] << 0x2d) ^ x[3] >> 6);
      lVar3 = ((uVar9 * 0x800000 | uVar9 >> 0x29) ^
              (uVar9 >> 0x12 | uVar9 << 0x2e) ^ (uVar9 >> 0xe | uVar9 << 0x32)) +
              uVar22 + x[5] + 0xa637dc5a2c898a6 + ((uVar30 ^ uVar6) & uVar9 ^ uVar30);
      uVar17 = uVar17 + lVar3;
      uVar5 = ((uVar4 | uVar7) & uVar10 | uVar4 & uVar7) +
              ((uVar7 * 0x40000000 | uVar7 >> 0x22) ^ (uVar7 >> 0x1c | uVar7 << 0x24) ^
              (uVar7 * 0x2000000 | uVar7 >> 0x27)) + lVar3;
      x[6] = ((uVar21 >> 8 | uVar21 << 0x38) ^ (uVar21 >> 1 | (ulong)((uVar21 & 1) != 0) << 0x3f) ^
             uVar21 >> 7) + uVar27 + uVar24 +
             ((x[4] * 8 | x[4] >> 0x3d) ^ (x[4] >> 0x13 | x[4] << 0x2d) ^ x[4] >> 6);
      lVar3 = ((uVar17 * 0x800000 | uVar17 >> 0x29) ^
              (uVar17 >> 0x12 | uVar17 << 0x2e) ^ (uVar17 >> 0xe | uVar17 << 0x32)) +
              ((uVar6 ^ uVar9) & uVar17 ^ uVar6) + uVar30 + x[6] + 0x113f9804bef90dae;
      uVar10 = uVar10 + lVar3;
      uVar8 = ((uVar7 | uVar5) & uVar4 | uVar7 & uVar5) +
              ((uVar5 * 0x40000000 | uVar5 >> 0x22) ^ (uVar5 >> 0x1c | uVar5 << 0x24) ^
              (uVar5 * 0x2000000 | uVar5 >> 0x27)) + lVar3;
      x[7] = ((uVar33 >> 8 | uVar33 << 0x38) ^ (uVar33 >> 1 | (ulong)((uVar33 & 1) != 0) << 0x3f) ^
             uVar33 >> 7) + uVar21 + x[0] +
             ((x[5] * 8 | x[5] >> 0x3d) ^ (x[5] >> 0x13 | x[5] << 0x2d) ^ x[5] >> 6);
      lVar3 = ((uVar10 >> 0x12 | uVar10 << 0x2e) ^ (uVar10 >> 0xe | uVar10 << 0x32) ^
              (uVar10 * 0x800000 | uVar10 >> 0x29)) +
              uVar6 + x[7] + 0x1b710b35131c471b + ((uVar9 ^ uVar17) & uVar10 ^ uVar9);
      uVar4 = uVar4 + lVar3;
      uVar20 = lVar3 + ((uVar5 | uVar8) & uVar7 | uVar5 & uVar8) +
                       ((uVar8 * 0x40000000 | uVar8 >> 0x22) ^ (uVar8 >> 0x1c | uVar8 << 0x24) ^
                       (uVar8 * 0x2000000 | uVar8 >> 0x27));
      x[8] = x[1] + ((uVar16 >> 8 | uVar16 << 0x38) ^
                     (uVar16 >> 1 | (ulong)((uVar16 & 1) != 0) << 0x3f) ^ uVar16 >> 7) + uVar33 +
             ((x[6] * 8 | x[6] >> 0x3d) ^ (x[6] >> 0x13 | x[6] << 0x2d) ^ x[6] >> 6);
      lVar3 = ((uVar4 * 0x800000 | uVar4 >> 0x29) ^
              (uVar4 >> 0x12 | uVar4 << 0x2e) ^ (uVar4 >> 0xe | uVar4 << 0x32)) +
              ((uVar17 ^ uVar10) & uVar4 ^ uVar17) + uVar9 + x[8] + 0x28db77f523047d84;
      uVar7 = uVar7 + lVar3;
      uVar18 = ((uVar8 | uVar20) & uVar5 | uVar8 & uVar20) +
               ((uVar20 * 0x40000000 | uVar20 >> 0x22) ^ (uVar20 >> 0x1c | uVar20 << 0x24) ^
               (uVar20 * 0x2000000 | uVar20 >> 0x27)) + lVar3;
      x[9] = ((x[7] * 8 | x[7] >> 0x3d) ^ (x[7] >> 0x13 | x[7] << 0x2d) ^ x[7] >> 6) +
             ((uVar12 >> 8 | uVar12 << 0x38) ^ (uVar12 >> 1 | (ulong)((uVar12 & 1) != 0) << 0x3f) ^
             uVar12 >> 7) + uVar16 + x[2];
      lVar3 = ((uVar7 * 0x800000 | uVar7 >> 0x29) ^
              (uVar7 >> 0x12 | uVar7 << 0x2e) ^ (uVar7 >> 0xe | uVar7 << 0x32)) +
              ((uVar10 ^ uVar4) & uVar7 ^ uVar10) + uVar17 + x[9] + 0x32caab7b40c72493;
      uVar5 = uVar5 + lVar3;
      uVar14 = ((uVar20 | uVar18) & uVar8 | uVar20 & uVar18) +
               ((uVar18 * 0x40000000 | uVar18 >> 0x22) ^ (uVar18 >> 0x1c | uVar18 << 0x24) ^
               (uVar18 * 0x2000000 | uVar18 >> 0x27)) + lVar3;
      x[10] = ((x[8] * 8 | x[8] >> 0x3d) ^ (x[8] >> 0x13 | x[8] << 0x2d) ^ x[8] >> 6) +
              ((uVar32 >> 8 | uVar32 << 0x38) ^ (uVar32 >> 1 | (ulong)((uVar32 & 1) != 0) << 0x3f) ^
              uVar32 >> 7) + uVar12 + x[3];
      lVar3 = ((uVar5 >> 0x12 | uVar5 << 0x2e) ^ (uVar5 >> 0xe | uVar5 << 0x32) ^
              (uVar5 * 0x800000 | uVar5 >> 0x29)) +
              ((uVar4 ^ uVar7) & uVar5 ^ uVar4) + uVar10 + x[10] + 0x3c9ebe0a15c9bebc;
      uVar8 = uVar8 + lVar3;
      uVar17 = lVar3 + ((uVar18 | uVar14) & uVar20 | uVar18 & uVar14) +
                       ((uVar14 * 0x40000000 | uVar14 >> 0x22) ^ (uVar14 >> 0x1c | uVar14 << 0x24) ^
                       (uVar14 * 0x2000000 | uVar14 >> 0x27));
      x[11] = ((x[9] * 8 | x[9] >> 0x3d) ^ (x[9] >> 0x13 | x[9] << 0x2d) ^ x[9] >> 6) +
              ((uVar11 >> 8 | uVar11 << 0x38) ^ (uVar11 >> 1 | (ulong)((uVar11 & 1) != 0) << 0x3f) ^
              uVar11 >> 7) + uVar32 + x[4];
      lVar3 = ((uVar8 >> 0x12 | uVar8 << 0x2e) ^ (uVar8 >> 0xe | uVar8 << 0x32) ^
              (uVar8 * 0x800000 | uVar8 >> 0x29)) +
              uVar4 + x[11] + 0x431d67c49c100d4c + ((uVar7 ^ uVar5) & uVar8 ^ uVar7);
      uVar20 = uVar20 + lVar3;
      uVar4 = lVar3 + ((uVar14 | uVar17) & uVar18 | uVar14 & uVar17) +
                      ((uVar17 * 0x40000000 | uVar17 >> 0x22) ^ (uVar17 >> 0x1c | uVar17 << 0x24) ^
                      (uVar17 * 0x2000000 | uVar17 >> 0x27));
      x[12] = ((x[10] * 8 | x[10] >> 0x3d) ^ (x[10] >> 0x13 | x[10] << 0x2d) ^ x[10] >> 6) +
              x[5] + ((uVar13 >> 8 | uVar13 << 0x38) ^
                      (uVar13 >> 1 | (ulong)((uVar13 & 1) != 0) << 0x3f) ^ uVar13 >> 7) + uVar11;
      lVar3 = ((uVar20 >> 0x12 | uVar20 << 0x2e) ^ (uVar20 >> 0xe | uVar20 << 0x32) ^
              (uVar20 * 0x800000 | uVar20 >> 0x29)) +
              uVar7 + x[12] + 0x4cc5d4becb3e42b6 + ((uVar5 ^ uVar8) & uVar20 ^ uVar5);
      uVar18 = uVar18 + lVar3;
      uVar7 = lVar3 + ((uVar17 | uVar4) & uVar14 | uVar17 & uVar4) +
                      ((uVar4 * 0x40000000 | uVar4 >> 0x22) ^ (uVar4 >> 0x1c | uVar4 << 0x24) ^
                      (uVar4 * 0x2000000 | uVar4 >> 0x27));
      x[13] = (x[11] >> 6 ^ (x[11] * 8 | x[11] >> 0x3d) ^ (x[11] >> 0x13 | x[11] << 0x2d)) +
              ((uVar23 >> 8 | uVar23 << 0x38) ^ (uVar23 >> 1 | (ulong)((uVar23 & 1) != 0) << 0x3f) ^
              uVar23 >> 7) + uVar13 + x[6];
      lVar3 = ((uVar18 >> 0x12 | uVar18 << 0x2e) ^ (uVar18 >> 0xe | uVar18 << 0x32) ^
              (uVar18 * 0x800000 | uVar18 >> 0x29)) +
              uVar5 + x[13] + 0x597f299cfc657e2a + ((uVar8 ^ uVar20) & uVar18 ^ uVar8);
      uVar14 = uVar14 + lVar3;
      uVar10 = lVar3 + ((uVar4 | uVar7) & uVar17 | uVar4 & uVar7) +
                       ((uVar7 * 0x40000000 | uVar7 >> 0x22) ^ (uVar7 >> 0x1c | uVar7 << 0x24) ^
                       (uVar7 * 0x2000000 | uVar7 >> 0x27));
      x[14] = ((uVar24 >> 8 | uVar24 << 0x38) ^ (uVar24 >> 1 | (ulong)((uVar24 & 1) != 0) << 0x3f) ^
              uVar24 >> 7) + uVar23 + x[7] +
              ((x[12] * 8 | x[12] >> 0x3d) ^ (x[12] >> 0x13 | x[12] << 0x2d) ^ x[12] >> 6);
      lVar3 = ((uVar14 >> 0x12 | uVar14 << 0x2e) ^ (uVar14 >> 0xe | uVar14 << 0x32) ^
              (uVar14 * 0x800000 | uVar14 >> 0x29)) +
              ((uVar20 ^ uVar18) & uVar14 ^ uVar20) + uVar8 + x[14] + 0x5fcb6fab3ad6faec;
      uVar17 = uVar17 + lVar3;
      uVar5 = lVar3 + ((uVar7 | uVar10) & uVar4 | uVar7 & uVar10) +
                      ((uVar10 * 0x40000000 | uVar10 >> 0x22) ^ (uVar10 >> 0x1c | uVar10 << 0x24) ^
                      (uVar10 * 0x2000000 | uVar10 >> 0x27));
      x[15] = ((x[0] >> 8 | x[0] << 0x38) ^ (x[0] >> 1 | (ulong)((x[0] & 1) != 0) << 0x3f) ^
              x[0] >> 7) + uVar24 + x[8] +
              ((x[13] * 8 | x[13] >> 0x3d) ^ (x[13] >> 0x13 | x[13] << 0x2d) ^ x[13] >> 6);
      lVar3 = ((uVar17 >> 0x12 | uVar17 << 0x2e) ^ (uVar17 >> 0xe | uVar17 << 0x32) ^
              (uVar17 * 0x800000 | uVar17 >> 0x29)) +
              uVar20 + x[15] + 0x6c44198c4a475817 + ((uVar18 ^ uVar14) & uVar17 ^ uVar18);
      local_178 = local_178 + uVar10;
      local_170 = local_170 + uVar4 + lVar3;
      local_108 = ((uVar10 | uVar5) & uVar7 | uVar10 & uVar5) +
                  ((uVar5 * 0x40000000 | uVar5 >> 0x22) ^ (uVar5 >> 0x1c | uVar5 << 0x24) ^
                  (uVar5 * 0x2000000 | uVar5 >> 0x27)) + local_108 + lVar3;
      local_160 = local_160 + uVar14;
      local_180 = local_180 + uVar5;
      local_100 = local_100 + uVar7;
      local_168 = local_168 + uVar17;
      local_f8 = local_f8 + uVar18;
      ctx->state[2] = local_178;
      ctx->state[6] = local_160;
      ctx->state[0] = local_108;
      ctx->state[1] = local_180;
      ctx->state[3] = local_100;
      ctx->state[4] = local_170;
      ctx->state[5] = local_168;
      ctx->state[7] = local_f8;
    } while (local_e8 < pvVar2);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

