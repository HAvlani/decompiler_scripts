
void zaptemp(char *name)

{
  char *pcVar1;
  long lVar2;
  tempnode *ptVar3;
  tempnode *ptVar4;
  tempnode *p;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  cs_status cs;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = &temphead->field_0xd;
  ptVar4 = (tempnode *)&temphead;
  p = temphead;
  while (name != pcVar1) {
    pcVar1 = &p->next->field_0xd;
    ptVar4 = p;
    p = p->next;
  }
  if (p->state == '\x01') {
    wait_proc(p->pid);
  }
  ptVar3 = p->next;
  iVar5 = pthread_sigmask(0,(__sigset_t *)&caught_signals,(__sigset_t *)&cs.sigs);
  cs.valid = iVar5 == 0;
  iVar6 = unlink(name);
  piVar7 = __errno_location();
  iVar5 = *piVar7;
  ptVar4->next = ptVar3;
  if (cs.valid != false) {
    cs_leave(&cs);
  }
  if (iVar6 != 0) {
    uVar8 = quotearg_n_style_colon(0,3,name);
    uVar9 = dcgettext(0,"warning: cannot remove: %s",5);
                    /* WARNING: Subroutine does not return */
    error(0,iVar5,uVar9,uVar8);
  }
  if (ptVar3 == (tempnode *)0x0) {
    temptail = &ptVar4->next;
  }
  rpl_free(p);
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

