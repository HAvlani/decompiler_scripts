
size_t length_of_file_name_and_frills(fileinfo *f)

{
  long lVar1;
  char cVar2;
  long lVar3;
  size_t sVar4;
  char *pcVar5;
  long lVar6;
  size_t sVar7;
  long in_FS_OFFSET;
  char buf [652];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (print_inode == false) {
    lVar6 = 0;
LAB_001094b2:
    if (print_block_size != false) {
      if (format != with_commas) goto LAB_00109431;
      lVar3 = 2;
      if (f->stat_ok != false) {
        pcVar5 = human_readable((f->stat).st_blocks,buf,human_output_opts,0x200,output_block_size);
        sVar4 = strlen(pcVar5);
        lVar3 = sVar4 + 1;
      }
LAB_0010943c:
      lVar6 = lVar6 + lVar3;
    }
    if (print_scontext != false) {
      if (format == with_commas) {
        sVar4 = strlen(f->scontext);
      }
      else {
LAB_00109519:
        sVar4 = (size_t)scontext_width;
      }
      sVar7 = f->width;
      lVar6 = lVar6 + sVar4 + 1;
      goto joined_r0x00109531;
    }
  }
  else {
    if (format == with_commas) {
      pcVar5 = umaxtostr((f->stat).st_ino,buf);
      sVar4 = strlen(pcVar5);
      lVar6 = sVar4 + 1;
      goto LAB_001094b2;
    }
    lVar6 = (long)inode_number_width + 1;
    if (print_block_size != false) {
LAB_00109431:
      lVar3 = (long)block_size_width + 1;
      goto LAB_0010943c;
    }
    if (print_scontext != false) goto LAB_00109519;
  }
  sVar7 = f->width;
joined_r0x00109531:
  if (sVar7 == 0) {
    sVar7 = fileinfo_name_width(f);
  }
  sVar7 = sVar7 + lVar6;
  if (indicator_style != none) {
    cVar2 = get_type_indicator(f->stat_ok,(f->stat).st_mode,f->filetype);
    sVar7 = sVar7 + (cVar2 != '\0');
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

