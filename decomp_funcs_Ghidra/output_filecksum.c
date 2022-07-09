
void output_file(char *file,int binary_file,void *digest,_Bool tagged,uchar delim,_Bool args,
                uintmax_t length)

{
  undefined *puVar1;
  uchar *puVar2;
  char *pcVar3;
  ulong uVar4;
  _Bool escape;
  
  escape = false;
  if ((delim == '\n') &&
     (((pcVar3 = strchr(file,0x5c), pcVar3 != (char *)0x0 ||
       (pcVar3 = strchr(file,10), pcVar3 != (char *)0x0)) ||
      (pcVar3 = strchr(file,0xd), escape = false, pcVar3 != (char *)0x0)))) {
    pcVar3 = stdout->_IO_write_ptr;
    if (stdout->_IO_write_end <= pcVar3) {
      __overflow(stdout,0x5c);
      escape = true;
      goto LAB_00103f0d;
    }
    escape = true;
    stdout->_IO_write_ptr = pcVar3 + 1;
    *pcVar3 = '\\';
    if (tagged == false) goto LAB_00103f16;
LAB_00104022:
    fputs_unlocked(algorithm_tags[cksum_algorithm],stdout);
    if ((cksum_algorithm == blake2b) && (digest_length < 0x200)) {
      __printf_chk(1,&DAT_0011900d);
    }
    fwrite_unlocked(&DAT_00119012,1,2,stdout);
    print_filename(file,escape);
    fwrite_unlocked(&DAT_00119015,1,4,stdout);
    if (digest_hex_bytes >> 1 == 0) goto LAB_00103f5c;
LAB_00103f22:
    uVar4 = 0;
    do {
      puVar1 = (undefined *)((long)digest + uVar4);
      uVar4 = uVar4 + 1;
      __printf_chk(1,&DAT_0011901a,*puVar1);
    } while (uVar4 < digest_hex_bytes >> 1);
    if (tagged != false) goto LAB_00103f5c;
  }
  else {
LAB_00103f0d:
    if (tagged != false) goto LAB_00104022;
LAB_00103f16:
    if (digest_hex_bytes >> 1 != 0) goto LAB_00103f22;
  }
  pcVar3 = stdout->_IO_write_ptr;
  if (pcVar3 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar3 + 1;
    *pcVar3 = ' ';
  }
  else {
    __overflow(stdout,0x20);
  }
  pcVar3 = stdout->_IO_write_ptr;
  if (pcVar3 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar3 + 1;
    *pcVar3 = ' ';
  }
  else {
    __overflow(stdout,0x20);
  }
  print_filename(file,escape);
LAB_00103f5c:
  puVar2 = (uchar *)stdout->_IO_write_ptr;
  if (stdout->_IO_write_end <= puVar2) {
    __overflow(stdout,(uint)delim);
    return;
  }
  stdout->_IO_write_ptr = (char *)(puVar2 + 1);
  *puVar2 = delim;
  return;
}

