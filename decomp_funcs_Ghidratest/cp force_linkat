
int force_linkat(int srcdir,char *srcname,int dstdir,char *dstname,int flags,_Bool force,
                int linkat_errno)

{
  long lVar1;
  int iVar2;
  char *tmpl;
  int *piVar3;
  long in_FS_OFFSET;
  link_arg arg;
  char buf [256];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (linkat_errno < 0) {
    linkat_errno = linkat(srcdir,srcname,dstdir,dstname,flags);
    if (linkat_errno == 0) goto LAB_0010b543;
    piVar3 = __errno_location();
    linkat_errno = *piVar3;
  }
  if ((force == true) && (linkat_errno == 0x11)) {
    tmpl = samedir_template(dstname,buf);
    if (tmpl == (char *)0x0) {
      piVar3 = __errno_location();
      linkat_errno = *piVar3;
    }
    else {
      arg.srcdir = srcdir;
      arg.srcname = srcname;
      arg.dstdir = dstdir;
      arg.flags = flags;
      iVar2 = try_tempname_len(tmpl,0,&arg,try_link,6);
      if (iVar2 == 0) {
        iVar2 = renameat(dstdir,tmpl,dstdir,dstname);
        linkat_errno = -1;
        if (iVar2 != 0) {
          piVar3 = __errno_location();
          linkat_errno = *piVar3;
        }
        unlinkat(dstdir,tmpl,0);
      }
      else {
        piVar3 = __errno_location();
        linkat_errno = *piVar3;
      }
      if (tmpl != buf) {
        rpl_free(tmpl);
      }
    }
  }
LAB_0010b543:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return linkat_errno;
}

