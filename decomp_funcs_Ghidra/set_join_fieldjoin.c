
void set_join_field(size_t *var,size_t val)

{
  size_t sVar1;
  undefined8 uVar2;
  
  sVar1 = *var;
  if ((sVar1 != 0xffffffffffffffff) && (sVar1 != val)) {
    uVar2 = dcgettext(0,"incompatible join fields %lu, %lu",5);
                    /* WARNING: Subroutine does not return */
    error(1,0,uVar2,sVar1 + 1,val + 1);
  }
  *var = val;
  return;
}

