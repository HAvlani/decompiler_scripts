
void digest_word_file(char *file_name,WORD_TABLE *table)

{
  long lVar1;
  WORD *p;
  char *pcVar2;
  size_t sVar3;
  size_t __nmemb;
  long in_FS_OFFSET;
  BLOCK file_contents;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  swallow_file_in_memory();
  p = (WORD *)0x0;
  table->start = (WORD *)0x0;
  __nmemb = 0;
  table->alloc = 0;
  table->length = 0;
  sVar3 = __nmemb;
  pcVar2 = file_contents.start;
  if (file_contents.end <= file_contents.start) {
LAB_00106977:
    qsort(p,__nmemb,0x10,compare_words);
    if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
LAB_00106938:
  do {
    if (*file_contents.start != '\n') {
      file_contents.start = file_contents.start + 1;
      if (file_contents.start < file_contents.end) goto LAB_00106938;
    }
    __nmemb = sVar3;
    if (pcVar2 < file_contents.start) {
      if (table->alloc == sVar3) {
        p = (WORD *)x2nrealloc(p,&table->alloc,0x10);
        sVar3 = table->length;
        table->start = p;
      }
      __nmemb = sVar3 + 1;
      p[sVar3].start = pcVar2;
      p[sVar3].size = (ptrdiff_t)(file_contents.start + -(long)pcVar2);
      table->length = __nmemb;
    }
    if ((file_contents.end <= file_contents.start) ||
       (file_contents.start = file_contents.start + 1, sVar3 = __nmemb, pcVar2 = file_contents.start
       , file_contents.end <= file_contents.start)) goto LAB_00106977;
  } while( true );
}

