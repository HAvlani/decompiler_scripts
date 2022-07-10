
_Bool set_file_security_ctx(char *dst_name,_Bool recurse,cp_options *x)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  piVar1 = __errno_location();
  if ((x->data_copy_required != false) && (x->require_preserve_context == false)) {
    *piVar1 = 0x5f;
    return false;
  }
  *piVar1 = 0x5f;
  uVar2 = quotearg_n_style(0,4,dst_name);
  uVar3 = dcgettext(0,"failed to set the security context of %s",5);
  error(0,*piVar1,uVar3,uVar2);
  return false;
}

