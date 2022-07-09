
/* WARNING: Unknown calling convention yet parameter storage is locked */

void save_line_to_file(void)

{
  size_t sVar1;
  char *pcVar2;
  undefined8 uVar3;
  int *piVar4;
  void **in_RSI;
  size_t *in_RDI;
  
  sVar1 = fwrite_unlocked(*in_RSI,1,*in_RDI,(FILE *)output_stream);
  if (sVar1 == *in_RDI) {
    bytes_written = bytes_written + sVar1;
    return;
  }
  pcVar2 = quotearg_style(shell_escape_always_quoting_style,output_filename);
  uVar3 = dcgettext(0,"write error for %s",5);
  piVar4 = __errno_location();
  error(0,*piVar4,uVar3,pcVar2);
  output_stream = (FILE *)0x0;
                    /* WARNING: Subroutine does not return */
  cleanup_fatal();
}

