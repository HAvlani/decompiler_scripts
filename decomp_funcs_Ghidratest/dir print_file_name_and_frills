
size_t print_file_name_and_frills(fileinfo *f,size_t start_col)

{
  long lVar1;
  uintmax_t i;
  _Bool _Var2;
  size_t sVar3;
  char *pcVar4;
  int iVar5;
  long in_FS_OFFSET;
  char buf [652];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  set_normal_color();
  if (print_inode != false) {
    pcVar4 = "?";
    if ((f->stat_ok != false) && (i = (f->stat).st_ino, i != 0)) {
      pcVar4 = umaxtostr(i,buf);
    }
    iVar5 = 0;
    if (format != with_commas) {
      iVar5 = inode_number_width;
    }
    __printf_chk(1,&DAT_00118ad7,iVar5,pcVar4);
  }
  if (print_block_size != false) {
    pcVar4 = "?";
    if (f->stat_ok != false) {
      pcVar4 = human_readable((f->stat).st_blocks,buf,human_output_opts,0x200,output_block_size);
    }
    iVar5 = 0;
    if (format != with_commas) {
      iVar5 = block_size_width;
    }
    __printf_chk(1,&DAT_00118ad7,iVar5,pcVar4);
  }
  if (print_scontext != false) {
    iVar5 = 0;
    if (format != with_commas) {
      iVar5 = scontext_width;
    }
    __printf_chk(1,&DAT_00118ad7,iVar5,f->scontext);
  }
  sVar3 = print_name_with_quoting(f,false,(obstack *)0x0,start_col);
  if (indicator_style != none) {
    _Var2 = print_type_indicator(f->stat_ok,(f->stat).st_mode,f->filetype);
    sVar3 = sVar3 + _Var2;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sVar3;
}

