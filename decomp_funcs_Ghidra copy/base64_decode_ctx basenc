
_Bool base64_decode_ctx(base64_decode_context *ctx,char *in,idx_t inlen,char *out,idx_t *outlen)

{
  char cVar1;
  bool bVar2;
  undefined uVar3;
  _Bool _Var4;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  char **outp;
  char **extraout_RDX;
  char *pcVar9;
  char *in_00;
  char *inlen_00;
  bool bVar10;
  char *pcVar11;
  idx_t iVar12;
  long in_FS_OFFSET;
  bool bVar13;
  bool bVar14;
  bool local_5f;
  _Bool ignore_newlines;
  char *local_50;
  idx_t outleft;
  long local_40;
  
  outleft = *outlen;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar13 = ctx == (base64_decode_context *)0x0;
  if (bVar13) {
    bVar10 = true;
  }
  else {
    bVar10 = ctx->i == 0 && inlen != 0;
  }
  bVar2 = inlen != 0;
  local_5f = bVar13 || bVar2;
  lVar8 = outleft;
  local_50 = out;
  while( true ) {
    in_00 = in;
    inlen_00 = (char *)inlen;
    iVar12 = lVar8;
    if (bVar10) {
      outp = &local_50;
      while( true ) {
        inlen_00 = in + (inlen - (long)in_00);
        _Var4 = decode_4(in_00,(idx_t)inlen_00,outp,&outleft);
        lVar8 = outleft;
        if (_Var4 == false) break;
        in_00 = in_00 + 4;
        outp = extraout_RDX;
        iVar12 = outleft;
      }
    }
    uVar3 = inlen_00 == (char *)0x0 && local_5f;
    if ((bool)uVar3) goto LAB_00105050;
    pcVar9 = in_00;
    if (inlen_00 == (char *)0x0) break;
    if (*in_00 == '\n') {
      if (ctx == (base64_decode_context *)0x0) {
        pcVar11 = in_00 + (long)inlen_00;
        local_50 = local_50 + -(iVar12 - lVar8);
        outleft = iVar12;
        goto LAB_0010502c;
      }
      in = in_00 + 1;
      inlen = (idx_t)(inlen_00 + -1);
    }
    else {
      pcVar11 = in_00 + (long)inlen_00;
      local_50 = local_50 + -(iVar12 - lVar8);
      in = in_00;
      outleft = iVar12;
      if (ctx != (base64_decode_context *)0x0) {
        iVar5 = ctx->i;
        uVar7 = (ulong)iVar5;
        if (iVar5 == 4) goto LAB_001050e8;
        bVar14 = iVar5 == 0;
LAB_001050f6:
        outleft = iVar12;
        if ((3 < (long)inlen_00) && (bVar14)) {
          pvVar6 = memchr(in_00,10,4);
          uVar7 = (ulong)(int)uVar7;
          if (pvVar6 == (void *)0x0) {
            inlen_00 = (char *)0x4;
            in = in_00 + 4;
            goto LAB_00104fb9;
          }
        }
        if (in_00 < pcVar11) {
          do {
            cVar1 = *in_00;
            in_00 = in_00 + 1;
            if (cVar1 != '\n') {
              iVar5 = (int)uVar7 + 1;
              ctx->i = iVar5;
              ctx->buf[uVar7] = cVar1;
              if (iVar5 == 4) {
                uVar7 = 4;
                pcVar9 = in_00;
                break;
              }
              uVar7 = (ulong)iVar5;
            }
            pcVar9 = pcVar11;
          } while (pcVar11 != in_00);
        }
        goto LAB_00105020;
      }
LAB_00104fb9:
      uVar3 = decode_4(pcVar9,(idx_t)inlen_00,&local_50,&outleft);
      lVar8 = outleft;
      if ((_Bool)uVar3 == false) goto LAB_00105050;
      inlen = (idx_t)(pcVar11 + -(long)in);
    }
  }
  local_50 = local_50 + -(iVar12 - lVar8);
  if (ctx == (base64_decode_context *)0x0) {
    uVar3 = 1;
    lVar8 = iVar12;
    outleft = iVar12;
  }
  else {
    uVar7 = (ulong)(uint)ctx->i;
    pcVar11 = in_00;
    outleft = iVar12;
    if (ctx->i == 4) {
LAB_001050e8:
      ctx->i = 0;
      bVar14 = true;
      uVar7 = 0;
      goto LAB_001050f6;
    }
LAB_00105020:
    inlen_00 = (char *)(long)(int)uVar7;
    in_00 = pcVar9;
    pcVar9 = ctx->buf;
    if (inlen_00 != (char *)0x0) {
LAB_0010502c:
      in = in_00;
      if (((3 < (long)inlen_00) || (!bVar13 && !bVar2)) || (bVar13)) goto LAB_00104fb9;
    }
    uVar3 = 1;
    lVar8 = outleft;
  }
LAB_00105050:
  *outlen = *outlen - lVar8;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (_Bool)uVar3;
}

