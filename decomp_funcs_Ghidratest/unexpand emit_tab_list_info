
void emit_tab_list_info(void)

{
  char *pcVar1;
  FILE *pFVar2;
  
  pFVar2 = stdout;
  pcVar1 = (char *)dcgettext(0,"  -t, --tabs=LIST  use comma separated list of tab positions.\n",5);
  fputs_unlocked(pcVar1,pFVar2);
  pFVar2 = stdout;
  pcVar1 = (char *)dcgettext(0,
                             "                     The last specified position can be prefixed with \'/\'\n                     to specify a tab size to use after the last\n                     explicitly specified tab stop.  Also a prefix of \'+\'\n                     can be used to align remaining tab stops relative to\n                     the last specified tab stop instead of the first column\n"
                             ,5);
  fputs_unlocked(pcVar1,pFVar2);
  return;
}

