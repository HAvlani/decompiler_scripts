
/* WARNING: Could not reconcile some variable overlaps */

char * find_mount_point(char *file,stat *file_stat)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  size_t sVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  char *pcVar12;
  ulong uVar13;
  saved_cwd *psVar14;
  undefined *puVar16;
  saved_cwd *psVar17;
  saved_cwd *psVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  saved_cwd cwd;
  stat last_stat;
  stat st;
  saved_cwd *psVar15;
  
  psVar15 = &cwd;
  psVar14 = &cwd;
  psVar18 = &cwd;
  psVar17 = &cwd;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = save_cwd(&cwd);
  pcVar6 = (char *)(ulong)uVar3;
  puVar5 = (uint *)__errno_location();
  if (uVar3 != 0) {
    pcVar12 = (char *)0x0;
    uVar9 = dcgettext(0,"cannot get current directory",5);
    error(0,*puVar5,uVar9);
    goto LAB_00106040;
  }
  if ((file_stat->st_mode & 0xf000) == 0x4000) {
    last_stat.st_dev._0_4_ = *(undefined4 *)&file_stat->st_dev;
    last_stat.st_dev._4_4_ = *(undefined4 *)((long)&file_stat->st_dev + 4);
    last_stat.st_ino._0_4_ = *(undefined4 *)&file_stat->st_ino;
    last_stat.st_ino._4_4_ = *(undefined4 *)((long)&file_stat->st_ino + 4);
    last_stat.st_nlink._0_4_ = *(undefined4 *)&file_stat->st_nlink;
    last_stat.st_nlink._4_4_ = *(undefined4 *)((long)&file_stat->st_nlink + 4);
    last_stat.st_mode = file_stat->st_mode;
    last_stat.st_uid = file_stat->st_uid;
    last_stat.st_gid = file_stat->st_gid;
    last_stat.__pad0 = file_stat->__pad0;
    last_stat.st_rdev._0_4_ = *(undefined4 *)&file_stat->st_rdev;
    last_stat.st_rdev._4_4_ = *(undefined4 *)((long)&file_stat->st_rdev + 4);
    last_stat.st_size._0_4_ = *(undefined4 *)&file_stat->st_size;
    last_stat.st_size._4_4_ = *(undefined4 *)((long)&file_stat->st_size + 4);
    last_stat.st_blksize._0_4_ = *(undefined4 *)&file_stat->st_blksize;
    last_stat.st_blksize._4_4_ = *(undefined4 *)((long)&file_stat->st_blksize + 4);
    last_stat.st_blocks._0_4_ = *(undefined4 *)&file_stat->st_blocks;
    last_stat.st_blocks._4_4_ = *(undefined4 *)((long)&file_stat->st_blocks + 4);
    last_stat.st_atim.tv_sec._0_4_ = *(undefined4 *)&(file_stat->st_atim).tv_sec;
    last_stat.st_atim.tv_sec._4_4_ = *(undefined4 *)((long)&(file_stat->st_atim).tv_sec + 4);
    last_stat.st_atim.tv_nsec._0_4_ = *(undefined4 *)&(file_stat->st_atim).tv_nsec;
    last_stat.st_atim.tv_nsec._4_4_ = *(undefined4 *)((long)&(file_stat->st_atim).tv_nsec + 4);
    last_stat.st_mtim.tv_sec._0_4_ = *(undefined4 *)&(file_stat->st_mtim).tv_sec;
    last_stat.st_mtim.tv_sec._4_4_ = *(undefined4 *)((long)&(file_stat->st_mtim).tv_sec + 4);
    last_stat.st_mtim.tv_nsec._0_4_ = *(undefined4 *)&(file_stat->st_mtim).tv_nsec;
    last_stat.st_mtim.tv_nsec._4_4_ = *(undefined4 *)((long)&(file_stat->st_mtim).tv_nsec + 4);
    last_stat.st_ctim.tv_sec._0_4_ = *(undefined4 *)&(file_stat->st_ctim).tv_sec;
    last_stat.st_ctim.tv_sec._4_4_ = *(undefined4 *)((long)&(file_stat->st_ctim).tv_sec + 4);
    last_stat.st_ctim.tv_nsec._0_4_ = *(undefined4 *)&(file_stat->st_ctim).tv_nsec;
    last_stat.st_ctim.tv_nsec._4_4_ = *(undefined4 *)((long)&(file_stat->st_ctim).tv_nsec + 4);
    last_stat.__glibc_reserved[0]._0_4_ = *(undefined4 *)file_stat->__glibc_reserved;
    last_stat.__glibc_reserved[0]._4_4_ = *(undefined4 *)((long)file_stat->__glibc_reserved + 4);
    last_stat.__glibc_reserved[1]._0_4_ = *(undefined4 *)(file_stat->__glibc_reserved + 1);
    last_stat.__glibc_reserved[1]._4_4_ = *(undefined4 *)((long)file_stat->__glibc_reserved + 0xc);
    last_stat.__glibc_reserved[2]._0_4_ = *(undefined4 *)(file_stat->__glibc_reserved + 2);
    last_stat.__glibc_reserved[2]._4_4_ = *(undefined4 *)((long)file_stat->__glibc_reserved + 0x14);
    iVar4 = chdir(file);
    psVar17 = &cwd;
    if (iVar4 < 0) goto LAB_001060bb;
LAB_00105eee:
    puVar16 = (undefined *)psVar17;
    while( true ) {
      *(undefined8 *)(puVar16 + -8) = 0x105fcb;
      iVar4 = __xstat(1,"..",(stat *)&st);
      if (iVar4 < 0) break;
      if ((CONCAT44(st.st_dev._4_4_,(undefined4)st.st_dev) !=
           CONCAT44(last_stat.st_dev._4_4_,(undefined4)last_stat.st_dev)) ||
         (CONCAT44(st.st_ino._4_4_,(undefined4)st.st_ino) ==
          CONCAT44(last_stat.st_ino._4_4_,(undefined4)last_stat.st_ino))) {
        *(undefined8 *)(puVar16 + -8) = 0x10601d;
        pcVar12 = xgetcwd();
        goto done;
      }
      *(undefined8 *)(puVar16 + -8) = 0x105f38;
      iVar4 = chdir("..");
      if (iVar4 < 0) {
        *(undefined8 *)(puVar16 + -8) = 0x106079;
        pcVar8 = quotearg_style(shell_escape_always_quoting_style,"..");
        pcVar12 = "cannot change to directory %s";
        goto LAB_00105ff3;
      }
      last_stat.st_dev._0_4_ = (undefined4)st.st_dev;
      last_stat.st_dev._4_4_ = st.st_dev._4_4_;
      last_stat.st_ino._0_4_ = (undefined4)st.st_ino;
      last_stat.st_ino._4_4_ = st.st_ino._4_4_;
      last_stat.st_nlink._0_4_ = (undefined4)st.st_nlink;
      last_stat.st_nlink._4_4_ = st.st_nlink._4_4_;
      last_stat.st_mode = st.st_mode;
      last_stat.st_uid = st.st_uid;
      last_stat.st_gid = st.st_gid;
      last_stat.__pad0 = st.__pad0;
      last_stat.st_rdev._0_4_ = (undefined4)st.st_rdev;
      last_stat.st_rdev._4_4_ = st.st_rdev._4_4_;
      last_stat.st_size._0_4_ = (undefined4)st.st_size;
      last_stat.st_size._4_4_ = st.st_size._4_4_;
      last_stat.st_blksize._0_4_ = (undefined4)st.st_blksize;
      last_stat.st_blksize._4_4_ = st.st_blksize._4_4_;
      last_stat.st_blocks._0_4_ = (undefined4)st.st_blocks;
      last_stat.st_blocks._4_4_ = st.st_blocks._4_4_;
      last_stat.st_atim.tv_sec._0_4_ = (undefined4)st.st_atim.tv_sec;
      last_stat.st_atim.tv_sec._4_4_ = st.st_atim.tv_sec._4_4_;
      last_stat.st_atim.tv_nsec._0_4_ = (undefined4)st.st_atim.tv_nsec;
      last_stat.st_atim.tv_nsec._4_4_ = st.st_atim.tv_nsec._4_4_;
      last_stat.st_mtim.tv_sec._0_4_ = (undefined4)st.st_mtim.tv_sec;
      last_stat.st_mtim.tv_sec._4_4_ = st.st_mtim.tv_sec._4_4_;
      last_stat.st_mtim.tv_nsec._0_4_ = (undefined4)st.st_mtim.tv_nsec;
      last_stat.st_mtim.tv_nsec._4_4_ = st.st_mtim.tv_nsec._4_4_;
      last_stat.st_ctim.tv_sec._0_4_ = (undefined4)st.st_ctim.tv_sec;
      last_stat.st_ctim.tv_sec._4_4_ = st.st_ctim.tv_sec._4_4_;
      last_stat.st_ctim.tv_nsec._0_4_ = (undefined4)st.st_ctim.tv_nsec;
      last_stat.st_ctim.tv_nsec._4_4_ = st.st_ctim.tv_nsec._4_4_;
      last_stat.__glibc_reserved[0]._0_4_ = (undefined4)st.__glibc_reserved[0];
      last_stat.__glibc_reserved[0]._4_4_ = st.__glibc_reserved[0]._4_4_;
      last_stat.__glibc_reserved[1]._0_4_ = (undefined4)st.__glibc_reserved[1];
      last_stat.__glibc_reserved[1]._4_4_ = st.__glibc_reserved[1]._4_4_;
      last_stat.__glibc_reserved[2]._0_4_ = (undefined4)st.__glibc_reserved[2];
      last_stat.__glibc_reserved[2]._4_4_ = st.__glibc_reserved[2]._4_4_;
    }
    *(undefined8 *)(puVar16 + -8) = 0x105fe4;
    pcVar8 = quotearg_style(shell_escape_always_quoting_style,"..");
    pcVar12 = "cannot stat %s";
LAB_00105ff3:
    *(undefined8 *)(puVar16 + -8) = 0x105ffa;
    uVar9 = dcgettext(0,pcVar12,5);
    uVar3 = *puVar5;
    pcVar12 = (char *)0x0;
    *(undefined8 *)(puVar16 + -8) = 0x106010;
    error(0,uVar3,uVar9,pcVar8);
  }
  else {
    pcVar6 = dir_name(file);
    sVar7 = strlen(pcVar6);
    psVar17 = &cwd;
    while (psVar15 !=
           (saved_cwd *)((long)&last_stat + (-0x10 - (sVar7 + 0x18 & 0xfffffffffffff000)))) {
      psVar14 = (saved_cwd *)((long)psVar17 + -0x1000);
      *(undefined8 *)((long)psVar17 + -8) = *(undefined8 *)((long)psVar17 + -8);
      psVar15 = (saved_cwd *)((long)psVar17 + -0x1000);
      psVar17 = (saved_cwd *)((long)psVar17 + -0x1000);
    }
    uVar13 = (ulong)((uint)(sVar7 + 0x18) & 0xff0);
    lVar2 = -uVar13;
    puVar16 = (undefined *)((long)psVar14 + lVar2);
    psVar18 = (saved_cwd *)((long)psVar14 + lVar2);
    if (uVar13 != 0) {
      *(undefined8 *)((long)psVar14 + -8) = *(undefined8 *)((long)psVar14 + -8);
    }
    *(undefined8 *)((long)psVar14 + lVar2 + -8) = 0x105df6;
    file = (char *)memcpy((void *)((ulong)((long)psVar14 + lVar2 + 0xf) & 0xfffffffffffffff0),pcVar6
                          ,sVar7 + 1);
    *(undefined8 *)((long)psVar14 + lVar2 + -8) = 0x105e01;
    rpl_free(pcVar6);
    *(undefined8 *)((long)psVar14 + lVar2 + -8) = 0x105e09;
    iVar4 = chdir(file);
    if (iVar4 < 0) {
LAB_001060bb:
      *(undefined8 *)((long)psVar18 + -8) = 0x1060c5;
      pcVar6 = quotearg_style(shell_escape_always_quoting_style,file);
      *(undefined8 *)((long)psVar18 + -8) = 0x1060db;
      uVar9 = dcgettext(0,"cannot change to directory %s",5);
      uVar3 = *puVar5;
      pcVar12 = (char *)0x0;
      *(undefined8 *)((long)psVar18 + -8) = 0x1060f1;
      error(0,uVar3,uVar9,pcVar6);
      psVar17 = psVar18;
      goto LAB_00106040;
    }
    *(undefined8 *)((long)psVar14 + lVar2 + -8) = 0x105e29;
    iVar4 = __xstat(1,".",(stat *)&last_stat);
    psVar17 = (saved_cwd *)((long)psVar14 + lVar2);
    pcVar6 = file;
    if (-1 < iVar4) goto LAB_00105eee;
    *(undefined8 *)((long)psVar14 + lVar2 + -8) = 0x105e3e;
    pcVar8 = quotearg_style(shell_escape_always_quoting_style,file);
    *(undefined8 *)((long)psVar14 + lVar2 + -8) = 0x105e54;
    uVar9 = dcgettext(0,"cannot stat current directory (now %s)",5);
    uVar3 = *puVar5;
    pcVar12 = (char *)0x0;
    *(undefined8 *)((long)psVar14 + lVar2 + -8) = 0x105e6a;
    error(0,uVar3,uVar9,pcVar8);
  }
done:
  uVar3 = *puVar5;
  *(undefined8 *)(puVar16 + -8) = 0x10602c;
  iVar4 = restore_cwd(&cwd);
  if (iVar4 != 0) {
    *(undefined8 *)(puVar16 + -8) = 0x106113;
    uVar9 = dcgettext(0,"failed to return to initial working directory",5);
    uVar19 = (ulong)*puVar5;
    pcVar8 = (char *)0x1;
    *(undefined8 *)(puVar16 + -8) = 0x106126;
    error(1,uVar19,uVar9);
    *(char **)(puVar16 + -8) = pcVar6;
    *(saved_cwd **)(puVar16 + -0x10) = &cwd;
    *(uint **)(puVar16 + -0x18) = puVar5;
    *(char **)(puVar16 + -0x20) = pcVar12;
    *(undefined **)(puVar16 + -0x28) = &stack0xfffffffffffffff8;
    *(ulong *)(puVar16 + -0x30) = (ulong)uVar3;
    uVar13 = 0x80;
    *(undefined8 *)(puVar16 + -0x40) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    if ((uVar19 != 0) && (uVar13 = uVar19 + 1, 0x400 < uVar19)) {
      uVar13 = 0x401;
    }
    *(undefined **)(puVar16 + -0xd0) = puVar16 + -200;
    do {
      if (uVar13 == 0x80) {
        pcVar6 = *(char **)(puVar16 + -0xd0);
        pcVar12 = (char *)0x0;
        if (uVar19 != 0) goto LAB_001061e3;
      }
      else {
LAB_001061e3:
        *(undefined8 *)(puVar16 + -0xe0) = 0x1061eb;
        pcVar6 = (char *)malloc(uVar13);
        pcVar12 = pcVar6;
        if (pcVar6 == (char *)0x0) {
LAB_00106280:
          *(undefined8 *)(puVar16 + -0xe0) = 0x106285;
          piVar11 = __errno_location();
          *piVar11 = 0xc;
          pcVar12 = (char *)0x0;
LAB_0010622b:
          if (*(long *)(puVar16 + -0x40) == *(long *)(in_FS_OFFSET + 0x28)) {
            return pcVar12;
          }
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar16 + -0xe0) = &UNK_001062b8;
          __stack_chk_fail();
        }
      }
      *(undefined8 *)(puVar16 + -0xe0) = 0x1061bc;
      uVar10 = readlink(pcVar8,pcVar6,uVar13);
      if ((long)uVar10 < 0) {
        *(undefined8 *)(puVar16 + -0xe0) = 0x10622b;
        rpl_free(pcVar12);
        pcVar12 = (char *)0x0;
        goto LAB_0010622b;
      }
      if (uVar10 < uVar13) {
        pcVar6[uVar10] = '\0';
        uVar10 = uVar10 + 1;
        if (pcVar12 == (char *)0x0) {
          *(undefined8 *)(puVar16 + -0xe0) = 0x106298;
          pcVar12 = (char *)malloc(uVar10);
          if (pcVar12 != (char *)0x0) {
            *(undefined8 *)(puVar16 + -0xe0) = 0x1062ae;
            memcpy(pcVar12,pcVar6,uVar10);
          }
        }
        else if (uVar10 < uVar13) {
          *(undefined8 *)(puVar16 + -0xe0) = 0x106277;
          pcVar6 = (char *)realloc(pcVar12,uVar10);
          if (pcVar6 != (char *)0x0) {
            pcVar12 = pcVar6;
          }
        }
        goto LAB_0010622b;
      }
      *(undefined8 *)(puVar16 + -0xe0) = 0x1061d2;
      rpl_free(pcVar12);
      if (uVar13 < 0x4000000000000000) {
        uVar13 = uVar13 * 2;
      }
      else {
        if (0x7ffffffffffffffe < uVar13) goto LAB_00106280;
        uVar13 = 0x7fffffffffffffff;
      }
    } while( true );
  }
  *(undefined8 *)(puVar16 + -8) = 0x10603c;
  free_cwd(&cwd);
  *puVar5 = uVar3;
  psVar17 = (saved_cwd *)puVar16;
LAB_00106040:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar12;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)psVar17 + -8) = 0x106100;
  __stack_chk_fail();
}

