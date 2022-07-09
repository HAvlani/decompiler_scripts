
char * default_format(_Bool fs,_Bool terse,_Bool device)

{
  char *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if (fs == false) {
    if (terse != false) {
      pcVar1 = xstrdup("%n %s %b %f %u %g %D %i %h %t %T %X %Y %Z %W %o\n");
      return pcVar1;
    }
    pcVar1 = (char *)dcgettext(0,"  File: %N\n  Size: %-10s\tBlocks: %-10b IO Block: %-6o %F\n",5);
    pcVar1 = xstrdup(pcVar1);
    pcVar3 = "Device: %Hd,%Ld\tInode: %-10i  Links: %-5h Device type: %Hr,%Lr\n";
    if (device == false) {
      pcVar3 = "Device: %Hd,%Ld\tInode: %-10i  Links: %h\n";
    }
    uVar2 = dcgettext(0,pcVar3,5);
    pcVar3 = xasprintf("%s%s",pcVar1,uVar2);
    rpl_free(pcVar1);
    uVar2 = dcgettext(0,"Access: (%04a/%10.10A)  Uid: (%5u/%8U)   Gid: (%5g/%8G)\n",5);
    pcVar1 = xasprintf("%s%s",pcVar3,uVar2);
    rpl_free(pcVar3);
    uVar2 = dcgettext(0,"Access: %x\nModify: %y\nChange: %z\n Birth: %w\n",5);
    pcVar3 = xasprintf("%s%s",pcVar1,uVar2);
    rpl_free(pcVar1);
    return pcVar3;
  }
  if (terse != false) {
    pcVar1 = xstrdup("%n %i %l %t %s %S %b %f %a %c %d\n");
    return pcVar1;
  }
  pcVar1 = (char *)dcgettext(0,
                             "  File: \"%n\"\n    ID: %-8i Namelen: %-7l Type: %T\nBlock size: %-10s Fundamental block size: %S\nBlocks: Total: %-10b Free: %-10f Available: %a\nInodes: Total: %-10c Free: %d\n"
                             ,5);
  pcVar1 = xstrdup(pcVar1);
  return pcVar1;
}

