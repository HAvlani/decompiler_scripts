
ushort is_char_class_member(undefined4 param_1,uint param_2)

{
  ushort uVar1;
  ushort **ppuVar2;
  
  switch(param_1) {
  case 0:
    ppuVar2 = __ctype_b_loc();
    uVar1 = (*ppuVar2)[param_2 & 0xff] & 8;
    break;
  case 1:
    ppuVar2 = __ctype_b_loc();
    uVar1 = (*ppuVar2)[param_2 & 0xff] & 0x400;
    break;
  case 2:
    ppuVar2 = __ctype_b_loc();
    uVar1 = (*ppuVar2)[param_2 & 0xff] & 1;
    break;
  case 3:
    ppuVar2 = __ctype_b_loc();
    uVar1 = (*ppuVar2)[param_2 & 0xff] & 2;
    break;
  case 4:
    ppuVar2 = __ctype_b_loc();
    uVar1 = (*ppuVar2)[param_2 & 0xff] & 0x800;
    break;
  case 5:
    ppuVar2 = __ctype_b_loc();
    uVar1 = (*ppuVar2)[param_2 & 0xff] & 0x8000;
    break;
  case 6:
    ppuVar2 = __ctype_b_loc();
    uVar1 = (*ppuVar2)[param_2 & 0xff] & 0x200;
    break;
  case 7:
    ppuVar2 = __ctype_b_loc();
    uVar1 = (*ppuVar2)[param_2 & 0xff] & 0x4000;
    break;
  case 8:
    ppuVar2 = __ctype_b_loc();
    uVar1 = (*ppuVar2)[param_2 & 0xff] & 4;
    break;
  case 9:
    ppuVar2 = __ctype_b_loc();
    uVar1 = (*ppuVar2)[param_2 & 0xff] & 0x2000;
    break;
  case 10:
    ppuVar2 = __ctype_b_loc();
    uVar1 = (*ppuVar2)[param_2 & 0xff] & 0x100;
    break;
  case 0xb:
    ppuVar2 = __ctype_b_loc();
    uVar1 = (*ppuVar2)[param_2 & 0xff] & 0x1000;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return uVar1 & 0xff00 | (ushort)(uVar1 != 0);
}

