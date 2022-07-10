
void close_output_file(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined8 uVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  sigset_t oldset;
  char buf [21];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (output_stream == (FILE *)0x0) {
LAB_00103d3b:
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if ((*(byte *)&output_stream->_flags & 0x20) == 0) {
    iVar2 = rpl_fclose(output_stream);
    if (iVar2 == 0) {
      if ((bytes_written == 0) && (elide_empty_files != false)) {
        sigprocmask(0,(sigset_t *)&caught_signals,(sigset_t *)&oldset);
        pcVar4 = output_filename;
        iVar3 = unlink(output_filename);
        piVar5 = __errno_location();
        iVar2 = *piVar5;
        files_created = files_created + -1;
        sigprocmask(2,(sigset_t *)&oldset,(sigset_t *)0x0);
        if ((iVar3 != 0) && (iVar2 != 2)) {
          uVar6 = quotearg_n_style_colon(0,3,pcVar4);
          error(0,iVar2,"%s",uVar6);
        }
      }
      else if (suppress_count == false) {
        pcVar4 = imaxtostr(bytes_written,buf);
        __fprintf_chk(stdout,1,"%s\n",pcVar4);
      }
      output_stream = (FILE *)0x0;
      goto LAB_00103d3b;
    }
    pcVar4 = (char *)quotearg_n_style_colon(0,3,output_filename);
    piVar5 = __errno_location();
    pcVar7 = "%s";
    iVar2 = *piVar5;
  }
  else {
    pcVar4 = quotearg_style(shell_escape_always_quoting_style,output_filename);
    pcVar7 = (char *)dcgettext(0,"write error for %s",5);
    iVar2 = 0;
  }
  error(0,iVar2,pcVar7,pcVar4);
  output_stream = (FILE *)0x0;
                    /* WARNING: Subroutine does not return */
  cleanup_fatal();
}

