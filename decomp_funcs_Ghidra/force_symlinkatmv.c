
int force_symlinkat(char *srcname,int dstdir,char *dstname,_Bool force,int symlinkat_errno)

{
  long lVar1;
  int iVar2;
  char *tmpl;
  int *piVar3;
  long in_FS_OFFSET;
  symlink_arg arg;
  char buf [256];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (symlinkat_errno < 0) {
    symlinkat_errno = symlinkat(srcname,dstdir,dstname);
    if (symlinkat_errno == 0) goto LAB_0010b433;
    piVar3 = __errno_location();
    symlinkat_errno = *piVar3;
  }
  if ((force == true) && (symlinkat_errno == 0x11)) {
    tmpl = samedir_template(dstname,buf);
    if (tmpl == (char *)0x0) {
      piVar3 = __errno_location();
      symlinkat_errno = *piVar3;
    }
    else {
      arg.srcname = srcname;
      arg.dstdir = dstdir;
      iVar2 = try_tempname_len(tmpl,0,&arg,try_symlink,6);
      if (iVar2 == 0) {
        iVar2 = renameat(dstdir,tmpl,dstdir,dstname);
        symlinkat_errno = -1;
        if (iVar2 != 0) {
          piVar3 = __errno_location();
          symlinkat_errno = *piVar3;
          unlinkat(dstdir,tmpl,0);
        }
      }
      else {
        piVar3 = __errno_location();
        symlinkat_errno = *piVar3;
      }
      if (tmpl != buf) {
        rpl_free(tmpl);
      }
    }
  }
LAB_0010b433:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return symlinkat_errno;
}

