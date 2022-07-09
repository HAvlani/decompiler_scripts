
int mgetgroups(char *username,gid_t gid,gid_t **groups)

{
  gid_t gVar1;
  gid_t gVar2;
  gid_t *pgVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  gid_t *pgVar7;
  gid_t *pgVar8;
  int *piVar9;
  long in_FS_OFFSET;
  int max_n_groups;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (username == (char *)0x0) {
    max_n_groups = getgroups(0,(__gid_t *)0x0);
    if (max_n_groups < 0) {
      piVar9 = __errno_location();
      if ((*piVar9 == 0x26) && (pgVar8 = (gid_t *)malloc(4), pgVar8 != (gid_t *)0x0)) {
        *groups = pgVar8;
        *pgVar8 = gid;
        uVar6 = (uint)(gid != 0xffffffff);
        goto LAB_00105f0e;
      }
    }
    else if ((max_n_groups == 0) || (gid != 0xffffffff)) {
      max_n_groups = max_n_groups + 1;
      pgVar8 = realloc_groupbuf((gid_t *)0x0,(long)max_n_groups);
      if (pgVar8 != (gid_t *)0x0) {
        if (gid == 0xffffffff) goto LAB_0010607f;
        iVar5 = getgroups(max_n_groups + -1,pgVar8 + 1);
        if (iVar5 < 0) goto LAB_00105f01;
        *pgVar8 = gid;
        uVar6 = iVar5 + 1;
        goto LAB_00105fde;
      }
    }
    else {
      pgVar8 = realloc_groupbuf((gid_t *)0x0,(long)max_n_groups);
      if (pgVar8 != (gid_t *)0x0) {
LAB_0010607f:
        uVar6 = getgroups(max_n_groups - (uint)(gid != 0xffffffff),pgVar8);
        if ((int)uVar6 < 0) goto LAB_00105f01;
LAB_00105fde:
        *groups = pgVar8;
        if (1 < (int)uVar6) {
          gVar1 = *pgVar8;
          pgVar7 = pgVar8 + (int)uVar6;
          pgVar3 = pgVar8;
          while (pgVar3 = pgVar3 + 1, pgVar3 < pgVar7) {
            gVar2 = *pgVar3;
            if ((gVar2 == gVar1) || (gVar2 == *pgVar8)) {
              uVar6 = uVar6 - 1;
            }
            else {
              pgVar8[1] = gVar2;
              pgVar8 = pgVar8 + 1;
            }
          }
        }
        goto LAB_00105f0e;
      }
    }
  }
  else {
    max_n_groups = 10;
    pgVar7 = realloc_groupbuf((gid_t *)0x0,10);
    if (pgVar7 != (gid_t *)0x0) {
      do {
        pgVar8 = pgVar7;
        iVar5 = max_n_groups;
        iVar4 = getgrouplist(username,gid,pgVar8,&max_n_groups);
        if (-1 < iVar4) {
          pgVar7 = realloc_groupbuf(pgVar8,(long)max_n_groups);
          if (pgVar7 != (gid_t *)0x0) {
            *groups = pgVar7;
            uVar6 = max_n_groups;
            goto LAB_00105f0e;
          }
          break;
        }
        if (max_n_groups == iVar5) {
          max_n_groups = max_n_groups * 2;
        }
        pgVar7 = realloc_groupbuf(pgVar8,(long)max_n_groups);
      } while (pgVar7 != (gid_t *)0x0);
LAB_00105f01:
      rpl_free(pgVar8);
    }
  }
  uVar6 = 0xffffffff;
LAB_00105f0e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}

