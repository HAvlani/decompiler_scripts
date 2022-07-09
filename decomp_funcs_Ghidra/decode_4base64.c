
_Bool decode_4(char *in,idx_t inlen,char **outp,idx_t *outleft)

{
  char cVar1;
  char cVar2;
  byte *pbVar3;
  _Bool _Var4;
  byte *pbVar5;
  
  _Var4 = false;
  if (((1 < inlen) && (_Var4 = false, -1 < b64[(byte)*in])) &&
     (cVar1 = b64[(byte)in[1]], -1 < cVar1)) {
    pbVar3 = (byte *)*outp;
    pbVar5 = pbVar3;
    if (*outleft != 0) {
      pbVar5 = pbVar3 + 1;
      *pbVar3 = b64[(byte)*in] << 2 | cVar1 >> 4;
      *outleft = *outleft + -1;
    }
    if (inlen == 2) goto LAB_001034f4;
    if (in[2] == 0x3d) {
      if ((inlen != 4) || (in[3] != '=')) goto LAB_001034f4;
    }
    else {
      cVar2 = b64[(byte)in[2]];
      if (cVar2 < '\0') {
LAB_001034f4:
        *outp = (char *)pbVar5;
        return false;
      }
      if (*outleft != 0) {
        *pbVar5 = cVar1 << 4 | cVar2 >> 2;
        *outleft = *outleft + -1;
        pbVar5 = pbVar5 + 1;
      }
      if (inlen == 3) goto LAB_001034f4;
      if (in[3] == 0x3d) {
        if (inlen != 4) goto LAB_001034f4;
      }
      else {
        if (b64[(byte)in[3]] < '\0') goto LAB_001034f4;
        if (*outleft != 0) {
          *pbVar5 = cVar2 << 6 | b64[(byte)in[3]];
          *outleft = *outleft + -1;
          pbVar5 = pbVar5 + 1;
        }
      }
    }
    *outp = (char *)pbVar5;
    _Var4 = true;
  }
  return _Var4;
}

