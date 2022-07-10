
void squeeze_filter(anon_subr_size_t_char_ptr_size_t *reader,size_t size,char *buf)

{
  size_t sVar1;
  ulong uVar2;
  size_t sVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  char *__ptr;
  int iVar9;
  size_t sVar10;
  
  iVar9 = 0x7fffffff;
  sVar1 = 0;
  uVar6 = 0;
LAB_00104865:
  do {
    do {
      if (uVar6 < sVar1) {
        uVar7 = uVar6;
        if (iVar9 != 0x7fffffff) goto LAB_00104855;
        goto LAB_001049a9;
      }
LAB_0010486a:
      sVar1 = (*reader)(io_buf,0x2000);
      if (sVar1 == 0) {
        return;
      }
      if (iVar9 == 0x7fffffff) {
        __ptr = io_buf;
        uVar6 = 0;
        uVar7 = uVar6;
LAB_001048bd:
        uVar2 = (ulong)(byte)io_buf[uVar7];
        uVar8 = uVar7;
        if (in_squeeze_set[uVar2] == false) goto LAB_00104960;
        if (sVar1 <= uVar7) {
          sVar10 = sVar1 - uVar6;
          uVar6 = uVar7;
          goto LAB_00104981;
        }
LAB_001048df:
        iVar9 = (int)(char)uVar2;
        sVar10 = (uVar7 - uVar6) + 1;
        if ((uVar7 != 0) && (in_squeeze_set[uVar7 + 0xff] == (_Bool)(char)uVar2)) {
          sVar10 = uVar7 - uVar6;
        }
        uVar7 = uVar7 + 1;
        if ((sVar10 != 0) &&
           (sVar3 = fwrite_unlocked(io_buf + uVar6,1,sVar10,stdout), sVar10 != sVar3)) {
LAB_00104932:
          reader = (anon_subr_size_t_char_ptr_size_t *)dcgettext(0,"write error",5);
          piVar4 = __errno_location();
          __ptr = (char *)0x1;
          error(1,*piVar4,reader);
          uVar8 = uVar7;
LAB_00104960:
          uVar5 = uVar8 + 2;
          uVar7 = uVar5;
          if (uVar5 < sVar1) goto LAB_001048bd;
          uVar7 = uVar8;
          if (uVar5 == sVar1) {
            uVar7 = uVar8 + 1;
            uVar2 = (ulong)(byte)io_buf[uVar8 + 1];
            if ((in_squeeze_set[uVar2] != false) && (uVar5 = uVar7, uVar7 < sVar1))
            goto LAB_001048df;
          }
          sVar10 = sVar1 - uVar6;
          if (sVar10 != 0) goto LAB_00104a10;
          goto joined_r0x00104a04;
        }
        goto LAB_0010488c;
      }
      uVar7 = 0;
LAB_0010488c:
      uVar6 = uVar7;
    } while (sVar1 <= uVar7);
    if (iVar9 == io_buf[uVar7]) {
      do {
        uVar7 = uVar7 + 1;
        uVar6 = sVar1;
        if (sVar1 == uVar7) goto LAB_00104865;
LAB_00104855:
      } while (iVar9 == io_buf[uVar7]);
    }
    iVar9 = 0x7fffffff;
    uVar6 = uVar7;
  } while( true );
LAB_00104a10:
  __ptr = io_buf + uVar6;
  uVar6 = uVar5;
LAB_00104981:
  sVar3 = fwrite_unlocked(__ptr,1,sVar10,stdout);
  uVar5 = uVar6;
  if (sVar10 != sVar3) goto LAB_00104932;
joined_r0x00104a04:
  uVar6 = uVar5;
  iVar9 = 0x7fffffff;
  if (sVar1 <= uVar6) goto LAB_0010486a;
LAB_001049a9:
  __ptr = io_buf + uVar6;
  uVar7 = uVar6;
  goto LAB_001048bd;
}

