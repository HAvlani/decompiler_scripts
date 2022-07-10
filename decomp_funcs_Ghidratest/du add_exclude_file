
int add_exclude_file(anon_subr_void_exclude_ptr_char_ptr_int *add_func,exclude *ex,char *file_name,
                    int options,char line_end)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FILE *fp;
  int *piVar4;
  anon_subr_void_exclude_ptr_char_ptr_int *local_30 [2];
  
  local_30[0] = add_func;
  if ((*file_name == '-') && (file_name[1] == '\0')) {
    iVar1 = add_exclude_fp(call_addfn,ex,stdin,options,line_end,local_30);
    return iVar1;
  }
  fp = fopen(file_name,"re");
  if (fp != (FILE *)0x0) {
    iVar2 = add_exclude_fp(call_addfn,ex,(FILE *)fp,options,line_end,local_30);
    piVar4 = __errno_location();
    iVar1 = *piVar4;
    iVar3 = rpl_fclose((FILE *)fp);
    if (iVar3 == 0) {
      *piVar4 = iVar1;
      return iVar2;
    }
  }
  return -1;
}

