
void queue_directory(char *name,char *realname,_Bool command_line_arg)

{
  pending *ppVar1;
  
  ppVar1 = (pending *)xmalloc(0x20);
  if (realname != (char *)0x0) {
    realname = xstrdup(realname);
  }
  ppVar1->realname = realname;
  if (name != (char *)0x0) {
    name = xstrdup(name);
  }
  ppVar1->name = name;
  ppVar1->command_line_arg = command_line_arg;
  ppVar1->next = pending_dirs;
  pending_dirs = ppVar1;
  return;
}

