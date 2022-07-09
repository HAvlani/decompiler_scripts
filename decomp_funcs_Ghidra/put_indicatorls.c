
/* WARNING: Unknown calling convention yet parameter storage is locked */

void put_indicator(void)

{
  __pid_t _Var1;
  void **in_RSI;
  size_t *in_RDI;
  
  if (used_color == false) {
    used_color = true;
    _Var1 = tcgetpgrp(1);
    if (_Var1 < 0) {
      prep_non_filename_text();
    }
    else {
      signal_setup(true);
      prep_non_filename_text();
    }
  }
  fwrite_unlocked(*in_RSI,*in_RDI,1,stdout);
  return;
}

