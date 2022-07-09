
void xalloc_die(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(0,0,"%s",uVar1);
                    /* WARNING: Subroutine does not return */
  cleanup_fatal();
}

