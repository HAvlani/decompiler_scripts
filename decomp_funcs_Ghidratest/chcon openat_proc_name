
char * openat_proc_name(char *buf,int fd,char *file)

{
  long lVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  long in_FS_OFFSET;
  char dotdot_buf [32];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*file == '\0') {
    *buf = '\0';
    goto LAB_00109e3a;
  }
  if (openat_proc_name::lexical_block_0::proc_status == 0) {
    iVar2 = open("/proc/self/fd",0x90900);
    if (iVar2 < 0) {
      openat_proc_name::lexical_block_0::proc_status = -1;
      buf = (char *)0x0;
      goto LAB_00109e3a;
    }
    __sprintf_chk(dotdot_buf,1,0x20,"/proc/self/fd/%d/../fd",iVar2);
    iVar3 = access(dotdot_buf,0);
    openat_proc_name::lexical_block_0::proc_status = (-(uint)(iVar3 == 0) & 2) - 1;
    close(iVar2);
  }
  if (openat_proc_name::lexical_block_0::proc_status < 0) {
LAB_00109e6d:
    buf = (char *)0x0;
  }
  else {
    sVar4 = strlen(file);
    if (0xfc0 < sVar4 + 0x1b) {
      buf = (char *)malloc(sVar4 + 0x1b);
      if (buf == (char *)0x0) goto LAB_00109e6d;
    }
    iVar2 = __sprintf_chk(buf,1,0xffffffffffffffff,"/proc/self/fd/%d/",fd);
    strcpy(buf + iVar2,file);
  }
LAB_00109e3a:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return buf;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

