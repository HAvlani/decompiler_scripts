
char * xstrcat(size_t argcount,__va_list_tag *args)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  char *__s;
  size_t sVar4;
  ulong uVar5;
  char *pcVar6;
  int *piVar7;
  char **ppcVar8;
  ulong uVar9;
  size_t sVar10;
  char *__dest;
  long in_FS_OFFSET;
  bool bVar11;
  va_list ap;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  ap[0].gp_offset = args->gp_offset;
  ap[0].overflow_arg_area = args->overflow_arg_area;
  pvVar3 = args->reg_save_area;
  if (argcount == 0) {
    __dest = (char *)xmalloc(1);
    pcVar6 = __dest;
  }
  else {
    uVar9 = 0;
    sVar10 = argcount;
    do {
      uVar5 = (ulong)ap[0].gp_offset;
      if (ap[0].gp_offset < 0x30) {
        ap[0].gp_offset = ap[0].gp_offset + 8;
        ppcVar8 = (char **)(uVar5 + (long)pvVar3);
      }
      else {
        ppcVar8 = (char **)ap[0].overflow_arg_area;
        ap[0].overflow_arg_area = (void *)((long)ap[0].overflow_arg_area + 8);
      }
      sVar4 = strlen(*ppcVar8);
      bVar11 = CARRY8(uVar9,sVar4);
      uVar9 = uVar9 + sVar4;
      if (bVar11) {
        uVar9 = 0xffffffffffffffff;
      }
      sVar10 = sVar10 - 1;
    } while (sVar10 != 0);
    if (0x7fffffff < uVar9) {
      piVar7 = __errno_location();
      pcVar6 = (char *)0x0;
      *piVar7 = 0x4b;
      goto LAB_00106e24;
    }
    pcVar6 = (char *)xmalloc(uVar9 + 1);
    __dest = pcVar6;
    do {
      uVar1 = args->gp_offset;
      if (uVar1 < 0x30) {
        ppcVar8 = (char **)((ulong)uVar1 + (long)args->reg_save_area);
        args->gp_offset = uVar1 + 8;
      }
      else {
        ppcVar8 = (char **)args->overflow_arg_area;
        args->overflow_arg_area = ppcVar8 + 1;
      }
      __s = *ppcVar8;
      sVar4 = strlen(__s);
      memcpy(__dest,__s,sVar4);
      __dest = __dest + sVar4;
      argcount = argcount - 1;
    } while (argcount != 0);
  }
  *__dest = '\0';
LAB_00106e24:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

