
void format_user(uid_t u,int width,_Bool stat_ok)

{
  char *name;
  
  name = "?";
  if ((stat_ok != false) && (name = (char *)0x0, numeric_ids == false)) {
    name = getuser(u);
  }
  format_user_or_group(name,(ulong)u,width);
  return;
}

