
void emit_bug_reporting_address(void)

{
  undefined8 uVar1;
  
  fputc_unlocked(10,stdout);
  uVar1 = dcgettext(0,"Report bugs to: %s\n",5);
  __printf_chk(1,uVar1,"bug-coreutils@gnu.org");
  uVar1 = dcgettext(0,"%s home page: <%s>\n",5);
  __printf_chk(1,uVar1,"GNU coreutils","https://www.gnu.org/software/coreutils/");
  uVar1 = dcgettext(0,"General help using GNU software: <%s>\n",5);
  __printf_chk(1,uVar1,"https://www.gnu.org/gethelp/");
  return;
}

