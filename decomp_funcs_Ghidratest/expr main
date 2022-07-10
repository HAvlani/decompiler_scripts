
ulong main(uint param_1,char **param_2)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  VALUE *pVVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  exit_failure = 3;
  atexit(close_stdout);
  parse_long_options(param_1,param_2,"expr","GNU coreutils","9.1",usage,"Mike Parker",
                     "James Youngman","Paul Eggert",0);
  if (1 < param_1) {
    iVar3 = strcmp(param_2[1],"--");
    if ((iVar3 != 0) || (param_2 = param_2 + 1, param_1 != 2)) {
      args = param_2 + 1;
      pVVar4 = eval(true);
      if (*args != (char *)0x0) {
        uVar5 = quotearg_n_style(0,8);
        uVar6 = dcgettext(0,"syntax error: unexpected argument %s",5);
                    /* WARNING: Subroutine does not return */
        error(2,0,uVar6,uVar5);
      }
      if (pVVar4->type == integer) {
        mpz_out_str((FILE *)stdout,10,(__mpz_struct *)&pVVar4->u);
        pcVar1 = stdout->_IO_write_ptr;
        if (pcVar1 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar1 + 1;
          *pcVar1 = '\n';
        }
        else {
          __overflow(stdout,10);
        }
      }
      else {
        if (pVVar4->type != string) {
          uVar7 = main_cold();
          return uVar7;
        }
        puts(*(char **)&pVVar4->u);
      }
      bVar2 = null(pVVar4);
      return (ulong)bVar2;
    }
  }
  uVar5 = dcgettext(0,"missing operand",5);
                    /* WARNING: Subroutine does not return */
  error(0,0,uVar5);
}

