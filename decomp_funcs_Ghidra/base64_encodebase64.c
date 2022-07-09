
void base64_encode(char *in,idx_t inlen,char *out,idx_t outlen)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  long lVar7;
  idx_t iVar8;
  uint uVar9;
  char *pcVar10;
  byte *pbVar11;
  byte *pbVar12;
  bool bVar13;
  
  if (((outlen & 3U) == 0) && (lVar7 = (outlen >> 2) * 3, lVar7 == inlen)) {
    if (lVar7 != 0) {
      pbVar11 = (byte *)in;
      do {
        bVar4 = *pbVar11;
        pbVar12 = pbVar11 + 3;
        *out = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/A NULL argv[0] was passed through an exec system call.\n"
               [bVar4 >> 2];
        bVar5 = pbVar11[1];
        out[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/A NULL argv[0] was passed through an exec system call.\n"
                 [(uint)bVar4 * 0x10 + (uint)(bVar5 >> 4) & 0x3f];
        cVar6 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/A NULL argv[0] was passed through an exec system call.\n"
                [pbVar11[2] & 0x3f];
        out[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/A NULL argv[0] was passed through an exec system call.\n"
                 [(uint)(pbVar11[2] >> 6) + (uint)bVar5 * 4 & 0x3f];
        out[3] = cVar6;
        out = out + 4;
        pbVar11 = pbVar12;
      } while (pbVar12 != (byte *)(in + lVar7));
      return;
    }
  }
  else if (outlen != 0) {
    if (inlen != 0) {
      bVar4 = *in;
      *out = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/A NULL argv[0] was passed through an exec system call.\n"
             [bVar4 >> 2];
      if (outlen == 1) {
        return;
      }
      pcVar1 = in + inlen + -1;
      pcVar2 = in + inlen + -3;
      pcVar3 = in + inlen + -2;
      iVar8 = outlen;
      pcVar10 = out;
      do {
        if (pcVar1 == in) {
          pcVar10[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/A NULL argv[0] was passed through an exec system call.\n"
                       [(uint)bVar4 * 0x10 & 0x30];
          if (iVar8 == 2) {
            return;
          }
          pcVar10[2] = '=';
          if (iVar8 == 3) {
            return;
          }
LAB_00103660:
          pcVar10[3] = '=';
          if (iVar8 == 4) {
            return;
          }
LAB_0010366e:
          pcVar10[4] = '\0';
          return;
        }
        bVar5 = in[1];
        pcVar10[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/A NULL argv[0] was passed through an exec system call.\n"
                     [(uint)bVar4 * 0x10 + (uint)(bVar5 >> 4) & 0x3f];
        if (iVar8 == 2) {
          return;
        }
        uVar9 = (uint)bVar5 * 4;
        if (pcVar3 == in) {
          pcVar10[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/A NULL argv[0] was passed through an exec system call.\n"
                       [uVar9 & 0x3c];
          if (iVar8 == 3) {
            return;
          }
          goto LAB_00103660;
        }
        bVar4 = in[2];
        pcVar10[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/A NULL argv[0] was passed through an exec system call.\n"
                     [uVar9 + (bVar4 >> 6) & 0x3f];
        if (out + (outlen - (long)pcVar10) == (char *)0x3) {
          return;
        }
        pcVar10[3] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/A NULL argv[0] was passed through an exec system call.\n"
                     [bVar4 & 0x3f];
        if (iVar8 + -4 == 0) {
          return;
        }
        if (pcVar2 == in) goto LAB_0010366e;
        bVar4 = in[3];
        in = in + 3;
        pcVar10[4] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/A NULL argv[0] was passed through an exec system call.\n"
                     [bVar4 >> 2];
        bVar13 = iVar8 == 5;
        iVar8 = iVar8 + -4;
        pcVar10 = pcVar10 + 4;
        if (bVar13) {
          return;
        }
      } while( true );
    }
    if (outlen != 0) {
      *out = '\0';
    }
  }
  return;
}

