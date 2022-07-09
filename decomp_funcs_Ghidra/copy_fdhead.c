
Copy_fd_status copy_fd(int src_fd,uintmax_t n_bytes)

{
  long lVar1;
  Copy_fd_status CVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  char buf [8192];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (n_bytes != 0) {
    do {
      sVar3 = 0x2000;
      if (n_bytes < 0x2001) {
        sVar3 = n_bytes;
      }
      sVar3 = safe_read(src_fd,buf,sVar3);
      if (sVar3 == 0xffffffffffffffff) {
        CVar2 = COPY_FD_READ_ERROR;
        goto LAB_00103a78;
      }
      n_bytes = n_bytes - sVar3;
      if (sVar3 == 0) {
        if (n_bytes != 0) {
          CVar2 = COPY_FD_UNEXPECTED_EOF;
          goto LAB_00103a78;
        }
        break;
      }
      xwrite_stdout(buf,sVar3);
    } while (n_bytes != 0);
  }
  CVar2 = COPY_FD_OK;
LAB_00103a78:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

