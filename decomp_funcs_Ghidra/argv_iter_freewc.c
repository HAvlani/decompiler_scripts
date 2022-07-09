
void argv_iter_free(argv_iterator *ai)

{
  if (ai->fp != (FILE *)0x0) {
    rpl_free(ai->tok);
  }
  rpl_free(ai);
  return;
}

