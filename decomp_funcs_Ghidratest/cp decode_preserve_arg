
void decode_preserve_arg(char *param_1,undefined8 param_2,char param_3)

{
  char *__s;
  char *context;
  char *pcVar1;
  ptrdiff_t pVar2;
  
  __s = xstrdup(param_1);
  context = "--no-preserve";
  if (param_3 != '\0') {
    context = "--preserve";
  }
  pcVar1 = strchr(__s,0x2c);
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = '\0';
  }
  pVar2 = __xargmatch_internal
                    (context,__s,(char **)preserve_args_7722,preserve_vals_7721,4,argmatch_die,true)
  ;
  if (*(uint *)(preserve_vals_7721 + pVar2 * 4) < 7) {
                    /* WARNING: Could not recover jumptable at 0x001046a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00113300 +
              *(int *)(&DAT_00113300 + (ulong)*(uint *)(preserve_vals_7721 + pVar2 * 4) * 4)))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

