
_Bool base32_decode_ctx(base32_decode_context *ctx,char *in,idx_t inlen,char *out,idx_t *outlen)

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
  char *__s;
  bool bVar10;
  char *pcVar11;
  idx_t iVar12;
  long in_FS_OFFSET;
  bool bVar13;
  bool bVar14;
  _Bool ignore_newlines;
  char *local_50;
  idx_t outleft;
  long local_40;
  
  outleft = *outlen;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar13 = ctx == (base32_decode_context *)0x0;
  if (bVar13) {
    bVar10 = true;
  }
  else {
    bVar10 = ctx->i == 0 && inlen != 0;
  }
  bVar2 = inlen != 0;
  lVar8 = outleft;
  local_50 = out;
  while( true ) {
    __s = in;
    iVar12 = lVar8;
    if (bVar10) {
      pcVar9 = in + inlen;
      outp = &local_50;
      while( true ) {
        inlen = (long)pcVar9 - (long)in;
        _Var4 = decode_8(in,inlen,outp,&outleft);
        lVar8 = outleft;
        __s = in;
        if (_Var4 == false) break;
        in = in + 8;
        outp = extraout_RDX;
        iVar12 = outleft;
      }
    }
    uVar3 = inlen == 0 && (bVar13 || bVar2);
    if ((bool)uVar3) goto LAB_00104900;
    pcVar9 = __s;
    if (inlen == 0) break;
    if (*__s == '\n') {
      if (ctx == (base32_decode_context *)0x0) {
        pcVar11 = __s + inlen;
        local_50 = local_50 + -(iVar12 - lVar8);
        outleft = iVar12;
        goto LAB_001048db;
      }
      in = __s + 1;
      inlen = inlen + -1;
    }
    else {
      pcVar11 = __s + inlen;
      local_50 = local_50 + -(iVar12 - lVar8);
      in = __s;
      outleft = iVar12;
      if (ctx != (base32_decode_context *)0x0) {
        iVar5 = ctx->i;
        uVar7 = (ulong)iVar5;
        if (iVar5 == 8) goto LAB_00104990;
        bVar14 = iVar5 == 0;
LAB_0010499e:
        outleft = iVar12;
        if ((7 < inlen) && (bVar14)) {
          pvVar6 = memchr(__s,10,8);
          uVar7 = (ulong)(int)uVar7;
          if (pvVar6 == (void *)0x0) {
            inlen = 8;
            in = __s + 8;
            goto LAB_00104869;
          }
        }
        if (__s < pcVar11) {
          do {
            cVar1 = *__s;
            __s = __s + 1;
            if (cVar1 != '\n') {
              iVar5 = (int)uVar7 + 1;
              ctx->i = iVar5;
              ctx->buf[uVar7] = cVar1;
              if (iVar5 == 8) {
                uVar7 = 8;
                pcVar9 = __s;
                break;
              }
              uVar7 = (ulong)iVar5;
            }
            pcVar9 = pcVar11;
          } while (pcVar11 != __s);
        }
        goto LAB_001048cf;
      }
LAB_00104869:
      uVar3 = decode_8(pcVar9,inlen,&local_50,&outleft);
      lVar8 = outleft;
      if ((_Bool)uVar3 == false) goto LAB_00104900;
      inlen = (long)pcVar11 - (long)in;
    }
  }
  local_50 = local_50 + -(iVar12 - lVar8);
  if (ctx == (base32_decode_context *)0x0) {
    uVar3 = 1;
    lVar8 = iVar12;
    outleft = iVar12;
  }
  else {
    uVar7 = (ulong)(uint)ctx->i;
    pcVar11 = __s;
    outleft = iVar12;
    if (ctx->i == 8) {
LAB_00104990:
      ctx->i = 0;
      bVar14 = true;
      uVar7 = 0;
      goto LAB_0010499e;
    }
LAB_001048cf:
    inlen = (idx_t)(int)uVar7;
    __s = pcVar9;
    pcVar9 = ctx->buf;
    if (inlen != 0) {
LAB_001048db:
      in = __s;
      if (((7 < inlen) || (!bVar13 && !bVar2)) || (bVar13)) goto LAB_00104869;
    }
    uVar3 = 1;
    lVar8 = outleft;
  }
LAB_00104900:
  *outlen = *outlen - lVar8;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (_Bool)uVar3;
}

