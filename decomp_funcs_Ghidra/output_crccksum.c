
void output_crc(char *file,int binary_file,void *digest,_Bool tagged,uchar delim,_Bool args,
               uintmax_t length)

{
  long lVar1;
  uchar *puVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  char length_buf [21];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar3 = umaxtostr(length,length_buf);
                    /* WARNING: Load size is inaccurate */
  __printf_chk(1,"%u %s",*digest,pcVar3);
  if (args != false) {
    __printf_chk(1,&DAT_0011e11a,file);
  }
  puVar2 = (uchar *)stdout->_IO_write_ptr;
  if (puVar2 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = (char *)(puVar2 + 1);
    *puVar2 = delim;
  }
  else {
    __overflow(stdout,(uint)delim);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}
