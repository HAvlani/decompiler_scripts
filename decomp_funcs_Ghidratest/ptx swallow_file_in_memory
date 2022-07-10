
/* WARNING: Unknown calling convention yet parameter storage is locked */

void swallow_file_in_memory(void)

{
  char *pcVar1;
  undefined8 uVar2;
  int *piVar3;
  char **in_RDX;
  char **in_RSI;
  char *in_RDI;
  long in_FS_OFFSET;
  size_t local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((in_RDI == (char *)0x0) || (*in_RDI == '\0')) || ((*in_RDI == '-' && (in_RDI[1] == '\0')))) {
    pcVar1 = fread_file((FILE *)stdin,0,&local_28);
    *in_RSI = pcVar1;
    if (pcVar1 == (char *)0x0) {
      in_RDI = "-";
      goto LAB_00106897;
    }
    clearerr_unlocked(stdin);
    pcVar1 = *in_RSI;
  }
  else {
    pcVar1 = read_file(in_RDI,0,&local_28);
    *in_RSI = pcVar1;
    if (pcVar1 == (char *)0x0) {
LAB_00106897:
      uVar2 = quotearg_n_style_colon(0,3,in_RDI);
      piVar3 = __errno_location();
      error(1,*piVar3,&DAT_0011dd94,uVar2);
      goto LAB_001068c6;
    }
  }
  *in_RDX = pcVar1 + local_28;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001068c6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

