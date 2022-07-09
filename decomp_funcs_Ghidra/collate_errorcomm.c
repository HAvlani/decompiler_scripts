
void collate_error(int collation_errno,char *s1,size_t s1len,char *s2,size_t s2len)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = dcgettext(0,"string comparison failed",5);
  error(0,collation_errno,uVar1);
  uVar1 = dcgettext(0,"Set LC_ALL=\'C\' to work around the problem.",5);
  error(0,0,uVar1);
  uVar1 = quotearg_n_style_mem(1,8,s2,s2len);
  uVar2 = quotearg_n_style_mem(0,8,s1,s1len);
  uVar3 = dcgettext(0,"The strings compared were %s and %s.",5);
  error(exit_failure,0,uVar3,uVar2,uVar1);
  return;
}

