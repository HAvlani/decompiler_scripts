
/* WARNING: Could not reconcile some variable overlaps */

void * sha1_buffer(char *buffer,size_t len,void *resblock)

{
  long lVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  sha1_ctx ctx;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ctx._24_8_ = 0;
  ctx._0_8_ = 0xefcdab8967452301;
  ctx._8_8_ = 0x1032547698badcfe;
  ctx._16_8_ = 0xc3d2e1f0;
  sha1_process_bytes(buffer,len,&ctx);
  pvVar2 = sha1_finish_ctx(&ctx,resblock);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

