
char * logical_getcwd(void)

{
  char cVar1;
  long lVar2;
  int iVar3;
  char *__filename;
  char *pcVar4;
  long in_FS_OFFSET;
  stat st1;
  stat st2;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  __filename = getenv("PWD");
  if ((__filename != (char *)0x0) && (pcVar4 = __filename, *__filename == '/')) {
    while (pcVar4 = strstr(pcVar4,"/."), pcVar4 != (char *)0x0) {
      cVar1 = pcVar4[2];
      if (((cVar1 == '\0') || (cVar1 == '/')) ||
         ((cVar1 == '.' && ((pcVar4[3] == '\0' || (pcVar4[3] == '/')))))) goto LAB_00102eb0;
      pcVar4 = pcVar4 + 1;
    }
    iVar3 = __xstat(1,__filename,(stat *)&st1);
    if ((((iVar3 == 0) && (iVar3 = __xstat(1,".",(stat *)&st2), iVar3 == 0)) &&
        (st1.st_ino == st2.st_ino)) && (st1.st_dev == st2.st_dev)) goto LAB_00102eb3;
  }
LAB_00102eb0:
  __filename = (char *)0x0;
LAB_00102eb3:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return __filename;
}

