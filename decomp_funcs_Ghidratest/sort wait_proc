
void wait_proc(pid_t pid)

{
  long lVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  tempnode test;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  test.pid = pid;
  pvVar2 = hash_remove(proctab,&test);
  if (pvVar2 != (void *)0x0) {
    *(undefined *)((long)pvVar2 + 0xc) = 2;
    reap(pid);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

