
int mbsnwidth(char *string,size_t nbytes,int flags)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  size_t sVar5;
  size_t sVar6;
  ushort **ppuVar7;
  size_t sVar8;
  int iVar9;
  long in_FS_OFFSET;
  wchar_t wc;
  mbstate_t mbstate;
  
  pbVar1 = (byte *)(string + nbytes);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  sVar5 = __ctype_get_mb_cur_max();
  if (sVar5 < 2) {
    iVar9 = 0;
    if (string < pbVar1) {
      ppuVar7 = __ctype_b_loc();
      iVar9 = 0;
      do {
        bVar2 = *string;
        string = (char *)((byte *)string + 1);
        if (((*ppuVar7)[bVar2] & 0x4000) == 0) {
          if ((flags & 2U) != 0) goto LAB_0010f290;
          if (((*ppuVar7)[bVar2] & 2) == 0) goto LAB_0010f269;
        }
        else {
LAB_0010f269:
          if (iVar9 == 0x7fffffff) break;
          iVar9 = iVar9 + 1;
        }
      } while (pbVar1 != (byte *)string);
    }
  }
  else {
    iVar9 = 0;
    if (string < pbVar1) {
      do {
        bVar2 = *string;
        if ((char)bVar2 < '`') {
          if ('@' < (char)bVar2) goto LAB_0010f1e3;
          if ('#' < (char)bVar2) {
            if (0x1a < (byte)(bVar2 - 0x25)) goto LAB_0010f12c;
            goto LAB_0010f1e3;
          }
          if ('\x1f' < (char)bVar2) goto LAB_0010f1e3;
LAB_0010f12c:
          mbstate = (mbstate_t)0x0;
          do {
            sVar6 = rpl_mbrtowc(&wc,string,(long)pbVar1 - (long)string,
                                (mbstate_t *)(mbstate_t *)&mbstate);
            if (sVar6 == 0xffffffffffffffff) {
              if ((flags & 1U) != 0) goto LAB_0010f290;
              goto LAB_0010f1e3;
            }
            if (sVar6 == 0xfffffffffffffffe) {
              if ((flags & 1U) != 0) goto LAB_0010f290;
              iVar9 = iVar9 + 1;
              string = (char *)pbVar1;
              break;
            }
            sVar8 = 1;
            if (sVar6 != 0) {
              sVar8 = sVar6;
            }
            iVar4 = wcwidth(wc);
            if (iVar4 < 0) {
              if ((flags & 2U) != 0) goto LAB_0010f290;
              iVar4 = iswcntrl(wc);
              if (iVar4 == 0) {
                if (iVar9 == 0x7fffffff) goto LAB_0010f2b8;
                iVar9 = iVar9 + 1;
              }
            }
            else {
              if (0x7fffffff - iVar9 < iVar4) {
LAB_0010f2b8:
                iVar9 = 0x7fffffff;
                goto LAB_0010f1f8;
              }
              iVar9 = iVar9 + iVar4;
            }
            string = (char *)((byte *)string + sVar8);
            iVar4 = mbsinit((mbstate_t *)&mbstate);
          } while (iVar4 == 0);
        }
        else {
          if (0x1d < (byte)(bVar2 + 0x9f)) goto LAB_0010f12c;
LAB_0010f1e3:
          string = (char *)((byte *)string + 1);
          iVar9 = iVar9 + 1;
        }
      } while (string < pbVar1);
    }
  }
LAB_0010f1f8:
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar9;
LAB_0010f290:
  iVar9 = -1;
  goto LAB_0010f1f8;
}

