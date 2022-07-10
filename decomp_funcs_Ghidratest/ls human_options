
strtol_error human_options(char *spec,int *opts,uintmax_t *block_size)

{
  char *pcVar1;
  char cVar2;
  strtol_error sVar3;
  ptrdiff_t pVar4;
  char *pcVar5;
  uintmax_t uVar6;
  uint uVar7;
  long in_FS_OFFSET;
  char *ptr;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((spec == (char *)0x0) && (spec = getenv("BLOCK_SIZE"), spec == (char *)0x0)) &&
     (spec = getenv("BLOCKSIZE"), spec == (char *)0x0)) {
    pcVar5 = getenv("POSIXLY_CORRECT");
    if (pcVar5 == (char *)0x0) {
      *block_size = 0x400;
      *opts = 0;
    }
    else {
      *block_size = 0x200;
      pcVar5 = (char *)0x0;
      *opts = 0;
    }
  }
  else {
    uVar7 = 0;
    if (*spec == '\'') {
      spec = spec + 1;
      uVar7 = 4;
    }
    pVar4 = argmatch(spec,block_size_args,block_size_opts,4);
    if ((int)pVar4 < 0) {
      sVar3 = xstrtoumax(spec,&ptr,0,block_size,"eEgGkKmMpPtTyYzZ0");
      pcVar5 = (char *)(ulong)sVar3;
      if (sVar3 == LONGINT_OK) {
        cVar2 = *spec;
        while (9 < (byte)(cVar2 - 0x30U)) {
          if (ptr == spec) {
            if (ptr[-1] == 'B') {
              uVar7 = uVar7 | 0x180;
              if (ptr[-2] != 'i') break;
            }
            else {
              uVar7 = uVar7 | 0x80;
            }
            uVar7 = uVar7 | 0x20;
            break;
          }
          pcVar1 = spec + 1;
          spec = spec + 1;
          cVar2 = *pcVar1;
        }
        uVar6 = *block_size;
        *opts = uVar7;
      }
      else {
        *opts = 0;
        uVar6 = *block_size;
      }
      if (uVar6 == 0) {
        pcVar5 = getenv("POSIXLY_CORRECT");
        *block_size = (ulong)(-(uint)(pcVar5 == (char *)0x0) & 0x200) + 0x200;
        pcVar5 = (char *)0x4;
      }
    }
    else {
      *block_size = 1;
      pcVar5 = (char *)0x0;
      *opts = uVar7 | block_size_opts[(int)pVar4];
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (strtol_error)pcVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

