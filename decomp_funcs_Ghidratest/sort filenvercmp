
int filenvercmp(char *a,ptrdiff_t alen,char *b,ptrdiff_t blen)

{
  long s1_len;
  int iVar1;
  uint uVar2;
  idx_t s1_len_00;
  idx_t s2_len;
  bool bVar3;
  bool bVar4;
  ptrdiff_t local_28;
  ptrdiff_t local_20;
  
  bVar3 = alen == 0;
  if (alen < 0) {
    bVar3 = *a == '\0';
  }
  bVar4 = blen == 0;
  if (blen < 0) {
    bVar4 = *b == '\0';
  }
  if (bVar3) {
LAB_0010d810:
    return -(uint)(bVar4 ^ 1);
  }
  if (bVar4 != false) {
    return 1;
  }
  if (*a == '.') {
    if (*b == '.') {
      bVar3 = alen == 1;
      if (alen < 0) {
        bVar3 = a[1] == '\0';
      }
      bVar4 = blen == 1;
      if (blen < 0) {
        bVar4 = b[1] == '\0';
      }
      if (bVar3) goto LAB_0010d810;
      if (bVar4 != false) {
        return 1;
      }
      if (a[1] == '.') {
        if (alen < 0) {
          if (a[2] == '\0') goto LAB_0010d8c3;
          goto LAB_0010d888;
        }
        if (alen != 2) goto LAB_0010d888;
LAB_0010d8c3:
        if (b[1] != '.') goto LAB_0010d8a9;
        uVar2 = 1;
      }
      else {
LAB_0010d888:
        if (b[1] != '.') goto LAB_0010d7a8;
        uVar2 = 0;
      }
      if (blen < 0) {
        if (b[2] == '\0') goto LAB_0010d8e0;
      }
      else if (blen == 2) {
LAB_0010d8e0:
        return uVar2 ^ 1;
      }
      if (uVar2 == 0) goto LAB_0010d7a8;
    }
LAB_0010d8a9:
    iVar1 = -1;
  }
  else {
    if (*b == '.') {
      return 1;
    }
LAB_0010d7a8:
    local_28 = blen;
    local_20 = alen;
    s1_len_00 = file_prefixlen(a,&local_20);
    s2_len = file_prefixlen(b,&local_28);
    s1_len = local_20;
    if (local_20 == s1_len_00) {
      iVar1 = verrevcmp(a,local_20,b,s2_len);
      if (local_28 == s2_len) {
        return iVar1;
      }
    }
    else {
      iVar1 = verrevcmp(a,s1_len_00,b,s2_len);
    }
    if (iVar1 == 0) {
      iVar1 = verrevcmp(a,s1_len,b,local_28);
    }
  }
  return iVar1;
}

