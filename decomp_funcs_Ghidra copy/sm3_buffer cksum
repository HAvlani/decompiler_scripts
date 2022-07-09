
/* WARNING: Could not reconcile some variable overlaps */

void * sm3_buffer(char *buffer,size_t len,void *resblock)

{
  long lVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  sm3_ctx ctx;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ctx.total = 0;
  ctx.state._0_8_ = 0x4914b2b97380166f;
  ctx.state._8_8_ = 0xda8a0600172442d7;
  ctx.state._16_8_ = 0x163138aaa96f30bc;
  ctx.state._24_8_ = 0xb0fb0e4ee38dee4d;
  ctx.buflen = 0;
  sm3_process_bytes(buffer,len,&ctx);
  sm3_conclude_ctx(&ctx);
  pvVar2 = sm3_read_ctx(&ctx,resblock);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

