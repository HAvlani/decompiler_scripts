
int blake2b(void *out,size_t outlen,void *in,size_t inlen,void *key,size_t keylen)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  blake2b_state S [1];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((in != (void *)0x0 || inlen == 0) && (out != (void *)0x0)) &&
      ((key != (void *)0x0 || (keylen == 0)))) && ((outlen - 1 < 0x40 && (keylen < 0x41)))) {
    if (keylen == 0) {
      iVar2 = blake2b_init(S,outlen);
    }
    else {
      iVar2 = blake2b_init_key(S,outlen,key,keylen);
    }
    if (-1 < iVar2) {
      if (inlen != 0) {
        blake2b_update(S,in,inlen);
      }
      blake2b_final(S,out,outlen);
      iVar2 = 0;
      goto LAB_001063fb;
    }
  }
  iVar2 = -1;
LAB_001063fb:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}

