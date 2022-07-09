
/* WARNING: Removing unreachable block (ram,0x00104274) */
/* WARNING: Could not reconcile some variable overlaps */

operand * scan_arg(operand *__return_storage_ptr__,char *arg)

{
  size_t sVar1;
  byte bVar2;
  long lVar3;
  float10 fVar4;
  _Bool _Var5;
  ushort **ppuVar6;
  byte *pbVar7;
  size_t sVar8;
  byte *pbVar9;
  long lVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  long in_FS_OFFSET;
  byte bVar17;
  operand ret;
  
  bVar17 = 0;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  _Var5 = xstrtold(arg,(char **)0x0,&ret.value,cl_strtold);
  if (_Var5 == false) {
    pcVar11 = quote(arg);
    uVar13 = dcgettext(0,"invalid floating point argument: %s",5);
    error(0,0,uVar13,pcVar11);
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  fVar4 = (float10)CONCAT28(ret.value._8_2_,ret.value._0_8_);
  ppuVar6 = __ctype_b_loc();
  for (; ((*(byte *)((long)*ppuVar6 + (ulong)(byte)*arg * 2 + 1) & 0x20) != 0 || (*arg == 0x2b));
      arg = (char *)((byte *)arg + 1)) {
  }
  ret.width = 0;
  ret.precision = 0x7fffffff;
  pbVar7 = (byte *)strchr(arg,0x2e);
  if ((pbVar7 == (byte *)0x0) && (pcVar11 = strchr(arg,0x70), pcVar11 == (char *)0x0)) {
    ret.precision = 0;
  }
  sVar8 = strcspn(arg,"xX");
  if ((((byte *)arg)[sVar8] != 0) || (fVar4 * (float10)0 != (float10)0)) goto LAB_00104140;
  uVar14 = 0xffffffffffffffff;
  pbVar9 = (byte *)arg;
  do {
    if (uVar14 == 0) break;
    uVar14 = uVar14 - 1;
    bVar2 = *pbVar9;
    pbVar9 = pbVar9 + (ulong)bVar17 * -2 + 1;
  } while (bVar2 != 0);
  sVar1 = ~uVar14 - 1;
  ret.width = sVar1;
  if (pbVar7 == (byte *)0x0) {
    uVar14 = 0;
  }
  else {
    uVar14 = strcspn((char *)(pbVar7 + 1),"eE");
    if ((uVar14 < 0x80000000) && (ret.precision = (int)uVar14, uVar14 == 0)) {
      uVar15 = 0xffffffffffffffff;
    }
    else if ((byte *)arg == pbVar7) {
      uVar15 = 1;
    }
    else {
      uVar15 = (ulong)(9 < (int)(char)pbVar7[-1] - 0x30U);
    }
    ret.width = sVar1 + uVar15;
  }
  pbVar9 = (byte *)strchr(arg,0x65);
  if ((pbVar9 == (byte *)0x0) && (pbVar9 = (byte *)strchr(arg,0x45), pbVar9 == (byte *)0x0))
  goto LAB_00104140;
  lVar10 = strtol((char *)(pbVar9 + 1),(char **)0x0,10);
  if (lVar10 < -0x7ffffffffffffffe) {
    uVar15 = 0x8000000000000001;
LAB_001040f5:
    ret.precision = ret.precision - (int)uVar15;
    lVar10 = -1;
    pbVar16 = (byte *)arg;
    do {
      if (lVar10 == 0) break;
      lVar10 = lVar10 + -1;
      bVar2 = *pbVar16;
      pbVar16 = pbVar16 + (ulong)bVar17 * -2 + 1;
    } while (bVar2 != 0);
    ret.width = (size_t)(pbVar9 + lVar10 + 2 + (ret.width - (long)arg));
    if (pbVar7 == (byte *)0x0) {
      ret.width = (size_t)(ret.width + 1);
    }
    else if (pbVar9 == pbVar7 + 1) {
      ret.width = (size_t)(ret.width + 1);
    }
    lVar10 = -uVar15;
  }
  else {
    uVar15 = strtol((char *)(pbVar9 + 1),(char **)0x0,10);
    if ((long)uVar15 < 0) goto LAB_001040f5;
    uVar12 = (long)ret.precision;
    if ((long)uVar15 < (long)ret.precision) {
      uVar12 = uVar15;
    }
    ret.precision = ret.precision - (int)uVar12;
    lVar10 = -1;
    pbVar16 = (byte *)arg;
    do {
      if (lVar10 == 0) break;
      lVar10 = lVar10 + -1;
      bVar2 = *pbVar16;
      pbVar16 = pbVar16 + (ulong)bVar17 * -2 + 1;
    } while (bVar2 != 0);
    ret.width = (size_t)(pbVar9 + lVar10 + 2 + (ret.width - (long)arg));
    if ((uVar14 != 0 && pbVar7 != (byte *)0x0) && (ret.precision == 0)) {
      ret.width = ret.width + -1;
    }
    if (uVar15 <= uVar14) {
      uVar14 = uVar15;
    }
    lVar10 = uVar15 - uVar14;
  }
  ret.width = ret.width + lVar10;
LAB_00104140:
  *(undefined8 *)&__return_storage_ptr__->value = ret.value._0_8_;
  *(ulong *)((long)&__return_storage_ptr__->value + 8) = CONCAT62(ret.value._10_6_,ret.value._8_2_);
  __return_storage_ptr__->width = ret.width;
  *(ulong *)&__return_storage_ptr__->precision = CONCAT44(ret._28_4_,ret.precision);
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(ret.value._0_8_,ret.width);
}

