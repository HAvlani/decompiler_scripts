
size_t calculate_columns(_Bool by_columns)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  size_t sVar7;
  size_t sVar8;
  column_info *pcVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  size_t sVar14;
  bool bVar15;
  
  sVar14 = cwd_n_used;
  if (max_idx == 0) {
    if (column_info_alloc_11654 < cwd_n_used) {
LAB_001095f5:
      column_info = (column_info *)xreallocarray(column_info,sVar14,0x30);
      uVar13 = sVar14 * 2;
LAB_0010960d:
      uVar10 = column_info_alloc_11654 + 1 + uVar13;
      uVar12 = (uVar13 - column_info_alloc_11654) * uVar10;
      if ((CARRY8(column_info_alloc_11654 + 1,uVar13) != false) ||
         (uVar10 != uVar12 / (uVar13 - column_info_alloc_11654))) {
                    /* WARNING: Subroutine does not return */
        xalloc_die();
      }
      pvVar4 = xnmalloc(uVar12 >> 1,8);
      pcVar9 = column_info;
      if (column_info_alloc_11654 < uVar13) {
        lVar5 = column_info_alloc_11654 * 8 + 8;
        do {
          *(void **)((long)pcVar9 + lVar5 * 3 + -8) = pvVar4;
          pvVar4 = (void *)((long)pvVar4 + lVar5);
          lVar5 = lVar5 + 8;
        } while (uVar13 * 8 + 8 != lVar5);
      }
      goto LAB_001096a3;
    }
    if (cwd_n_used != 0) goto LAB_001096ac;
LAB_001097d8:
    if (cwd_n_used == 0) {
      return sVar14;
    }
  }
  else {
    if (max_idx < cwd_n_used) {
      sVar14 = max_idx;
      if (column_info_alloc_11654 < max_idx) goto LAB_001095df;
    }
    else {
      uVar13 = column_info_alloc_11654;
      if (column_info_alloc_11654 < cwd_n_used) {
LAB_001095df:
        if (sVar14 < max_idx >> 1) goto LAB_001095f5;
        column_info = (column_info *)xreallocarray(column_info,max_idx,0x18);
        uVar13 = max_idx;
        goto LAB_0010960d;
      }
LAB_001096a3:
      column_info_alloc_11654 = uVar13;
      if (sVar14 == 0) goto LAB_001097d8;
    }
LAB_001096ac:
    sVar2 = cwd_n_used;
    pcVar9 = column_info;
    lVar5 = 3;
    uVar13 = 0;
    do {
      puVar1 = *(undefined8 **)((long)pcVar9 + lVar5 * 8 + -8);
      (&pcVar9[-1].valid_len)[lVar5 * 8] = true;
      *(long *)((long)pcVar9 + lVar5 * 8 + -0x10) = lVar5;
      puVar6 = puVar1;
      do {
        *puVar6 = 3;
        bVar15 = puVar1 + uVar13 != puVar6;
        puVar6 = puVar6 + 1;
      } while (bVar15);
      uVar13 = uVar13 + 1;
      lVar5 = lVar5 + 3;
    } while (uVar13 < sVar14);
    if (sVar2 == 0) goto LAB_001097fd;
  }
  uVar13 = 0;
  do {
    sVar7 = length_of_file_name_and_frills((fileinfo *)sorted_file[uVar13]);
    sVar3 = cwd_n_used;
    sVar2 = line_length;
    if (sVar14 != 0) {
      uVar10 = 0;
      pcVar9 = column_info;
      do {
        uVar12 = uVar10 + 1;
        if (pcVar9->valid_len != false) {
          if (by_columns == false) {
            uVar11 = uVar13 % uVar12;
          }
          else {
            uVar11 = SUB168(ZEXT816(uVar13) /
                            (ZEXT816((sVar3 - 1) + uVar12) / ZEXT816(uVar12) &
                            (undefined  [16])0xffffffffffffffff),0);
          }
          sVar8 = sVar7;
          if (uVar11 != uVar10) {
            sVar8 = sVar7 + 2;
          }
          uVar10 = pcVar9->col_arr[uVar11];
          if (uVar10 < sVar8) {
            pcVar9->line_len = (pcVar9->line_len - uVar10) + sVar8;
            pcVar9->col_arr[uVar11] = sVar8;
            pcVar9->valid_len = pcVar9->line_len < sVar2;
          }
        }
        pcVar9 = pcVar9 + 1;
        uVar10 = uVar12;
      } while (sVar14 != uVar12);
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 < sVar3);
LAB_001097fd:
  if (1 < sVar14) {
    pcVar9 = column_info + (sVar14 - 1);
    do {
      if (pcVar9->valid_len != false) {
        return sVar14;
      }
      sVar14 = sVar14 - 1;
      pcVar9 = pcVar9 + -1;
    } while (sVar14 != 1);
  }
  return sVar14;
}

