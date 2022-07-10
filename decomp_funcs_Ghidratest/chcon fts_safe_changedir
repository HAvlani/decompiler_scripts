
int fts_safe_changedir(FTS *sp,FTSENT *p,int fd,char *dir)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  byte bVar8;
  uint uVar9;
  long in_FS_OFFSET;
  stat sb;
  
  uVar9 = sp->fts_options;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = fd;
  if ((((dir == (char *)0x0) || (cVar1 = *dir, cVar1 != '.')) || (dir[1] != '.')) ||
     (dir[2] != '\0')) {
    if ((uVar9 & 4) == 0) {
      if (fd < 0) {
        bVar3 = 0;
LAB_00104247:
        iVar5 = diropen();
        if (iVar5 < 0) {
          iVar4 = -1;
          goto LAB_001041d0;
        }
        uVar9 = sp->fts_options;
      }
      else {
        bVar3 = 0;
      }
      iVar4 = fd;
      if ((uVar9 & 2) == 0) {
        bVar8 = bVar3;
        if (dir != (char *)0x0) {
          cVar1 = *dir;
LAB_001041a1:
          bVar3 = bVar8;
          bVar8 = bVar3;
          if (((cVar1 == '.') && (dir[1] == '.')) && (iVar4 = fd, dir[2] == '\0'))
          goto LAB_00104280;
        }
LAB_001041aa:
        if ((uVar9 & 0x200) != 0) {
          iVar4 = 0;
          cwd_advance_fd(sp,iVar5,bVar8 ^ 1);
          goto LAB_001041d0;
        }
        iVar4 = fchdir(iVar5);
      }
      else {
LAB_00104280:
        iVar6 = __fxstat(1,iVar5,(stat *)&sb);
        fd = iVar4;
        if (iVar6 == 0) {
          if ((p->fts_statp[0].st_dev == sb.st_dev) && (p->fts_statp[0].st_ino == sb.st_ino)) {
            uVar9 = sp->fts_options;
            bVar8 = bVar3;
            goto LAB_001041aa;
          }
          piVar7 = __errno_location();
          *piVar7 = 2;
        }
        iVar4 = -1;
      }
      if (fd < 0) {
        piVar7 = __errno_location();
        iVar6 = *piVar7;
        close(iVar5);
        *piVar7 = iVar6;
      }
      goto LAB_001041d0;
    }
  }
  else if ((uVar9 & 4) == 0) {
    if (fd < 0) {
      if ((uVar9 & 0x200) == 0) {
LAB_00104358:
        bVar3 = 1;
        goto LAB_00104247;
      }
      bVar3 = i_ring_empty(&sp->fts_fd_ring);
      if ((_Bool)bVar3 != false) goto LAB_00104247;
      iVar4 = i_ring_pop();
      uVar9 = sp->fts_options;
      if (iVar4 < 0) goto LAB_00104358;
      bVar3 = 1;
      fd = iVar4;
      iVar5 = iVar4;
      bVar8 = 1;
      if ((uVar9 & 2) != 0) goto LAB_00104280;
      goto LAB_001041aa;
    }
    bVar3 = 1;
    iVar4 = fd;
    bVar8 = 1;
    if ((uVar9 & 2) == 0) goto LAB_001041a1;
    goto LAB_00104280;
  }
  if (((uVar9 & 0x200) == 0) || (fd < 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    close(fd);
  }
LAB_001041d0:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}

