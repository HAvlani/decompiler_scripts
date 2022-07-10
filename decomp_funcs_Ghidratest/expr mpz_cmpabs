
int mpz_cmpabs(__mpz_struct *u,__mpz_struct *v)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  uVar1 = v->_mp_size >> 0x1f;
  uVar3 = u->_mp_size >> 0x1f;
  lVar4 = (long)(int)((v->_mp_size ^ uVar1) - uVar1);
  lVar2 = (long)(int)((u->_mp_size ^ uVar3) - uVar3);
  if (lVar4 != lVar2) {
    return ((lVar4 <= lVar2) - 1) + (uint)(lVar4 <= lVar2);
  }
  do {
    lVar2 = lVar2 + -1;
    if (lVar2 == -1) {
      return 0;
    }
  } while (u->_mp_d[lVar2] == v->_mp_d[lVar2]);
  return (-(uint)(v->_mp_d[lVar2] < u->_mp_d[lVar2]) & 2) - 1;
}

