
int renameatu(int fd1,char *src,int fd2,char *dst,uint flags)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  size_t sVar5;
  size_t sVar6;
  long in_FS_OFFSET;
  stat src_st;
  stat dst_st;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = renameat2();
  if (-1 < iVar3) goto LAB_00109198;
  piVar4 = __errno_location();
  bVar2 = (*piVar4 - 0x16U & 0xffffffef) != 0 && *piVar4 != 0x5f;
  if (bVar2) goto LAB_00109198;
  if (flags == 0) {
LAB_001091e6:
    sVar5 = strlen(src);
    sVar6 = strlen(dst);
    if (((sVar5 != 0) && (sVar6 != 0)) && ((src[sVar5 - 1] == '/' || (dst[sVar6 - 1] == '/')))) {
      iVar3 = __fxstatat(1,fd1,src,(stat *)&src_st,0x100);
      if (iVar3 != 0) goto LAB_0010918b;
      if (bVar2) {
        if ((src_st.st_mode & 0xf000) != 0x4000) {
          *piVar4 = 2;
          iVar3 = -1;
          goto LAB_00109198;
        }
      }
      else {
        iVar3 = __fxstatat(1,fd2,dst,(stat *)&dst_st,0x100);
        if (iVar3 == 0) {
          if ((dst_st.st_mode & 0xf000) != 0x4000) {
            *piVar4 = 0x14;
            goto LAB_0010918b;
          }
          if ((src_st.st_mode & 0xf000) != 0x4000) {
            *piVar4 = 0x15;
            iVar3 = -1;
            goto LAB_00109198;
          }
        }
        else if ((*piVar4 != 2) || ((src_st.st_mode & 0xf000) != 0x4000)) goto LAB_0010918b;
      }
    }
    iVar3 = renameat(fd1,src,fd2,dst);
  }
  else {
    if (flags != 1) {
      *piVar4 = 0x5f;
      iVar3 = -1;
      goto LAB_00109198;
    }
    iVar3 = __fxstatat(1,fd2,dst,(stat *)&dst_st,0x100);
    if ((iVar3 == 0) || (*piVar4 == 0x4b)) {
      *piVar4 = 0x11;
      iVar3 = -1;
      goto LAB_00109198;
    }
    if (*piVar4 == 2) {
      bVar2 = true;
      goto LAB_001091e6;
    }
LAB_0010918b:
    iVar3 = -1;
  }
LAB_00109198:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}

