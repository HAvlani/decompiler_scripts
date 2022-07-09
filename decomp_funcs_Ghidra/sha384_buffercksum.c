
void * sha384_buffer(char *buffer,size_t len,void *resblock)

{
  long lVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  sha512_ctx ctx;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ctx.total[1] = 0;
  ctx.state[0] = 0xcbbb9d5dc1059ed8;
  ctx.state[1] = 0x629a292a367cd507;
  ctx.state[2] = 0x9159015a3070dd17;
  ctx.state[3] = 0x152fecd8f70e5939;
  ctx.state[4] = 0x67332667ffc00b31;
  ctx.state[5] = 0x8eb44a8768581511;
  ctx.state[6] = 0xdb0c2e0d64f98fa7;
  ctx.state[7] = 0x47b5481dbefa4fa4;
  ctx.total[0] = 0;
  ctx.buflen = 0;
  sha512_process_bytes(buffer,len,&ctx);
  sha512_conclude_ctx(&ctx);
  pvVar2 = sha384_read_ctx(&ctx,resblock);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

