
/* WARNING: Unknown calling convention yet parameter storage is locked */

void check_order(void)

{
  int iVar1;
  undefined8 uVar2;
  char **in_RCX;
  long *in_RDX;
  char **in_RSI;
  long *in_RDI;
  int in_R8D;
  
  if (issued_disorder_warning[in_R8D + -1] == false) {
    if (hard_LC_COLLATE == false) {
      iVar1 = memcmp2(*in_RSI,*in_RDI - 1U,*in_RCX,*in_RDX - 1U);
    }
    else {
      iVar1 = xmemcoll(*in_RSI,*in_RDI - 1U,*in_RCX,*in_RDX - 1U);
    }
    if (0 < iVar1) {
      uVar2 = dcgettext(0,"file %d is not in sorted order",5);
      error(check_input_order == CHECK_ORDER_ENABLED,0,uVar2,in_R8D);
      issued_disorder_warning[in_R8D + -1] = true;
    }
  }
  return;
}

