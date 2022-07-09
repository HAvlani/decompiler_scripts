
int atomic_link(char *source,int destdir_fd,char *dest_base)

{
  int iVar1;
  int *piVar2;
  
  if (symbolic_link == false) {
    if (beware_hard_dir_link != false) {
      return -1;
    }
    iVar1 = linkat(-100,source,destdir_fd,dest_base,(uint)(logical != false) << 10);
  }
  else {
    if (relative != false) {
      return -1;
    }
    iVar1 = symlinkat(source,destdir_fd,dest_base);
  }
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    return *piVar2;
  }
  return 0;
}

