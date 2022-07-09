
int utimecmpat(int dfd,char *dst_name,stat *dst_stat,stat *src_stat,int options)

{
  ulong uVar1;
  ulong uVar2;
  Hash_table *table;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  fs_res *entry;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  long in_FS_OFFSET;
  bool bVar17;
  fs_res *local_148;
  fs_res tmp_dst_res;
  timespec timespec [2];
  stat dst_status;
  long local_40;
  
  uVar1 = (dst_stat->st_mtim).tv_sec;
  uVar15 = (src_stat->st_mtim).tv_sec;
  iVar13 = (int)(src_stat->st_mtim).tv_nsec;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar17 = uVar1 == uVar15;
  uVar12 = options & 1;
  iVar16 = (int)(dst_stat->st_mtim).tv_nsec;
  if (uVar12 != 0) {
    bVar3 = iVar16 == iVar13 && bVar17;
    if (bVar3) {
      uVar12 = 0;
      goto LAB_0011158a;
    }
    if ((long)uVar1 < (long)(uVar15 - 1)) {
LAB_001115c8:
      uVar12 = 0xffffffff;
      goto LAB_0011158a;
    }
    if ((long)uVar15 < (long)(uVar1 - 1)) goto LAB_0011158a;
    if ((utimecmpat::lexical_block_0::ht == (Hash_table *)0x0) &&
       (utimecmpat::lexical_block_0::ht =
             hash_initialize(0x10,(Hash_tuning *)0x0,dev_info_hash,dev_info_compare,rpl_free),
       utimecmpat::lexical_block_0::ht == (Hash_table *)0x0)) {
LAB_0011161d:
      local_148 = &tmp_dst_res;
      tmp_dst_res.resolution = 2000000000;
      tmp_dst_res.exact = false;
      iVar5 = 2000000000;
    }
    else {
      table = utimecmpat::lexical_block_0::ht;
      entry = utimecmpat::lexical_block_0::new_dst_res;
      if (utimecmpat::lexical_block_0::new_dst_res == (fs_res *)0x0) {
        entry = (fs_res *)malloc(0x10);
        utimecmpat::lexical_block_0::new_dst_res = entry;
        if (entry != (fs_res *)0x0) {
          entry->resolution = 2000000000;
          entry->exact = false;
          goto LAB_001114d7;
        }
LAB_00111a50:
        tmp_dst_res.dev = dst_stat->st_dev;
        local_148 = (fs_res *)hash_lookup(utimecmpat::lexical_block_0::ht,&tmp_dst_res);
        if (local_148 == (fs_res *)0x0) goto LAB_0011161d;
      }
      else {
LAB_001114d7:
        entry->dev = dst_stat->st_dev;
        local_148 = (fs_res *)hash_insert(table,entry);
        if (local_148 == (fs_res *)0x0) {
          if (utimecmpat::lexical_block_0::ht == (Hash_table *)0x0) goto LAB_0011161d;
          goto LAB_00111a50;
        }
        if (utimecmpat::lexical_block_0::new_dst_res == local_148) {
          utimecmpat::lexical_block_0::new_dst_res = (fs_res *)0x0;
        }
      }
      iVar5 = local_148->resolution;
      if (local_148->exact != false) {
        uVar15 = uVar15 & (long)(int)~(uint)(iVar5 == 2000000000);
        iVar13 = iVar13 - iVar13 % iVar5;
        bVar17 = uVar1 == uVar15;
        goto LAB_00111558;
      }
    }
    iVar4 = (int)(dst_stat->st_atim).tv_nsec;
    iVar8 = iVar4 / 10;
    iVar11 = (int)(dst_stat->st_ctim).tv_nsec;
    iVar9 = iVar11 / 10;
    iVar7 = iVar16 / 10;
    if ((iVar4 % 10 | iVar11 % 10 | iVar16 % 10) == 0) {
      uVar2 = (dst_stat->st_atim).tv_sec;
      uVar6 = uVar15;
      if (iVar5 < 0xb) {
        uVar14 = 10;
        local_148->resolution = 10;
      }
      else {
        uVar14 = 10;
        if ((iVar8 % 10 | iVar9 % 10 | iVar7 % 10) == 0) {
          iVar11 = 8;
          do {
            uVar14 = uVar14 * 10;
            iVar8 = iVar8 / 10;
            iVar9 = iVar9 / 10;
            iVar7 = iVar7 / 10;
            if ((iVar5 <= (int)uVar14) || ((iVar8 % 10 | iVar9 % 10 | iVar7 % 10) != 0)) {
              bVar3 = uVar14 == 2000000000;
              local_148->resolution = uVar14;
              uVar6 = (long)(int)~(uint)bVar3 & uVar15;
              goto LAB_00111867;
            }
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          if (((uVar2 | uVar1 | (dst_stat->st_ctim).tv_sec) & 1) == 0) {
            local_148->resolution = 2000000000;
            uVar14 = 2000000000;
            bVar3 = true;
            uVar6 = uVar15 & 0xfffffffffffffffe;
          }
          else {
            local_148->resolution = 1000000000;
            uVar14 = 1000000000;
          }
        }
        else {
          local_148->resolution = 10;
        }
      }
LAB_00111867:
      if (((long)uVar15 < (long)uVar1) || ((iVar13 <= iVar16 && (bVar17)))) goto LAB_0011158a;
      if (((long)uVar1 < (long)uVar6) ||
         ((uVar1 == uVar6 && (iVar16 < iVar13 - iVar13 % (int)uVar14)))) goto LAB_001115c8;
      timespec[1].tv_sec = bVar3 | uVar1;
      timespec[1].tv_nsec = (__syscall_slong_t)(int)(uVar14 / 9 + iVar16);
      timespec[0].tv_sec = uVar2;
      timespec[0].tv_nsec = (long)iVar4;
      iVar5 = utimensat(dfd,dst_name,(timespec *)timespec,0x100);
      if ((iVar5 != 0) ||
         ((iVar5 = __fxstatat(1,dfd,dst_name,(stat *)&dst_status,0x100),
          (dst_status.st_mtim.tv_sec ^ uVar1 | iVar16 ^ dst_status.st_mtim.tv_nsec | (long)iVar5) !=
          0 && (timespec[1].tv_sec = uVar1, timespec[1].tv_nsec = (long)iVar16,
               utimensat(dfd,dst_name,(timespec *)timespec,0x100), iVar5 != 0)))) {
        uVar12 = 0xfffffffe;
        goto LAB_0011158a;
      }
      iVar5 = ((uint)dst_status.st_mtim.tv_sec & 1) * 1000000000 + (int)dst_status.st_mtim.tv_nsec;
      uVar10 = iVar5 * -0x33333333 + 0x19999998;
      if ((uVar10 >> 1 | (uint)((uVar10 & 1) != 0) << 0x1f) < 0x19999999) {
        if (uVar14 == 10) {
          uVar12 = 10;
        }
        else {
          iVar8 = 9;
          uVar12 = 10;
          do {
            iVar5 = iVar5 / 10;
            uVar10 = iVar5 * -0x33333333 + 0x19999998;
            if (0x19999998 < (uVar10 >> 1 | (uint)((uVar10 & 1) != 0) << 0x1f)) break;
            iVar8 = iVar8 + -1;
            if (iVar8 == 0) {
              uVar12 = 2000000000;
              break;
            }
            uVar12 = uVar12 * 10;
          } while (uVar12 != uVar14);
        }
      }
      uVar15 = uVar15 & (long)(int)~(uint)(uVar12 == 2000000000);
      iVar13 = iVar13 - iVar13 % (int)uVar12;
      bVar17 = uVar1 == uVar15;
    }
    local_148->resolution = uVar12;
    local_148->exact = true;
  }
LAB_00111558:
  uVar12 = ((uint)((long)uVar15 < (long)uVar1) - (uint)((long)uVar1 < (long)uVar15)) +
           (-(uint)bVar17 & (uint)(iVar13 < iVar16) - (uint)(iVar16 < iVar13));
LAB_0011158a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}

