
char * remember_copied(char *name,ino_t ino,dev_t dev)

{
  Hash_table *table;
  ino_t *entry;
  char *pcVar1;
  ino_t *piVar2;
  
  entry = (ino_t *)xmalloc(0x18);
  pcVar1 = xstrdup(name);
  table = src_to_dest;
  *entry = ino;
  entry[2] = (ino_t)pcVar1;
  entry[1] = dev;
  piVar2 = (ino_t *)hash_insert(table,entry);
  if (piVar2 != (ino_t *)0x0) {
    pcVar1 = (char *)0x0;
    if (entry != piVar2) {
      rpl_free((void *)entry[2]);
      rpl_free(entry);
      pcVar1 = (char *)piVar2[2];
    }
    return pcVar1;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}

