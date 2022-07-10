
void rpl_regfree(regex_t *preg)

{
  re_dfa_t *dfa;
  
  dfa = preg->buffer;
  if (dfa != (re_dfa_t *)0x0) {
    if ((PTR_thrd_exit_00124fe0 != (undefined *)0x0) ||
       (PTR_pthread_mutexattr_gettype_00124ff0 != (undefined *)0x0)) {
      pthread_mutex_destroy((pthread_mutex_t *)&dfa->lock);
    }
    free_dfa_content(dfa);
  }
  preg->buffer = (re_dfa_t *)0x0;
  preg->allocated = 0;
  rpl_free(preg->fastmap);
  preg->fastmap = (char *)0x0;
  rpl_free(preg->translate);
  preg->translate = (uchar *)0x0;
  return;
}

