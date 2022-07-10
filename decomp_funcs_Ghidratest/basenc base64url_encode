
void base64url_encode(char *in,idx_t inlen,char *out,idx_t outlen)

{
  char *pcVar1;
  
  base64_encode(in,inlen,out,outlen);
  if (outlen != 0) {
    pcVar1 = out + outlen;
    do {
      while (*out == '+') {
        *out = '-';
        out = out + 1;
        if (pcVar1 == out) {
          return;
        }
      }
      if (*out == '/') {
        *out = '_';
      }
      out = out + 1;
    } while (pcVar1 != out);
  }
  return;
}

