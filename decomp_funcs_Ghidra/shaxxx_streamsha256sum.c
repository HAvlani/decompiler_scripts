
int shaxxx_stream(FILE *stream,void *resblock,anon_subr_void_sha256_ctx_ptr *init_ctx,
                 anon_subr_void_ptr_sha256_ctx_ptr_void_ptr *finish_ctx,ssize_t hashlen,char *alg)

{
  int iVar1;
  void *buffer;
  size_t sVar2;
  size_t len;
  long in_FS_OFFSET;
  sha256_ctx local_f8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  buffer = malloc(0x8048);
  if (buffer == (void *)0x0) {
    iVar1 = 1;
LAB_0010422b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return iVar1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  (*init_ctx)(&local_f8);
  do {
    len = 0;
LAB_00104208:
    if ((*(byte *)&stream->_flags & 0x10) != 0) goto process_partial_block;
    sVar2 = fread_unlocked((void *)((long)buffer + len),1,0x8000 - len,(FILE *)stream);
    len = len + sVar2;
    if (len != 0x8000) break;
    sha256_process_block(buffer,0x8000,&local_f8);
  } while( true );
  if (sVar2 == 0) {
    if ((*(byte *)&stream->_flags & 0x20) == 0) {
process_partial_block:
      if (len != 0) {
        sha256_process_bytes(buffer,len,&local_f8);
      }
      (*finish_ctx)(&local_f8,resblock);
      rpl_free(buffer);
      iVar1 = 0;
    }
    else {
      rpl_free(buffer);
      iVar1 = 1;
    }
    goto LAB_0010422b;
  }
  goto LAB_00104208;
}
