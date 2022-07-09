
int try_tempname_len(char *tmpl,int suffixlen,void *args,anon_subr_int_char_ptr_void_ptr *tryfunc,
                    size_t x_suffix_len)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  size_t sVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  random_value rVar11;
  long in_FS_OFFSET;
  bool bVar12;
  int local_a0;
  int local_70;
  random_value v;
  random_value r;
  timespec tv;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  piVar4 = __errno_location();
  iVar1 = *piVar4;
  v = (ulong)&v >> 4;
  bVar12 = tryfunc == try_nocreate;
  sVar5 = strlen(tmpl);
  if ((long)suffixlen + x_suffix_len <= sVar5) {
    lVar7 = sVar5 - ((long)suffixlen + x_suffix_len);
    sVar5 = strspn(tmpl + lVar7,"X");
    if (x_suffix_len <= sVar5) {
      local_70 = 0x3a2f8;
      local_a0 = 0;
      do {
        if (x_suffix_len != 0) {
          pcVar10 = tmpl + lVar7;
          do {
            if (local_a0 == 0) {
              rVar11 = v;
              if (bVar12) goto LAB_00111249;
              do {
                clock_gettime(1,(timespec *)&tv);
                uVar8 = (tv.tv_nsec ^ rVar11) * 0x27bb2ee687b0b0fd + 0xb504f32d;
                do {
                  v = uVar8;
                  if (v < 0xf49998db0aa75400) {
                    local_a0 = 9;
                    bVar12 = true;
                    goto LAB_001111c4;
                  }
LAB_00111249:
                  rVar11 = v;
                  lVar6 = getrandom(&r,8,1);
                  uVar8 = r;
                } while (lVar6 == 8);
              } while( true );
            }
            local_a0 = local_a0 + -1;
LAB_001111c4:
            pcVar9 = pcVar10 + 1;
            uVar8 = (v >> 1) / 0x1f;
            *pcVar10 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
                       [v + uVar8 * -0x3e];
            pcVar10 = pcVar9;
            v = uVar8;
          } while (pcVar9 != tmpl + lVar7 + x_suffix_len);
        }
        iVar3 = (*tryfunc)(tmpl,args);
        if (-1 < iVar3) {
          *piVar4 = iVar1;
          goto LAB_001112c9;
        }
      } while ((*piVar4 == 0x11) && (local_70 = local_70 + -1, local_70 != 0));
      iVar3 = -1;
      goto LAB_001112c9;
    }
  }
  *piVar4 = 0x16;
  iVar3 = -1;
LAB_001112c9:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}

