
void clear_files(void)

{
  void **ppvVar1;
  ulong uVar2;
  
  if (cwd_n_used != 0) {
    uVar2 = 0;
    do {
      ppvVar1 = (void **)sorted_file[uVar2];
      uVar2 = uVar2 + 1;
      rpl_free(*ppvVar1);
      rpl_free(ppvVar1[1]);
      rpl_free(ppvVar1[2]);
    } while (uVar2 < cwd_n_used);
  }
  file_size_width = 0;
  minor_device_number_width = 0;
  major_device_number_width = 0;
  author_width = 0;
  group_width = 0;
  owner_width = 0;
  scontext_width = 0;
  nlink_width = 0;
  block_size_width = 0;
  inode_number_width = 0;
  any_has_acl = false;
  cwd_some_quoted = false;
  cwd_n_used = 0;
  return;
}

