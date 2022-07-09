
off_t xlseek(int fd,off_t offset,int whence,char *filename)

{
  long lVar1;
  __off_t _Var2;
  char *pcVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  char buf [21];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  _Var2 = lseek(fd,offset,whence);
  if (_Var2 < 0) {
    pcVar3 = offtostr(offset,buf);
    piVar4 = __errno_location();
    if (whence == 1) {
      uVar5 = quotearg_n_style_colon(0,3,filename);
      pcVar7 = "%s: cannot seek to relative offset %s";
    }
    else {
      uVar5 = quotearg_n_style_colon(0,3,filename);
      pcVar7 = "%s: cannot seek to offset %s";
    }
    uVar6 = dcgettext(0,pcVar7,5);
    error(0,*piVar4,uVar6,uVar5,pcVar3);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

