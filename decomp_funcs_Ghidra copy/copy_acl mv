
int copy_acl(char *src_name,int source_desc,char *dst_name,int dest_desc,mode_t mode)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  int *piVar4;
  
  iVar1 = qcopy_acl(src_name,source_desc,dst_name,dest_desc,mode);
  if (iVar1 != -2) {
    if (iVar1 == -1) {
      pcVar2 = quote(dst_name);
      uVar3 = dcgettext(0,"preserving permissions for %s",5);
      piVar4 = __errno_location();
      error(0,*piVar4,uVar3,pcVar2);
    }
    return iVar1;
  }
  pcVar2 = quote(src_name);
  piVar4 = __errno_location();
  error(0,*piVar4,&DAT_00118701,pcVar2);
  return -2;
}

