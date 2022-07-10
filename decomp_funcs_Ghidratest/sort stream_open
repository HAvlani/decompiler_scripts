
FILE * stream_open(char *file,char *how)

{
  int iVar1;
  FILE *fp;
  int *piVar2;
  stat *psVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*how == 'r') {
    if ((*file == '-') && (file[1] == '\0')) {
      have_read_stdin = true;
      fp = stdin;
    }
    else {
      fp = (FILE *)0x0;
      iVar1 = open(file,0x80000);
      if (-1 < iVar1) {
        fp = fdopen(iVar1,how);
      }
    }
    fadvise((FILE *)fp,FADVISE_SEQUENTIAL);
    return (FILE *)fp;
  }
  if (*how == 'w') {
    if (file != (char *)0x0) {
      iVar1 = ftruncate(1,0);
      if (iVar1 != 0) {
        piVar2 = __errno_location();
        iVar1 = *piVar2;
        psVar3 = get_outstatus();
        if ((psVar3 == (stat *)0x0) || ((psVar3->st_mode & 0xf000) == 0x8000)) {
          uVar4 = quotearg_n_style_colon(0,3,file);
          uVar5 = dcgettext(0,"%s: error truncating",5);
                    /* WARNING: Subroutine does not return */
          error(2,iVar1,uVar5,uVar4);
        }
      }
    }
    return stdout;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("!\"unexpected mode passed to stream_open\"","src/sort.c",0x3d5,"stream_open");
}

