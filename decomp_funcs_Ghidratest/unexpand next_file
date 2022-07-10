
FILE * next_file(FILE *fp)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  FILE *fp_00;
  
  pcVar1 = next_file::prev_file;
  if (fp != (FILE *)0x0) {
    if (next_file::prev_file == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("prev_file","src/expand-common.c",0x154,"next_file");
    }
    piVar4 = __errno_location();
    iVar2 = *piVar4;
    if ((*(byte *)&fp->_flags & 0x20) == 0) {
      iVar2 = 0;
    }
    if ((*pcVar1 == '-') && (pcVar1[1] == '\0')) {
      clearerr_unlocked((FILE *)fp);
    }
    else {
      iVar3 = rpl_fclose(fp);
      if (iVar3 != 0) {
        iVar2 = *piVar4;
      }
    }
    if (iVar2 != 0) {
      uVar5 = quotearg_n_style_colon(0,3,next_file::prev_file);
      error(0,iVar2,"%s",uVar5);
      exit_status = 1;
    }
  }
  pcVar1 = *file_list;
  while( true ) {
    file_list = file_list + 1;
    if (pcVar1 == (char *)0x0) {
      return (FILE *)0x0;
    }
    if ((*pcVar1 == '-') && (pcVar1[1] == '\0')) {
      have_read_stdin = true;
      fp_00 = stdin;
    }
    else {
      fp_00 = fopen(pcVar1,"r");
    }
    if (fp_00 != (FILE *)0x0) break;
    uVar5 = quotearg_n_style_colon(0,3,pcVar1);
    piVar4 = __errno_location();
    error(0,*piVar4,"%s",uVar5);
    exit_status = 1;
    pcVar1 = *file_list;
  }
  next_file::prev_file = pcVar1;
  fadvise((FILE *)fp_00,FADVISE_SEQUENTIAL);
  return (FILE *)fp_00;
}

