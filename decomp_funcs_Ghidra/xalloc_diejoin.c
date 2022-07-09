
void xalloc_die(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
                    /* WARNING: Subroutine does not return */
  error(exit_failure,0,"%s",uVar1);
}

