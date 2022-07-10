
void create_output_file(void)

{
  long lVar1;
  int iVar2;
  char *file;
  undefined8 uVar3;
  FILE *pFVar4;
  int *piVar5;
  int iVar6;
  long in_FS_OFFSET;
  sigset_t oldset;
  
  iVar2 = files_created;
  iVar6 = 0x4b;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  file = make_filename(files_created);
  output_filename = file;
  if (iVar2 != 0x7fffffff) {
    sigprocmask(0,(sigset_t *)&caught_signals,(sigset_t *)&oldset);
    pFVar4 = fopen_safer(file,"w");
    output_stream = pFVar4;
    piVar5 = __errno_location();
    iVar6 = *piVar5;
    files_created = iVar2 + (uint)(pFVar4 != (FILE *)0x0);
    sigprocmask(2,(sigset_t *)&oldset,(sigset_t *)0x0);
    if (pFVar4 != (FILE *)0x0) {
      bytes_written = 0;
      if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      bytes_written = 0;
      return;
    }
  }
  uVar3 = quotearg_n_style_colon(0,3,output_filename);
  error(0,iVar6,"%s",uVar3);
                    /* WARNING: Subroutine does not return */
  cleanup_fatal();
}

