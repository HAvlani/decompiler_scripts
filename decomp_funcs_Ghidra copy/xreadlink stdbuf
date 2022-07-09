
char * xreadlink(char *filename)

{
  char *pcVar1;
  int *piVar2;
  
  pcVar1 = areadlink(filename);
  if (pcVar1 == (char *)0x0) {
    piVar2 = __errno_location();
    if (*piVar2 == 0xc) {
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
  }
  return pcVar1;
}

