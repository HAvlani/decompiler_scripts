
_Bool open_next_file(void)

{
  int *piVar1;
  _Bool _Var2;
  
  _Var2 = true;
  do {
    input_filename = *file_list;
    if (input_filename == (char *)0x0) {
      return _Var2;
    }
    file_list = file_list + 1;
    if ((*input_filename == '-') && (input_filename[1] == '\0')) {
      input_filename = (char *)dcgettext(0,"standard input",5);
      have_read_stdin = true;
      in_stream = stdin;
    }
    else {
      in_stream = (FILE *)fopen(input_filename,"r");
      if ((FILE *)in_stream != (FILE *)0x0) break;
      quotearg_n_style_colon(0,3,input_filename);
      piVar1 = __errno_location();
      _Var2 = false;
      error(0,*piVar1,&DAT_0010d81b);
    }
  } while (in_stream == (FILE *)0x0);
  if ((limit_bytes_to_format != false) && (flag_dump_strings == false)) {
    setvbuf((FILE *)in_stream,(char *)0x0,2,0);
  }
  return _Var2;
}

