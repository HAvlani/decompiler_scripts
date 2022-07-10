
_Bool set_process_security_ctx
                (char *src_name,char *dst_name,mode_t mode,_Bool new_dst,cp_options *x)

{
  int *piVar1;
  char *pcVar2;
  undefined8 uVar3;
  byte bVar4;
  _Bool _Var5;
  
  if (x->preserve_security_context != false) {
    piVar1 = __errno_location();
    if ((x->data_copy_required == false) ||
       (bVar4 = x->require_preserve_context, (_Bool)bVar4 != false)) {
      *piVar1 = 0x5f;
      pcVar2 = quotearg_style(shell_escape_always_quoting_style,src_name);
      uVar3 = dcgettext(0,"failed to get security context of %s",5);
      error(0,*piVar1,uVar3,pcVar2);
      bVar4 = x->require_preserve_context;
    }
    else {
      *piVar1 = 0x5f;
    }
    return (_Bool)(bVar4 ^ 1);
  }
  _Var5 = (_Bool)(x->set_security_context != (selabel_handle *)0x0 & new_dst);
  if (_Var5 == false) {
    return true;
  }
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return _Var5;
}

