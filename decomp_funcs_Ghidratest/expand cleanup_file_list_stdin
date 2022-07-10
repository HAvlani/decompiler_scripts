
void cleanup_file_list_stdin(void)

{
  FILE *pFVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  
  if (have_read_stdin == false) {
    return;
  }
  iVar2 = rpl_fclose(stdin);
  if (iVar2 == 0) {
    return;
  }
  piVar3 = __errno_location();
  error(1,*piVar3,&DAT_00107748);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  -t, --tabs=LIST  use comma separated list of tab positions.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "                     The last specified position can be prefixed with \'/\'\n                     to specify a tab size to use after the last\n                     explicitly specified tab stop.  Also a prefix of \'+\'\n                     can be used to align remaining tab stops relative to\n                     the last specified tab stop instead of the first column\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  return;
}

