
void record_file(Hash_table *ht,char *file,stat *stats)

{
  char **entry;
  char *pcVar1;
  char **ppcVar2;
  
  if (ht == (Hash_table *)0x0) {
    return;
  }
  entry = (char **)xmalloc(0x18);
  pcVar1 = xstrdup(file);
  *entry = pcVar1;
  entry[1] = (char *)stats->st_ino;
  entry[2] = (char *)stats->st_dev;
  ppcVar2 = (char **)hash_insert(ht,entry);
  if (ppcVar2 != (char **)0x0) {
    if (entry != ppcVar2) {
      triple_free(entry);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  xalloc_die();
}

