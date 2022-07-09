
/* WARNING: Exceeded maximum restarts with more pending */

int dirfirst_check(fileinfo *a,fileinfo *b,anon_subr_int_V_V *cmp)

{
  filetype fVar1;
  int iVar2;
  
  fVar1 = a->filetype;
  if (((b->filetype == directory) || (b->filetype == arg_directory)) ||
     ((b->linkmode & 0xf000) == 0x4000)) {
    if (fVar1 == arg_directory || fVar1 == directory) goto LAB_00107850;
    iVar2 = 1;
  }
  else {
    if (fVar1 == arg_directory || fVar1 == directory) {
      return -1;
    }
    iVar2 = 0;
  }
  iVar2 = iVar2 - (uint)((a->linkmode & 0xf000) == 0x4000);
  if (iVar2 != 0) {
    return iVar2;
  }
LAB_00107850:
                    /* WARNING: Could not recover jumptable at 0x00107850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (*cmp)();
  return iVar2;
}

