
int sysv_sum_stream(FILE *stream,void *resstream,uintmax_t *length)

{
  byte bVar1;
  byte *p;
  size_t sVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  bool bVar9;
  
  p = (byte *)malloc(0x8000);
  if (p == (byte *)0x0) {
    return -1;
  }
  uVar8 = 0;
  uVar6 = 0;
  do {
    uVar7 = 0;
LAB_00102e25:
    sVar2 = fread_unlocked(p + uVar7,1,0x8000 - uVar7,(FILE *)stream);
    uVar7 = uVar7 + sVar2;
    if (uVar7 != 0x8000) {
      if (sVar2 != 0) goto code_r0x00102e20;
      iVar5 = -1;
      if ((stream->_flags & 0x20U) == 0) goto LAB_00102ea3;
      goto cleanup_buffer;
    }
    pbVar3 = p;
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      uVar8 = uVar8 + bVar1;
    } while (pbVar3 != p + 0x8000);
    bVar9 = uVar6 < 0xffffffffffff8000;
    uVar6 = uVar6 + 0x8000;
  } while (bVar9);
LAB_00102e70:
  piVar4 = __errno_location();
  iVar5 = -1;
  *piVar4 = 0x4b;
cleanup_buffer:
  rpl_free(p);
  return iVar5;
code_r0x00102e20:
  if ((stream->_flags & 0x10U) == 0) goto LAB_00102e25;
LAB_00102ea3:
  pbVar3 = p;
  if (uVar7 == 0) goto LAB_00102ed4;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    uVar8 = uVar8 + bVar1;
  } while (p + uVar7 != pbVar3);
  if (CARRY8(uVar6,uVar7) == false) {
LAB_00102ed4:
    iVar5 = 0;
    uVar8 = (uVar8 >> 0x10) + (uVar8 & 0xffff);
    *(uint *)resstream = ((int)uVar8 >> 0x10) + (uVar8 & 0xffff);
    *length = uVar6 + uVar7;
    goto cleanup_buffer;
  }
  goto LAB_00102e70;
}

