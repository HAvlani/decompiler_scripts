
int restore_initial_cwd(FTS *sp)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = sp->fts_options & 4;
  if (uVar2 == 0) {
    if ((sp->fts_options & 0x200U) == 0) {
      iVar1 = fchdir(sp->fts_rfd);
      uVar2 = (uint)(iVar1 != 0);
    }
    else {
      cwd_advance_fd(sp,0xffffff9c,1);
    }
  }
  else {
    uVar2 = 0;
  }
  fd_ring_clear(&sp->fts_fd_ring);
  return uVar2;
}

