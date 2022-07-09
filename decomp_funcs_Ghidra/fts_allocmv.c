
FTSENT * fts_alloc(FTS *sp,char *name,size_t namelen)

{
  char *pcVar1;
  FTSENT *pFVar2;
  
  pFVar2 = (FTSENT *)malloc(namelen + 0x108 & 0xfffffffffffffff8);
  if (pFVar2 != (FTSENT *)0x0) {
    memcpy(pFVar2 + 1,name,namelen);
    pcVar1 = sp->fts_path;
    *(undefined *)((long)pFVar2[1].fts_statp + (namelen - 0x70)) = 0;
    pFVar2->fts_namelen = namelen;
    pFVar2->fts_fts = sp;
    pFVar2->fts_path = pcVar1;
    pFVar2->fts_errno = 0;
    pFVar2->fts_dirp = (DIR *)0x0;
    *(undefined4 *)&pFVar2->fts_flags = 0x30000;
    pFVar2->fts_number = 0;
    pFVar2->fts_pointer = (void *)0x0;
  }
  return pFVar2;
}

