
void base32_encode(char *in,idx_t inlen,char *out,idx_t outlen)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  idx_t iVar4;
  long lVar5;
  char *pcVar6;
  bool bVar7;
  
  if (outlen != 0) {
    if (inlen == 0) {
      if (outlen != 0) {
        *out = '\0';
      }
    }
    else {
      bVar1 = *in;
      *out = base32_encode::b32str[bVar1 >> 3];
      if (outlen != 1) {
        lVar5 = 0;
        pcVar3 = out;
        iVar4 = outlen;
        do {
          if (inlen + -1 == lVar5) {
            pcVar3[1] = base32_encode::b32str[(uint)bVar1 * 4 & 0x1c];
            if (iVar4 == 2) {
              return;
            }
            pcVar3[2] = '=';
            if (iVar4 == 3) {
              return;
            }
            pcVar3[3] = '=';
            if (iVar4 == 4) {
              return;
            }
LAB_0010464c:
            pcVar3[4] = '=';
joined_r0x00104654:
            if (iVar4 == 5) {
              return;
            }
            pcVar3[5] = '=';
            if (iVar4 == 6) {
              return;
            }
            pcVar3[6] = '=';
joined_r0x00104668:
            if (iVar4 == 7) {
              return;
            }
            pcVar3[7] = '=';
            if (iVar4 == 8) {
              return;
            }
LAB_00104678:
            pcVar3[8] = '\0';
            return;
          }
          bVar2 = in[lVar5 + 1];
          pcVar3[1] = base32_encode::b32str[(uint)bVar1 * 4 + (uint)(bVar2 >> 6) & 0x1f];
          if (iVar4 == 2) {
            return;
          }
          pcVar3[2] = base32_encode::b32str[bVar2 >> 1 & 0x1f];
          if (iVar4 == 3) {
            return;
          }
          if (lVar5 == inlen + -2) {
            pcVar3[3] = base32_encode::b32str[(int)((uint)bVar2 * 0x10 & 0x1f)];
            if (iVar4 == 4) {
              return;
            }
            goto LAB_0010464c;
          }
          bVar1 = in[lVar5 + 2];
          pcVar6 = out + (outlen - (long)pcVar3);
          pcVar3[3] = base32_encode::b32str[(uint)bVar2 * 0x10 + (uint)(bVar1 >> 4) & 0x1f];
          if (pcVar6 == (char *)0x4) {
            return;
          }
          if (lVar5 == inlen + -3) {
            pcVar3[4] = base32_encode::b32str[(uint)bVar1 + (uint)bVar1 & 0x1e];
            goto joined_r0x00104654;
          }
          bVar2 = in[lVar5 + 3];
          pcVar3[4] = base32_encode::b32str[(uint)bVar1 + (uint)bVar1 + (uint)(bVar2 >> 7) & 0x1f];
          if (pcVar6 == (char *)0x5) {
            return;
          }
          pcVar3[5] = base32_encode::b32str[bVar2 >> 2 & 0x1f];
          if (iVar4 == 6) {
            return;
          }
          if (inlen + -4 == lVar5) {
            pcVar3[6] = base32_encode::b32str[(uint)bVar2 * 8 & 0x18];
            goto joined_r0x00104668;
          }
          bVar1 = in[lVar5 + 4];
          pcVar3[6] = base32_encode::b32str[(uint)bVar2 * 8 + (uint)(bVar1 >> 5) & 0x1f];
          if (pcVar6 == (char *)0x7) {
            return;
          }
          pcVar3[7] = base32_encode::b32str[bVar1 & 0x1f];
          if (iVar4 + -8 == 0) {
            return;
          }
          if (inlen + -5 == lVar5) goto LAB_00104678;
          bVar1 = in[lVar5 + 5];
          lVar5 = lVar5 + 5;
          pcVar3[8] = base32_encode::b32str[bVar1 >> 3];
          bVar7 = iVar4 == 9;
          pcVar3 = pcVar3 + 8;
          iVar4 = iVar4 + -8;
          if (bVar7) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}

