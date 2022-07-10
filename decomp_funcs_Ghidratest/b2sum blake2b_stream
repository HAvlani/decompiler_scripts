
int blake2b_stream(FILE *stream,void *resstream,size_t outbytes)

{
  long lVar1;
  int iVar2;
  int iVar3;
  void *pin;
  size_t sVar4;
  size_t inlen;
  long in_FS_OFFSET;
  blake2b_state S [1];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pin = malloc(0x8000);
  if (pin == (void *)0x0) {
    iVar2 = -1;
LAB_0010617d:
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return iVar2;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  blake2b_init(S,outbytes);
  do {
    inlen = 0;
LAB_00106119:
    sVar4 = fread((void *)((long)pin + inlen),1,0x8000 - inlen,(FILE *)stream);
    inlen = inlen + sVar4;
    if (inlen != 0x8000) {
      if (sVar4 != 0) break;
      iVar3 = ferror((FILE *)stream);
      iVar2 = -1;
      if (iVar3 == 0) goto final_process;
      goto cleanup_buffer;
    }
    blake2b_update(S,pin,0x8000);
  } while( true );
  iVar2 = feof((FILE *)stream);
  if (iVar2 != 0) {
final_process:
    if (inlen != 0) {
      blake2b_update(S,pin,inlen);
    }
    iVar2 = 0;
    blake2b_final(S,resstream,outbytes);
cleanup_buffer:
    rpl_free(pin);
    goto LAB_0010617d;
  }
  goto LAB_00106119;
}

