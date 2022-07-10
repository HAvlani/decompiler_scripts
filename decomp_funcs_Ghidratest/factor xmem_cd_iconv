
int xmem_cd_iconv(char *src,size_t srclen,iconv_t cd,char **resultp,size_t *lengthp)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = mem_cd_iconv();
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    if (*piVar2 == 0xc) {
                    /* WARNING: Subroutine does not return */
      xalloc_die();
    }
  }
  return iVar1;
}

