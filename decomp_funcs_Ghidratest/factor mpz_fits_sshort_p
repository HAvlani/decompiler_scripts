
int mpz_fits_sshort_p(__mpz_struct *u)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  iVar1 = u->_mp_size;
  iVar4 = 0;
  if (iVar1 < 0) {
    if (iVar1 == -1) {
      uVar2 = *u->_mp_d;
      bVar3 = 0x8000 < uVar2;
      bVar5 = uVar2 < 0x7fff;
      bVar6 = uVar2 == 0x7fff;
      goto LAB_00109650;
    }
  }
  else {
    iVar4 = 0;
    if ((iVar1 < 2) && (iVar4 = 1, iVar1 != 0)) {
      uVar2 = *u->_mp_d;
      bVar3 = 0x7fff < uVar2;
      bVar5 = uVar2 < 0x7ffe;
      bVar6 = uVar2 == 0x7ffe;
LAB_00109650:
      return (uint)((uint)bVar3 - (uint)(bVar5 || bVar6) != 1);
    }
  }
  return iVar4;
}

