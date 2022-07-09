
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ftoastr(char *buf,size_t bufsize,int flags,int width,float x)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  long in_FS_OFFSET;
  float fVar6;
  char format [11];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  format._0_2_ = 0x2d25;
  pcVar2 = format + (ulong)(flags & 1) + 1;
  pcVar1 = pcVar2 + ((uint)flags >> 1 & 1);
  *pcVar2 = '+';
  *pcVar1 = ' ';
  pcVar1[(uint)flags >> 2 & 1] = '0';
  puVar4 = (undefined2 *)(pcVar1 + ((uint)flags >> 2 & 1) + ((uint)flags >> 3 & 1));
  *puVar4 = 0x2e2a;
  *(undefined *)(puVar4 + 1) = 0x2a;
  *(undefined *)(puVar4 + 2) = 0;
  *(byte *)((long)puVar4 + 3) = (-((flags & 0x10U) == 0) & 0x20U) + 0x47;
  iVar5 = (uint)(DAT_0010d860 <=
                (float)(((uint)x ^ _DAT_0010d850) & -(uint)(x < 0.0) | ~-(uint)(x < 0.0) & (uint)x))
          * 5;
  do {
    iVar5 = iVar5 + 1;
    iVar3 = __snprintf_chk(buf,bufsize,1,0xffffffffffffffff,format,width,iVar5);
    if ((iVar3 < 0) || (8 < iVar5)) break;
  } while ((bufsize <= (ulong)(long)iVar3) || (fVar6 = strtof(buf,(char **)0x0), fVar6 != x));
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

