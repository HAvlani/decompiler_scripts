
void version_etc_va(FILE *stream,char *command_name,char *package,char *version,
                   __va_list_tag *authors)

{
  uint uVar1;
  long lVar2;
  char **ppcVar3;
  char *pcVar4;
  size_t n_authors;
  long in_FS_OFFSET;
  char *authtab [10];
  
  n_authors = 0;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    uVar1 = authors->gp_offset;
    if (uVar1 < 0x30) {
      authors->gp_offset = uVar1 + 8;
      pcVar4 = *(char **)((ulong)uVar1 + (long)authors->reg_save_area);
      authtab[n_authors] = pcVar4;
    }
    else {
      ppcVar3 = (char **)authors->overflow_arg_area;
      authors->overflow_arg_area = ppcVar3 + 1;
      pcVar4 = *ppcVar3;
      authtab[n_authors] = pcVar4;
    }
  } while ((pcVar4 != (char *)0x0) && (n_authors = n_authors + 1, n_authors != 10));
  version_etc_arn(stream,command_name,package,version,authtab,n_authors);
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

