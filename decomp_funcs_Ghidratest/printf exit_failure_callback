
long exit_failure_callback(uint code,char *msg,void *callback_arg)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (msg != (char *)0x0) {
    uVar1 = dcgettext(0,msg,5);
    uVar2 = dcgettext(0,"cannot convert U+%04X to local character set: %s",5);
    error(1,0,uVar2,code,uVar1);
    return -1;
  }
  uVar1 = dcgettext(0,"cannot convert U+%04X to local character set",5);
  error(1,0,uVar1,code);
  return -1;
}

