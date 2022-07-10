
/* WARNING: Could not reconcile some variable overlaps */

void * md5_buffer(char *buffer,size_t len,void *resblock)

{
  long lVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  md5_ctx ctx;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ctx.buflen = 0;
  ctx._0_8_ = 0xefcdab8967452301;
  ctx._8_8_ = 0x1032547698badcfe;
  ctx.total = 0;
  md5_process_bytes(buffer,len,&ctx);
  pvVar2 = md5_finish_ctx(&ctx,resblock);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

