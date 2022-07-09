
void verror_at_line(int status,int errnum,char *file,uint line_number,char *format,
                   __va_list_tag *args)

{
  char *p;
  undefined8 uVar1;
  int *piVar2;
  
  p = xvasprintf(format,args);
  if (p != (char *)0x0) {
    if (file == (char *)0x0) {
      error(status,errnum,"%s",p);
    }
    else {
      error_at_line(status,errnum,file,line_number,"%s",p);
    }
    rpl_free(p);
    return;
  }
  uVar1 = dcgettext(0,"unable to display error message",5);
  piVar2 = __errno_location();
  error(0,*piVar2,uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}

