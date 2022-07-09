
void argmatch_invalid(char *context,char *value,ptrdiff_t problem)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  if (problem == -1) {
    uVar1 = dcgettext(0,"invalid argument %s for %s",5);
  }
  else {
    uVar1 = dcgettext(0,"ambiguous argument %s for %s",5);
  }
  pcVar2 = quote_n(1,context);
  uVar3 = quotearg_n_style(0,8,value);
                    /* WARNING: Subroutine does not return */
  error(0,0,uVar1,uVar3,pcVar2);
}

