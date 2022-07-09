
int process_dir(char *dir,savewd *wd,void *options)

{
  _Bool _Var1;
  int *piVar2;
  
  _Var1 = make_dir_parents(dir,(savewd_conflict1 *)wd,make_ancestor,options,dir_mode,announce_mkdir,
                           dir_mode_bits,owner_id,group_id,false);
  if (((_Var1 ^ 1U) == 0) && (*(long *)((long)options + 0x28) != 0)) {
    piVar2 = __errno_location();
    *piVar2 = 0x5f;
  }
  return (uint)(_Var1 ^ 1U);
}

