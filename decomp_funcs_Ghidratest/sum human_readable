
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * human_readable(uintmax_t n,char *buf_1,int opts,uintmax_t from_block_size,
                     uintmax_t to_block_size)

{
  byte bVar1;
  long lVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  lconv *plVar9;
  size_t sVar10;
  size_t sVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  char *__src;
  ulong uVar22;
  char *__s;
  byte *pbVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long in_FS_OFFSET;
  bool bVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  undefined6 uVar30;
  undefined8 *local_c0;
  size_t thousands_seplen;
  char buf [41];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  uVar16 = opts & 0x20;
  uVar8 = opts & 3;
  uVar6 = (-(uint)(uVar16 == 0) & 0xffffffe8) + 0x400;
  plVar9 = localeconv();
  puVar24 = (undefined8 *)plVar9->decimal_point;
  sVar10 = strlen((char *)puVar24);
  bVar26 = 0xf < sVar10 - 1;
  if (bVar26) {
    puVar24 = (undefined8 *)&DAT_0010839c;
  }
  pbVar23 = (byte *)plVar9->grouping;
  __s = plVar9->thousands_sep;
  if (bVar26) {
    sVar10 = 1;
  }
  uVar30 = 0x10;
  sVar11 = strlen(__s);
  if (0x10 < sVar11) {
    __s = "";
  }
  local_c0 = (undefined8 *)(buf_1 + 0x287);
  uVar18 = (uint)sVar10;
  if (from_block_size < to_block_size) {
    if (from_block_size != 0) {
      auVar4 = ZEXT816(to_block_size) / ZEXT816(from_block_size);
      if (to_block_size % from_block_size == 0) {
        uVar22 = SUB168(ZEXT816(n) / (auVar4 & (undefined  [16])0xffffffffffffffff),0);
        auVar3 = ZEXT816((ulong)(SUB168(ZEXT816(n) % (auVar4 & (undefined  [16])0xffffffffffffffff),
                                        0) * 10));
        uVar20 = SUB168(auVar3 % (auVar4 & (undefined  [16])0xffffffffffffffff),0) * 2;
        uVar7 = SUB164(auVar3 / (auVar4 & (undefined  [16])0xffffffffffffffff),0);
        uVar21 = (ulong)uVar7;
        if (uVar20 < SUB168(auVar4,0)) {
          uVar15 = (uint)(uVar20 != 0);
        }
        else {
          uVar15 = (SUB168(auVar4,0) < uVar20) + 2;
        }
        goto joined_r0x00103b5d;
      }
    }
LAB_001039a5:
    fVar27 = (float10)from_block_size;
    if ((long)from_block_size < 0) {
      fVar27 = fVar27 + (float10)_DAT_00108410;
    }
    if ((long)to_block_size < 0) {
      fVar27 = fVar27 / ((float10)to_block_size + (float10)_DAT_00108410);
      if ((long)n < 0) goto LAB_00103da0;
LAB_001039e2:
      fVar27 = (float10)n * fVar27;
      if ((opts & 0x10U) != 0) goto LAB_001039ef;
LAB_00103cd0:
      if ((uVar8 != 1) && (fVar27 < _DAT_00108420)) {
        adjust_value(uVar8,(longdouble)CONCAT610(uVar30,fVar27));
      }
      uVar19 = 0xffffffff;
      __sprintf_chk(buf_1,1,0xffffffffffffffff);
      sVar11 = strlen(buf_1);
      sVar10 = sVar11;
    }
    else {
      fVar27 = fVar27 / (float10)to_block_size;
      if (-1 < (long)n) goto LAB_001039e2;
LAB_00103da0:
      fVar27 = ((float10)n + (float10)_DAT_00108410) * fVar27;
      if ((opts & 0x10U) == 0) goto LAB_00103cd0;
LAB_001039ef:
      uVar19 = 0;
      fVar29 = (float10)uVar6;
      do {
        fVar28 = fVar29;
        uVar19 = uVar19 + 1;
        fVar29 = fVar28 * (float10)uVar6;
        if (fVar27 < fVar29) break;
      } while (uVar19 != 8);
      fVar27 = fVar27 / fVar28;
      uVar22 = sVar10 + 2 + (ulong)(uVar16 == 0);
      if (uVar8 == 1) {
        __sprintf_chk(buf_1,1,0xffffffffffffffff,"%.1Lf");
        sVar11 = strlen(buf_1);
        if (sVar11 <= uVar22) goto LAB_00103ec8;
      }
      else {
        if (fVar27 < _DAT_00108420) {
          adjust_value(uVar8,(longdouble)CONCAT610(uVar30,fVar27));
        }
        __sprintf_chk(buf_1,1,0xffffffffffffffff);
        sVar11 = strlen(buf_1);
        if (sVar11 <= uVar22) {
LAB_00103ec8:
          if (((opts & 8U) == 0) || (buf_1[sVar11 - 1] != '0')) {
            sVar10 = sVar11 - (sVar10 + 1);
            goto LAB_00103d22;
          }
          if (uVar8 == 1) goto LAB_00103ac5;
        }
        if (fVar27 * (float10)_DAT_00108414 < _DAT_00108420) {
          adjust_value(uVar8,(longdouble)CONCAT610(uVar30,fVar27 * (float10)_DAT_00108414));
        }
      }
LAB_00103ac5:
      __sprintf_chk(buf_1,1,0xffffffffffffffff);
      sVar11 = strlen(buf_1);
      sVar10 = sVar11;
    }
LAB_00103d22:
    puVar25 = (undefined8 *)((long)local_c0 - sVar11);
    memmove(puVar25,buf_1,sVar11);
    puVar12 = (undefined8 *)((long)puVar25 + sVar10);
  }
  else {
    if ((from_block_size % to_block_size != 0) ||
       (uVar22 = n * SUB168(ZEXT816(from_block_size) / ZEXT816(to_block_size),0),
       SUB168(ZEXT816(uVar22) /
              (ZEXT816(from_block_size) / ZEXT816(to_block_size) &
              (undefined  [16])0xffffffffffffffff),0) != n)) goto LAB_001039a5;
    uVar15 = 0;
    uVar21 = 0;
    uVar7 = 0;
joined_r0x00103b5d:
    puVar25 = local_c0;
    if ((opts & 0x10U) == 0) {
      uVar19 = 0xffffffff;
LAB_00103b76:
      if (uVar8 != 1) goto LAB_00103b86;
      puVar12 = local_c0;
      if (5 < (int)(uVar7 + (((uint)uVar22 & 1) + uVar15 != 0))) goto LAB_00103b96;
LAB_00103bc0:
      do {
        puVar25 = (undefined8 *)((long)puVar25 + -1);
        *(char *)puVar25 = (char)uVar22 + (char)(uVar22 / 10) * -10 + '0';
        bVar26 = 9 < uVar22;
        uVar22 = uVar22 / 10;
      } while (bVar26);
    }
    else {
      uVar7 = (uint)uVar21;
      uVar20 = (ulong)uVar6;
      uVar19 = 0;
      if (uVar22 < uVar20) goto LAB_00103b76;
      while( true ) {
        uVar13 = uVar22 / uVar20;
        uVar7 = (int)uVar21 + (int)(uVar22 % uVar20) * 10;
        uVar21 = uVar7 / uVar20;
        uVar17 = ((int)uVar15 >> 1) + (uVar7 % uVar6) * 2;
        uVar7 = (uint)uVar21;
        uVar15 = uVar15 + uVar17;
        if (uVar17 < uVar6) {
          uVar15 = (uint)(uVar15 != 0);
        }
        else {
          uVar15 = (uVar6 < uVar15) + 2;
        }
        uVar19 = uVar19 + 1;
        uVar22 = uVar13;
        if (uVar13 < uVar20) break;
        if (uVar19 == 8) goto LAB_00103b76;
      }
      if (9 < uVar13) goto LAB_00103b76;
      if (uVar8 == 1) {
        bVar26 = 2 < (uVar7 & 1) + uVar15;
      }
      else {
        bVar26 = uVar15 != 0 && uVar8 == 0;
      }
      if (bVar26) {
        if (uVar7 == 9) {
          uVar22 = uVar13 + 1;
          if (uVar13 != 9) {
            uVar15 = 0;
            goto LAB_001040e8;
          }
          goto LAB_0010412e;
        }
        cVar5 = (char)uVar21 + '1';
      }
      else if (uVar7 == 0) {
LAB_001040e8:
        if ((opts & 8U) != 0) goto LAB_00104130;
        cVar5 = '0';
      }
      else {
        cVar5 = (char)uVar21 + '0';
      }
      buf_1[0x286] = cVar5;
      uVar21 = sVar10 & 0xffffffff;
      puVar25 = (undefined8 *)(buf_1 + (0x286 - sVar10));
      if (uVar18 < 8) {
        if ((sVar10 & 4) == 0) {
          if (((int)uVar21 != 0) &&
             (*(undefined *)puVar25 = *(undefined *)puVar24, (sVar10 & 2) != 0)) {
            *(undefined2 *)((long)puVar25 + (uVar21 - 2)) =
                 *(undefined2 *)((long)puVar24 + (uVar21 - 2));
          }
        }
        else {
          *(undefined4 *)puVar25 = *(undefined4 *)puVar24;
          *(undefined4 *)((long)puVar25 + (uVar21 - 4)) =
               *(undefined4 *)((long)puVar24 + (uVar21 - 4));
        }
      }
      else {
        *puVar25 = *puVar24;
        lVar14 = (long)puVar25 - ((ulong)(puVar25 + 1) & 0xfffffffffffffff8);
        uVar7 = (int)lVar14 + uVar18 & 0xfffffff8;
        *(undefined8 *)((long)puVar25 + ((sVar10 & 0xffffffff) - 8)) =
             *(undefined8 *)((long)puVar24 + ((sVar10 & 0xffffffff) - 8));
        if (7 < uVar7) {
          uVar15 = 0;
          do {
            uVar21 = (ulong)uVar15;
            uVar15 = uVar15 + 8;
            *(undefined8 *)(((ulong)(puVar25 + 1) & 0xfffffffffffffff8) + uVar21) =
                 *(undefined8 *)((long)puVar24 + (uVar21 - lVar14));
          } while (uVar15 < uVar7);
        }
      }
LAB_0010412e:
      uVar15 = 0;
LAB_00104130:
      puVar12 = puVar25;
      if (uVar8 == 1) goto LAB_00103bc0;
      uVar7 = 0;
LAB_00103b86:
      puVar12 = puVar25;
      if ((uVar8 != 0) || ((int)(uVar15 + uVar7) < 1)) goto LAB_00103bc0;
LAB_00103b96:
      uVar22 = uVar22 + 1;
      puVar25 = puVar12;
      if ((((opts & 0x10U) == 0) || (uVar6 != uVar22)) || (uVar19 == 8)) goto LAB_00103bc0;
      uVar19 = uVar19 + 1;
      if ((opts & 8U) == 0) {
        *(undefined *)((long)puVar12 + -1) = 0x30;
        puVar12 = (undefined8 *)((long)puVar12 + ~sVar10);
        uVar22 = sVar10 & 0xffffffff;
        if (uVar18 < 8) {
          if ((sVar10 & 4) == 0) {
            if (((int)uVar22 != 0) &&
               (*(undefined *)puVar12 = *(undefined *)puVar24, (sVar10 & 2) != 0)) {
              *(undefined2 *)((long)puVar12 + (uVar22 - 2)) =
                   *(undefined2 *)((long)puVar24 + (uVar22 - 2));
            }
          }
          else {
            *(undefined4 *)puVar12 = *(undefined4 *)puVar24;
            *(undefined4 *)((long)puVar12 + (uVar22 - 4)) =
                 *(undefined4 *)((long)puVar24 + (uVar22 - 4));
          }
        }
        else {
          *puVar12 = *puVar24;
          *(undefined8 *)((long)puVar12 + ((sVar10 & 0xffffffff) - 8)) =
               *(undefined8 *)((long)puVar24 + ((sVar10 & 0xffffffff) - 8));
          lVar14 = (long)puVar12 - ((ulong)(puVar12 + 1) & 0xfffffffffffffff8);
          uVar8 = (int)lVar14 + uVar18 & 0xfffffff8;
          if (7 < uVar8) {
            uVar18 = 0;
            do {
              uVar22 = (ulong)uVar18;
              uVar18 = uVar18 + 8;
              *(undefined8 *)(((ulong)(puVar12 + 1) & 0xfffffffffffffff8) + uVar22) =
                   *(undefined8 *)((long)puVar24 + (uVar22 - lVar14));
            } while (uVar18 < uVar8);
          }
        }
      }
      *(undefined *)((long)puVar12 + -1) = 0x31;
      puVar25 = (undefined8 *)((long)puVar12 + -1);
    }
  }
  if ((opts & 4U) != 0) {
    sVar10 = strlen(__s);
    __memcpy_chk(buf,puVar25,(long)puVar12 - (long)puVar25);
    uVar21 = 0xffffffffffffffff;
    uVar22 = (long)puVar12 - (long)puVar25;
    while( true ) {
      bVar1 = *pbVar23;
      if (bVar1 == 0) {
        if (uVar22 < uVar21) {
          uVar21 = uVar22;
        }
        uVar20 = uVar22 - uVar21;
        __src = buf + uVar20;
      }
      else {
        if (bVar1 < 0x7f) {
          uVar21 = (ulong)bVar1;
          if (uVar22 < bVar1) {
            uVar21 = uVar22;
          }
          uVar20 = uVar22 - uVar21;
          uVar22 = uVar21;
          __src = buf + uVar20;
        }
        else {
          uVar20 = 0;
          __src = buf;
        }
        pbVar23 = pbVar23 + 1;
        uVar21 = uVar22;
      }
      puVar25 = (undefined8 *)memcpy((void *)((long)puVar12 - uVar21),__src,uVar21);
      if (uVar20 == 0) break;
      puVar12 = (undefined8 *)memcpy((void *)((long)puVar25 - sVar10),__s,sVar10);
      uVar22 = uVar20;
    }
  }
  if ((opts & 0x80U) == 0) goto LAB_00103d67;
  if (uVar19 == 0xffffffff) {
    if (to_block_size < 2) {
      uVar19 = 0;
      goto LAB_00103d54;
    }
    uVar19 = 1;
    uVar22 = 1;
    do {
      uVar22 = uVar22 * uVar6;
      if (to_block_size <= uVar22) break;
      uVar19 = uVar19 + 1;
    } while (uVar19 != 8);
    if ((opts & 0x40U) != 0) goto LAB_00103f31;
LAB_00103f4c:
    if ((uVar19 == 1) && (uVar16 == 0)) {
      *(undefined *)local_c0 = 0x6b;
      puVar24 = (undefined8 *)((long)local_c0 + 1);
      if ((opts & 0x100U) == 0) {
LAB_0010409c:
        local_c0 = (undefined8 *)((long)local_c0 + 1);
        goto LAB_00103d67;
      }
    }
    else {
      *(char *)local_c0 = ""[(int)uVar19];
      if ((opts & 0x100U) == 0) goto LAB_0010409c;
      puVar24 = (undefined8 *)((long)local_c0 + 1);
      if (uVar16 != 0) {
        *(undefined *)((long)local_c0 + 1) = 0x69;
        puVar24 = (undefined8 *)((long)local_c0 + 2);
      }
    }
  }
  else {
LAB_00103d54:
    if ((opts & 0x100U | uVar19) == 0) goto LAB_00103d67;
    if ((opts & 0x40U) != 0) {
LAB_00103f31:
      local_c0 = (undefined8 *)(buf_1 + 0x288);
      buf_1[0x287] = ' ';
    }
    if (uVar19 != 0) goto LAB_00103f4c;
    puVar24 = local_c0;
    if ((opts & 0x100U) == 0) goto LAB_00103d67;
  }
  local_c0 = (undefined8 *)((long)puVar24 + 1);
  *(undefined *)puVar24 = 0x42;
LAB_00103d67:
  *(undefined *)local_c0 = 0;
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (char *)puVar25;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

