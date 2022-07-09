
void cleanup(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  int extraout_EAX;
  char *pcVar2;
  char *pcVar3;
  int *piVar4;
  
  if ((interrupt_signal != 0) || (iVar1 = synchronize_output(), iVar1 == 0)) {
    iVar1 = close(0);
    if ((iVar1 == 0) || (iVar1 = iclose(0), iVar1 == 0)) {
      iVar1 = close(1);
      if (iVar1 == 0) {
        return;
      }
      iVar1 = iclose(1);
      if (iVar1 == 0) {
        return;
      }
      pcVar2 = quotearg_style(shell_escape_always_quoting_style,output_file);
      pcVar3 = (char *)dcgettext(0,"closing output file %s",5);
      piVar4 = __errno_location();
      nl_error(1,*piVar4,pcVar3,pcVar2);
    }
    pcVar2 = quotearg_style(shell_escape_always_quoting_style,input_file);
    pcVar3 = (char *)dcgettext(0,"closing input file %s",5);
    piVar4 = __errno_location();
    nl_error(1,*piVar4,pcVar3,pcVar2);
    iVar1 = extraout_EAX;
  }
                    /* WARNING: Subroutine does not return */
  exit(iVar1);
}

