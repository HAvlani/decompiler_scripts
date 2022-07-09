
void check_fspec(File_spec *fspec,File_spec **prev_fspec)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  char *filename;
  uintmax_t uVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  stat stats;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (fspec->fd == -1) goto LAB_00105b82;
  filename = pretty_name((File_spec *)fspec->name);
  uVar4 = __fxstat(1,fspec->fd,(stat *)&stats);
  if (uVar4 == 0) {
    if ((fspec->mode & 0xf000) == 0x8000) {
      if (stats.st_size < fspec->size) {
        uVar7 = quotearg_n_style_colon(0,3,filename);
        uVar9 = dcgettext(0,"%s: file truncated",5);
        error(0,0,uVar9,uVar7);
        xlseek(fspec->fd,0,0,filename);
        fspec->size = 0;
      }
      else if ((stats.st_size == fspec->size) &&
              (lVar2 = (fspec->mtime).tv_sec, lVar3 = (fspec->mtime).tv_nsec,
              ((uint)(stats.st_mtim.tv_nsec < lVar3) - (uint)(lVar3 < stats.st_mtim.tv_nsec)) +
              ((uint)(stats.st_mtim.tv_sec < lVar2) - (uint)(lVar2 < stats.st_mtim.tv_sec)) * 2 == 0
              )) goto LAB_00105b82;
    }
    if (print_headers != false) {
      uVar4 = (uint)(*prev_fspec != fspec);
    }
    uVar6 = dump_remainder(SUB41(uVar4,0),filename,fspec->fd,0xffffffffffffffff);
    fspec->size = fspec->size + uVar6;
    if (uVar6 == 0) goto LAB_00105b82;
    *prev_fspec = fspec;
    iVar5 = fflush_unlocked(stdout);
    if (iVar5 == 0) goto LAB_00105b82;
    uVar7 = dcgettext(0,"write error",5);
    piVar8 = __errno_location();
    error(1,*piVar8,uVar7);
  }
  piVar8 = __errno_location();
  fspec->errnum = *piVar8;
  close_fd(fspec->fd,filename);
  fspec->fd = -1;
LAB_00105b82:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

