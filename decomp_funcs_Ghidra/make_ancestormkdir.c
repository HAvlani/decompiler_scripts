
int make_ancestor(char *dir,char *component,void *options)

{
  __mode_t __mask;
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (*(long *)((long)options + 0x18) != 0) {
    piVar3 = __errno_location();
    *piVar3 = 0x5f;
  }
  if (*(__mode_t *)((long)options + 8) != *(__mode_t *)((long)options + 0xc)) {
    umask(*(__mode_t *)((long)options + 8));
  }
  uVar2 = mkdir(component,0x1ff);
  __mask = *(__mode_t *)((long)options + 0xc);
  if (*(__mode_t *)((long)options + 8) != __mask) {
    piVar3 = __errno_location();
    iVar1 = *piVar3;
    umask(__mask);
    *piVar3 = iVar1;
  }
  if ((uVar2 == 0) &&
     (uVar2 = *(uint *)((long)options + 8) >> 8 & 1, *(long *)((long)options + 0x20) != 0)) {
    announce_mkdir(dir,options);
  }
  return uVar2;
}

