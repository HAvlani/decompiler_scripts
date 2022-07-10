
/* WARNING: Could not reconcile some variable overlaps */

void * sha256_buffer(char *buffer,size_t len,void *resblock)

{
  long lVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  sha256_ctx ctx;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ctx.total = 0;
  ctx.state._0_8_ = 0xbb67ae856a09e667;
  ctx.state._8_8_ = 0xa54ff53a3c6ef372;
  ctx.state._16_8_ = 0x9b05688c510e527f;
  ctx.state._24_8_ = 0x5be0cd191f83d9ab;
  ctx.buflen = 0;
  sha256_process_bytes(buffer,len,&ctx);
  sha256_conclude_ctx(&ctx);
  pvVar2 = sha256_read_ctx(&ctx,resblock);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

