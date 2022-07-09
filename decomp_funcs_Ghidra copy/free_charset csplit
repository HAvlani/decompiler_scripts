
void free_charset(re_charset_t *cset)

{
  rpl_free(cset->mbchars);
  rpl_free(cset->range_starts);
  rpl_free(cset->range_ends);
  rpl_free(cset->char_classes);
  rpl_free(cset);
  return;
}

