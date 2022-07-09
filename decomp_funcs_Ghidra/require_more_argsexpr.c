
void require_more_args(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*args != (char *)0x0) {
    return;
  }
  uVar1 = quotearg_n_style(0,8,args[-1]);
  uVar2 = dcgettext(0,"syntax error: missing argument after %s",5);
                    /* WARNING: Subroutine does not return */
  error(2,0,uVar2,uVar1);
}

