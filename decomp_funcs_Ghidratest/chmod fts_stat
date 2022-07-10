
ushort fts_stat(FTS *sp,FTSENT *p,_Bool follow)

{
  stat *__stat_buf;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  __stat_buf = p->fts_statp;
  if (((sp->fts_options & 2U) == 0) &&
     ((((sp->fts_options & 1U) == 0 || (p->fts_level != 0)) && (follow == false)))) {
    iVar2 = __fxstatat(1,sp->fts_cwd_fd,p->fts_accpath,(stat *)__stat_buf,0x100);
    if (iVar2 < 0) {
      piVar4 = __errno_location();
      iVar2 = *piVar4;
      goto LAB_00103f43;
    }
  }
  else {
    iVar2 = __fxstatat(1,sp->fts_cwd_fd,p->fts_accpath,(stat *)__stat_buf,0);
    if (iVar2 < 0) {
      piVar4 = __errno_location();
      iVar2 = *piVar4;
      if (iVar2 == 2) {
        iVar2 = __fxstatat(1,sp->fts_cwd_fd,p->fts_accpath,(stat *)__stat_buf,0x100);
        if (-1 < iVar2) {
          *piVar4 = 0;
          return 0xd;
        }
        iVar2 = *piVar4;
      }
LAB_00103f43:
      p->fts_errno = iVar2;
      puVar6 = (undefined8 *)((ulong)&p->fts_statp[0].st_ino & 0xfffffffffffffff8);
      p->fts_statp[0].st_dev = 0;
      p->fts_statp[0].__glibc_reserved[2] = 0;
      uVar5 = (ulong)(((int)__stat_buf - (int)puVar6) + 0x90U >> 3);
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
      }
      return 10;
    }
  }
  uVar3 = p->fts_statp[0].st_mode & 0xf000;
  if (uVar3 == 0x4000) {
    uVar1 = 1;
    if ((*(char *)&p[1].fts_cycle == '.') &&
       ((*(char *)((long)&p[1].fts_cycle + 1) == '\0' ||
        ((*(uint *)&p[1].fts_cycle & 0xffff00) == 0x2e00)))) {
      uVar1 = (-(ushort)(p->fts_level == 0) & 0xfffc) + 5;
    }
  }
  else if (uVar3 == 0xa000) {
    uVar1 = 0xc;
  }
  else {
    uVar1 = (ushort)(uVar3 == 0x8000) * 5 + 3;
  }
  return uVar1;
}

