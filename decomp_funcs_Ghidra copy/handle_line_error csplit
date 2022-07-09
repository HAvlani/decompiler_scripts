
void handle_line_error(intmax_t repetition,control *p)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char acStack72 [24];
  undefined8 local_30;
  
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  pcVar1 = imaxtostr(repetition,acStack72);
  pcVar2 = quote(pcVar1);
  pcVar1 = program_name;
  uVar3 = dcgettext(0,"%s: %s: line number out of range",5);
  __fprintf_chk(stderr,1,uVar3,pcVar1,pcVar2);
  if (p == (control *)0x0) {
    fputc(10,stderr);
  }
  else {
    pcVar1 = imaxtostr((intmax_t)p,acStack72);
    uVar3 = dcgettext(0," on repetition %s\n",5);
    __fprintf_chk(stderr,1,uVar3,pcVar1);
  }
                    /* WARNING: Subroutine does not return */
  cleanup_fatal();
}

