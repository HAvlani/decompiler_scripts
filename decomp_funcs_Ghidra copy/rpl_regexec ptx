
int rpl_regexec(regex_t *preg,char *string,size_t nmatch,regmatch_t *pmatch,int eflags)

{
  re_dfa_t *prVar1;
  uint uVar2;
  reg_errcode_t rVar3;
  size_t length;
  regoff_t start;
  bool bVar4;
  bool bVar5;
  
  uVar2 = 2;
  if ((eflags & 0xfffffff8U) == 0) {
    if ((eflags & 4U) == 0) {
      length = strlen(string);
      start = 0;
    }
    else {
      start = pmatch->rm_so;
      length = pmatch->rm_eo;
    }
    bVar4 = PTR_pthread_mutexattr_gettype_00124ff0 != (undefined *)0x0;
    prVar1 = preg->buffer;
    bVar5 = PTR_thrd_exit_00124fe0 != (undefined *)0x0;
    if (bVar4 || bVar5) {
      pthread_mutex_lock((pthread_mutex_t *)&prVar1->lock);
    }
    if ((preg->field_0x38 & 0x10) != 0) {
      pmatch = (regmatch_t *)0x0;
      nmatch = 0;
    }
    rVar3 = re_search_internal(preg,string,length,start,length,length,nmatch,pmatch,eflags);
    if (bVar4 || bVar5) {
      pthread_mutex_unlock((pthread_mutex_t *)&prVar1->lock);
    }
    uVar2 = (uint)(rVar3 != _REG_NOERROR);
  }
  return uVar2;
}

