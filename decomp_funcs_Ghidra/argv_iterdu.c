
char * argv_iter(argv_iterator *ai,argv_iter_err *err)

{
  char **ppcVar1;
  int iVar2;
  __ssize_t _Var3;
  char *pcVar4;
  
  if ((FILE *)ai->fp == (FILE *)0x0) {
    ppcVar1 = ai->p;
    pcVar4 = *ppcVar1;
    if (pcVar4 != (char *)0x0) {
      *err = AI_ERR_OK;
      ai->p = ppcVar1 + 1;
      return pcVar4;
    }
    *err = AI_ERR_EOF;
  }
  else {
    _Var3 = getdelim(&ai->tok,&ai->buf_len,0,(FILE *)ai->fp);
    if (_Var3 < 0) {
      iVar2 = feof((FILE *)ai->fp);
      *err = (-(uint)(iVar2 == 0) & 2) + AI_ERR_EOF;
      pcVar4 = (char *)0x0;
    }
    else {
      *err = AI_ERR_OK;
      pcVar4 = ai->tok;
      ai->item_idx = ai->item_idx + 1;
    }
  }
  return pcVar4;
}

