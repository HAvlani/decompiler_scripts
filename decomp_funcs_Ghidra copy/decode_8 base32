
_Bool decode_8(char *in,idx_t inlen,char **outp,idx_t *outleft)

{
  char cVar1;
  char cVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (inlen < 8) {
    return false;
  }
  if (b32[(byte)*in] < '\0') {
    return false;
  }
  cVar1 = b32[(byte)in[1]];
  if (cVar1 < '\0') {
    return false;
  }
  pbVar3 = (byte *)*outp;
  pbVar4 = pbVar3;
  if (*outleft != 0) {
    pbVar4 = pbVar3 + 1;
    *pbVar3 = b32[(byte)*in] << 3 | cVar1 >> 2;
    *outleft = *outleft + -1;
  }
  if (in[2] == 0x3d) {
    if ((in[3] != '=') || (in[4] != '=')) goto LAB_0010359c;
LAB_001035d0:
    if (in[5] != '=') goto LAB_0010359c;
  }
  else {
    if ((b32[(byte)in[2]] < '\0') || (cVar2 = b32[(byte)in[3]], cVar2 < '\0')) goto LAB_0010359c;
    pbVar3 = pbVar4;
    if (*outleft != 0) {
      pbVar3 = pbVar4 + 1;
      *pbVar4 = cVar1 << 6 | b32[(byte)in[2]] * '\x02' | cVar2 >> 4;
      *outleft = *outleft + -1;
    }
    pbVar4 = pbVar3;
    if (in[4] == 0x3d) goto LAB_001035d0;
    cVar1 = b32[(byte)in[4]];
    if (cVar1 < '\0') goto LAB_0010359c;
    if (*outleft != 0) {
      pbVar4 = pbVar3 + 1;
      *pbVar3 = cVar2 << 4 | cVar1 >> 1;
      *outleft = *outleft + -1;
    }
    if (in[5] != 0x3d) {
      if ((b32[(byte)in[5]] < '\0') || (cVar2 = b32[(byte)in[6]], cVar2 < '\0')) goto LAB_0010359c;
      pbVar3 = pbVar4;
      if (*outleft != 0) {
        pbVar3 = pbVar4 + 1;
        *pbVar4 = cVar1 << 7 | b32[(byte)in[5]] << 2 | cVar2 >> 3;
        *outleft = *outleft + -1;
      }
      pbVar4 = pbVar3;
      if (in[7] != 0x3d) {
        if (b32[(byte)in[7]] < '\0') goto LAB_0010359c;
        if (*outleft != 0) {
          pbVar4 = pbVar3 + 1;
          *pbVar3 = cVar2 << 5 | b32[(byte)in[7]];
          *outleft = *outleft + -1;
        }
      }
      goto LAB_00103580;
    }
  }
  if ((in[6] == '=') && (in[7] == '=')) {
LAB_00103580:
    *outp = (char *)pbVar4;
    return true;
  }
LAB_0010359c:
  *outp = (char *)pbVar4;
  return false;
}

