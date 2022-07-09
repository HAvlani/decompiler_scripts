
void restore_default_fscreatecon_or_die(void)

{
  undefined *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *arg;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar2 = (uint *)__errno_location();
  *puVar2 = 0x5f;
  uVar3 = dcgettext(0,"failed to restore the default file creation context",5);
  uVar5 = (ulong)*puVar2;
  uVar6 = 1;
  error(1,uVar5,uVar3);
  uVar3 = quotearg_n_style(1,4,uVar5);
  uVar6 = quotearg_n_style(0,4,uVar6);
  __printf_chk(1,"%s -> %s",uVar6,uVar3);
  if (arg != (char *)0x0) {
    pcVar4 = quotearg_style(shell_escape_always_quoting_style,arg);
    uVar3 = dcgettext(0," (backup: %s)",5);
    __printf_chk(1,uVar3,pcVar4);
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

