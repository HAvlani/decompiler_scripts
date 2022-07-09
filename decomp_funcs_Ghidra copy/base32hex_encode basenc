
void base32hex_encode(char *in,idx_t inlen,char *out,idx_t outlen)

{
  char *pcVar1;
  char *pcVar2;
  
  base32_encode(in,inlen,out,outlen);
  if (outlen != 0) {
    pcVar1 = out;
    do {
      if (0x28 < (byte)(*pcVar1 - 0x32U)) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("0x32 <= *p && *p <= 0x5a","src/basenc.c",0x1c4,"base32hex_encode");
      }
      pcVar2 = pcVar1 + 1;
      *pcVar1 = "QRSTUV89:;<=>?@0123456789ABCDEFGHIJKLMNOP9.1"[*pcVar1 + -0x32];
      pcVar1 = pcVar2;
    } while (pcVar2 != out + outlen);
  }
  return;
}

