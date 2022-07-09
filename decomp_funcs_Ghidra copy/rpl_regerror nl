
ulong rpl_regerror(uint param_1,undefined8 param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  char *__s;
  size_t sVar2;
  
  if (param_1 < 0x11) {
    __s = (char *)dcgettext(0,"Success" + __re_error_msgid_idx[(int)param_1],5);
    sVar2 = strlen(__s);
    uVar1 = sVar2 + 1;
    if (param_4 != 0) {
      sVar2 = uVar1;
      if (param_4 < uVar1) {
        *(undefined *)((long)param_3 + (param_4 - 1)) = 0;
        sVar2 = param_4 - 1;
      }
      memcpy(param_3,__s,sVar2);
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

