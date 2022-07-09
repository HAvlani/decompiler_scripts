
long fallback_failure_callback(uint code,char *msg,void *callback_arg)

{
  if (code < 0x10000) {
    __fprintf_chk(callback_arg,1,"\\u%04X");
    return -1;
  }
  __fprintf_chk(callback_arg,1,"\\U%08X");
  return -1;
}

