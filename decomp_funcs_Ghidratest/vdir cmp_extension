
int cmp_extension(anon_subr_int_char_ptr_char_ptr *cmp,fileinfo *b,fileinfo *a)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = strrchr(*(char **)cmp,0x2e);
  pcVar3 = strrchr(b->name,0x2e);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  iVar1 = (*(code *)a)(pcVar2,pcVar3);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00107c87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(code *)a)(*(undefined8 *)cmp,b->name);
    return iVar1;
  }
  return iVar1;
}

