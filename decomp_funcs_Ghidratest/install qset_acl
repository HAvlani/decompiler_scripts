
int qset_acl(char *name,int desc,mode_t mode)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  permission_context ctx;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = mode;
  iVar2 = set_permissions(&ctx,name,desc);
  free_permission_context(&ctx);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

