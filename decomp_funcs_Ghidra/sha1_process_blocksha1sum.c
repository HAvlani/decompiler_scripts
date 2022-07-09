
void sha1_process_block(void *buffer,size_t len,sha1_ctx *ctx)

{
  long lVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
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
  long in_FS_OFFSET;
  uint32_t local_e4;
  uint32_t local_e0;
  uint32_t local_dc;
  uint32_t local_bc;
  uint32_t local_b8;
  uint32_t x [16];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pvVar2 = (void *)((len & 0xfffffffffffffffc) + (long)buffer);
  local_bc = ctx->A;
  local_e4 = ctx->B;
  local_e0 = ctx->C;
  local_dc = ctx->D;
  local_b8 = ctx->E;
  uVar3 = ctx->total[0];
  ctx->total[0] = (uint)len + ctx->total[0];
  ctx->total[1] = ctx->total[1] + (int)(len >> 0x20) + (uint)CARRY4((uint)len,uVar3);
  if (buffer < pvVar2) {
    do {
      lVar5 = 0;
      do {
        uVar3 = *(uint *)((long)buffer + lVar5);
        *(uint *)((long)x + lVar5) =
             uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
        lVar5 = lVar5 + 4;
      } while (lVar5 != 0x40);
      buffer = (void *)((long)buffer + 0x40);
      uVar3 = local_e4 >> 2 | local_e4 << 0x1e;
      uVar12 = ((local_e0 ^ local_dc) & local_e4 ^ local_dc) +
               (local_bc << 5 | local_bc >> 0x1b) + x[0] + 0x5a827999 + local_b8;
      uVar9 = (uVar12 * 0x20 | uVar12 >> 0x1b) +
              x[1] + 0x5a827999 + local_dc + ((local_e0 ^ uVar3) & local_bc ^ local_e0);
      uVar4 = local_bc >> 2 | local_bc << 0x1e;
      uVar13 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar12 = ((uVar3 ^ uVar4) & uVar12 ^ uVar3) + x[2] + 0x5a827999 + local_e0 +
               (uVar9 * 0x20 | uVar9 >> 0x1b);
      uVar10 = uVar9 >> 2 | uVar9 * 0x40000000;
      uVar9 = ((uVar4 ^ uVar13) & uVar9 ^ uVar4) + x[3] + 0x5a827999 + uVar3 +
              (uVar12 * 0x20 | uVar12 >> 0x1b);
      uVar7 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar3 = ((uVar13 ^ uVar10) & uVar12 ^ uVar13) + x[4] + 0x5a827999 + uVar4 +
              (uVar9 * 0x20 | uVar9 >> 0x1b);
      uVar12 = uVar9 >> 2 | uVar9 * 0x40000000;
      uVar9 = ((uVar10 ^ uVar7) & uVar9 ^ uVar10) + x[5] + 0x5a827999 + uVar13 +
              (uVar3 * 0x20 | uVar3 >> 0x1b);
      uVar4 = uVar3 >> 2 | uVar3 * 0x40000000;
      uVar10 = ((uVar7 ^ uVar12) & uVar3 ^ uVar7) + x[6] + 0x5a827999 + uVar10 +
               (uVar9 * 0x20 | uVar9 >> 0x1b);
      uVar3 = uVar9 >> 2 | uVar9 * 0x40000000;
      uVar7 = ((uVar12 ^ uVar4) & uVar9 ^ uVar12) + x[7] + 0x5a827999 + uVar7 +
              (uVar10 * 0x20 | uVar10 >> 0x1b);
      uVar13 = uVar10 >> 2 | uVar10 * 0x40000000;
      uVar9 = ((uVar4 ^ uVar3) & uVar10 ^ uVar4) + x[8] + 0x5a827999 + uVar12 +
              (uVar7 * 0x20 | uVar7 >> 0x1b);
      uVar10 = uVar7 >> 2 | uVar7 * 0x40000000;
      uVar4 = ((uVar3 ^ uVar13) & uVar7 ^ uVar3) + x[9] + 0x5a827999 + uVar4 +
              (uVar9 * 0x20 | uVar9 >> 0x1b);
      uVar7 = uVar9 >> 2 | uVar9 * 0x40000000;
      uVar3 = ((uVar13 ^ uVar10) & uVar9 ^ uVar13) + x[10] + 0x5a827999 + uVar3 +
              (uVar4 * 0x20 | uVar4 >> 0x1b);
      uVar12 = uVar4 >> 2 | uVar4 * 0x40000000;
      uVar9 = ((uVar10 ^ uVar7) & uVar4 ^ uVar10) + x[11] + 0x5a827999 + uVar13 +
              (uVar3 * 0x20 | uVar3 >> 0x1b);
      uVar4 = uVar3 >> 2 | uVar3 * 0x40000000;
      uVar10 = ((uVar7 ^ uVar12) & uVar3 ^ uVar7) + x[12] + 0x5a827999 + uVar10 +
               (uVar9 * 0x20 | uVar9 >> 0x1b);
      uVar7 = ((uVar12 ^ uVar4) & uVar9 ^ uVar12) + x[13] + 0x5a827999 + uVar7 +
              (uVar10 * 0x20 | uVar10 >> 0x1b);
      uVar3 = uVar9 >> 2 | uVar9 * 0x40000000;
      uVar17 = x[0] ^ x[2] ^ x[8] ^ x[13];
      uVar9 = x[1] ^ x[3] ^ x[9] ^ x[14];
      uVar14 = uVar10 >> 2 | uVar10 * 0x40000000;
      uVar16 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      uVar12 = ((uVar4 ^ uVar3) & uVar10 ^ uVar4) + x[14] + 0x5a827999 + uVar12 +
               (uVar7 * 0x20 | uVar7 >> 0x1b);
      uVar13 = uVar7 >> 2 | uVar7 * 0x40000000;
      uVar9 = ((uVar3 ^ uVar14) & uVar7 ^ uVar3) + x[15] + 0x5a827999 + uVar4 +
              (uVar12 * 0x20 | uVar12 >> 0x1b);
      uVar24 = uVar17 << 1 | (uint)((int)uVar17 < 0);
      uVar7 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar3 = ((uVar14 ^ uVar13) & uVar12 ^ uVar14) + uVar24 + 0x5a827999 + uVar3 +
              (uVar9 * 0x20 | uVar9 >> 0x1b);
      uVar10 = uVar9 >> 2 | uVar9 * 0x40000000;
      uVar4 = uVar3 >> 2 | uVar3 * 0x40000000;
      uVar9 = ((uVar13 ^ uVar7) & uVar9 ^ uVar13) + uVar16 + 0x5a827999 + uVar14 +
              (uVar3 * 0x20 | uVar3 >> 0x1b);
      uVar12 = x[2] ^ x[4] ^ x[10] ^ x[15];
      uVar15 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      uVar13 = ((uVar7 ^ uVar10) & uVar3 ^ uVar7) + uVar15 + 0x5a827999 + uVar13 +
               (uVar9 * 0x20 | uVar9 >> 0x1b);
      uVar3 = x[3] ^ x[5] ^ x[11] ^ uVar24;
      uVar11 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      uVar12 = uVar9 >> 2 | uVar9 * 0x40000000;
      uVar3 = ((uVar10 ^ uVar4) & uVar9 ^ uVar10) + uVar11 + 0x5a827999 + uVar7 +
              (uVar13 * 0x20 | uVar13 >> 0x1b);
      uVar9 = x[12] ^ x[4] ^ x[6] ^ uVar16;
      uVar8 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      uVar14 = uVar13 >> 2 | uVar13 * 0x40000000;
      uVar7 = uVar3 >> 2 | uVar3 * 0x40000000;
      uVar13 = (uVar3 * 0x20 | uVar3 >> 0x1b) +
               uVar8 + 0x6ed9eba1 + uVar10 + (uVar4 ^ uVar12 ^ uVar13);
      uVar9 = x[13] ^ x[5] ^ x[7] ^ uVar15;
      uVar6 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      uVar10 = (uVar13 * 0x20 | uVar13 >> 0x1b) +
               uVar6 + 0x6ed9eba1 + uVar4 + (uVar12 ^ uVar14 ^ uVar3);
      uVar3 = x[14] ^ x[6] ^ x[8] ^ uVar11;
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      uVar25 = uVar13 >> 2 | uVar13 * 0x40000000;
      uVar17 = (uVar10 * 0x20 | uVar10 >> 0x1b) +
               uVar3 + 0x6ed9eba1 + uVar12 + (uVar14 ^ uVar7 ^ uVar13);
      uVar4 = x[15] ^ x[7] ^ x[9] ^ uVar8;
      uVar9 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar12 = uVar10 >> 2 | uVar10 * 0x40000000;
      uVar13 = (uVar17 * 0x20 | uVar17 >> 0x1b) +
               uVar9 + 0x6ed9eba1 + uVar14 + (uVar7 ^ uVar25 ^ uVar10);
      uVar4 = x[8] ^ x[10] ^ uVar24 ^ uVar6;
      uVar18 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar22 = uVar17 >> 2 | uVar17 * 0x40000000;
      uVar7 = (uVar13 * 0x20 | uVar13 >> 0x1b) +
              uVar18 + 0x6ed9eba1 + uVar7 + (uVar25 ^ uVar12 ^ uVar17);
      uVar4 = x[9] ^ x[11] ^ uVar16 ^ uVar3;
      uVar10 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar20 = uVar13 >> 2 | uVar13 * 0x40000000;
      uVar25 = (uVar7 * 0x20 | uVar7 >> 0x1b) +
               (uVar12 ^ uVar22 ^ uVar13) + uVar10 + 0x6ed9eba1 + uVar25;
      uVar4 = x[10] ^ x[12] ^ uVar15 ^ uVar9;
      uVar13 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar14 = uVar7 >> 2 | uVar7 * 0x40000000;
      uVar4 = (uVar22 ^ uVar20 ^ uVar7) + uVar13 + 0x6ed9eba1 + uVar12 +
              (uVar25 * 0x20 | uVar25 >> 0x1b);
      uVar12 = x[11] ^ x[13] ^ uVar11 ^ uVar18;
      uVar17 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      uVar26 = uVar25 >> 2 | uVar25 * 0x40000000;
      uVar25 = (uVar4 * 0x20 | uVar4 >> 0x1b) +
               (uVar20 ^ uVar14 ^ uVar25) + uVar17 + 0x6ed9eba1 + uVar22;
      uVar12 = x[12] ^ x[14] ^ uVar8 ^ uVar10;
      uVar22 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      uVar12 = uVar4 >> 2 | uVar4 * 0x40000000;
      uVar7 = (uVar25 * 0x20 | uVar25 >> 0x1b) +
              (uVar14 ^ uVar26 ^ uVar4) + uVar22 + 0x6ed9eba1 + uVar20;
      uVar4 = x[13] ^ x[15] ^ uVar6 ^ uVar13;
      uVar20 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar19 = (uVar7 * 0x20 | uVar7 >> 0x1b) +
               (uVar26 ^ uVar12 ^ uVar25) + uVar20 + 0x6ed9eba1 + uVar14;
      uVar23 = uVar25 >> 2 | uVar25 * 0x40000000;
      uVar4 = uVar24 ^ x[14] ^ uVar3 ^ uVar17;
      uVar25 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar21 = uVar7 >> 2 | uVar7 * 0x40000000;
      uVar7 = (uVar12 ^ uVar23 ^ uVar7) + uVar25 + 0x6ed9eba1 + uVar26 +
              (uVar19 * 0x20 | uVar19 >> 0x1b);
      uVar4 = x[15] ^ uVar16 ^ uVar9 ^ uVar22;
      uVar27 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar26 = uVar19 >> 2 | uVar19 * 0x40000000;
      uVar14 = uVar24 ^ uVar15 ^ uVar18 ^ uVar20;
      uVar4 = uVar27 + 0x6ed9eba1 + uVar12 + (uVar23 ^ uVar21 ^ uVar19) +
              (uVar7 * 0x20 | uVar7 >> 0x1b);
      uVar28 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar14 = uVar7 >> 2 | uVar7 * 0x40000000;
      uVar19 = (uVar21 ^ uVar26 ^ uVar7) + uVar28 + 0x6ed9eba1 + uVar23 +
               (uVar4 * 0x20 | uVar4 >> 0x1b);
      uVar12 = uVar16 ^ uVar11 ^ uVar10 ^ uVar25;
      uVar24 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      uVar12 = uVar15 ^ uVar8 ^ uVar13 ^ uVar27;
      uVar23 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      uVar7 = uVar11 ^ uVar6 ^ uVar17 ^ uVar28;
      uVar12 = uVar4 >> 2 | uVar4 * 0x40000000;
      uVar16 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      uVar7 = uVar8 ^ uVar3 ^ uVar22 ^ uVar24;
      uVar4 = (uVar26 ^ uVar14 ^ uVar4) + uVar24 + 0x6ed9eba1 + uVar21 +
              (uVar19 * 0x20 | uVar19 >> 0x1b);
      uVar21 = uVar19 >> 2 | uVar19 * 0x40000000;
      uVar11 = (uVar14 ^ uVar12 ^ uVar19) + uVar23 + 0x6ed9eba1 + uVar26 +
               (uVar4 * 0x20 | uVar4 >> 0x1b);
      uVar26 = uVar4 >> 2 | uVar4 * 0x40000000;
      uVar8 = (uVar12 ^ uVar21 ^ uVar4) + uVar16 + 0x6ed9eba1 + uVar14 +
              (uVar11 * 0x20 | uVar11 >> 0x1b);
      uVar15 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      uVar4 = uVar6 ^ uVar9 ^ uVar20 ^ uVar23;
      uVar19 = uVar11 >> 2 | uVar11 * 0x40000000;
      uVar6 = (uVar21 ^ uVar26 ^ uVar11) + uVar15 + 0x6ed9eba1 + uVar12 +
              (uVar8 * 0x20 | uVar8 >> 0x1b);
      uVar14 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar11 = uVar8 >> 2 | uVar8 * 0x40000000;
      uVar7 = (uVar26 ^ uVar19 ^ uVar8) + uVar14 + 0x6ed9eba1 + uVar21 +
              (uVar6 * 0x20 | uVar6 >> 0x1b);
      uVar3 = uVar3 ^ uVar18 ^ uVar25 ^ uVar16;
      uVar4 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      uVar8 = uVar6 >> 2 | uVar6 * 0x40000000;
      uVar3 = uVar9 ^ uVar10 ^ uVar27 ^ uVar15;
      uVar12 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      uVar3 = (uVar19 ^ uVar11 ^ uVar6) + uVar4 + 0x6ed9eba1 + uVar26 +
              (uVar7 * 0x20 | uVar7 >> 0x1b);
      uVar6 = uVar7 >> 2 | uVar7 * 0x40000000;
      uVar19 = (uVar3 * 0x20 | uVar3 >> 0x1b) +
               (uVar11 ^ uVar8 ^ uVar7) + uVar12 + 0x6ed9eba1 + uVar19;
      uVar9 = uVar13 ^ uVar18 ^ uVar28 ^ uVar14;
      uVar26 = uVar19 >> 2 | uVar19 * 0x40000000;
      uVar7 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      uVar10 = uVar10 ^ uVar17 ^ uVar24 ^ uVar4;
      uVar9 = uVar3 >> 2 | uVar3 * 0x40000000;
      uVar11 = uVar7 + 0x8f1bbcdc + uVar11 + (uVar19 * 0x20 | uVar19 >> 0x1b) +
               ((uVar3 | uVar6) & uVar8 | uVar3 & uVar6);
      uVar18 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      uVar3 = uVar13 ^ uVar22 ^ uVar23 ^ uVar12;
      uVar8 = (uVar11 * 0x20 | uVar11 >> 0x1b) +
              (uVar19 & uVar9 | (uVar19 | uVar9) & uVar6) + uVar18 + 0x8f1bbcdc + uVar8;
      uVar13 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      uVar19 = uVar11 >> 2 | uVar11 * 0x40000000;
      uVar11 = uVar13 + 0x8f1bbcdc + uVar6 + (uVar8 * 0x20 | uVar8 >> 0x1b) +
               ((uVar11 | uVar26) & uVar9 | uVar11 & uVar26);
      uVar3 = uVar17 ^ uVar20 ^ uVar16 ^ uVar7;
      uVar6 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      uVar17 = uVar8 >> 2 | uVar8 * 0x40000000;
      uVar10 = uVar22 ^ uVar25 ^ uVar15 ^ uVar18;
      uVar3 = (uVar11 * 0x20 | uVar11 >> 0x1b) +
              (uVar8 & uVar19 | (uVar8 | uVar19) & uVar26) + uVar6 + 0x8f1bbcdc + uVar9;
      uVar8 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      uVar26 = uVar8 + 0x8f1bbcdc + uVar26 + (uVar3 * 0x20 | uVar3 >> 0x1b) +
               ((uVar11 | uVar17) & uVar19 | uVar11 & uVar17);
      uVar22 = uVar11 >> 2 | uVar11 * 0x40000000;
      uVar9 = uVar20 ^ uVar27 ^ uVar14 ^ uVar13;
      uVar21 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      uVar9 = uVar3 >> 2 | uVar3 * 0x40000000;
      uVar10 = uVar25 ^ uVar28 ^ uVar4 ^ uVar6;
      uVar20 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      uVar11 = (uVar26 * 0x20 | uVar26 >> 0x1b) +
               (uVar3 & uVar22 | (uVar3 | uVar22) & uVar17) + uVar21 + 0x8f1bbcdc + uVar19;
      uVar19 = uVar26 >> 2 | uVar26 * 0x40000000;
      uVar25 = uVar20 + 0x8f1bbcdc + uVar17 + (uVar11 * 0x20 | uVar11 >> 0x1b) +
               ((uVar26 | uVar9) & uVar22 | uVar26 & uVar9);
      uVar3 = uVar27 ^ uVar24 ^ uVar12 ^ uVar8;
      uVar17 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      uVar3 = uVar28 ^ uVar23 ^ uVar7 ^ uVar21;
      uVar29 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      uVar10 = (uVar25 * 0x20 | uVar25 >> 0x1b) +
               (uVar11 & uVar19 | (uVar11 | uVar19) & uVar9) + uVar17 + 0x8f1bbcdc + uVar22;
      uVar22 = uVar11 >> 2 | uVar11 * 0x40000000;
      uVar11 = uVar25 >> 2 | uVar25 * 0x40000000;
      uVar3 = uVar29 + 0x8f1bbcdc + uVar9 + (uVar10 * 0x20 | uVar10 >> 0x1b) +
              ((uVar25 | uVar22) & uVar19 | uVar25 & uVar22);
      uVar9 = uVar24 ^ uVar16 ^ uVar18 ^ uVar20;
      uVar25 = uVar10 >> 2 | uVar10 * 0x40000000;
      uVar28 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      uVar10 = (uVar3 * 0x20 | uVar3 >> 0x1b) +
               (uVar10 & uVar11 | (uVar10 | uVar11) & uVar22) + uVar28 + 0x8f1bbcdc + uVar19;
      uVar9 = uVar15 ^ uVar23 ^ uVar13 ^ uVar17;
      uVar23 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      uVar9 = uVar3 >> 2 | uVar3 * 0x40000000;
      uVar3 = ((uVar3 | uVar25) & uVar11 | uVar3 & uVar25) +
              uVar23 + 0x8f1bbcdc + uVar22 + (uVar10 * 0x20 | uVar10 >> 0x1b);
      uVar22 = uVar14 ^ uVar16 ^ uVar6 ^ uVar29;
      uVar16 = uVar22 << 1 | (uint)((int)uVar22 < 0);
      uVar22 = uVar10 >> 2 | uVar10 * 0x40000000;
      uVar15 = uVar15 ^ uVar4 ^ uVar8 ^ uVar28;
      uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
      uVar11 = (uVar3 * 0x20 | uVar3 >> 0x1b) +
               (uVar10 & uVar9 | (uVar10 | uVar9) & uVar25) + uVar16 + 0x8f1bbcdc + uVar11;
      uVar26 = uVar3 >> 2 | uVar3 * 0x40000000;
      uVar3 = ((uVar3 | uVar22) & uVar9 | uVar3 & uVar22) +
              uVar15 + 0x8f1bbcdc + uVar25 + (uVar11 * 0x20 | uVar11 >> 0x1b);
      uVar10 = uVar21 ^ uVar14 ^ uVar12 ^ uVar23;
      uVar25 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      uVar24 = uVar11 >> 2 | uVar11 * 0x40000000;
      uVar11 = (uVar3 * 0x20 | uVar3 >> 0x1b) +
               (uVar11 & uVar26 | (uVar11 | uVar26) & uVar22) + uVar25 + 0x8f1bbcdc + uVar9;
      uVar4 = uVar4 ^ uVar7 ^ uVar20 ^ uVar16;
      uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar14 = uVar3 >> 2 | uVar3 * 0x40000000;
      uVar3 = uVar4 + 0x8f1bbcdc + uVar22 + (uVar11 * 0x20 | uVar11 >> 0x1b) +
              ((uVar3 | uVar24) & uVar26 | uVar3 & uVar24);
      uVar9 = uVar12 ^ uVar18 ^ uVar17 ^ uVar15;
      uVar10 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      uVar19 = uVar11 >> 2 | uVar11 * 0x40000000;
      uVar11 = (uVar3 * 0x20 | uVar3 >> 0x1b) +
               (uVar11 & uVar14 | (uVar11 | uVar14) & uVar24) + uVar10 + 0x8f1bbcdc + uVar26;
      uVar9 = uVar18 ^ uVar6 ^ uVar28 ^ uVar4;
      uVar18 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      uVar9 = uVar7 ^ uVar13 ^ uVar29 ^ uVar25;
      uVar7 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      uVar9 = uVar3 >> 2 | uVar3 * 0x40000000;
      uVar3 = ((uVar3 | uVar19) & uVar14 | uVar3 & uVar19) +
              uVar7 + 0x8f1bbcdc + uVar24 + (uVar11 * 0x20 | uVar11 >> 0x1b);
      uVar12 = uVar13 ^ uVar8 ^ uVar23 ^ uVar10;
      uVar22 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      uVar26 = uVar11 >> 2 | uVar11 * 0x40000000;
      uVar14 = (uVar3 * 0x20 | uVar3 >> 0x1b) +
               (uVar11 & uVar9 | (uVar11 | uVar9) & uVar19) + uVar18 + 0x8f1bbcdc + uVar14;
      uVar12 = uVar8 ^ uVar20 ^ uVar15 ^ uVar18;
      uVar24 = uVar3 >> 2 | uVar3 * 0x40000000;
      uVar27 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      uVar3 = ((uVar3 | uVar26) & uVar9 | uVar3 & uVar26) +
              uVar22 + 0x8f1bbcdc + uVar19 + (uVar14 * 0x20 | uVar14 >> 0x1b);
      uVar12 = uVar6 ^ uVar21 ^ uVar16 ^ uVar7;
      uVar13 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      uVar12 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar9 = (uVar3 * 0x20 | uVar3 >> 0x1b) +
              (uVar14 & uVar24 | (uVar14 | uVar24) & uVar26) + uVar13 + 0x8f1bbcdc + uVar9;
      uVar14 = uVar3 >> 2 | uVar3 * 0x40000000;
      uVar11 = (uVar9 * 0x20 | uVar9 >> 0x1b) +
               (uVar24 ^ uVar12 ^ uVar3) + uVar27 + 0xca62c1d6 + uVar26;
      uVar3 = uVar21 ^ uVar17 ^ uVar25 ^ uVar22;
      uVar8 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      uVar26 = uVar9 >> 2 | uVar9 * 0x40000000;
      uVar3 = uVar20 ^ uVar29 ^ uVar4 ^ uVar13;
      uVar6 = (uVar11 * 0x20 | uVar11 >> 0x1b) +
              uVar8 + 0xca62c1d6 + uVar24 + (uVar12 ^ uVar14 ^ uVar9);
      uVar20 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      uVar19 = uVar11 >> 2 | uVar11 * 0x40000000;
      uVar9 = (uVar6 * 0x20 | uVar6 >> 0x1b) +
              (uVar14 ^ uVar26 ^ uVar11) + uVar20 + 0xca62c1d6 + uVar12;
      uVar3 = uVar17 ^ uVar28 ^ uVar10 ^ uVar27;
      uVar12 = uVar29 ^ uVar23 ^ uVar7 ^ uVar8;
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
      x[0] = uVar12 << 1 | (uint)((int)uVar12 < 0);
      uVar14 = (uVar9 * 0x20 | uVar9 >> 0x1b) +
               (uVar26 ^ uVar19 ^ uVar6) + uVar3 + 0xca62c1d6 + uVar14;
      uVar6 = uVar9 >> 2 | uVar9 * 0x40000000;
      uVar12 = uVar28 ^ uVar16 ^ uVar18 ^ uVar20;
      x[1] = uVar12 << 1 | (uint)((int)uVar12 < 0);
      uVar9 = (uVar14 * 0x20 | uVar14 >> 0x1b) +
              x[0] + 0xca62c1d6 + uVar26 + (uVar19 ^ uVar11 ^ uVar9);
      uVar17 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar12 = uVar9 >> 2 | uVar9 * 0x40000000;
      uVar14 = (uVar11 ^ uVar6 ^ uVar14) + x[1] + 0xca62c1d6 + uVar19 +
               (uVar9 * 0x20 | uVar9 >> 0x1b);
      uVar19 = uVar23 ^ uVar15 ^ uVar22 ^ uVar3;
      x[2] = uVar19 << 1 | (uint)((int)uVar19 < 0);
      uVar11 = (uVar14 * 0x20 | uVar14 >> 0x1b) +
               x[2] + 0xca62c1d6 + uVar11 + (uVar6 ^ uVar17 ^ uVar9);
      uVar9 = uVar16 ^ uVar25 ^ uVar13 ^ x[0];
      x[3] = uVar9 << 1 | (uint)((int)uVar9 < 0);
      uVar16 = (uVar11 * 0x20 | uVar11 >> 0x1b) +
               x[3] + 0xca62c1d6 + uVar6 + (uVar17 ^ uVar12 ^ uVar14);
      uVar9 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar14 = uVar15 ^ uVar4 ^ uVar27 ^ x[1];
      x[4] = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar6 = uVar11 >> 2 | uVar11 * 0x40000000;
      uVar11 = (uVar16 * 0x20 | uVar16 >> 0x1b) +
               x[4] + 0xca62c1d6 + uVar17 + (uVar12 ^ uVar9 ^ uVar11);
      uVar17 = uVar16 >> 2 | uVar16 * 0x40000000;
      uVar14 = uVar8 ^ uVar25 ^ uVar10 ^ x[2];
      x[5] = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar25 = uVar11 >> 2 | uVar11 * 0x40000000;
      uVar14 = (uVar11 * 0x20 | uVar11 >> 0x1b) +
               x[5] + 0xca62c1d6 + uVar12 + (uVar9 ^ uVar6 ^ uVar16);
      uVar4 = uVar4 ^ uVar7 ^ uVar20 ^ x[3];
      x[6] = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar12 = (uVar14 * 0x20 | uVar14 >> 0x1b) +
               x[6] + 0xca62c1d6 + uVar9 + (uVar6 ^ uVar17 ^ uVar11);
      uVar4 = uVar18 ^ uVar10 ^ uVar3 ^ x[4];
      x[7] = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar4 = x[0] ^ uVar7 ^ uVar22 ^ x[5];
      uVar7 = uVar14 >> 2 | uVar14 * 0x40000000;
      x[8] = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar9 = (uVar12 * 0x20 | uVar12 >> 0x1b) +
              x[7] + 0xca62c1d6 + uVar6 + (uVar17 ^ uVar25 ^ uVar14);
      uVar14 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar10 = uVar9 >> 2 | uVar9 * 0x40000000;
      uVar12 = (uVar25 ^ uVar7 ^ uVar12) + x[8] + 0xca62c1d6 + uVar17 +
               (uVar9 * 0x20 | uVar9 >> 0x1b);
      uVar4 = uVar18 ^ uVar13 ^ x[1] ^ x[6];
      x[9] = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar9 = (uVar7 ^ uVar14 ^ uVar9) + x[9] + 0xca62c1d6 + uVar25 +
              (uVar12 * 0x20 | uVar12 >> 0x1b);
      uVar4 = x[2] ^ uVar22 ^ uVar27 ^ x[7];
      x[10] = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar17 = x[10] + 0xca62c1d6 + uVar7 + (uVar14 ^ uVar10 ^ uVar12) +
               (uVar9 * 0x20 | uVar9 >> 0x1b);
      uVar22 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar4 = x[8] ^ x[3] ^ uVar13 ^ uVar8;
      x[11] = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar12 = uVar9 >> 2 | uVar9 * 0x40000000;
      uVar7 = x[9] ^ x[4] ^ uVar27 ^ uVar20;
      uVar4 = (uVar10 ^ uVar22 ^ uVar9) + x[11] + 0xca62c1d6 + uVar14 +
              (uVar17 * 0x20 | uVar17 >> 0x1b);
      x[12] = uVar7 << 1 | (uint)((int)uVar7 < 0);
      uVar14 = uVar17 >> 2 | uVar17 * 0x40000000;
      uVar10 = (uVar22 ^ uVar12 ^ uVar17) + x[12] + 0xca62c1d6 + uVar10 +
               (uVar4 * 0x20 | uVar4 >> 0x1b);
      uVar9 = x[10] ^ x[5] ^ uVar8 ^ uVar3;
      x[13] = uVar9 << 1 | (uint)((int)uVar9 < 0);
      uVar7 = uVar4 >> 2 | uVar4 * 0x40000000;
      uVar9 = (uVar12 ^ uVar14 ^ uVar4) + x[13] + 0xca62c1d6 + uVar22 +
              (uVar10 * 0x20 | uVar10 >> 0x1b);
      uVar4 = x[11] ^ x[6] ^ uVar20 ^ x[0];
      x[14] = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar13 = uVar10 >> 2 | uVar10 * 0x40000000;
      uVar4 = (uVar14 ^ uVar7 ^ uVar10) + x[14] + 0xca62c1d6 + uVar12 +
              (uVar9 * 0x20 | uVar9 >> 0x1b);
      local_e4 = local_e4 + uVar4;
      uVar3 = x[7] ^ x[1] ^ uVar3 ^ x[12];
      x[15] = uVar3 << 1 | (uint)((int)uVar3 < 0);
      local_e0 = local_e0 + (uVar9 >> 2 | uVar9 * 0x40000000);
      local_bc = uVar14 + x[15] + 0xca62c1d6 + local_bc + (uVar7 ^ uVar13 ^ uVar9) +
                 (uVar4 * 0x20 | uVar4 >> 0x1b);
      ctx->A = local_bc;
      ctx->B = local_e4;
      ctx->C = local_e0;
      local_dc = local_dc + uVar13;
      local_b8 = local_b8 + uVar7;
      ctx->D = local_dc;
      ctx->E = local_b8;
    } while (buffer < pvVar2);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

