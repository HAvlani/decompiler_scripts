
_Bool base64_decode_alloc_ctx
                (base64_decode_context *ctx,char *in,idx_t inlen,char **out,idx_t *outlen)

{
  undefined uVar1;
  char *out_00;
  long in_FS_OFFSET;
  idx_t needlen;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  needlen = (inlen >> 2) * 3 + 3;
  out_00 = (char *)malloc(needlen);
  *out = out_00;
  if (out_00 != (char *)0x0) {
    uVar1 = base64_decode_ctx(ctx,in,inlen,out_00,&needlen);
    if ((_Bool)uVar1 == false) {
      rpl_free(*out);
      *out = (char *)0x0;
      goto LAB_00103b45;
    }
    if (outlen != (idx_t *)0x0) {
      *outlen = needlen;
      goto LAB_00103b45;
    }
  }
  uVar1 = 1;
LAB_00103b45:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (_Bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

