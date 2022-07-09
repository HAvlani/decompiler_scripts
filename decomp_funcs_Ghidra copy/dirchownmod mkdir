
int dirchownmod(int fd,char *dir,mode_t mkdir_mode,uid_t owner,gid_t group,mode_t mode,
               mode_t mode_bits)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  long in_FS_OFFSET;
  stat st;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (fd < 0) {
    iVar2 = __xstat(1,dir,(stat *)&st);
    if (iVar2 != 0) goto LAB_001073fd;
    if ((st.st_mode & 0xf000) != 0x4000) {
      piVar3 = __errno_location();
      iVar2 = -1;
      *piVar3 = 0x14;
      goto LAB_001073fd;
    }
LAB_00107385:
    if (((owner == 0xffffffff) || (st.st_uid == owner)) &&
       ((group == 0xffffffff || (st.st_gid == group)))) {
LAB_00107469:
      uVar4 = 0;
    }
    else {
      if (fd < 0) {
        if (mkdir_mode == 0xffffffff) {
          iVar2 = chown(dir,owner,group);
        }
        else {
          iVar2 = lchown(dir,owner,group);
        }
        if (iVar2 != 0) goto LAB_001073fd;
      }
      else {
        iVar2 = fchown(fd,owner,group);
        if (iVar2 != 0) goto LAB_001074d9;
      }
      if ((st.st_mode & 0x49) == 0) goto LAB_00107469;
      uVar4 = st.st_mode & 0xc00;
    }
    if ((mode_bits & (st.st_mode ^ mode | uVar4)) == 0) {
      iVar2 = 0;
      if (fd < 0) goto LAB_001073fd;
    }
    else {
      uVar4 = ~mode_bits & st.st_mode & 0xfff | mode;
      if (fd < 0) {
        if (mkdir_mode == 0xffffffff) {
          iVar2 = chmod(dir,uVar4);
        }
        else {
          iVar2 = lchmod(dir,uVar4);
        }
        goto LAB_001073fd;
      }
      iVar2 = fchmod(fd,uVar4);
      if (iVar2 != 0) goto LAB_001074d9;
    }
    iVar2 = close(fd);
  }
  else {
    iVar2 = __fxstat(1,fd,(stat *)&st);
    if (iVar2 == 0) {
      if ((st.st_mode & 0xf000) == 0x4000) goto LAB_00107385;
      piVar3 = __errno_location();
      iVar5 = 0x14;
      iVar2 = -1;
      *piVar3 = 0x14;
    }
    else {
LAB_001074d9:
      piVar3 = __errno_location();
      iVar5 = *piVar3;
    }
    close(fd);
    *piVar3 = iVar5;
  }
LAB_001073fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}

