
void output_sysv(char *file,int binary_file,void *digest,_Bool tagged,uchar delim,_Bool args,
                uintmax_t length)

{
  long lVar1;
  uchar *puVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  char hbuf [652];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar3 = human_readable(length,hbuf,0,1,0x200);
                    /* WARNING: Load size is inaccurate */
  __printf_chk(1,"%d %s",*digest,pcVar3);
  if (args != false) {
    __printf_chk(1,&DAT_00109151,file);
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

