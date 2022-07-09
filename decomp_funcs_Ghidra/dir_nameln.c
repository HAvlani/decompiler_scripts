
char * dir_name(char *file)

{
  char *pcVar1;
  
  pcVar1 = mdir_name(file);
  if (pcVar1 != (char *)0x0) {
    return pcVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}

