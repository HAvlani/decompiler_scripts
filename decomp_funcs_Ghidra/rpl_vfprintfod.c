
int rpl_vfprintf(FILE *fp,char *format,__va_list_tag *args)

{
  long lVar1;
  size_t sVar2;
  int iVar3;
  char *__ptr;
  size_t sVar4;
  int *piVar5;
  long in_FS_OFFSET;
  size_t lenbuf;
  char buf [2000];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lenbuf = 2000;
  __ptr = (char *)vasnprintf(buf,&lenbuf,format,args);
  sVar2 = lenbuf;
  if (__ptr != (char *)0x0) {
    sVar4 = fwrite(__ptr,1,lenbuf,(FILE *)fp);
    if (sVar4 < sVar2) {
      iVar3 = -1;
      if (__ptr != buf) {
        rpl_free(__ptr);
        iVar3 = -1;
      }
      goto LAB_00109a4c;
    }
    if (__ptr != buf) {
      rpl_free(__ptr);
    }
    if (sVar2 < 0x80000000) {
      iVar3 = (int)sVar2;
      goto LAB_00109a4c;
    }
    piVar5 = __errno_location();
    *piVar5 = 0x4b;
  }
  fseterr(fp);
  iVar3 = -1;
LAB_00109a4c:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

