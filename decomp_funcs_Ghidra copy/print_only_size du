
void print_only_size(uintmax_t n_bytes)

{
  long lVar1;
  FILE *__stream;
  char *__s;
  long in_FS_OFFSET;
  char buf [652];
  
  __stream = stdout;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (n_bytes == 0xffffffffffffffff) {
    __s = (char *)dcgettext(0,"Infinity",5);
  }
  else {
    __s = human_readable(n_bytes,buf,human_output_opts,1,output_block_size);
  }
  fputs_unlocked(__s,__stream);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

