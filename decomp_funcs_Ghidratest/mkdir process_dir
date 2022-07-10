
int process_dir(char *dir,savewd *wd,void *options)

{
  anon_subr_int_char_ptr_char_ptr_void_ptr *make_ancestor;
  _Bool _Var1;
  int *piVar2;
  
                    /* WARNING: Load size is inaccurate */
  make_ancestor = *options;
  if ((*(long *)((long)options + 0x18) != 0) &&
     (make_ancestor == (anon_subr_int_char_ptr_char_ptr_void_ptr *)0x0)) {
    piVar2 = __errno_location();
    *piVar2 = 0x5f;
  }
  _Var1 = make_dir_parents(dir,(savewd_conflict *)wd,make_ancestor,options,
                           *(mode_t *)((long)options + 0x10),announce_mkdir,
                           *(mode_t *)((long)options + 0x14),0xffffffff,0xffffffff,true);
                    /* WARNING: Load size is inaccurate */
  if ((((_Var1 ^ 1U) == 0) && (*(long *)((long)options + 0x18) != 0)) && (*options != 0)) {
    piVar2 = __errno_location();
    *piVar2 = 0x5f;
  }
  return (uint)(_Var1 ^ 1U);
}

