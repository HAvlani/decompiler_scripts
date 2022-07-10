
uint mpn_base_power_of_two_p(uint b)

{
  uint uVar1;
  
  if (b < 0x21) {
    uVar1 = 0;
    switch(b) {
    case 2:
      return 1;
    case 3:
    case 5:
    case 6:
    case 7:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
      return 0;
    case 4:
      return 2;
    case 8:
      return 3;
    case 0x10:
      return 4;
    case 0x20:
      return 5;
    }
  }
  else {
    uVar1 = 7;
    if (b != 0x80) {
      if (b != 0x100) {
        uVar1 = 0;
        if (b == 0x40) {
          uVar1 = 6;
        }
        return uVar1;
      }
      uVar1 = 8;
    }
  }
  return uVar1;
}

