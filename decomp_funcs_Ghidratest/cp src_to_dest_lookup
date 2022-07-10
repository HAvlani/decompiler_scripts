
char * src_to_dest_lookup(ino_t ino,dev_t dev)

{
  long lVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  Src_to_dest ent;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ent.st_ino = ino;
  ent.st_dev = dev;
  pcVar2 = (char *)hash_lookup(src_to_dest,&ent);
  if (pcVar2 != (char *)0x0) {
    pcVar2 = *(char **)(pcVar2 + 0x10);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

