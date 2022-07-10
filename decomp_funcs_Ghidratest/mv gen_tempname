
int gen_tempname(char *tmpl,int suffixlen,int flags,int kind)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = flags;
  iVar1 = try_tempname_len(tmpl,suffixlen,&local_14,
                           *(anon_subr_int_char_ptr_void_ptr **)(tryfunc_4787 + (long)kind * 8),6);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

