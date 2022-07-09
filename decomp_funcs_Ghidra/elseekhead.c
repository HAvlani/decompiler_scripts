
off_t elseek(int fd,off_t offset,int whence,char *filename)

{
  long lVar1;
  __off_t _Var2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  char buf [21];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  _Var2 = lseek(fd,offset,whence);
  if (_Var2 < 0) {
    pcVar3 = offtostr(offset,buf);
    uVar4 = quotearg_n_style_colon(0,3,filename);
    pcVar7 = "%s: cannot seek to offset %s";
    if (whence != 0) {
      pcVar7 = "%s: cannot seek to relative offset %s";
    }
    uVar5 = dcgettext(0,pcVar7,5);
    piVar6 = __errno_location();
    error(0,*piVar6,uVar5,uVar4,pcVar3);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

