
void base2lsbf_encode(char *in,idx_t inlen,char *out,idx_t outlen)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  byte *pbVar4;
  char *pcVar5;
  
  if (inlen != 0) {
    pcVar5 = out + 8;
    pbVar4 = (byte *)(in + inlen);
    do {
      pcVar1 = pcVar5 + -8;
      bVar3 = *in;
      do {
        pcVar2 = pcVar1 + 1;
        *pcVar1 = (bVar3 & 1) + 0x30;
        pcVar1 = pcVar2;
        bVar3 = bVar3 >> 1;
      } while (pcVar2 != pcVar5);
      in = (char *)((byte *)in + 1);
      pcVar5 = pcVar5 + 8;
    } while (pbVar4 != (byte *)in);
  }
  return;
}

