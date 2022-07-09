
int cache_fstatat(int fd,char *file,stat *st,int flag)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  lVar2 = st->st_size;
  if (lVar2 == -1) {
    iVar1 = __fxstatat(1,fd,file,(stat *)st,0x100);
    if (iVar1 != 0) {
      st->st_size = -2;
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      st->st_ino = (long)iVar1;
      goto LAB_00104d73;
    }
    lVar2 = st->st_size;
  }
  if (-1 < lVar2) {
    return 0;
  }
  piVar3 = __errno_location();
  iVar1 = *(int *)&st->st_ino;
LAB_00104d73:
  *piVar3 = iVar1;
  return -1;
}

