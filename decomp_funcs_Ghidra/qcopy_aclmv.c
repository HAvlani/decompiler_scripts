
int qcopy_acl(char *src_name,int source_desc,char *dst_name,int dest_desc,mode_t mode)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  permission_context ctx;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = get_permissions(src_name,source_desc,mode,&ctx);
  if (iVar2 == 0) {
    iVar2 = set_permissions(&ctx,dst_name,dest_desc);
    free_permission_context(&ctx);
  }
  else {
    iVar2 = -2;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

