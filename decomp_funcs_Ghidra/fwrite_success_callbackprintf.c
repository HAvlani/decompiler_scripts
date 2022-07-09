
long fwrite_success_callback(char *buf,size_t buflen,void *callback_arg)

{
  fwrite(buf,1,buflen,(FILE *)callback_arg);
  return 0;
}

