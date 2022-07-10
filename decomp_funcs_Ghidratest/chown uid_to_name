
char * uid_to_name(uid_t uid)

{
  long lVar1;
  passwd *ppVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  char buf [21];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ppVar2 = getpwuid(uid);
  if (ppVar2 == (passwd *)0x0) {
    pcVar3 = umaxtostr((ulong)uid,buf);
    pcVar3 = xstrdup(pcVar3);
  }
  else {
    pcVar3 = xstrdup(ppVar2->pw_name);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

