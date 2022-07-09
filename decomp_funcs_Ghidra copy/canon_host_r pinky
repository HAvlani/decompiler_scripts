
char * canon_host_r(char *host,int *cherror)

{
  addrinfo *__ai;
  int iVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  addrinfo *res;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  res = (addrinfo *)0x0;
  canon_host_r::hints.ai_flags = 2;
  iVar1 = getaddrinfo(host,(char *)0x0,(addrinfo *)&canon_host_r::hints,(addrinfo **)&res);
  __ai = res;
  if (iVar1 == 0) {
    pcVar2 = res->ai_canonname;
    if (res->ai_canonname == (char *)0x0) {
      pcVar2 = host;
    }
    pcVar2 = strdup(pcVar2);
    if ((pcVar2 == (char *)0x0) && (cherror != (int *)0x0)) {
      *cherror = -10;
    }
    freeaddrinfo((addrinfo *)__ai);
  }
  else {
    pcVar2 = (char *)0x0;
    if (cherror != (int *)0x0) {
      *cherror = iVar1;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

