
_Bool needs_quoting(char *name)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  _Bool _Var4;
  char test [2];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  sVar2 = quotearg_buffer(test,2,name,0xffffffffffffffff,filename_quoting_options);
  if (*name == test[0]) {
    sVar3 = strlen(name);
    _Var4 = sVar3 != sVar2;
  }
  else {
    _Var4 = true;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

