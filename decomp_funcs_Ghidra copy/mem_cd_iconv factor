
undefined8 mem_cd_iconv(char *param_1,size_t param_2,iconv_t param_3,char **param_4,char **param_5)

{
  size_t sVar1;
  int *piVar2;
  char *p;
  undefined8 uVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  char *local_1068;
  size_t local_1060;
  char *local_1058;
  char *local_1050;
  char local_1048 [4104];
  long local_40;
  
  pcVar4 = (char *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iconv(param_3,(char **)0x0,(size_t *)0x0,(char **)0x0,(size_t *)0x0);
  local_1068 = param_1;
  local_1060 = param_2;
  if (param_2 != 0) {
    do {
      local_1050 = (char *)0x1000;
      local_1058 = local_1048;
      sVar1 = iconv(param_3,&local_1068,&local_1060,&local_1058,(size_t *)&local_1050);
      if (sVar1 == 0xffffffffffffffff) {
        piVar2 = __errno_location();
        if (*piVar2 != 7) {
          if (*piVar2 != 0x16) goto LAB_00115987;
          break;
        }
      }
      pcVar4 = local_1058 + ((long)pcVar4 - (long)local_1048);
    } while (local_1060 != 0);
  }
  local_1050 = (char *)0x1000;
  local_1058 = local_1048;
  sVar1 = iconv(param_3,(char **)0x0,(size_t *)0x0,&local_1058,(size_t *)&local_1050);
  if (sVar1 != 0xffffffffffffffff) {
    pcVar4 = local_1058 + ((long)pcVar4 - (long)local_1048);
    if (pcVar4 == (char *)0x0) {
      *param_5 = (char *)0x0;
      uVar3 = 0;
      goto LAB_0011593c;
    }
    p = *param_4;
    if (((p != (char *)0x0) && (pcVar4 <= *param_5)) ||
       (p = (char *)malloc((size_t)pcVar4), p != (char *)0x0)) {
      iconv(param_3,(char **)0x0,(size_t *)0x0,(char **)0x0,(size_t *)0x0);
      local_1068 = param_1;
      local_1060 = param_2;
      local_1058 = p;
      local_1050 = pcVar4;
      do {
        if (local_1060 == 0) goto LAB_00115902;
        sVar1 = iconv(param_3,&local_1068,&local_1060,&local_1058,(size_t *)&local_1050);
      } while (sVar1 != 0xffffffffffffffff);
      piVar2 = __errno_location();
      if (*piVar2 == 0x16) {
LAB_00115902:
        sVar1 = iconv(param_3,(char **)0x0,(size_t *)0x0,&local_1058,(size_t *)&local_1050);
        if (sVar1 != 0xffffffffffffffff) {
          if (local_1050 != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *param_4 = p;
          *param_5 = pcVar4;
          uVar3 = 0;
          goto LAB_0011593c;
        }
      }
      uVar3 = 0xffffffff;
      if (*param_4 != p) {
        rpl_free(p);
        uVar3 = 0xffffffff;
      }
      goto LAB_0011593c;
    }
    piVar2 = __errno_location();
    *piVar2 = 0xc;
  }
LAB_00115987:
  uVar3 = 0xffffffff;
LAB_0011593c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}

