
int parse_additional_groups(char *groups,gid_t **pgids,size_t *pn_gids,_Bool show_errors)

{
  strtol_error sVar1;
  char *__s;
  gid_t *s;
  group *pgVar2;
  ushort **ppuVar3;
  gid_t *p;
  char *pcVar4;
  undefined8 uVar5;
  int *piVar6;
  size_t sVar7;
  int iVar8;
  long in_FS_OFFSET;
  size_t n_gids_allocated;
  uintmax_t value;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  n_gids_allocated = 0;
  __s = xstrdup(groups);
  s = (gid_t *)strtok(__s,",");
  p = s;
  if (s != (gid_t *)0x0) {
    iVar8 = 0;
    sVar7 = 0;
    p = (gid_t *)0x0;
    do {
      sVar1 = xstrtoumax((char *)s,(char **)0x0,10,&value,"");
      if ((sVar1 == LONGINT_OK) && (value < 0x100000000)) {
        ppuVar3 = __ctype_b_loc();
        while ((*(byte *)((long)*ppuVar3 + (ulong)*(byte *)s * 2 + 1) & 0x20) != 0) {
          s = (gid_t *)((long)s + 1);
        }
        if ((*(byte *)s != 0x2b) && (pgVar2 = getgrnam((char *)s), pgVar2 != (group *)0x0)) {
LAB_00103156:
          value = (uintmax_t)pgVar2->gr_gid;
        }
        if (n_gids_allocated == sVar7) {
          p = (gid_t *)x2nrealloc(p,&n_gids_allocated,4);
        }
        p[sVar7] = (gid_t)value;
        sVar7 = sVar7 + 1;
      }
      else {
        pgVar2 = getgrnam((char *)s);
        if (pgVar2 != (group *)0x0) goto LAB_00103156;
        if (show_errors == false) {
          iVar8 = -1;
          *pgids = p;
          goto LAB_001031c8;
        }
        pcVar4 = quote((char *)s);
        uVar5 = dcgettext(0,"invalid group %s",5);
        piVar6 = __errno_location();
        iVar8 = -1;
        error(0,*piVar6,uVar5,pcVar4);
      }
      s = (gid_t *)strtok((char *)0x0,",");
    } while (s != (gid_t *)0x0);
    if ((iVar8 != 0) || (sVar7 != 0)) {
      *pgids = p;
      if (iVar8 == 0) {
        *pn_gids = sVar7;
      }
      else {
        iVar8 = -1;
      }
      goto LAB_001031c8;
    }
  }
  if (show_errors != false) {
    pcVar4 = quote(groups);
    uVar5 = dcgettext(0,"invalid group list %s",5);
    error(0,0,uVar5,pcVar4);
  }
  iVar8 = -1;
  *pgids = p;
LAB_001031c8:
  rpl_free(__s);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar8;
}

