
uintmax_t unit_to_umax(char *n_string)

{
  strtol_error sVar1;
  size_t __n;
  void *__dest;
  char *pcVar2;
  undefined8 uVar3;
  char *valid_suffixes;
  char *pcVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  char *end;
  uintmax_t n;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  __n = strlen(n_string);
  end = (char *)0x0;
  if ((__n == 0) || ((int)n_string[__n - 1] - 0x30U < 10)) {
    valid_suffixes = "KMGTPEZY";
    pcVar2 = n_string;
    pcVar4 = (char *)0x0;
  }
  else {
    __dest = xmalloc(__n + 2);
    pcVar5 = (char *)((__n - 1) + (long)__dest);
    end = pcVar5;
    pcVar2 = (char *)memcpy(__dest,n_string,__n);
    pcVar4 = pcVar2;
    if ((*pcVar5 == 'i') && ((__n != 1 && (9 < (int)pcVar5[-1] - 0x30U)))) {
      *pcVar5 = '\0';
      valid_suffixes = "KMGTPEZY";
    }
    else {
      end = pcVar5 + 2;
      valid_suffixes = "KMGTPEZY0";
      *(undefined2 *)(pcVar5 + 1) = 0x42;
    }
  }
  sVar1 = xstrtoumax(pcVar2,&end,10,&n,valid_suffixes);
  if (((sVar1 == LONGINT_OK) && (*end == '\0')) && (n != 0)) {
    rpl_free(pcVar4);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return n;
    }
  }
  else {
    rpl_free(pcVar4);
    pcVar2 = quote(n_string);
    uVar3 = dcgettext(0,"invalid unit size: %s",5);
    error(1,0,uVar3,pcVar2);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

