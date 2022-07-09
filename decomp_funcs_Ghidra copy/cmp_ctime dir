
int cmp_ctime(fileinfo *a,fileinfo *b,anon_subr_int_char_ptr_char_ptr *cmp)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  lVar1 = (b->stat).st_ctim.tv_sec;
  lVar2 = (a->stat).st_ctim.tv_sec;
  lVar3 = (b->stat).st_ctim.tv_nsec;
  lVar4 = (a->stat).st_ctim.tv_nsec;
  iVar5 = ((uint)(lVar4 < lVar3) - (uint)(lVar3 < lVar4)) +
          ((uint)(lVar2 < lVar1) - (uint)(lVar1 < lVar2)) * 2;
  if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00109c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar5 = (*cmp)(a->name,b->name);
    return iVar5;
  }
  return iVar5;
}

