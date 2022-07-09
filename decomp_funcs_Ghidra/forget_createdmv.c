
void forget_created(ino_t ino,dev_t dev)

{
  long lVar1;
  void *p;
  long in_FS_OFFSET;
  Src_to_dest probe;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  probe.name = (char *)0x0;
  probe.st_ino = ino;
  probe.st_dev = dev;
  p = hash_remove(src_to_dest,&probe);
  if (p != (void *)0x0) {
    rpl_free(*(void **)((long)p + 0x10));
    rpl_free(p);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

