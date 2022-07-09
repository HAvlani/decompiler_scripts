
mode_change * mode_create_from_ref(char *ref_file)

{
  long lVar1;
  int iVar2;
  mode_change *pmVar3;
  long in_FS_OFFSET;
  stat ref_stats;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = __xstat(1,ref_file,(stat *)&ref_stats);
  pmVar3 = (mode_change *)0x0;
  if (iVar2 == 0) {
    pmVar3 = (mode_change *)xmalloc(0x20);
    *(undefined2 *)pmVar3 = 0x13d;
    pmVar3->affected = 0xfff;
    pmVar3->value = ref_stats.st_mode;
    pmVar3->mentioned = 0xfff;
    pmVar3[1].flag = '\0';
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pmVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

