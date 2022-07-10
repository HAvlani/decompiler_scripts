
void print_header(void)

{
  long lVar1;
  uintmax_t uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  long in_FS_OFFSET;
  char page_text [276];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  output_position = 0;
  pad_across_to(chars_per_margin);
  print_white_space();
  uVar2 = page_number;
  if (page_number == 0) {
    uVar4 = dcgettext(0,"page number overflow",5);
    error(1,0,uVar4);
  }
  else {
    uVar4 = dcgettext(0,"Page %lu",5);
    __sprintf_chk(page_text,1,0x114,uVar4,uVar2);
    iVar5 = header_width_available;
    uVar4 = 0x103d16;
    iVar3 = gnu_mbswidth(page_text,0);
    iVar5 = iVar5 - iVar3;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    __printf_chk(1,"\n\n%*s%s%*s%s%*s%s\n\n\n",chars_per_margin,&DAT_0010d085,date_text,iVar5 >> 1,
                 &DAT_0010d06a,file_text,iVar5 - (iVar5 >> 1),&DAT_0010d06a,page_text,uVar4);
    print_a_header = false;
    output_position = 0;
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      output_position = 0;
      print_a_header = false;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

