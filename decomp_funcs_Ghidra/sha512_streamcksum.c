
int sha512_stream(FILE *stream,void *resblock)

{
  int iVar1;
  ssize_t in_R8;
  char *in_R9;
  
  iVar1 = shaxxx_stream(stream,resblock,sha512_init_ctx,sha512_finish_ctx,in_R8,in_R9);
  return iVar1;
}

