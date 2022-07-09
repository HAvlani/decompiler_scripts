
void base16_encode(char *in,idx_t inlen,char *out,idx_t outlen)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  
  if (inlen != 0) {
    pbVar1 = (byte *)(in + inlen);
    do {
      bVar2 = *in;
      in = (char *)((byte *)in + 1);
      cVar3 = "0123456789ABCDEF"[bVar2 & 0xf];
      *out = "0123456789ABCDEF"[bVar2 >> 4];
      out[1] = cVar3;
      out = out + 2;
    } while ((byte *)in != pbVar1);
  }
  return;
}

