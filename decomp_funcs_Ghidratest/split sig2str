
int sig2str(int signum,char *signame)

{
  int iVar1;
  int iVar2;
  numname *pnVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = 0;
  pnVar3 = numname_table;
  do {
    if (pnVar3->num == signum) {
      strcpy(signame,numname_table[uVar5].name);
      return 0;
    }
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulong)uVar4;
    pnVar3 = pnVar3 + 1;
  } while (uVar4 != 0x23);
  iVar1 = __libc_current_sigrtmin();
  iVar2 = __libc_current_sigrtmax();
  if ((signum < iVar1) || (iVar2 < signum)) {
    iVar1 = -1;
  }
  else {
    if ((iVar2 - iVar1 >> 1) + iVar1 < signum) {
      *(undefined4 *)signame = 0x414d5452;
      *(undefined2 *)(signame + 4) = 0x58;
      iVar1 = iVar2;
    }
    else {
      *(undefined4 *)signame = 0x494d5452;
      *(undefined2 *)(signame + 4) = 0x4e;
    }
    iVar1 = signum - iVar1;
    if (iVar1 != 0) {
      __sprintf_chk(signame + 5,1,0xffffffffffffffff,&DAT_0010b9f4,iVar1);
      return 0;
    }
  }
  return iVar1;
}

