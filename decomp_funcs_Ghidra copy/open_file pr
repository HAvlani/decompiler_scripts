
_Bool open_file(char *name,COLUMN *p)

{
  char *pcVar1;
  FILE *fp;
  undefined8 uVar2;
  int *piVar3;
  
  if ((*name == '-') && (name[1] == '\0')) {
    pcVar1 = (char *)dcgettext(0,"standard input",5);
    fp = stdin;
    have_read_stdin = true;
    p->name = pcVar1;
    p->fp = fp;
  }
  else {
    p->name = name;
    fp = fopen_safer(name,"r");
    p->fp = fp;
  }
  if (fp != (FILE *)0x0) {
    fadvise(fp,FADVISE_SEQUENTIAL);
    p->full_page_printed = false;
    p->status = FADVISE_NORMAL;
    total_files = total_files + 1;
    return true;
  }
  failed_opens = true;
  if (ignore_failed_opens == false) {
    uVar2 = quotearg_n_style_colon(0,3,name);
    piVar3 = __errno_location();
    error(0,*piVar3,"%s",uVar2);
    return false;
  }
  failed_opens = true;
  return false;
}

