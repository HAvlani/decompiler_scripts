
int md5_stream(FILE *stream,void *resblock)

{
  long lVar1;
  int iVar2;
  void *buffer;
  size_t sVar3;
  size_t len;
  long in_FS_OFFSET;
  md5_ctx ctx;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  buffer = malloc(0x8048);
  if (buffer == (void *)0x0) {
    iVar2 = 1;
LAB_00104208:
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return iVar2;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  md5_init_ctx(&ctx);
  do {
    len = 0;
LAB_001041e8:
    if ((*(byte *)&stream->_flags & 0x10) != 0) goto process_partial_block;
    sVar3 = fread_unlocked((void *)((long)buffer + len),1,0x8000 - len,(FILE *)stream);
    len = len + sVar3;
    if (len != 0x8000) break;
    md5_process_block(buffer,0x8000,&ctx);
  } while( true );
  if (sVar3 == 0) {
    if ((*(byte *)&stream->_flags & 0x20) == 0) {
process_partial_block:
      if (len != 0) {
        md5_process_bytes(buffer,len,&ctx);
      }
      md5_finish_ctx(&ctx,resblock);
      rpl_free(buffer);
      iVar2 = 0;
    }
    else {
      rpl_free(buffer);
      iVar2 = 1;
    }
    goto LAB_00104208;
  }
  goto LAB_001041e8;
}

