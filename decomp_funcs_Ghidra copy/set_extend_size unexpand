
_Bool set_extend_size(uintmax_t tabval)

{
  undefined8 uVar1;
  
  if (extend_size == 0) {
    extend_size = tabval;
    return true;
  }
  uVar1 = dcgettext(0,"\'/\' specifier only allowed with the last value",5);
  error(0,0,uVar1);
  extend_size = tabval;
  return false;
}

