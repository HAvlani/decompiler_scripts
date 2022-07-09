
void print_lineno(void)

{
  undefined8 uVar1;
  
  if (line_no_overflow == false) {
    __printf_chk(1,lineno_format,lineno_width,line_no,separator_str);
    if (SCARRY8(page_incr,line_no)) {
      line_no_overflow = true;
    }
    line_no = page_incr + line_no;
    return;
  }
  uVar1 = dcgettext(0,"line number overflow",5);
                    /* WARNING: Subroutine does not return */
  error(1,0,uVar1);
}

