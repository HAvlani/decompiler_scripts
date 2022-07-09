
void xalloc_die(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(exit_failure,0,&DAT_0011597f,uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}

