
_Bool cwrite(_Bool new_file_flag,char *bp,size_t bytes)

{
  size_t sVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if (new_file_flag != false) {
    if ((((ulong)bp | bytes) == 0) && (elide_empty_files != false)) {
      return true;
    }
    closeout((FILE *)0x0,output_desc,filter_pid,outfile);
    next_file_name();
    output_desc = create(outfile);
    if (output_desc < 0) {
      uVar3 = quotearg_n_style_colon(0,3,outfile);
      piVar2 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar2,"%s",uVar3);
    }
  }
  sVar1 = full_write(output_desc,bp,bytes);
  if (sVar1 == bytes) {
    return true;
  }
  piVar2 = __errno_location();
  if ((*piVar2 == 0x20) && (filter_command != (char *)0x0)) {
    return false;
  }
  uVar3 = quotearg_n_style_colon(0,3,outfile);
                    /* WARNING: Subroutine does not return */
  error(1,*piVar2,"%s",uVar3);
}

