
void close_stdin(void)

{
  FILE *fp;
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  int *piVar4;
  char *pcVar5;
  
  fp = stdin;
  sVar2 = freadahead(stdin);
  if (sVar2 == 0) {
    iVar1 = close_stream(fp);
    if (iVar1 == 0) {
      close_stdout();
      return;
    }
  }
  else {
    iVar1 = rpl_fseeko(fp,0,1);
    if (iVar1 == 0) {
      iVar1 = rpl_fflush(stdin);
      if (iVar1 != 0) {
        close_stream(stdin);
        goto LAB_001049c0;
      }
    }
    iVar1 = close_stream(stdin);
    if (iVar1 == 0) {
      close_stdout();
      return;
    }
  }
LAB_001049c0:
  uVar3 = dcgettext(0,"error closing file",5);
  pcVar5 = file_name;
  piVar4 = __errno_location();
  if (pcVar5 == (char *)0x0) {
    error(0,*piVar4,&DAT_0010d04a,uVar3);
  }
  else {
    pcVar5 = quotearg_colon(pcVar5);
    error(0,*piVar4,"%s: %s",pcVar5,uVar3);
  }
  close_stdout();
                    /* WARNING: Subroutine does not return */
  _exit(exit_failure);
}

