
void re_string_destruct(re_string_t *pstr)

{
  rpl_free(pstr->wcs);
  rpl_free(pstr->offsets);
  if (pstr->mbs_allocated == '\0') {
    return;
  }
  rpl_free(pstr->mbs);
  return;
}

