
int freadseek(FILE *fp,size_t offset)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  size_t sVar5;
  ulong uVar6;
  __off_t _Var7;
  ulong uVar8;
  long in_FS_OFFSET;
  size_t buffered;
  char buf [4096];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = 0;
  if (offset != 0) {
    sVar3 = freadahead(fp);
    if (sVar3 != 0) {
      do {
        pcVar4 = freadptr(fp,&buffered);
        if ((pcVar4 != (char *)0x0) && (buffered != 0)) {
          sVar5 = buffered;
          if (offset < buffered) {
            sVar5 = offset;
          }
          fp->_IO_read_ptr = fp->_IO_read_ptr + sVar5;
          offset = offset - sVar5;
          if (offset == 0) goto LAB_001071d0;
          sVar3 = sVar3 - sVar5;
          if (sVar3 == 0) break;
        }
        iVar2 = fgetc((FILE *)fp);
        if (iVar2 == -1) goto eof;
        offset = offset - 1;
        if (offset == 0) goto LAB_001071d0;
        sVar3 = sVar3 - 1;
      } while (sVar3 != 0);
    }
    iVar2 = fileno((FILE *)fp);
    if ((iVar2 < 0) || (_Var7 = lseek(iVar2,0,1), _Var7 < 0)) {
      do {
        uVar8 = 0x1000;
        if (offset < 0x1001) {
          uVar8 = offset;
        }
        uVar6 = __fread_chk(buf,0x1000,1,uVar8,fp);
        if (uVar6 < uVar8) goto eof;
        offset = offset - uVar8;
      } while (offset != 0);
LAB_001071d0:
      iVar2 = 0;
    }
    else {
      iVar2 = rpl_fseeko(fp,offset,1);
    }
  }
LAB_001071a3:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
eof:
  iVar2 = ferror((FILE *)fp);
  iVar2 = -(uint)(iVar2 != 0);
  goto LAB_001071a3;
}

