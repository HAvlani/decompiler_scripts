
void sort_die(char *message,char *file)

{
  undefined8 uVar1;
  int *piVar2;
  
  if (file == (char *)0x0) {
    file = (char *)dcgettext(0,"standard output",5);
  }
  uVar1 = quotearg_n_style_colon(0,3,file);
  piVar2 = __errno_location();
                    /* WARNING: Subroutine does not return */
  error(2,*piVar2,"%s: %s",message,uVar1);
}

