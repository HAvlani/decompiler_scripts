
int sm3_stream(FILE *stream,void *resblock)

{
  long lVar1;
  int iVar2;
  void *p;
  size_t sVar3;
  size_t len;
  long in_FS_OFFSET;
  sm3_ctx ctx;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  p = malloc(0x8048);
  if (p == (void *)0x0) {
    iVar2 = 1;
LAB_001115f1:
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return iVar2;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  sm3_init_ctx(&ctx);
  do {
    len = 0;
LAB_0011159d:
    sVar3 = fread_unlocked((void *)((long)p + len),1,0x8000 - len,(FILE *)stream);
    len = len + sVar3;
    if (len != 0x8000) {
      if (sVar3 != 0) break;
      if ((stream->_flags & 0x20U) == 0) goto process_partial_block;
      rpl_free(p);
      iVar2 = 1;
      goto LAB_001115f1;
    }
    sm3_process_block(p,0x8000,&ctx);
  } while( true );
  if ((stream->_flags & 0x10U) != 0) {
process_partial_block:
    if (len != 0) {
      sm3_process_bytes(p,len,&ctx);
    }
    sm3_finish_ctx(&ctx,resblock);
    rpl_free(p);
    iVar2 = 0;
    goto LAB_001115f1;
  }
  goto LAB_0011159d;
}

