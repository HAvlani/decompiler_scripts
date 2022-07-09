
void xfclose(FILE *fp,char *file)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = fileno((FILE *)fp);
  if (iVar1 == 0) {
    (*(code *)PTR_clearerr_unlocked_0011ccd0)(fp);
    return;
  }
  if (iVar1 == 1) {
    iVar1 = fflush_unlocked((FILE *)fp);
    if (iVar1 != 0) {
      pcVar2 = "fflush failed";
      goto LAB_001098d8;
    }
  }
  else {
    iVar1 = rpl_fclose(fp);
    if (iVar1 != 0) {
      pcVar2 = "close failed";
LAB_001098d8:
      pcVar2 = (char *)dcgettext(0,pcVar2,5);
                    /* WARNING: Subroutine does not return */
      sort_die(pcVar2,file);
    }
  }
  return;
}

