
int format_user_width(uid_t u)

{
  int iVar1;
  char *string;
  
  if (numeric_ids == false) {
    string = getuser(u);
    if (string != (char *)0x0) {
      iVar1 = gnu_mbswidth(string,0);
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      return iVar1;
    }
  }
  iVar1 = __snprintf_chk(0,0,1,0xffffffffffffffff,&DAT_00118ac3,u);
  return iVar1;
}

