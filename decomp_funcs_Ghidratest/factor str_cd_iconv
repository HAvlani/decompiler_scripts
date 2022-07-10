
char * str_cd_iconv(char *src,iconv_t cd)

{
  ulong uVar1;
  char *__ptr;
  size_t sVar2;
  int *piVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  long in_FS_OFFSET;
  char *inptr;
  size_t inbytes_remaining;
  char *outptr;
  size_t outbytes_remaining;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  inptr = src;
  inbytes_remaining = strlen(src);
  sVar2 = inbytes_remaining << 4;
  if (0xfffffff < inbytes_remaining) {
    sVar2 = inbytes_remaining;
  }
  __ptr = (char *)malloc(sVar2 + 1);
  if (__ptr == (char *)0x0) {
    piVar3 = __errno_location();
    *piVar3 = 0xc;
  }
  else {
    iconv(cd,(char **)0x0,(size_t *)0x0,(char **)0x0,(size_t *)0x0);
    uVar5 = sVar2 + 1;
    outptr = __ptr;
    outbytes_remaining = sVar2;
    while (sVar2 = iconv(cd,&inptr,&inbytes_remaining,&outptr,&outbytes_remaining),
          sVar2 == 0xffffffffffffffff) {
      piVar3 = __errno_location();
      if (*piVar3 == 0x16) break;
      if (*piVar3 != 7) goto failed;
      uVar1 = uVar5 * 2;
      lVar6 = (long)outptr - (long)__ptr;
      if ((uVar1 <= uVar5) || (pcVar4 = (char *)realloc(__ptr,uVar1), pcVar4 == (char *)0x0)) {
        *piVar3 = 0xc;
        goto failed;
      }
      outptr = pcVar4 + lVar6;
      outbytes_remaining = (uVar1 - 1) - lVar6;
      uVar5 = uVar1;
      __ptr = pcVar4;
    }
LAB_00115b83:
    sVar2 = iconv(cd,(char **)0x0,(size_t *)0x0,&outptr,&outbytes_remaining);
    if (sVar2 != 0xffffffffffffffff) goto code_r0x00115b9b;
    piVar3 = __errno_location();
    if (*piVar3 != 7) goto failed;
    uVar1 = uVar5 * 2;
    lVar6 = (long)outptr - (long)__ptr;
    if ((uVar5 < uVar1) && (pcVar4 = (char *)realloc(__ptr,uVar1), pcVar4 != (char *)0x0)) {
      outptr = pcVar4 + lVar6;
      outbytes_remaining = (uVar1 - 1) - lVar6;
      uVar5 = uVar1;
      __ptr = pcVar4;
      goto LAB_00115b83;
    }
    *piVar3 = 0xc;
failed:
    rpl_free(__ptr);
    __ptr = (char *)0x0;
  }
LAB_00115be1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return __ptr;
code_r0x00115b9b:
  pcVar4 = outptr + 1;
  *outptr = '\0';
  outptr = pcVar4;
  if (((ulong)((long)pcVar4 - (long)__ptr) < uVar5) &&
     (pcVar4 = (char *)realloc(__ptr,(long)pcVar4 - (long)__ptr), pcVar4 != (char *)0x0)) {
    __ptr = pcVar4;
  }
  goto LAB_00115be1;
}

