
int blake2b_sum_stream(FILE *stream,void *resstream,uintmax_t *length)

{
  int iVar1;
  
  iVar1 = blake2b_stream(stream,resstream,*length);
  return iVar1;
}

