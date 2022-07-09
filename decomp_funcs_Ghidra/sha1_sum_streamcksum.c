
int sha1_sum_stream(FILE *stream,void *resblock)

{
  int iVar1;
  
  iVar1 = sha1_stream(stream,resblock);
  return iVar1;
}

