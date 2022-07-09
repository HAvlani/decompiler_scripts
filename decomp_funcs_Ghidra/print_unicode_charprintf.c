
void print_unicode_char(FILE *stream,uint code,int exit_on_error)

{
  code *failure;
  
  failure = exit_failure_callback;
  if (exit_on_error == 0) {
    failure = fallback_failure_callback;
  }
  unicode_to_mb(code,fwrite_success_callback,failure,stream);
  return;
}

