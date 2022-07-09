
void version_etc(FILE *stream,char *command_name,char *package,char *version,...)

{
  long lVar1;
  char *pcVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  size_t n_authors;
  ulong uVar3;
  char **ppcVar4;
  long in_FS_OFFSET;
  va_list authors;
  char *authtab [10];
  char *local_38 [4];
  char *local_18 [2];
  
  uVar3 = 0x20;
  local_18[0] = (char *)in_R8;
  ppcVar4 = (char **)&stack0x00000008;
  local_18[1] = (char *)in_R9;
  n_authors = 0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if ((uint)uVar3 < 0x30) {
      pcVar2 = *(char **)((long)local_38 + uVar3);
      authtab[n_authors] = pcVar2;
      uVar3 = (ulong)((uint)uVar3 + 8);
    }
    else {
      pcVar2 = *ppcVar4;
      authtab[n_authors] = pcVar2;
      ppcVar4 = ppcVar4 + 1;
    }
  } while ((pcVar2 != (char *)0x0) && (n_authors = n_authors + 1, n_authors != 10));
  version_etc_arn(stream,command_name,package,version,authtab,n_authors);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

