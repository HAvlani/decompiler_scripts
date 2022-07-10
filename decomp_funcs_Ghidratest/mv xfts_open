
FTS * xfts_open(char **argv,int options,anon_subr_int_FTSENT_ptr_ptr_FTSENT_ptr_ptr *compar)

{
  FTS *pFVar1;
  int *piVar2;
  
  pFVar1 = rpl_fts_open(argv,options | 0x200,compar);
  if (pFVar1 != (FTS *)0x0) {
    return pFVar1;
  }
  piVar2 = __errno_location();
  if (*piVar2 != 0x16) {
                    /* WARNING: Subroutine does not return */
    xalloc_die();
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("errno != EINVAL","lib/xfts.c",0x29,"xfts_open");
}

