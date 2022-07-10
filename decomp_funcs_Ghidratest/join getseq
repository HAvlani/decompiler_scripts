
_Bool getseq(FILE *fp,seq *seq,int whichfile)

{
  ulong uVar1;
  _Bool _Var2;
  line **p;
  ulong uVar3;
  line **pplVar4;
  
  uVar3 = seq->count;
  p = seq->lines;
  if (uVar3 == seq->alloc) {
    p = (line **)x2nrealloc(p,&seq->alloc,8);
    uVar3 = seq->count;
    seq->lines = p;
    uVar1 = seq->alloc;
    if (uVar3 < uVar1) {
      pplVar4 = p + uVar3;
      do {
        *pplVar4 = (line *)0x0;
        pplVar4 = pplVar4 + 1;
      } while (pplVar4 != p + uVar1);
    }
  }
  _Var2 = get_line(fp,p + uVar3,whichfile);
  if (_Var2 != false) {
    seq->count = seq->count + 1;
  }
  return _Var2;
}

