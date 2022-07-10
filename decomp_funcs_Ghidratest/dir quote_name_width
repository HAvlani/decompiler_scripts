
size_t quote_name_width(char *name,quoting_options *options,int needs_general_quoting)

{
  long lVar1;
  long in_FS_OFFSET;
  size_t in_stack_ffffffffffffdfb8;
  _Bool pad;
  char *buf;
  size_t width;
  char smallbuf [8192];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  buf = smallbuf;
  quote_name_buf(&buf,name,options,needs_general_quoting,&width,&pad,in_stack_ffffffffffffdfb8);
  if ((buf != smallbuf) && (buf != name)) {
    rpl_free(buf);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pad + width;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

