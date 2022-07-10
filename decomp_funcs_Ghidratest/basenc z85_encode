
void z85_encode(char *in,idx_t inlen,char *out,idx_t outlen)

{
  uchar uVar1;
  int iVar2;
  undefined8 uVar3;
  char *out_00;
  char *pcVar4;
  idx_t inlen_00;
  ulong uVar5;
  char *pcVar6;
  uchar *puVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  bool bVar10;
  uchar quad [4];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (inlen != 0) {
    quad[0] = *in;
    puVar7 = (uchar *)(in + 1);
    lVar9 = 0;
    iVar2 = 1;
    while ((uchar *)(in + inlen) != puVar7) {
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      quad[iVar2] = uVar1;
      bVar10 = iVar2 == 3;
      iVar2 = iVar2 + 1;
      if (bVar10) {
        uVar5 = (ulong)quad[3] +
                (ulong)quad[0] * 0x1000000 + (long)(int)((uint)quad[1] << 0x10) +
                (long)(int)((uint)quad[2] << 8);
        lVar8 = lVar9 + 4;
        do {
          if (lVar8 < outlen) {
            out[lVar8 - lVar9] =
                 "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ.-:+=^!/*?&<>()[]{}@%$#"
                 [(int)uVar5 + (int)(uVar5 / 0x55) * -0x55];
          }
          bVar10 = lVar8 != lVar9;
          uVar5 = uVar5 / 0x55;
          lVar8 = lVar8 + -1;
        } while (bVar10);
        out = out + 5;
        lVar9 = lVar9 + 5;
        iVar2 = 0;
      }
    }
    if (iVar2 != 0) {
      uVar3 = dcgettext(0,"invalid input (length must be multiple of 4 characters)",5);
      inlen_00 = 0;
      pcVar6 = (char *)0x1;
      error(1,0,uVar3);
      base32_encode(pcVar6,inlen_00,out_00,outlen);
      if (outlen != 0) {
        pcVar6 = out_00;
        do {
          if (0x28 < (byte)(*pcVar6 - 0x32U)) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("0x32 <= *p && *p <= 0x5a","src/basenc.c",0x1c4,"base32hex_encode");
          }
          pcVar4 = pcVar6 + 1;
          *pcVar6 = "QRSTUV89:;<=>?@0123456789ABCDEFGHIJKLMNOP9.1"[*pcVar6 + -0x32];
          pcVar6 = pcVar4;
        } while (pcVar4 != out_00 + outlen);
      }
      return;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

