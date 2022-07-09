
void emit_verbose(char *src,char *dst,char *backup_dst_name)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  uVar2 = quotearg_n_style(1,4,dst);
  uVar3 = quotearg_n_style(0,4,src);
  __printf_chk(1,"%s -> %s",uVar3,uVar2);
  if (backup_dst_name != (char *)0x0) {
    pcVar4 = quotearg_style(shell_escape_always_quoting_style,backup_dst_name);
    uVar2 = dcgettext(0," (backup: %s)",5);
    __printf_chk(1,uVar2,pcVar4);
  }
  puVar1 = *(undefined **)(stdout + 0x28);
  if (puVar1 < *(undefined **)(stdout + 0x30)) {
    *(undefined **)(stdout + 0x28) = puVar1 + 1;
    *puVar1 = 10;
    return;
  }
  (*(code *)PTR___overflow_0011dd90)(stdout,10);
  return;
}

