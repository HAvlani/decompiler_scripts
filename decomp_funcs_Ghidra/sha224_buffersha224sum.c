
/* WARNING: Could not reconcile some variable overlaps */

void * sha224_buffer(char *buffer,size_t len,void *resblock)

{
  long lVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  sha256_ctx ctx;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ctx.total = 0;
  ctx.state._0_8_ = 0x367cd507c1059ed8;
  ctx.state._8_8_ = 0xf70e59393070dd17;
  ctx.state._16_8_ = 0x68581511ffc00b31;
  ctx.state._24_8_ = 0xbefa4fa464f98fa7;
  ctx.buflen = 0;
  sha256_process_bytes(buffer,len,&ctx);
  sha256_conclude_ctx(&ctx);
  pvVar2 = sha224_read_ctx(&ctx,resblock);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

