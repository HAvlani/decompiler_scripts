
_Bool set_increment_size(uintmax_t tabval)

{
  undefined8 uVar1;
  
  if (increment_size == 0) {
    increment_size = tabval;
    return true;
  }
  uVar1 = dcgettext(0,"\'+\' specifier only allowed with the last value",5);
  error(0,0,uVar1);
  increment_size = tabval;
  return false;
}

