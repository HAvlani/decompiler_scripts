
uintmax_t dump_remainder(_Bool want_header,char *pretty_filename,int fd,uintmax_t n_bytes)

{
  long lVar1;
  size_t sVar2;
  int *piVar3;
  undefined8 uVar4;
  char *pcVar5;
  uintmax_t uVar6;
  uintmax_t uVar7;
  long in_FS_OFFSET;
  char buffer [8192];
  
  uVar7 = 0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = n_bytes;
  while( true ) {
    sVar2 = 0x2000;
    if (uVar6 < 0x2001) {
      sVar2 = uVar6;
    }
    sVar2 = safe_read(fd,buffer,sVar2);
    if (sVar2 == 0xffffffffffffffff) break;
    if (sVar2 == 0) goto LAB_0010561d;
    if (want_header != false) {
      pcVar5 = "\n";
      if (first_file_7768 != '\0') {
        pcVar5 = "";
      }
      __printf_chk(1,"%s==> %s <==\n",pcVar5,pretty_filename);
      first_file_7768 = '\0';
    }
    uVar7 = uVar7 + sVar2;
    xwrite_stdout(buffer,sVar2);
    if ((n_bytes != 0xffffffffffffffff) &&
       ((uVar6 = uVar6 - sVar2, uVar6 == 0 || (n_bytes == 0xfffffffffffffffe)))) goto LAB_0010561d;
    want_header = false;
  }
  piVar3 = __errno_location();
  if (*piVar3 != 0xb) {
    pcVar5 = quotearg_style(shell_escape_always_quoting_style,pretty_filename);
    uVar4 = dcgettext(0,"error reading %s",5);
    error(1,*piVar3,uVar4,pcVar5);
    goto LAB_0010567e;
  }
LAB_0010561d:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
LAB_0010567e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

