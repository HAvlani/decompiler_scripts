
int bsd_sum_stream(FILE *stream,void *resstream,uintmax_t *length)

{
  byte *p;
  size_t sVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
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
LAB_001065ed:
    sVar1 = fread_unlocked(p + uVar7,1,0x8000 - uVar7,(FILE *)stream);
    uVar7 = uVar7 + sVar1;
    if (uVar7 != 0x8000) {
      if (sVar1 != 0) goto code_r0x001065e4;
      iVar4 = -1;
      if ((stream->_flags & 0x20U) == 0) goto LAB_0010667f;
      goto cleanup_buffer;
    }
    pbVar3 = p;
    do {
      pbVar5 = pbVar3 + 1;
      uVar8 = ((int)uVar8 >> 1) + (uVar8 & 1) * 0x8000 + (uint)*pbVar3 & 0xffff;
      pbVar3 = pbVar5;
    } while (pbVar5 != p + 0x8000);
    bVar9 = uVar6 < 0xffffffffffff8000;
    uVar6 = uVar6 + 0x8000;
  } while (bVar9);
LAB_0010664c:
  piVar2 = __errno_location();
  iVar4 = -1;
  *piVar2 = 0x4b;
cleanup_buffer:
  rpl_free(p);
  return iVar4;
code_r0x001065e4:
  if ((stream->_flags & 0x10U) == 0) goto LAB_001065ed;
LAB_0010667f:
  pbVar3 = p;
  if (uVar7 == 0) goto LAB_001066c2;
  do {
    pbVar5 = pbVar3 + 1;
    uVar8 = ((int)uVar8 >> 1) + (uVar8 & 1) * 0x8000 + (uint)*pbVar3 & 0xffff;
    pbVar3 = pbVar5;
  } while (p + uVar7 != pbVar5);
  if (CARRY8(uVar6,uVar7) == false) {
LAB_001066c2:
    iVar4 = 0;
    *(uint *)resstream = uVar8;
    *length = uVar6 + uVar7;
    goto cleanup_buffer;
  }
  goto LAB_0010664c;
}

