
int xgetgroups(char *username,gid_t gid,gid_t **groups)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = mgetgroups(username,gid,groups);
  if (iVar1 == -1) {
    piVar2 = __errno_location();
    if (*piVar2 == 0xc) {
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
  }
  return iVar1;
}

