
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ldtoastr(char *buf,size_t bufsize,int flags,int width,longdouble x)

{
  char *pcVar1;
  char *pcVar2;
  float10 fVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  long in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar7;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 fVar8;
  float10 fVar9;
  longdouble promoted_x;
  char format [11];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar3 = SUB1610((undefined  [16])promoted_x,0);
  format._0_2_ = 0x2d25;
  fVar7 = fVar3;
  if (fVar3 <= (float10)0 || (float10)0 != fVar3) {
    fVar7 = -fVar3;
  }
  pcVar2 = format + (ulong)(flags & 1) + 1;
  pcVar1 = pcVar2 + ((uint)flags >> 1 & 1);
  *pcVar2 = '+';
  *pcVar1 = ' ';
  pcVar1[(uint)flags >> 2 & 1] = '0';
  puVar5 = (undefined4 *)(pcVar1 + ((uint)flags >> 2 & 1) + ((uint)flags >> 3 & 1));
  *puVar5 = 0x4c2a2e2a;
  *(undefined *)((long)puVar5 + 5) = 0;
  *(byte *)(puVar5 + 1) = (-((flags & 0x10U) == 0) & 0x20U) + 0x47;
  iVar6 = 1;
  fVar8 = in_ST4;
  fVar9 = in_ST4;
  if (_DAT_0010d870 <= fVar7) {
    iVar6 = 0x12;
  }
  while (((iVar4 = __snprintf_chk(buf,bufsize,1,0xffffffffffffffff,format,width,iVar6), -1 < iVar4
          && (iVar6 < 0x15)) &&
         ((fVar7 = in_ST0, bufsize <= (ulong)(long)iVar4 ||
          (fVar7 = in_ST1, in_ST1 = in_ST2, in_ST2 = in_ST3, in_ST3 = in_ST4, in_ST4 = fVar8,
          fVar8 = fVar9, strtold(buf,(char **)0x0), fVar9 = fVar8, in_ST0 != fVar3))))) {
    iVar6 = iVar6 + 1;
    in_ST0 = fVar7;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

