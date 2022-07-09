
size_t xstrxfrm(char *dest,char *src,size_t destsize)

{
  int *piVar1;
  size_t sVar2;
  undefined8 uVar3;
  
  piVar1 = __errno_location();
  *piVar1 = 0;
  sVar2 = strxfrm(dest,src,destsize);
  if (*piVar1 == 0) {
    return sVar2;
  }
  uVar3 = dcgettext(0,"string transformation failed",5);
                    /* WARNING: Subroutine does not return */
  error(0,*piVar1,uVar3);
}

