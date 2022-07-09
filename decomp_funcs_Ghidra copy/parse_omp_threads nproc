
ulong parse_omp_threads(char *threads)

{
  int iVar1;
  ulong uVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  char *endptr;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = *threads;
  iVar1 = (int)cVar3;
  if (cVar3 != '\0') {
    if ('\r' < cVar3) goto LAB_00102e40;
    while ('\b' < (char)iVar1) {
      while( true ) {
        cVar3 = threads[1];
        iVar1 = (int)cVar3;
        threads = threads + 1;
        if (cVar3 == '\0') goto LAB_00102e13;
        if (cVar3 < '\x0e') break;
LAB_00102e40:
        if ((char)iVar1 != ' ') {
          if (9 < iVar1 - 0x30U) goto LAB_00102e13;
          endptr = (char *)0x0;
          uVar2 = strtoul(threads,&endptr,10);
          if (endptr == (char *)0x0) goto LAB_00102e13;
          cVar3 = *endptr;
          if (cVar3 == '\0') goto LAB_00102e15;
          pcVar4 = endptr + 1;
          if ('\r' < cVar3) goto LAB_00102e93;
          goto LAB_00102e7a;
        }
      }
    }
  }
LAB_00102e13:
  uVar2 = 0;
LAB_00102e15:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
LAB_00102e7a:
  pcVar5 = pcVar4;
  if (cVar3 < '\t') goto LAB_00102e13;
  while( true ) {
    cVar3 = *pcVar5;
    pcVar4 = pcVar5 + 1;
    endptr = pcVar5;
    if (cVar3 == '\0') goto LAB_00102e15;
    if (cVar3 < '\x0e') break;
LAB_00102e93:
    pcVar5 = pcVar4;
    if (cVar3 != ' ') {
      if (cVar3 != ',') goto LAB_00102e13;
      goto LAB_00102e15;
    }
  }
  goto LAB_00102e7a;
}

