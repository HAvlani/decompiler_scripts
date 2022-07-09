
int read_utmp(char *file,size_t *n_entries,STRUCT_UTMP **utmp_buf,int options)

{
  int iVar1;
  utmpx *puVar2;
  STRUCT_UTMP *pSVar3;
  long lVar4;
  int *piVar5;
  STRUCT_UTMP *pa;
  ulong uVar6;
  size_t sVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  byte bVar10;
  idx_t n_alloc;
  long local_40;
  
  bVar10 = 0;
  pa = (STRUCT_UTMP *)0x0;
  sVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  n_alloc = 0;
  utmpxname(file);
  setutxent();
LAB_00105f1b:
  puVar2 = getutxent();
  do {
    if (puVar2 == (utmpx *)0x0) {
      endutxent();
      *n_entries = sVar7;
      *utmp_buf = pa;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if ((puVar2->ut_user[0] == '\0') || (puVar2->ut_type != 7)) {
      if ((options & 2U) != 0) goto LAB_00105f1b;
    }
    else if (((((options & 1U) != 0) && (0 < puVar2->ut_pid)) &&
             (iVar1 = kill(puVar2->ut_pid,0), iVar1 < 0)) &&
            (piVar5 = __errno_location(), *piVar5 == 3)) goto LAB_00105f1b;
    if (n_alloc == sVar7) {
      pa = (STRUCT_UTMP *)xpalloc(pa,&n_alloc,1,-1,0x180);
    }
    pSVar3 = pa + sVar7;
    *(undefined8 *)pSVar3 = *(undefined8 *)puVar2;
    puVar9 = (undefined8 *)((ulong)pSVar3->ut_line & 0xfffffffffffffff8);
    *(undefined8 *)(pSVar3->__glibc_reserved + 0xc) = *(undefined8 *)puVar2->__unused;
    lVar4 = (long)pSVar3 - (long)puVar9;
    puVar8 = (undefined8 *)((long)puVar2 - lVar4);
    for (uVar6 = (ulong)((int)lVar4 + 0x180U >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + (ulong)bVar10 * -2 + 1;
      puVar9 = puVar9 + (ulong)bVar10 * -2 + 1;
    }
    puVar2 = getutxent();
    sVar7 = sVar7 + 1;
  } while( true );
}

