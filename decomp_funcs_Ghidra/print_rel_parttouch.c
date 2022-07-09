
_Bool print_rel_part(_Bool space,intmax_t val,char *name)

{
  __fprintf_chk(stderr,1,(space ^ 1) + 0x112a3d,val,name);
  return true;
}

