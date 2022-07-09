
void savewd_finish(savewd_conflict2 *wd)

{
  anon_enum_32_conflict2 aVar1;
  
  aVar1 = wd->state;
  if (aVar1 == FADVISE_WILLNEED) {
    if (-1 < (int)wd->val) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("wd->val.child < 0","lib/savewd.c",0xf0,"savewd_finish");
    }
  }
  else if ((uint)aVar1 < 4) {
    if (aVar1 != FADVISE_NORMAL) {
      close(wd->val);
    }
  }
  else if (aVar1 != ERROR_STATE) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0","lib/savewd.c",0xf4,"savewd_finish");
  }
  wd->state = FADVISE_NOREUSE;
  return;
}

