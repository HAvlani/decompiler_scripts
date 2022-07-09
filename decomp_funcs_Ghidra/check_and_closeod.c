
_Bool check_and_close(int in_errno)

{
  _Bool _Var1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  
  _Var1 = true;
  if (in_stream == (FILE *)0x0) goto LAB_00104a2e;
  if ((*(byte *)&in_stream->_flags & 0x20) == 0) {
    in_errno = 0;
  }
  if ((*file_list[-1] == '-') && (file_list[-1][1] == '\0')) {
    clearerr_unlocked((FILE *)in_stream);
LAB_00104a1a:
    _Var1 = true;
    if (in_errno != 0) goto LAB_00104a88;
  }
  else {
    iVar2 = rpl_fclose(in_stream);
    if (iVar2 == 0) goto LAB_00104a1a;
    if (in_errno == 0) {
      piVar3 = __errno_location();
      in_errno = *piVar3;
      goto LAB_00104a1a;
    }
LAB_00104a88:
    uVar4 = quotearg_n_style_colon(0,3,input_filename);
    error(0,in_errno,&DAT_0010d81b,uVar4);
    _Var1 = false;
  }
  in_stream = (FILE *)0x0;
LAB_00104a2e:
  if ((*stdout & 0x20) == 0) {
    return _Var1;
  }
  uVar4 = dcgettext(0,"write error",5);
  error(0,0,uVar4);
  return false;
}

