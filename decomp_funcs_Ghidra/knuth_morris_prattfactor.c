
_Bool knuth_morris_pratt(uchar *haystack,uchar *needle,size_t needle_len,uchar **resultp)

{
  undefined *puVar1;
  _Bool _Var2;
  ulong uVar3;
  long lVar4;
  uchar uVar5;
  undefined *puVar6;
  undefined *puVar8;
  undefined *puVar9;
  size_t sVar10;
  void *pvVar11;
  uchar *puVar12;
  long in_FS_OFFSET;
  undefined auStack56 [8];
  long local_30;
  undefined *puVar7;
  
  puVar6 = auStack56;
  puVar7 = auStack56;
  puVar9 = auStack56;
  puVar8 = auStack56;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  sVar10 = needle_len * 8;
  puVar1 = auStack56;
  if ((-1 < (long)sVar10) && (puVar1 = auStack56, needle_len >> 0x3d == 0)) {
    if (sVar10 < 0xfa1) {
      puVar9 = auStack56;
      while (puVar7 != auStack56 + -(sVar10 + 0x36 & 0xfffffffffffff000)) {
        puVar6 = puVar9 + -0x1000;
        *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
        puVar7 = puVar9 + -0x1000;
        puVar9 = puVar9 + -0x1000;
      }
      uVar3 = (ulong)((uint)(sVar10 + 0x36) & 0xff0);
      lVar4 = -uVar3;
      puVar8 = puVar6 + lVar4;
      puVar9 = puVar6 + lVar4;
      if (uVar3 != 0) {
        *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
      }
      pvVar11 = (void *)(((ulong)(puVar6 + lVar4 + 0xf) & 0xfffffffffffffff0) + 0x1f &
                        0xffffffffffffffe0);
    }
    else {
      pvVar11 = mmalloca(sVar10);
    }
    puVar1 = puVar8;
    if (pvVar11 != (void *)0x0) {
      *(undefined8 *)((long)pvVar11 + 8) = 1;
      if (2 < needle_len) {
        lVar4 = 0;
        sVar10 = 2;
        do {
          uVar5 = needle[lVar4];
          while (needle[sVar10 - 1] != uVar5) {
            if (lVar4 == 0) {
              *(size_t *)((long)pvVar11 + sVar10 * 8) = sVar10;
              lVar4 = 0;
              goto LAB_00113cc9;
            }
            lVar4 = lVar4 - *(long *)((long)pvVar11 + lVar4 * 8);
            uVar5 = needle[lVar4];
          }
          lVar4 = lVar4 + 1;
          *(size_t *)((long)pvVar11 + sVar10 * 8) = sVar10 - lVar4;
LAB_00113cc9:
          sVar10 = sVar10 + 1;
        } while (needle_len != sVar10);
      }
      *resultp = (uchar *)0x0;
      uVar5 = *haystack;
      if (uVar5 != '\0') {
        sVar10 = 0;
        puVar12 = haystack;
        do {
          if (needle[sVar10] == uVar5) {
            sVar10 = sVar10 + 1;
            haystack = haystack + 1;
            if (needle_len == sVar10) {
              *resultp = puVar12;
              break;
            }
          }
          else if (sVar10 == 0) {
            puVar12 = puVar12 + 1;
            haystack = haystack + 1;
          }
          else {
            lVar4 = *(long *)((long)pvVar11 + sVar10 * 8);
            puVar12 = puVar12 + lVar4;
            sVar10 = sVar10 - lVar4;
          }
          uVar5 = *haystack;
        } while (uVar5 != '\0');
      }
      *(undefined8 *)(puVar9 + -8) = 0x113d20;
      freea();
      _Var2 = true;
      goto LAB_00113d25;
    }
  }
  puVar9 = puVar1;
  _Var2 = false;
LAB_00113d25:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(code **)(puVar9 + -8) = mbuiter_multi_next;
    __stack_chk_fail();
  }
  return _Var2;
}

