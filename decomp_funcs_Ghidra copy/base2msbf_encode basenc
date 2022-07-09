
void base2msbf_encode(char *in,idx_t inlen,char *out,idx_t outlen)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (inlen != 0) {
    pcVar5 = out + 8;
    pcVar4 = in + inlen;
    do {
      pcVar1 = pcVar5 + -8;
      cVar3 = *in;
      do {
        pcVar2 = pcVar1 + 1;
        *pcVar1 = '0' - (cVar3 >> 7);
        pcVar1 = pcVar2;
        cVar3 = cVar3 * '\x02';
      } while (pcVar2 != pcVar5);
      in = in + 1;
      pcVar5 = pcVar5 + 8;
    } while (in != pcVar4);
  }
  return;
}

