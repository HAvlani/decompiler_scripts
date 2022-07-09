
int savewd_errno(savewd_conflict2 *wd)

{
  if (wd->state != ERROR_STATE) {
    return 0;
  }
  return wd->val;
}

