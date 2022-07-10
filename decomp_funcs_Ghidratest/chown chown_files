
_Bool chown_files(char **files,int bit_flags,uid_t uid,gid_t gid,uid_t required_uid,
                 gid_t required_gid,Chown_option *chopt)

{
  byte bVar1;
  int iVar2;
  FTS *sp;
  long lVar3;
  int *piVar4;
  byte bVar5;
  undefined8 uVar6;
  
  if ((((required_uid & required_gid) == 0xffffffff) && (chopt->affect_symlink_referent == false))
     && (chopt->verbosity == V_off)) {
    bit_flags = bit_flags | 8;
  }
  bVar5 = 1;
  sp = xfts_open(files,bit_flags,(anon_subr_int_FTSENT_ptr_ptr_FTSENT_ptr_ptr *)0x0);
  while( true ) {
    uVar6 = 0x104489;
    lVar3 = rpl_fts_read(sp);
    if (lVar3 == 0) break;
    bVar1 = change_file_owner(sp,lVar3,uid,gid,required_uid,required_gid,chopt,uVar6);
    bVar5 = bVar5 & bVar1;
  }
  piVar4 = __errno_location();
  if (*piVar4 != 0) {
    bVar5 = chopt->force_silent;
    if ((_Bool)bVar5 == false) {
      uVar6 = dcgettext(0,"fts_read failed",5);
      error(0,*piVar4,uVar6);
    }
    else {
      bVar5 = 0;
    }
  }
  iVar2 = rpl_fts_close(sp);
  if (iVar2 != 0) {
    bVar5 = 0;
    uVar6 = dcgettext(0,"fts_close failed",5);
    error(0,*piVar4,uVar6);
  }
  return (_Bool)bVar5;
}

