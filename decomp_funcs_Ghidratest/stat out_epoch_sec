
void out_epoch_sec(char *pformat,size_t prefix_len,timespec arg)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  long in_RCX;
  long in_RDX;
  int iVar7;
  long lVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  
  pcVar3 = (char *)memchr(pformat,0x2e,prefix_len);
  if (pcVar3 == (char *)0x0) {
    iVar2 = 0;
    iVar10 = 0;
LAB_001045a3:
    iVar11 = 1;
    iVar7 = iVar2;
    do {
      iVar7 = iVar7 + 1;
      iVar11 = iVar11 * 10;
    } while (iVar7 != 9);
    lVar8 = (long)iVar11;
    lVar12 = in_RCX / lVar8;
  }
  else {
    pformat[prefix_len] = '\0';
    prefix_len = (long)pcVar3 - (long)pformat;
    lVar12 = in_RCX;
    if ((int)pcVar3[1] - 0x30U < 10) {
      lVar8 = strtol(pcVar3 + 1,(char **)0x0,10);
      if (0x7fffffff < lVar8) {
        lVar8 = 0x7fffffff;
      }
      iVar2 = (int)lVar8;
      if (iVar2 != 0) {
        if ((int)pcVar3[-1] - 0x30U < 10) goto LAB_00104470;
        iVar10 = 0;
        goto LAB_00104599;
      }
      iVar10 = 0;
      goto LAB_001045a3;
    }
    iVar2 = 9;
    if ((int)pcVar3[-1] - 0x30U < 10) {
LAB_00104470:
      *pcVar3 = '\0';
      do {
        pcVar9 = pcVar3 + -2;
        pcVar3 = pcVar3 + -1;
      } while ((int)*pcVar9 - 0x30U < 10);
      lVar4 = strtol(pcVar3,(char **)0x0,10);
      lVar8 = 0x7fffffff;
      if (lVar4 < 0x80000000) {
        lVar8 = lVar4;
      }
      iVar10 = (int)lVar8;
      if (1 < iVar10) {
        pcVar3 = pcVar3 + (*pcVar3 == '0');
        prefix_len = (long)pcVar3 - (long)pformat;
        if (((decimal_point_len < (ulong)(long)iVar10) &&
            (iVar11 = iVar10 - (int)decimal_point_len, 1 < iVar11)) && (1 < iVar11 - iVar2)) {
          pcVar9 = pformat;
          if (pformat < pcVar3) {
            bVar1 = false;
            pcVar5 = pformat;
            do {
              if (*pcVar5 == '-') {
                bVar1 = true;
              }
              else {
                *pcVar9 = *pcVar5;
                pcVar9 = pcVar9 + 1;
              }
              pcVar5 = pcVar5 + 1;
            } while (pcVar3 != pcVar5);
            prefix_len = (long)pcVar9 - (long)pformat;
            if (bVar1) goto LAB_00104599;
          }
          else {
            prefix_len = 0;
          }
          iVar11 = __sprintf_chk(pcVar9,1,0xffffffffffffffff,&DAT_00111cf8);
          prefix_len = prefix_len + (long)iVar11;
        }
      }
LAB_00104599:
      if (iVar2 < 9) goto LAB_001045a3;
      lVar8 = 1;
      iVar11 = 1;
    }
    else {
      lVar8 = 1;
      iVar10 = 0;
      iVar11 = 1;
    }
  }
  iVar7 = (int)lVar12;
  if ((in_RDX < 0) && (in_RCX != 0)) {
    iVar7 = ((int)(1000000000 / (long)iVar11) - iVar7) - (uint)(in_RCX % lVar8 != 0);
    in_RDX = (ulong)(iVar7 != 0) + in_RDX;
    if (in_RDX == 0) {
      make_format(pformat,prefix_len,"\'-+ 0",".0f");
      iVar11 = __printf_chk(DAT_00111ae0,1,pformat);
      goto LAB_001045ef;
    }
  }
  iVar11 = out_int(pformat,prefix_len,in_RDX);
LAB_001045ef:
  if (iVar2 != 0) {
    iVar6 = 9;
    if (iVar2 < 10) {
      iVar6 = iVar2;
    }
    if (iVar11 < 0) {
      iVar11 = 0;
    }
    iVar13 = 0;
    if ((iVar11 < iVar10) && (decimal_point_len < (ulong)(long)(iVar10 - iVar11))) {
      iVar13 = (iVar10 - iVar11) - (iVar6 + (int)decimal_point_len);
    }
    __printf_chk(1,"%s%.*d%-*.*d",decimal_point,iVar6,iVar7,iVar13,iVar2 - iVar6,0);
  }
  return;
}

