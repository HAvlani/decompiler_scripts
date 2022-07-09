
int set_permissions(permission_context *ctx,char *name,int desc)

{
  int iVar1;
  
  iVar1 = chmod_or_fchmod(name,desc,ctx->mode);
  return -(uint)(iVar1 != 0);
}

