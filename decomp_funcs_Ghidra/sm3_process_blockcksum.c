
void sm3_process_block(void *buffer,size_t len,sm3_ctx *ctx)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
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
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  long in_FS_OFFSET;
  uint32_t local_c8;
  uint32_t local_c4;
  uint32_t local_c0;
  uint32_t local_bc;
  uint32_t local_b8;
  uint32_t local_b4;
  uint32_t local_b0;
  uint32_t local_ac;
  void *local_a8;
  uint32_t x [16];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pvVar2 = (void *)((len & 0xfffffffffffffffc) + (long)buffer);
  local_c8 = ctx->state[0];
  local_c4 = ctx->state[1];
  local_c0 = ctx->state[2];
  local_b4 = ctx->state[3];
  local_b0 = ctx->state[4];
  local_bc = ctx->state[5];
  local_b8 = ctx->state[6];
  local_ac = ctx->state[7];
  uVar5 = ctx->total[0];
  ctx->total[0] = (uint)len + ctx->total[0];
  ctx->total[1] = ctx->total[1] + (int)(len >> 0x20) + (uint)CARRY4((uint)len,uVar5);
  local_a8 = buffer;
  if (buffer < pvVar2) {
    do {
      lVar3 = 0;
      do {
        uVar5 = *(uint *)((long)local_a8 + lVar3);
        *(uint *)((long)x + lVar3) =
             uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        lVar3 = lVar3 + 4;
      } while (lVar3 != 0x40);
      uVar14 = local_c8 << 0xc | local_c8 >> 0x14;
      uVar5 = uVar14 + 0x79cc4519 + local_b0;
      uVar7 = local_c4 << 9 | local_c4 >> 0x17;
      local_a8 = (void *)((long)local_a8 + 0x40);
      uVar4 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar9 = local_bc >> 0xd | local_bc << 0x13;
      uVar15 = (uVar14 ^ uVar4) + local_b4 + (x[4] ^ x[0]) + (local_c8 ^ local_c4 ^ local_c0);
      uVar10 = uVar15 * 0x1000 | uVar15 >> 0x14;
      uVar4 = local_ac + x[0] + (local_b0 ^ local_bc ^ local_b8) + uVar4;
      uVar4 = uVar4 ^ (uVar4 * 0x200 | uVar4 >> 0x17) ^ (uVar4 >> 0xf | uVar4 * 0x20000);
      uVar5 = uVar10 + 0xf3988a32 + uVar4;
      uVar14 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar11 = (uVar10 ^ uVar14) + (x[5] ^ x[1]) + local_c0 + (local_c8 ^ uVar7 ^ uVar15);
      uVar24 = local_c8 << 9 | local_c8 >> 0x17;
      uVar21 = local_b0 >> 0xd | local_b0 << 0x13;
      uVar14 = x[1] + local_b8 + (local_b0 ^ uVar9 ^ uVar4) + uVar14;
      uVar16 = uVar15 * 0x200 | uVar15 >> 0x17;
      uVar14 = uVar14 ^ (uVar14 * 0x200 | uVar14 >> 0x17) ^ (uVar14 >> 0xf | uVar14 * 0x20000);
      uVar8 = uVar11 * 0x1000 | uVar11 >> 0x14;
      uVar5 = uVar8 + 0xe7311465 + uVar14;
      uVar6 = uVar4 >> 0xd | uVar4 << 0x13;
      uVar10 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar7 = (uVar8 ^ uVar10) + (x[6] ^ x[2]) + uVar7 + (uVar15 ^ uVar24 ^ uVar11);
      uVar10 = uVar10 + uVar9 + x[2] + (uVar4 ^ uVar21 ^ uVar14);
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar4 = uVar7 * 0x1000 | uVar7 >> 0x14;
      uVar5 = uVar4 + 0xce6228cb + uVar10;
      uVar15 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar12 = uVar11 * 0x200 | uVar11 >> 0x17;
      uVar8 = (uVar4 ^ uVar15) + (x[3] ^ x[7]) + uVar24 + (uVar11 ^ uVar16 ^ uVar7);
      uVar4 = uVar14 >> 0xd | uVar14 << 0x13;
      uVar15 = uVar15 + uVar21 + x[3] + (uVar14 ^ uVar6 ^ uVar10);
      uVar11 = uVar7 * 0x200 | uVar7 >> 0x17;
      uVar15 = uVar15 ^ (uVar15 * 0x200 | uVar15 >> 0x17) ^ (uVar15 >> 0xf | uVar15 * 0x20000);
      uVar14 = uVar8 * 0x1000 | uVar8 >> 0x14;
      uVar5 = uVar14 + 0x9cc45197 + uVar15;
      uVar21 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar24 = (uVar14 ^ uVar21) + uVar16 + (x[4] ^ x[8]) + (uVar7 ^ uVar12 ^ uVar8);
      uVar7 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar21 = uVar21 + uVar6 + x[4] + (uVar10 ^ uVar4 ^ uVar15);
      uVar21 = uVar21 ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ (uVar21 >> 0xf | uVar21 * 0x20000);
      uVar9 = uVar8 * 0x200 | uVar8 >> 0x17;
      uVar14 = uVar24 * 0x1000 | uVar24 >> 0x14;
      uVar5 = uVar14 + 0x3988a32f + uVar21;
      uVar6 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar16 = (uVar14 ^ uVar6) + uVar12 + (x[5] ^ x[9]) + (uVar8 ^ uVar11 ^ uVar24);
      uVar12 = uVar15 >> 0xd | uVar15 << 0x13;
      uVar6 = uVar6 + uVar4 + x[5] + (uVar15 ^ uVar7 ^ uVar21);
      uVar6 = uVar6 ^ (uVar6 * 0x200 | uVar6 >> 0x17) ^ (uVar6 >> 0xf | uVar6 * 0x20000);
      uVar4 = uVar16 * 0x1000 | uVar16 >> 0x14;
      uVar5 = uVar4 + 0x7311465e + uVar6;
      uVar14 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar11 = (uVar4 ^ uVar14) + uVar11 + (x[6] ^ x[10]) + (uVar24 ^ uVar9 ^ uVar16);
      uVar24 = uVar24 * 0x200 | uVar24 >> 0x17;
      uVar15 = uVar21 >> 0xd | uVar21 << 0x13;
      uVar17 = uVar16 * 0x200 | uVar16 >> 0x17;
      uVar14 = uVar14 + uVar7 + x[6] + (uVar21 ^ uVar12 ^ uVar6);
      uVar8 = uVar6 >> 0xd | uVar6 << 0x13;
      uVar14 = uVar14 ^ (uVar14 * 0x200 | uVar14 >> 0x17) ^ (uVar14 >> 0xf | uVar14 * 0x20000);
      uVar4 = uVar11 * 0x1000 | uVar11 >> 0x14;
      uVar5 = uVar4 + 0xe6228cbc + uVar14;
      uVar10 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar7 = (uVar4 ^ uVar10) + uVar9 + (x[7] ^ x[11]) + (uVar16 ^ uVar24 ^ uVar11);
      uVar10 = uVar10 + uVar12 + x[7] + (uVar6 ^ uVar15 ^ uVar14);
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar4 = uVar7 * 0x1000 | uVar7 >> 0x14;
      uVar5 = uVar4 + 0xcc451979 + uVar10;
      uVar16 = uVar11 * 0x200 | uVar11 >> 0x17;
      uVar21 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar11 = (uVar4 ^ uVar21) + uVar24 + (x[8] ^ x[12]) + (uVar11 ^ uVar17 ^ uVar7);
      uVar4 = uVar14 >> 0xd | uVar14 << 0x13;
      uVar21 = uVar21 + uVar15 + x[8] + (uVar14 ^ uVar8 ^ uVar10);
      uVar21 = uVar21 ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ (uVar21 >> 0xf | uVar21 * 0x20000);
      uVar14 = uVar11 * 0x1000 | uVar11 >> 0x14;
      uVar5 = uVar14 + 0x988a32f3 + uVar21;
      uVar24 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar9 = (uVar14 ^ uVar24) + uVar17 + (x[9] ^ x[13]) + (uVar7 ^ uVar16 ^ uVar11);
      uVar12 = uVar7 * 0x200 | uVar7 >> 0x17;
      uVar7 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar24 = uVar24 + uVar8 + x[9] + (uVar10 ^ uVar4 ^ uVar21);
      uVar15 = uVar11 * 0x200 | uVar11 >> 0x17;
      uVar24 = uVar24 ^ (uVar24 * 0x200 | uVar24 >> 0x17) ^ (uVar24 >> 0xf | uVar24 * 0x20000);
      uVar14 = uVar9 * 0x1000 | uVar9 >> 0x14;
      uVar5 = uVar14 + 0x311465e7 + uVar24;
      uVar6 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar17 = (uVar14 ^ uVar6) + uVar16 + (x[10] ^ x[14]) + (uVar11 ^ uVar12 ^ uVar9);
      uVar16 = uVar21 >> 0xd | uVar21 << 0x13;
      uVar6 = uVar6 + uVar4 + x[10] + (uVar21 ^ uVar7 ^ uVar24);
      uVar6 = uVar6 ^ (uVar6 * 0x200 | uVar6 >> 0x17) ^ (uVar6 >> 0xf | uVar6 * 0x20000);
      uVar4 = uVar17 * 0x1000 | uVar17 >> 0x14;
      uVar5 = uVar4 + 0x6228cbce + uVar6;
      uVar14 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar8 = uVar9 * 0x200 | uVar9 >> 0x17;
      uVar21 = (uVar4 ^ uVar14) + uVar12 + (x[11] ^ x[15]) + (uVar9 ^ uVar15 ^ uVar17);
      uVar12 = uVar24 >> 0xd | uVar24 << 0x13;
      uVar14 = uVar14 + uVar7 + x[11] + (uVar24 ^ uVar16 ^ uVar6);
      uVar14 = uVar14 ^ (uVar14 * 0x200 | uVar14 >> 0x17) ^ (uVar14 >> 0xf | uVar14 * 0x20000);
      uVar4 = uVar21 * 0x1000 | uVar21 >> 0x14;
      uVar5 = uVar4 + 0xc451979c + uVar14;
      uVar10 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar5 = x[7] ^ x[0] ^ (x[13] << 0xf | x[13] >> 0x11);
      uVar11 = (x[3] << 7 | x[3] >> 0x19) ^ x[10] ^ uVar5 ^ (uVar5 << 0xf | uVar5 >> 0x11) ^
               (uVar5 >> 9 | uVar5 << 0x17);
      uVar22 = (uVar4 ^ uVar10) + uVar15 + (x[12] ^ uVar11) + (uVar17 ^ uVar8 ^ uVar21);
      uVar7 = uVar6 >> 0xd | uVar6 << 0x13;
      uVar24 = uVar17 * 0x200 | uVar17 >> 0x17;
      uVar10 = (uVar6 ^ uVar12 ^ uVar14) + uVar16 + x[12] + uVar10;
      uVar4 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar5 = uVar4 + 0x88a32f39 + uVar10;
      uVar9 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar5 = x[1] ^ x[8] ^ (x[14] << 0xf | x[14] >> 0x11);
      uVar33 = (uVar5 << 0xf | uVar5 >> 0x11) ^ (x[4] << 7 | x[4] >> 0x19) ^ x[11] ^ uVar5 ^
               (uVar5 >> 9 | uVar5 << 0x17);
      uVar17 = (uVar4 ^ uVar9) + uVar8 + (x[13] ^ uVar33) + (uVar21 ^ uVar24 ^ uVar22);
      uVar4 = uVar14 >> 0xd | uVar14 << 0x13;
      uVar21 = uVar21 * 0x200 | uVar21 >> 0x17;
      uVar9 = (uVar14 ^ uVar7 ^ uVar10) + uVar12 + x[13] + uVar9;
      uVar14 = uVar17 * 0x1000 | uVar17 >> 0x14;
      uVar9 = uVar9 ^ (uVar9 * 0x200 | uVar9 >> 0x17) ^ (uVar9 >> 0xf | uVar9 * 0x20000);
      uVar5 = uVar14 + 0x11465e73 + uVar9;
      uVar15 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar5 = x[9] ^ x[2] ^ (x[15] << 0xf | x[15] >> 0x11);
      uVar32 = x[12] ^ (x[5] << 7 | x[5] >> 0x19) ^ uVar5 ^ (uVar5 << 0xf | uVar5 >> 0x11) ^
               (uVar5 >> 9 | uVar5 << 0x17);
      uVar8 = (uVar14 ^ uVar15) + uVar24 + (x[14] ^ uVar32) + (uVar22 ^ uVar21 ^ uVar17);
      uVar14 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar16 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar15 = (uVar10 ^ uVar4 ^ uVar9) + uVar7 + x[14] + uVar15;
      uVar15 = uVar15 ^ (uVar15 * 0x200 | uVar15 >> 0x17) ^ (uVar15 >> 0xf | uVar15 * 0x20000);
      uVar10 = uVar8 * 0x1000 | uVar8 >> 0x14;
      uVar5 = uVar10 + 0x228cbce6 + uVar15;
      uVar7 = x[3] ^ x[10] ^ (uVar11 << 0xf | uVar11 >> 0x11);
      uVar6 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar18 = (x[6] << 7 | x[6] >> 0x19) ^ x[13] ^ uVar7 ^ (uVar7 << 0xf | uVar7 >> 0x11) ^
               (uVar7 >> 9 | uVar7 << 0x17);
      uVar10 = (uVar10 ^ uVar6) + uVar21 + (uVar18 ^ x[15]) + (uVar17 ^ uVar16 ^ uVar8);
      uVar12 = uVar17 * 0x200 | uVar17 >> 0x17;
      uVar6 = (uVar9 ^ uVar14 ^ uVar15) + uVar4 + x[15] + uVar6;
      uVar9 = uVar9 >> 0xd | uVar9 << 0x13;
      uVar6 = uVar6 ^ (uVar6 * 0x200 | uVar6 >> 0x17) ^ (uVar6 >> 0xf | uVar6 * 0x20000);
      uVar7 = uVar10 * 0x1000 | uVar10 >> 0x14;
      uVar4 = x[4] ^ x[11] ^ (uVar33 << 0xf | uVar33 >> 0x11);
      uVar5 = uVar7 + 0x9d8a7a87 + uVar6;
      uVar5 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar25 = x[14] ^ (x[7] << 7 | x[7] >> 0x19) ^ uVar4 ^ (uVar4 << 0xf | uVar4 >> 0x11) ^
               (uVar4 >> 9 | uVar4 << 0x17);
      uVar16 = (uVar7 ^ uVar5) +
               uVar16 + (uVar25 ^ uVar11) + (uVar8 & uVar12 | (uVar8 | uVar12) & uVar10);
      uVar7 = uVar8 * 0x200 | uVar8 >> 0x17;
      uVar4 = ((uVar15 ^ uVar9) & uVar6 ^ uVar9) + uVar5 + uVar14 + uVar11;
      uVar15 = uVar15 >> 0xd | uVar15 << 0x13;
      uVar4 = uVar4 ^ (uVar4 * 0x200 | uVar4 >> 0x17) ^ (uVar4 >> 0xf | uVar4 * 0x20000);
      uVar8 = uVar16 * 0x1000 | uVar16 >> 0x14;
      uVar14 = x[5] ^ x[12] ^ (uVar32 << 0xf | uVar32 >> 0x11);
      uVar5 = uVar8 + 0x3b14f50f + uVar4;
      uVar5 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar26 = x[15] ^ (x[8] << 7 | x[8] >> 0x19) ^ uVar14 ^ (uVar14 << 0xf | uVar14 >> 0x11) ^
               (uVar14 >> 9 | uVar14 << 0x17);
      uVar12 = (uVar8 ^ uVar5) +
               uVar12 + (uVar26 ^ uVar33) + (uVar10 & uVar7 | (uVar10 | uVar7) & uVar16);
      uVar10 = uVar10 * 0x200 | uVar10 >> 0x17;
      uVar24 = uVar6 >> 0xd | uVar6 << 0x13;
      uVar14 = ((uVar6 ^ uVar15) & uVar4 ^ uVar15) + uVar9 + uVar33 + uVar5;
      uVar14 = uVar14 ^ (uVar14 * 0x200 | uVar14 >> 0x17) ^ (uVar14 >> 0xf | uVar14 * 0x20000);
      uVar6 = uVar12 * 0x1000 | uVar12 >> 0x14;
      uVar5 = uVar6 + 0x7629ea1e + uVar14;
      uVar17 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar5 = x[6] ^ x[13] ^ (uVar18 << 0xf | uVar18 >> 0x11);
      uVar21 = (uVar5 >> 9 | uVar5 << 0x17) ^
               (x[9] << 7 | x[9] >> 0x19) ^ uVar11 ^ uVar5 ^ (uVar5 << 0xf | uVar5 >> 0x11);
      uVar8 = (uVar6 ^ uVar17) +
              uVar7 + (uVar21 ^ uVar32) + (uVar16 & uVar10 | (uVar16 | uVar10) & uVar12);
      uVar9 = uVar16 * 0x200 | uVar16 >> 0x17;
      uVar7 = uVar4 >> 0xd | uVar4 << 0x13;
      uVar4 = ((uVar4 ^ uVar24) & uVar14 ^ uVar24) + uVar17 + uVar32 + uVar15;
      uVar4 = uVar4 ^ (uVar4 * 0x200 | uVar4 >> 0x17) ^ (uVar4 >> 0xf | uVar4 * 0x20000);
      uVar15 = uVar8 * 0x1000 | uVar8 >> 0x14;
      uVar5 = uVar15 + 0xec53d43c + uVar4;
      uVar6 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar5 = x[7] ^ x[14] ^ (uVar25 << 0xf | uVar25 >> 0x11);
      uVar16 = (uVar5 >> 9 | uVar5 << 0x17) ^
               (x[10] << 7 | x[10] >> 0x19) ^ uVar33 ^ uVar5 ^ (uVar5 << 0xf | uVar5 >> 0x11);
      uVar22 = (uVar15 ^ uVar6) +
               uVar10 + (uVar16 ^ uVar18) + (uVar12 & uVar9 | (uVar12 | uVar9) & uVar8);
      uVar23 = uVar12 * 0x200 | uVar12 >> 0x17;
      uVar6 = ((uVar14 ^ uVar7) & uVar4 ^ uVar7) + uVar6 + uVar18 + uVar24;
      uVar15 = uVar14 >> 0xd | uVar14 << 0x13;
      uVar6 = uVar6 ^ (uVar6 * 0x200 | uVar6 >> 0x17) ^ (uVar6 >> 0xf | uVar6 * 0x20000);
      uVar14 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar5 = uVar14 + 0xd8a7a879 + uVar6;
      uVar17 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar5 = x[8] ^ x[15] ^ (uVar26 << 0xf | uVar26 >> 0x11);
      uVar24 = (uVar5 >> 9 | uVar5 << 0x17) ^
               (x[11] << 7 | x[11] >> 0x19) ^ uVar32 ^ uVar5 ^ (uVar5 << 0xf | uVar5 >> 0x11);
      uVar12 = (uVar14 ^ uVar17) +
               uVar9 + (uVar24 ^ uVar25) + (uVar8 & uVar23 | (uVar8 | uVar23) & uVar22);
      uVar10 = uVar4 >> 0xd | uVar4 << 0x13;
      uVar8 = uVar8 * 0x200 | uVar8 >> 0x17;
      uVar14 = ((uVar4 ^ uVar15) & uVar6 ^ uVar15) + uVar17 + uVar25 + uVar7;
      uVar14 = uVar14 ^ (uVar14 * 0x200 | uVar14 >> 0x17) ^ (uVar14 >> 0xf | uVar14 * 0x20000);
      uVar4 = uVar12 * 0x1000 | uVar12 >> 0x14;
      uVar5 = uVar4 + 0xb14f50f3 + uVar14;
      uVar28 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar5 = x[9] ^ uVar11 ^ (uVar21 << 0xf | uVar21 >> 0x11);
      uVar17 = (uVar5 >> 9 | uVar5 << 0x17) ^
               (x[12] << 7 | x[12] >> 0x19) ^ uVar18 ^ uVar5 ^ (uVar5 << 0xf | uVar5 >> 0x11);
      uVar9 = (uVar4 ^ uVar28) +
              uVar23 + (uVar17 ^ uVar26) + (uVar22 & uVar8 | (uVar22 | uVar8) & uVar12);
      uVar19 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar7 = uVar6 >> 0xd | uVar6 << 0x13;
      uVar4 = ((uVar6 ^ uVar10) & uVar14 ^ uVar10) + uVar28 + uVar26 + uVar15;
      uVar4 = uVar4 ^ (uVar4 * 0x200 | uVar4 >> 0x17) ^ (uVar4 >> 0xf | uVar4 * 0x20000);
      uVar6 = uVar9 * 0x1000 | uVar9 >> 0x14;
      uVar5 = uVar6 + 0x629ea1e7 + uVar4;
      uVar23 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar5 = x[10] ^ uVar33 ^ (uVar16 << 0xf | uVar16 >> 0x11);
      uVar22 = (uVar5 >> 9 | uVar5 << 0x17) ^
               (x[13] << 7 | x[13] >> 0x19) ^ uVar25 ^ uVar5 ^ (uVar5 << 0xf | uVar5 >> 0x11);
      uVar28 = (uVar6 ^ uVar23) +
               uVar8 + (uVar22 ^ uVar21) + (uVar12 & uVar19 | (uVar12 | uVar19) & uVar9);
      uVar15 = uVar12 * 0x200 | uVar12 >> 0x17;
      uVar12 = uVar14 >> 0xd | uVar14 << 0x13;
      uVar6 = ((uVar14 ^ uVar7) & uVar4 ^ uVar7) + uVar23 + uVar21 + uVar10;
      uVar6 = uVar6 ^ (uVar6 * 0x200 | uVar6 >> 0x17) ^ (uVar6 >> 0xf | uVar6 * 0x20000);
      uVar14 = uVar28 * 0x1000 | uVar28 >> 0x14;
      uVar5 = uVar14 + 0xc53d43ce + uVar6;
      uVar29 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar5 = uVar32 ^ x[11] ^ (uVar24 << 0xf | uVar24 >> 0x11);
      uVar23 = (uVar5 >> 9 | uVar5 << 0x17) ^
               (x[14] << 7 | x[14] >> 0x19) ^ uVar26 ^ uVar5 ^ (uVar5 << 0xf | uVar5 >> 0x11);
      uVar10 = uVar4 >> 0xd | uVar4 << 0x13;
      uVar13 = (uVar14 ^ uVar29) +
               uVar19 + (uVar23 ^ uVar16) + (uVar9 & uVar15 | (uVar9 | uVar15) & uVar28);
      uVar8 = uVar9 * 0x200 | uVar9 >> 0x17;
      uVar14 = ((uVar4 ^ uVar12) & uVar6 ^ uVar12) + uVar29 + uVar16 + uVar7;
      uVar4 = uVar13 * 0x1000 | uVar13 >> 0x14;
      uVar14 = uVar14 ^ (uVar14 * 0x200 | uVar14 >> 0x17) ^ (uVar14 >> 0xf | uVar14 * 0x20000);
      uVar5 = uVar4 + 0x8a7a879d + uVar14;
      uVar7 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar5 = uVar18 ^ x[12] ^ (uVar17 << 0xf | uVar17 >> 0x11);
      uVar19 = (uVar5 >> 9 | uVar5 << 0x17) ^
               (x[15] << 7 | x[15] >> 0x19) ^ uVar21 ^ uVar5 ^ (uVar5 << 0xf | uVar5 >> 0x11);
      uVar29 = uVar28 * 0x200 | uVar28 >> 0x17;
      uVar9 = (uVar4 ^ uVar7) +
              uVar15 + (uVar19 ^ uVar24) + (uVar28 & uVar8 | (uVar28 | uVar8) & uVar13);
      uVar20 = uVar6 >> 0xd | uVar6 << 0x13;
      uVar4 = ((uVar6 ^ uVar10) & uVar14 ^ uVar10) + uVar7 + uVar24 + uVar12;
      uVar4 = uVar4 ^ (uVar4 * 0x200 | uVar4 >> 0x17) ^ (uVar4 >> 0xf | uVar4 * 0x20000);
      uVar7 = uVar9 * 0x1000 | uVar9 >> 0x14;
      uVar5 = uVar7 + 0x14f50f3b + uVar4;
      uVar15 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar5 = uVar25 ^ x[13] ^ (uVar22 << 0xf | uVar22 >> 0x11);
      uVar28 = (uVar5 >> 9 | uVar5 << 0x17) ^
               (uVar11 << 7 | uVar11 >> 0x19) ^ uVar16 ^ uVar5 ^ (uVar5 << 0xf | uVar5 >> 0x11);
      uVar6 = uVar13 * 0x200 | uVar13 >> 0x17;
      uVar12 = (uVar7 ^ uVar15) +
               uVar8 + (uVar28 ^ uVar17) + (uVar13 & uVar29 | (uVar13 | uVar29) & uVar9);
      uVar8 = uVar14 >> 0xd | uVar14 << 0x13;
      uVar7 = ((uVar14 ^ uVar20) & uVar4 ^ uVar20) + uVar15 + uVar17 + uVar10;
      uVar7 = uVar7 ^ (uVar7 * 0x200 | uVar7 >> 0x17) ^ (uVar7 >> 0xf | uVar7 * 0x20000);
      uVar14 = uVar12 * 0x1000 | uVar12 >> 0x14;
      uVar5 = uVar14 + 0x29ea1e76 + uVar7;
      uVar30 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar5 = uVar26 ^ x[14] ^ (uVar23 << 0xf | uVar23 >> 0x11);
      uVar13 = (uVar5 >> 9 | uVar5 << 0x17) ^
               (uVar33 << 7 | uVar33 >> 0x19) ^ uVar24 ^ uVar5 ^ (uVar5 << 0xf | uVar5 >> 0x11);
      uVar15 = (uVar14 ^ uVar30) +
               uVar29 + (uVar13 ^ uVar22) + (uVar9 & uVar6 | (uVar9 | uVar6) & uVar12);
      uVar10 = uVar4 >> 0xd | uVar4 << 0x13;
      uVar14 = ((uVar4 ^ uVar8) & uVar7 ^ uVar8) + uVar30 + uVar22 + uVar20;
      uVar31 = uVar9 * 0x200 | uVar9 >> 0x17;
      uVar14 = uVar14 ^ (uVar14 * 0x200 | uVar14 >> 0x17) ^ (uVar14 >> 0xf | uVar14 * 0x20000);
      uVar4 = uVar15 * 0x1000 | uVar15 >> 0x14;
      uVar5 = uVar4 + 0x53d43cec + uVar14;
      uVar30 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar5 = uVar21 ^ x[15] ^ (uVar19 << 0xf | uVar19 >> 0x11);
      uVar29 = (uVar5 >> 9 | uVar5 << 0x17) ^
               (uVar32 << 7 | uVar32 >> 0x19) ^ uVar17 ^ uVar5 ^ (uVar5 << 0xf | uVar5 >> 0x11);
      uVar20 = uVar6 + (uVar29 ^ uVar23) + (uVar12 & uVar31 | (uVar12 | uVar31) & uVar15) +
               (uVar4 ^ uVar30);
      uVar9 = uVar12 * 0x200 | uVar12 >> 0x17;
      uVar6 = uVar7 >> 0xd | uVar7 << 0x13;
      uVar27 = ((uVar7 ^ uVar10) & uVar14 ^ uVar10) + uVar8 + uVar23 + uVar30;
      uVar27 = uVar27 ^ (uVar27 * 0x200 | uVar27 >> 0x17) ^ (uVar27 >> 0xf | uVar27 * 0x20000);
      uVar7 = uVar20 * 0x1000 | uVar20 >> 0x14;
      uVar5 = uVar7 + 0xa7a879d8 + uVar27;
      uVar5 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar4 = uVar11 ^ uVar16 ^ (uVar28 << 0xf | uVar28 >> 0x11);
      uVar11 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar18 << 7 | uVar18 >> 0x19) ^ uVar22 ^ uVar4 ^ (uVar4 << 0xf | uVar4 >> 0x11);
      uVar12 = uVar15 * 0x200 | uVar15 >> 0x17;
      uVar8 = (uVar7 ^ uVar5) +
              (uVar11 ^ uVar19) + uVar31 + (uVar15 & uVar9 | (uVar15 | uVar9) & uVar20);
      uVar4 = uVar14 >> 0xd | uVar14 << 0x13;
      uVar14 = ((uVar14 ^ uVar6) & uVar27 ^ uVar6) + uVar5 + uVar10 + uVar19;
      uVar14 = uVar14 ^ (uVar14 * 0x200 | uVar14 >> 0x17) ^ (uVar14 >> 0xf | uVar14 * 0x20000);
      uVar10 = uVar8 * 0x1000 | uVar8 >> 0x14;
      uVar5 = uVar10 + 0x4f50f3b1 + uVar14;
      uVar5 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar7 = uVar33 ^ uVar24 ^ (uVar13 << 0xf | uVar13 >> 0x11);
      uVar34 = (uVar7 >> 9 | uVar7 << 0x17) ^
               (uVar25 << 7 | uVar25 >> 0x19) ^ uVar23 ^ uVar7 ^ (uVar7 << 0xf | uVar7 >> 0x11);
      uVar30 = uVar20 * 0x200 | uVar20 >> 0x17;
      uVar31 = uVar27 >> 0xd | uVar27 << 0x13;
      uVar9 = (uVar10 ^ uVar5) +
              uVar9 + (uVar28 ^ uVar34) + (uVar20 & uVar12 | (uVar20 | uVar12) & uVar8);
      uVar7 = ((uVar27 ^ uVar4) & uVar14 ^ uVar4) + uVar5 + uVar6 + uVar28;
      uVar10 = uVar9 * 0x1000 | uVar9 >> 0x14;
      uVar7 = uVar7 ^ (uVar7 * 0x200 | uVar7 >> 0x17) ^ (uVar7 >> 0xf | uVar7 * 0x20000);
      uVar5 = uVar10 + 0x9ea1e762 + uVar7;
      uVar6 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar5 = uVar32 ^ uVar17 ^ (uVar29 << 0xf | uVar29 >> 0x11);
      uVar33 = (uVar5 >> 9 | uVar5 << 0x17) ^
               (uVar26 << 7 | uVar26 >> 0x19) ^ uVar19 ^ uVar5 ^ (uVar5 << 0xf | uVar5 >> 0x11);
      uVar15 = uVar8 * 0x200 | uVar8 >> 0x17;
      uVar5 = (uVar10 ^ uVar6) +
              uVar12 + (uVar13 ^ uVar33) + (uVar8 & uVar30 | (uVar8 | uVar30) & uVar9);
      uVar10 = uVar14 >> 0xd | uVar14 << 0x13;
      uVar8 = ((uVar14 ^ uVar31) & uVar7 ^ uVar31) + uVar4 + uVar13 + uVar6;
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar4 = uVar5 * 0x1000 | uVar5 >> 0x14;
      uVar14 = uVar4 + 0x3d43cec5 + uVar8;
      uVar14 = uVar14 * 0x80 | uVar14 >> 0x19;
      uVar6 = uVar18 ^ uVar22 ^ (uVar11 << 0xf | uVar11 >> 0x11);
      uVar27 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar21 << 7 | uVar21 >> 0x19) ^ uVar28 ^ uVar6 ^ (uVar6 << 0xf | uVar6 >> 0x11);
      uVar12 = uVar9 * 0x200 | uVar9 >> 0x17;
      uVar6 = uVar7 >> 0xd | uVar7 << 0x13;
      uVar4 = (uVar4 ^ uVar14) +
              uVar30 + (uVar29 ^ uVar27) + (uVar9 & uVar15 | (uVar9 | uVar15) & uVar5);
      uVar18 = ((uVar7 ^ uVar10) & uVar8 ^ uVar10) + uVar14 + uVar31 + uVar29;
      uVar18 = uVar18 ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ (uVar18 >> 0xf | uVar18 * 0x20000);
      uVar7 = uVar4 * 0x1000 | uVar4 >> 0x14;
      uVar14 = uVar7 + 0x7a879d8a + uVar18;
      uVar31 = uVar14 * 0x80 | uVar14 >> 0x19;
      uVar14 = uVar25 ^ uVar23 ^ (uVar34 << 0xf | uVar34 >> 0x11);
      uVar30 = (uVar14 >> 9 | uVar14 << 0x17) ^
               (uVar16 << 7 | uVar16 >> 0x19) ^ uVar13 ^ uVar14 ^ (uVar14 << 0xf | uVar14 >> 0x11);
      uVar9 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar14 = (uVar7 ^ uVar31) +
               uVar15 + (uVar30 ^ uVar11) + (uVar5 & uVar12 | (uVar5 | uVar12) & uVar4);
      uVar20 = uVar5 * 0x200 | uVar5 >> 0x17;
      uVar31 = ((uVar8 ^ uVar6) & uVar18 ^ uVar6) + uVar11 + uVar10 + uVar31;
      uVar10 = uVar26 ^ uVar19 ^ (uVar33 << 0xf | uVar33 >> 0x11);
      uVar31 = uVar31 ^ (uVar31 * 0x200 | uVar31 >> 0x17) ^ (uVar31 >> 0xf | uVar31 * 0x20000);
      uVar7 = uVar14 * 0x1000 | uVar14 >> 0x14;
      uVar5 = uVar7 + 0xf50f3b14 + uVar31;
      uVar8 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar15 = (uVar10 >> 9 | uVar10 << 0x17) ^
               uVar29 ^ (uVar24 << 7 | uVar24 >> 0x19) ^ uVar10 ^ (uVar10 << 0xf | uVar10 >> 0x11);
      uVar10 = uVar4 * 0x200 | uVar4 >> 0x17;
      uVar5 = (uVar7 ^ uVar8) +
              uVar12 + (uVar15 ^ uVar34) + (uVar4 & uVar20 | (uVar4 | uVar20) & uVar14);
      uVar4 = uVar21 ^ uVar28 ^ (uVar27 << 0xf | uVar27 >> 0x11);
      uVar25 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar8 = ((uVar18 ^ uVar9) & uVar31 ^ uVar9) + uVar8 + uVar6 + uVar34;
      uVar18 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar17 << 7 | uVar17 >> 0x19) ^ uVar11 ^ uVar4 ^ (uVar4 << 0xf | uVar4 >> 0x11);
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar7 = uVar5 * 0x1000 | uVar5 >> 0x14;
      uVar4 = uVar7 + 0xea1e7629 + uVar8;
      uVar6 = uVar4 * 0x80 | uVar4 >> 0x19;
      uVar4 = (uVar7 ^ uVar6) +
              (uVar18 ^ uVar33) + uVar20 + (uVar14 & uVar10 | (uVar14 | uVar10) & uVar5);
      uVar32 = uVar14 * 0x200 | uVar14 >> 0x17;
      uVar26 = uVar31 >> 0xd | uVar31 << 0x13;
      uVar12 = ((uVar31 ^ uVar25) & uVar8 ^ uVar25) + uVar6 + uVar9 + uVar33;
      uVar12 = uVar12 ^ (uVar12 * 0x200 | uVar12 >> 0x17) ^ (uVar12 >> 0xf | uVar12 * 0x20000);
      uVar21 = uVar4 * 0x1000 | uVar4 >> 0x14;
      uVar7 = uVar16 ^ uVar13 ^ (uVar30 << 0xf | uVar30 >> 0x11);
      uVar14 = uVar21 + 0xd43cec53 + uVar12;
      uVar14 = uVar14 * 0x80 | uVar14 >> 0x19;
      uVar20 = (uVar7 >> 9 | uVar7 << 0x17) ^
               (uVar22 << 7 | uVar22 >> 0x19) ^ uVar34 ^ uVar7 ^ (uVar7 << 0xf | uVar7 >> 0x11);
      uVar6 = uVar5 * 0x200 | uVar5 >> 0x17;
      uVar9 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar5 = (uVar21 ^ uVar14) +
              uVar10 + (uVar20 ^ uVar27) + (uVar5 & uVar32 | (uVar5 | uVar32) & uVar4);
      uVar8 = ((uVar8 ^ uVar26) & uVar12 ^ uVar26) + uVar14 + uVar25 + uVar27;
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar7 = uVar5 * 0x1000 | uVar5 >> 0x14;
      uVar14 = uVar7 + 0xa879d8a7 + uVar8;
      uVar25 = uVar14 * 0x80 | uVar14 >> 0x19;
      uVar14 = uVar24 ^ uVar29 ^ (uVar15 << 0xf | uVar15 >> 0x11);
      uVar10 = (uVar14 >> 9 | uVar14 << 0x17) ^
               (uVar14 << 0xf | uVar14 >> 0x11) ^ (uVar23 << 7 | uVar23 >> 0x19) ^ uVar33 ^ uVar14;
      uVar16 = uVar4 * 0x200 | uVar4 >> 0x17;
      uVar32 = uVar32 + (uVar30 ^ uVar10) + (uVar4 & uVar6 | (uVar4 | uVar6) & uVar5) +
               (uVar7 ^ uVar25);
      uVar4 = uVar17 ^ uVar11 ^ (uVar18 << 0xf | uVar18 >> 0x11);
      uVar21 = uVar12 >> 0xd | uVar12 << 0x13;
      uVar12 = ((uVar12 ^ uVar9) & uVar8 ^ uVar9) + uVar26 + uVar30 + uVar25;
      uVar12 = uVar12 ^ (uVar12 * 0x200 | uVar12 >> 0x17) ^ (uVar12 >> 0xf | uVar12 * 0x20000);
      uVar17 = uVar32 * 0x1000 | uVar32 >> 0x14;
      uVar14 = uVar17 + 0x50f3b14f + uVar12;
      uVar14 = uVar14 * 0x80 | uVar14 >> 0x19;
      uVar31 = (uVar4 >> 9 | uVar4 << 0x17) ^
               (uVar4 << 0xf | uVar4 >> 0x11) ^ (uVar19 << 7 | uVar19 >> 0x19) ^ uVar27 ^ uVar4;
      uVar7 = uVar5 * 0x200 | uVar5 >> 0x17;
      uVar24 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar8 = ((uVar8 ^ uVar21) & uVar12 ^ uVar21) + uVar14 + uVar9 + uVar15;
      uVar5 = (uVar17 ^ uVar14) +
              uVar6 + (uVar31 ^ uVar15) + (uVar5 & uVar16 | (uVar5 | uVar16) & uVar32);
      uVar6 = uVar22 ^ uVar34 ^ (uVar20 << 0xf | uVar20 >> 0x11);
      uVar8 = uVar8 ^ (uVar8 * 0x200 | uVar8 >> 0x17) ^ (uVar8 >> 0xf | uVar8 * 0x20000);
      uVar4 = uVar5 * 0x1000 | uVar5 >> 0x14;
      uVar14 = uVar4 + 0xa1e7629e + uVar8;
      uVar14 = uVar14 * 0x80 | uVar14 >> 0x19;
      uVar17 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar6 << 0xf | uVar6 >> 0x11) ^ (uVar28 << 7 | uVar28 >> 0x19) ^ uVar30 ^ uVar6;
      uVar35 = uVar32 * 0x200 | uVar32 >> 0x17;
      uVar26 = uVar12 >> 0xd | uVar12 << 0x13;
      uVar12 = ((uVar12 ^ uVar24) & uVar8 ^ uVar24) + uVar14 + uVar21 + uVar18;
      uVar4 = (uVar4 ^ uVar14) +
              uVar16 + (uVar18 ^ uVar17) + (uVar32 & uVar7 | (uVar32 | uVar7) & uVar5);
      uVar12 = uVar12 ^ (uVar12 * 0x200 | uVar12 >> 0x17) ^ (uVar12 >> 0xf | uVar12 * 0x20000);
      uVar9 = uVar4 * 0x1000 | uVar4 >> 0x14;
      uVar14 = uVar9 + 0x43cec53d + uVar12;
      uVar6 = uVar14 * 0x80 | uVar14 >> 0x19;
      uVar14 = uVar23 ^ uVar33 ^ (uVar10 << 0xf | uVar10 >> 0x11);
      uVar22 = (uVar14 >> 9 | uVar14 << 0x17) ^
               (uVar14 << 0xf | uVar14 >> 0x11) ^ uVar15 ^ (uVar13 << 7 | uVar13 >> 0x19) ^ uVar14;
      uVar32 = uVar5 * 0x200 | uVar5 >> 0x17;
      uVar7 = uVar7 + (uVar20 ^ uVar22) + (uVar5 & uVar35 | (uVar5 | uVar35) & uVar4) +
              (uVar9 ^ uVar6);
      uVar9 = uVar8 >> 0xd | uVar8 << 0x13;
      uVar16 = ((uVar8 ^ uVar26) & uVar12 ^ uVar26) + uVar24 + uVar20 + uVar6;
      uVar16 = uVar16 ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ (uVar16 >> 0xf | uVar16 * 0x20000);
      uVar14 = uVar7 * 0x1000 | uVar7 >> 0x14;
      uVar5 = uVar14 + 0x879d8a7a + uVar16;
      uVar5 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar6 = uVar19 ^ uVar27 ^ (uVar31 << 0xf | uVar31 >> 0x11);
      uVar25 = (uVar6 >> 9 | uVar6 << 0x17) ^
               (uVar29 << 7 | uVar29 >> 0x19) ^ uVar18 ^ uVar6 ^ (uVar6 << 0xf | uVar6 >> 0x11);
      uVar6 = uVar4 * 0x200 | uVar4 >> 0x17;
      uVar23 = (uVar14 ^ uVar5) +
               uVar35 + (uVar10 ^ uVar25) + (uVar4 & uVar32 | (uVar4 | uVar32) & uVar7);
      uVar14 = uVar28 ^ uVar30 ^ (uVar17 << 0xf | uVar17 >> 0x11);
      uVar21 = uVar12 >> 0xd | uVar12 << 0x13;
      uVar12 = ((uVar12 ^ uVar9) & uVar16 ^ uVar9) + uVar5 + uVar26 + uVar10;
      uVar12 = uVar12 ^ (uVar12 * 0x200 | uVar12 >> 0x17) ^ (uVar12 >> 0xf | uVar12 * 0x20000);
      uVar4 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar5 = uVar4 + 0xf3b14f5 + uVar12;
      uVar5 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar35 = (uVar14 >> 9 | uVar14 << 0x17) ^
               (uVar11 << 7 | uVar11 >> 0x19) ^ uVar20 ^ uVar14 ^ (uVar14 << 0xf | uVar14 >> 0x11);
      uVar8 = uVar7 * 0x200 | uVar7 >> 0x17;
      uVar24 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar26 = uVar32 + (uVar31 ^ uVar35) + (uVar7 & uVar6 | (uVar7 | uVar6) & uVar23) +
               (uVar4 ^ uVar5);
      uVar4 = ((uVar16 ^ uVar21) & uVar12 ^ uVar21) + uVar5 + uVar9 + uVar31;
      uVar7 = uVar13 ^ uVar15 ^ (uVar22 << 0xf | uVar22 >> 0x11);
      uVar4 = uVar4 ^ (uVar4 * 0x200 | uVar4 >> 0x17) ^ (uVar4 >> 0xf | uVar4 * 0x20000);
      uVar14 = uVar26 * 0x1000 | uVar26 >> 0x14;
      uVar5 = uVar14 + 0x1e7629ea + uVar4;
      uVar5 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar7 = (uVar7 >> 9 | uVar7 << 0x17) ^
              (uVar7 << 0xf | uVar7 >> 0x11) ^ (uVar34 << 7 | uVar34 >> 0x19) ^ uVar10 ^ uVar7;
      uVar19 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar28 = uVar12 >> 0xd | uVar12 << 0x13;
      uVar23 = (uVar14 ^ uVar5) +
               uVar6 + (uVar17 ^ uVar7) + (uVar23 & uVar8 | (uVar23 | uVar8) & uVar26);
      uVar6 = ((uVar12 ^ uVar24) & uVar4 ^ uVar24) + uVar5 + uVar21 + uVar17;
      uVar6 = uVar6 ^ (uVar6 * 0x200 | uVar6 >> 0x17) ^ (uVar6 >> 0xf | uVar6 * 0x20000);
      uVar12 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar5 = uVar12 + 0x3cec53d4 + uVar6;
      uVar16 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar5 = uVar29 ^ uVar18 ^ (uVar25 << 0xf | uVar25 >> 0x11);
      uVar21 = (uVar5 >> 9 | uVar5 << 0x17) ^
               (uVar5 << 0xf | uVar5 >> 0x11) ^ uVar31 ^ (uVar33 << 7 | uVar33 >> 0x19) ^ uVar5;
      uVar13 = uVar26 * 0x200 | uVar26 >> 0x17;
      uVar14 = uVar4 >> 0xd | uVar4 << 0x13;
      uVar9 = ((uVar4 ^ uVar28) & uVar6 ^ uVar28) + uVar16 + uVar24 + uVar22;
      uVar8 = (uVar22 ^ uVar21) + uVar8 + (uVar26 & uVar19 | (uVar26 | uVar19) & uVar23) +
              (uVar12 ^ uVar16);
      uVar4 = uVar11 ^ uVar20 ^ (uVar35 << 0xf | uVar35 >> 0x11);
      uVar9 = uVar9 ^ (uVar9 * 0x200 | uVar9 >> 0x17) ^ (uVar9 >> 0xf | uVar9 * 0x20000);
      uVar11 = uVar8 * 0x1000 | uVar8 >> 0x14;
      uVar5 = uVar11 + 0x79d8a7a8 + uVar9;
      uVar5 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar24 = (uVar4 >> 9 | uVar4 << 0x17) ^
               uVar17 ^ (uVar27 << 7 | uVar27 >> 0x19) ^ uVar4 ^ (uVar4 << 0xf | uVar4 >> 0x11);
      uVar29 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar16 = (uVar11 ^ uVar5) +
               uVar19 + (uVar25 ^ uVar24) + (uVar23 & uVar13 | (uVar23 | uVar13) & uVar8);
      uVar19 = uVar6 >> 0xd | uVar6 << 0x13;
      uVar4 = ((uVar6 ^ uVar14) & uVar9 ^ uVar14) + uVar28 + uVar25 + uVar5;
      uVar4 = uVar4 ^ (uVar4 * 0x200 | uVar4 >> 0x17) ^ (uVar4 >> 0xf | uVar4 * 0x20000);
      uVar6 = uVar16 * 0x1000 | uVar16 >> 0x14;
      uVar5 = uVar6 + 0xf3b14f50 + uVar4;
      uVar23 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar5 = uVar34 ^ uVar10 ^ (uVar7 << 0xf | uVar7 >> 0x11);
      uVar12 = (uVar5 >> 9 | uVar5 << 0x17) ^
               (uVar30 << 7 | uVar30 >> 0x19) ^ uVar22 ^ uVar5 ^ (uVar5 << 0xf | uVar5 >> 0x11);
      uVar11 = uVar9 >> 0xd | uVar9 << 0x13;
      uVar5 = (uVar6 ^ uVar23) +
              uVar13 + (uVar35 ^ uVar12) + (uVar8 & uVar29 | (uVar8 | uVar29) & uVar16);
      uVar13 = ((uVar9 ^ uVar19) & uVar4 ^ uVar19) + uVar14 + uVar35 + uVar23;
      uVar6 = uVar8 * 0x200 | uVar8 >> 0x17;
      uVar13 = uVar13 ^ (uVar13 * 0x200 | uVar13 >> 0x17) ^ (uVar13 >> 0xf | uVar13 * 0x20000);
      uVar8 = uVar5 * 0x1000 | uVar5 >> 0x14;
      uVar14 = uVar8 + 0xe7629ea1 + uVar13;
      uVar14 = uVar14 * 0x80 | uVar14 >> 0x19;
      uVar9 = uVar33 ^ uVar31 ^ (uVar21 << 0xf | uVar21 >> 0x11);
      uVar26 = (uVar9 >> 9 | uVar9 << 0x17) ^
               (uVar15 << 7 | uVar15 >> 0x19) ^ uVar25 ^ uVar9 ^ (uVar9 << 0xf | uVar9 >> 0x11);
      uVar23 = uVar16 * 0x200 | uVar16 >> 0x17;
      uVar28 = (uVar8 ^ uVar14) +
               uVar29 + (uVar7 ^ uVar26) + (uVar16 & uVar6 | (uVar16 | uVar6) & uVar5);
      uVar9 = ((uVar4 ^ uVar11) & uVar13 ^ uVar11) + uVar14 + uVar7 + uVar19;
      uVar16 = uVar4 >> 0xd | uVar4 << 0x13;
      uVar8 = uVar28 * 0x1000 | uVar28 >> 0x14;
      uVar9 = uVar9 ^ (uVar9 * 0x200 | uVar9 >> 0x17) ^ (uVar9 >> 0xf | uVar9 * 0x20000);
      uVar14 = uVar8 + 0xcec53d43 + uVar9;
      uVar4 = uVar14 * 0x80 | uVar14 >> 0x19;
      uVar14 = uVar27 ^ uVar17 ^ (uVar24 << 0xf | uVar24 >> 0x11);
      uVar27 = (uVar14 >> 9 | uVar14 << 0x17) ^
               (uVar18 << 7 | uVar18 >> 0x19) ^ uVar35 ^ uVar14 ^ (uVar14 << 0xf | uVar14 >> 0x11);
      uVar19 = uVar5 * 0x200 | uVar5 >> 0x17;
      uVar29 = uVar13 >> 0xd | uVar13 << 0x13;
      uVar5 = (uVar8 ^ uVar4) +
              (uVar21 ^ uVar27) + uVar6 + (uVar5 & uVar23 | (uVar5 | uVar23) & uVar28);
      uVar6 = ((uVar13 ^ uVar16) & uVar9 ^ uVar16) + uVar11 + uVar21 + uVar4;
      uVar32 = uVar5 * 0x1000 | uVar5 >> 0x14;
      uVar6 = (uVar6 * 0x200 | uVar6 >> 0x17) ^ (uVar6 >> 0xf | uVar6 * 0x20000) ^ uVar6;
      uVar14 = uVar32 + 0x9d8a7a87 + uVar6;
      uVar4 = uVar30 ^ uVar22 ^ (uVar12 << 0xf | uVar12 >> 0x11);
      uVar8 = uVar14 * 0x80 | uVar14 >> 0x19;
      x[4] = (uVar4 >> 9 | uVar4 << 0x17) ^
             (uVar20 << 7 | uVar20 >> 0x19) ^ uVar7 ^ uVar4 ^ (uVar4 << 0xf | uVar4 >> 0x11);
      uVar13 = uVar28 * 0x200 | uVar28 >> 0x17;
      uVar11 = uVar9 >> 0xd | uVar9 << 0x13;
      uVar14 = (uVar32 ^ uVar8) +
               uVar23 + (uVar24 ^ x[4]) + (uVar28 & uVar19 | (uVar28 | uVar19) & uVar5);
      uVar16 = ((uVar9 ^ uVar29) & uVar6 ^ uVar29) + uVar8 + uVar16 + uVar24;
      uVar23 = uVar14 * 0x1000 | uVar14 >> 0x14;
      uVar16 = uVar16 ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ (uVar16 >> 0xf | uVar16 * 0x20000);
      uVar8 = uVar15 ^ uVar25 ^ (uVar26 << 0xf | uVar26 >> 0x11);
      uVar4 = uVar23 + 0x3b14f50f + uVar16;
      uVar4 = uVar4 * 0x80 | uVar4 >> 0x19;
      x[5] = (uVar8 >> 9 | uVar8 << 0x17) ^
             (uVar10 << 7 | uVar10 >> 0x19) ^ uVar21 ^ uVar8 ^ (uVar8 << 0xf | uVar8 >> 0x11);
      uVar8 = uVar5 * 0x200 | uVar5 >> 0x17;
      uVar9 = uVar6 >> 0xd | uVar6 << 0x13;
      uVar28 = (uVar23 ^ uVar4) +
               (x[5] ^ uVar12) + uVar19 + (uVar5 & uVar13 | (uVar5 | uVar13) & uVar14);
      uVar15 = ((uVar6 ^ uVar11) & uVar16 ^ uVar11) + uVar4 + uVar29 + uVar12;
      uVar15 = uVar15 ^ (uVar15 * 0x200 | uVar15 >> 0x17) ^ (uVar15 >> 0xf | uVar15 * 0x20000);
      uVar6 = uVar28 * 0x1000 | uVar28 >> 0x14;
      uVar4 = uVar18 ^ uVar35 ^ (uVar27 << 0xf | uVar27 >> 0x11);
      uVar5 = uVar6 + 0x7629ea1e + uVar15;
      uVar5 = uVar5 * 0x80 | uVar5 >> 0x19;
      x[6] = (uVar4 >> 9 | uVar4 << 0x17) ^
             (uVar31 << 7 | uVar31 >> 0x19) ^ uVar24 ^ uVar4 ^ (uVar4 << 0xf | uVar4 >> 0x11);
      uVar29 = uVar14 * 0x200 | uVar14 >> 0x17;
      uVar19 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar23 = (uVar6 ^ uVar5) +
               uVar13 + (uVar26 ^ x[6]) + (uVar14 & uVar8 | (uVar14 | uVar8) & uVar28);
      uVar4 = ((uVar16 ^ uVar9) & uVar15 ^ uVar9) + uVar5 + uVar11 + uVar26;
      uVar11 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar4 = (uVar4 * 0x200 | uVar4 >> 0x17) ^ (uVar4 >> 0xf | uVar4 * 0x20000) ^ uVar4;
      uVar5 = uVar11 + 0xec53d43c + uVar4;
      uVar6 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar5 = uVar7 ^ uVar20 ^ (x[4] << 0xf | x[4] >> 0x11);
      uVar16 = uVar15 >> 0xd | uVar15 << 0x13;
      x[7] = (uVar5 >> 9 | uVar5 << 0x17) ^
             (uVar17 << 7 | uVar17 >> 0x19) ^ uVar12 ^ uVar5 ^ (uVar5 << 0xf | uVar5 >> 0x11);
      uVar13 = uVar28 * 0x200 | uVar28 >> 0x17;
      uVar14 = ((uVar15 ^ uVar19) & uVar4 ^ uVar19) + uVar6 + uVar9 + uVar27;
      uVar8 = (uVar11 ^ uVar6) +
              uVar8 + (uVar27 ^ x[7]) + (uVar28 & uVar29 | (uVar28 | uVar29) & uVar23);
      uVar14 = uVar14 ^ (uVar14 * 0x200 | uVar14 >> 0x17) ^ (uVar14 >> 0xf | uVar14 * 0x20000);
      uVar6 = uVar8 * 0x1000 | uVar8 >> 0x14;
      uVar5 = uVar6 + 0xd8a7a879 + uVar14;
      uVar5 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar10 = uVar10 ^ uVar21 ^ (x[5] << 0xf | x[5] >> 0x11);
      x[8] = (uVar10 >> 9 | uVar10 << 0x17) ^
             (uVar22 << 7 | uVar22 >> 0x19) ^ uVar26 ^ uVar10 ^ (uVar10 << 0xf | uVar10 >> 0x11);
      uVar28 = uVar4 >> 0xd | uVar4 << 0x13;
      uVar11 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar10 = ((uVar4 ^ uVar16) & uVar14 ^ uVar16) + uVar5 + uVar19 + x[4];
      uVar6 = (uVar6 ^ uVar5) +
              uVar29 + (x[8] ^ x[4]) + (uVar23 & uVar13 | (uVar23 | uVar13) & uVar8);
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar15 = uVar6 * 0x1000 | uVar6 >> 0x14;
      uVar5 = uVar15 + 0xb14f50f3 + uVar10;
      uVar23 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar5 = uVar31 ^ uVar24 ^ (x[6] << 0xf | x[6] >> 0x11);
      x[9] = (uVar5 >> 9 | uVar5 << 0x17) ^
             uVar27 ^ (uVar25 << 7 | uVar25 >> 0x19) ^ uVar5 ^ (uVar5 << 0xf | uVar5 >> 0x11);
      uVar4 = uVar14 >> 0xd | uVar14 << 0x13;
      uVar9 = uVar8 * 0x200 | uVar8 >> 0x17;
      uVar14 = ((uVar14 ^ uVar28) & uVar10 ^ uVar28) + uVar23 + uVar16 + x[5];
      uVar16 = (uVar15 ^ uVar23) +
               uVar13 + (x[9] ^ x[5]) + (uVar8 & uVar11 | (uVar8 | uVar11) & uVar6);
      uVar14 = uVar14 ^ (uVar14 * 0x200 | uVar14 >> 0x17) ^ (uVar14 >> 0xf | uVar14 * 0x20000);
      uVar23 = uVar16 * 0x1000 | uVar16 >> 0x14;
      uVar5 = uVar23 + 0x629ea1e7 + uVar14;
      uVar19 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar5 = uVar12 ^ uVar17 ^ (x[7] << 0xf | x[7] >> 0x11);
      x[10] = (uVar5 >> 9 | uVar5 << 0x17) ^
              (uVar35 << 7 | uVar35 >> 0x19) ^ x[4] ^ uVar5 ^ (uVar5 << 0xf | uVar5 >> 0x11);
      uVar15 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar8 = uVar6 * 0x200 | uVar6 >> 0x17;
      uVar10 = ((uVar10 ^ uVar4) & uVar14 ^ uVar4) + uVar19 + uVar28 + x[6];
      uVar23 = (uVar23 ^ uVar19) +
               uVar11 + (x[6] ^ x[10]) + (uVar6 & uVar9 | (uVar6 | uVar9) & uVar16);
      uVar6 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar5 = uVar6 + 0xc53d43ce + uVar10;
      uVar19 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar5 = uVar22 ^ uVar26 ^ (x[8] << 0xf | x[8] >> 0x11);
      x[11] = (uVar7 << 7 | uVar7 >> 0x19) ^ x[5] ^ uVar5 ^ (uVar5 << 0xf | uVar5 >> 0x11) ^
              (uVar5 >> 9 | uVar5 << 0x17);
      uVar17 = uVar16 * 0x200 | uVar16 >> 0x17;
      uVar16 = (uVar6 ^ uVar19) +
               uVar9 + (x[7] ^ x[11]) + (uVar16 & uVar8 | (uVar16 | uVar8) & uVar23);
      uVar11 = uVar14 >> 0xd | uVar14 << 0x13;
      uVar14 = ((uVar14 ^ uVar15) & uVar10 ^ uVar15) + uVar19 + uVar4 + x[7];
      uVar14 = uVar14 ^ (uVar14 * 0x200 | uVar14 >> 0x17) ^ (uVar14 >> 0xf | uVar14 * 0x20000);
      uVar9 = uVar16 * 0x1000 | uVar16 >> 0x14;
      uVar5 = uVar9 + 0x8a7a879d + uVar14;
      uVar4 = uVar25 ^ uVar27 ^ (x[9] << 0xf | x[9] >> 0x11);
      uVar5 = uVar5 * 0x80 | uVar5 >> 0x19;
      x[12] = (uVar4 >> 9 | uVar4 << 0x17) ^
              (uVar21 << 7 | uVar21 >> 0x19) ^ x[6] ^ uVar4 ^ (uVar4 << 0xf | uVar4 >> 0x11);
      uVar22 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar6 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar23 = (uVar9 ^ uVar5) +
               uVar8 + (x[12] ^ x[8]) + (uVar23 & uVar17 | (uVar23 | uVar17) & uVar16);
      uVar10 = ((uVar10 ^ uVar11) & uVar14 ^ uVar11) + uVar5 + x[8] + uVar15;
      uVar10 = uVar10 ^ (uVar10 * 0x200 | uVar10 >> 0x17) ^ (uVar10 >> 0xf | uVar10 * 0x20000);
      uVar4 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar5 = uVar4 + 0x14f50f3b + uVar10;
      uVar5 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar8 = uVar35 ^ x[4] ^ (x[10] << 0xf | x[10] >> 0x11);
      x[13] = (uVar8 >> 9 | uVar8 << 0x17) ^
              (uVar24 << 7 | uVar24 >> 0x19) ^ x[7] ^ uVar8 ^ (uVar8 << 0xf | uVar8 >> 0x11);
      uVar15 = uVar16 * 0x200 | uVar16 >> 0x17;
      uVar17 = (uVar4 ^ uVar5) +
               uVar17 + (x[13] ^ x[9]) + (uVar16 & uVar22 | (uVar16 | uVar22) & uVar23);
      uVar4 = uVar14 >> 0xd | uVar14 << 0x13;
      uVar9 = ((uVar14 ^ uVar6) & uVar10 ^ uVar6) + uVar5 + x[9] + uVar11;
      uVar9 = uVar9 ^ (uVar9 * 0x200 | uVar9 >> 0x17) ^ (uVar9 >> 0xf | uVar9 * 0x20000);
      uVar8 = uVar17 * 0x1000 | uVar17 >> 0x14;
      uVar5 = uVar8 + 0x29ea1e76 + uVar9;
      uVar5 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar14 = uVar7 ^ x[5] ^ (x[11] << 0xf | x[11] >> 0x11);
      x[14] = (uVar14 >> 9 | uVar14 << 0x17) ^
              (uVar12 << 7 | uVar12 >> 0x19) ^ x[8] ^ uVar14 ^ (uVar14 << 0xf | uVar14 >> 0x11);
      uVar19 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar8 = (uVar8 ^ uVar5) +
              uVar22 + (x[14] ^ x[10]) + (uVar23 & uVar15 | (uVar23 | uVar15) & uVar17);
      uVar7 = uVar10 >> 0xd | uVar10 << 0x13;
      uVar16 = ((uVar10 ^ uVar4) & uVar9 ^ uVar4) + uVar5 + x[10] + uVar6;
      uVar16 = uVar16 ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ (uVar16 >> 0xf | uVar16 * 0x20000);
      uVar14 = uVar8 * 0x1000 | uVar8 >> 0x14;
      uVar5 = uVar14 + 0x53d43cec + uVar16;
      uVar10 = uVar21 ^ x[6] ^ (x[12] << 0xf | x[12] >> 0x11);
      uVar5 = uVar5 * 0x80 | uVar5 >> 0x19;
      x[15] = (uVar26 << 7 | uVar26 >> 0x19) ^ x[9] ^ uVar10 ^ (uVar10 << 0xf | uVar10 >> 0x11) ^
              (uVar10 >> 9 | uVar10 << 0x17);
      uVar21 = uVar17 * 0x200 | uVar17 >> 0x17;
      uVar10 = (uVar14 ^ uVar5) +
               uVar15 + (x[11] ^ x[15]) + (uVar17 & uVar19 | (uVar17 | uVar19) & uVar8);
      uVar11 = uVar9 >> 0xd | uVar9 << 0x13;
      uVar4 = ((uVar9 ^ uVar7) & uVar16 ^ uVar7) + uVar5 + x[11] + uVar4;
      uVar4 = uVar4 ^ (uVar4 * 0x200 | uVar4 >> 0x17) ^ (uVar4 >> 0xf | uVar4 * 0x20000);
      uVar14 = uVar10 * 0x1000 | uVar10 >> 0x14;
      uVar5 = uVar14 + 0xa7a879d8 + uVar4;
      uVar17 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar5 = uVar24 ^ x[7] ^ (x[13] << 0xf | x[13] >> 0x11);
      x[0] = (uVar27 << 7 | uVar27 >> 0x19) ^ x[10] ^ uVar5 ^ (uVar5 << 0xf | uVar5 >> 0x11) ^
             (uVar5 >> 9 | uVar5 << 0x17);
      uVar6 = uVar8 * 0x200 | uVar8 >> 0x17;
      uVar15 = (uVar14 ^ uVar17) +
               uVar19 + (x[12] ^ x[0]) + (uVar8 & uVar21 | (uVar8 | uVar21) & uVar10);
      uVar9 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar14 = ((uVar16 ^ uVar11) & uVar4 ^ uVar11) + uVar17 + x[12] + uVar7;
      uVar14 = uVar14 ^ (uVar14 * 0x200 | uVar14 >> 0x17) ^ (uVar14 >> 0xf | uVar14 * 0x20000);
      uVar16 = uVar15 * 0x1000 | uVar15 >> 0x14;
      uVar5 = uVar16 + 0x4f50f3b1 + uVar14;
      uVar24 = uVar5 * 0x80 | uVar5 >> 0x19;
      uVar5 = uVar12 ^ x[8] ^ (x[14] << 0xf | x[14] >> 0x11);
      x[1] = (uVar5 >> 9 | uVar5 << 0x17) ^
             x[11] ^ (x[4] << 7 | x[4] >> 0x19) ^ uVar5 ^ (uVar5 << 0xf | uVar5 >> 0x11);
      uVar7 = uVar10 * 0x200 | uVar10 >> 0x17;
      uVar8 = uVar4 >> 0xd | uVar4 << 0x13;
      uVar12 = (uVar16 ^ uVar24) +
               (x[1] ^ x[13]) + uVar21 + (uVar10 & uVar6 | (uVar10 | uVar6) & uVar15);
      uVar21 = ((uVar4 ^ uVar9) & uVar14 ^ uVar9) + uVar11 + x[13] + uVar24;
      uVar21 = uVar21 ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ (uVar21 >> 0xf | uVar21 * 0x20000);
      uVar10 = uVar12 * 0x1000 | uVar12 >> 0x14;
      uVar4 = uVar26 ^ x[9] ^ (x[15] << 0xf | x[15] >> 0x11);
      uVar5 = uVar10 + 0x9ea1e762 + uVar21;
      uVar5 = uVar5 * 0x80 | uVar5 >> 0x19;
      x[2] = (uVar4 >> 9 | uVar4 << 0x17) ^
             (x[5] << 7 | x[5] >> 0x19) ^ x[12] ^ uVar4 ^ (uVar4 << 0xf | uVar4 >> 0x11);
      uVar11 = uVar15 * 0x200 | uVar15 >> 0x17;
      uVar4 = uVar14 >> 0xd | uVar14 << 0x13;
      uVar10 = (x[2] ^ x[14]) + uVar6 + (uVar15 & uVar7 | (uVar15 | uVar7) & uVar12) +
               (uVar10 ^ uVar5);
      uVar14 = ((uVar14 ^ uVar8) & uVar21 ^ uVar8) + uVar9 + x[14] + uVar5;
      uVar5 = (x[0] << 0xf | x[0] >> 0x11) ^ uVar27 ^ x[10];
      uVar14 = uVar14 ^ (uVar14 * 0x200 | uVar14 >> 0x17) ^ (uVar14 >> 0xf | uVar14 * 0x20000);
      x[3] = (uVar5 >> 9 | uVar5 << 0x17) ^
             (uVar5 << 0xf | uVar5 >> 0x11) ^ (x[6] << 7 | x[6] >> 0x19) ^ x[13] ^ uVar5;
      uVar6 = uVar10 * 0x1000 | uVar10 >> 0x14;
      uVar5 = uVar6 + 0x3d43cec5 + uVar14;
      uVar5 = uVar5 * 0x80 | uVar5 >> 0x19;
      local_c8 = local_c8 ^
                 uVar7 + (x[3] ^ x[15]) + (uVar12 & uVar11 | (uVar12 | uVar11) & uVar10) +
                 (uVar6 ^ uVar5);
      uVar5 = ((uVar21 ^ uVar4) & uVar14 ^ uVar4) + uVar8 + x[15] + uVar5;
      local_c4 = local_c4 ^ uVar10;
      local_c0 = local_c0 ^ (uVar12 * 0x200 | uVar12 >> 0x17);
      ctx->state[1] = local_c4;
      ctx->state[0] = local_c8;
      local_b4 = local_b4 ^ uVar11;
      ctx->state[2] = local_c0;
      local_bc = local_bc ^ uVar14;
      ctx->state[3] = local_b4;
      local_b8 = local_b8 ^ (uVar21 >> 0xd | uVar21 << 0x13);
      local_ac = local_ac ^ uVar4;
      ctx->state[6] = local_b8;
      local_b0 = (uVar5 * 0x200 | uVar5 >> 0x17) ^ uVar5 ^ local_b0 ^
                 (uVar5 >> 0xf | uVar5 * 0x20000);
      ctx->state[5] = local_bc;
      ctx->state[4] = local_b0;
      ctx->state[7] = local_ac;
    } while (local_a8 < pvVar2);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

