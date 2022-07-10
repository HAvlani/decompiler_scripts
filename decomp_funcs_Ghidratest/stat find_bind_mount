
char * find_bind_mount(char *name)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  int *piVar5;
  mount_entry *pmVar6;
  long in_FS_OFFSET;
  stat name_stats;
  stat dev_stats;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (find_bind_mount::tried_mount_list == false) {
    find_bind_mount::mount_list = read_file_system_list(false);
    if (find_bind_mount::mount_list == (mount_entry *)0x0) {
      uVar4 = dcgettext(0,"cannot read table of mounted file systems",5);
      piVar5 = __errno_location();
      error(0,*piVar5,&DAT_00111be9,uVar4);
    }
    find_bind_mount::tried_mount_list = true;
  }
  iVar2 = __xstat(1,name,(stat *)&name_stats);
  if ((iVar2 == 0) && (find_bind_mount::mount_list != (mount_entry *)0x0)) {
    pmVar6 = find_bind_mount::mount_list;
    do {
      if (((pmVar6->field_0x28 & 1) != 0) && (pcVar3 = pmVar6->me_devname, *pcVar3 == '/')) {
        iVar2 = strcmp(pmVar6->me_mountdir,name);
        if (iVar2 == 0) {
          iVar2 = __xstat(1,pcVar3,(stat *)&dev_stats);
          if (((iVar2 == 0) && (name_stats.st_ino == dev_stats.st_ino)) &&
             (name_stats.st_dev == dev_stats.st_dev)) {
            pcVar3 = pmVar6->me_devname;
            goto LAB_00104292;
          }
        }
      }
      pmVar6 = pmVar6->me_next;
    } while (pmVar6 != (mount_entry *)0x0);
  }
  pcVar3 = (char *)0x0;
LAB_00104292:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

