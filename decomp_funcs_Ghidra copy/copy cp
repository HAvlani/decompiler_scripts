
_Bool copy(char *src_name,char *dst_name,int dst_dirfd,char *dst_relname,int nonexistent_dst,
          cp_options *options,_Bool *copy_into_self,_Bool *rename_succeeded)

{
  _Bool _Var1;
  long in_FS_OFFSET;
  _Bool first_dir_created_per_command_line_arg;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (numbered_backups < options->backup_type) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("VALID_BACKUP_TYPE (co->backup_type)","src/copy.c",0xc0f,"valid_options");
  }
  if (2 < options->sparse_mode + ~SPARSE_UNUSED) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("VALID_SPARSE_MODE (co->sparse_mode)","src/copy.c",0xc10,"valid_options");
  }
  if (REFLINK_ALWAYS < options->reflink_mode) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("VALID_REFLINK_MODE (co->reflink_mode)","src/copy.c",0xc11,"valid_options");
  }
  if ((options->hard_link != false) && (options->symbolic_link != false)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("!(co->hard_link && co->symbolic_link)","src/copy.c",0xc12,"valid_options");
  }
  if ((options->sparse_mode != SPARSE_AUTO) && (options->reflink_mode == REFLINK_ALWAYS)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("! (co->reflink_mode == REFLINK_ALWAYS && co->sparse_mode != SPARSE_AUTO)",
                  "src/copy.c",0xc13,"valid_options");
  }
  first_dir_created_per_command_line_arg = false;
  top_level_dst_name = dst_name;
  top_level_src_name = src_name;
  _Var1 = copy_internal(src_name,dst_name,dst_dirfd,dst_relname,nonexistent_dst,(stat *)0x0,
                        (dir_list *)0x0,options,true,&first_dir_created_per_command_line_arg,
                        copy_into_self,rename_succeeded);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

