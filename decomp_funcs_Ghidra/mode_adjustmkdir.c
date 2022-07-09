
mode_t mode_adjust(mode_t oldmode,_Bool dir,mode_t umask_value,mode_change *changes,
                  mode_t *pmode_bits)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  
  cVar7 = changes->flag;
  uVar2 = oldmode & 0xfff;
  uVar3 = 0;
  if (cVar7 != '\0') {
LAB_00103ccd:
    do {
      uVar1 = changes->affected;
      uVar5 = changes->value;
      if (dir == false) {
        if (cVar7 != '\x02') {
          uVar6 = 0xffffffff;
          uVar4 = 0;
          goto LAB_00103c52;
        }
        uVar6 = 0xffffffff;
        uVar4 = uVar2 & 0x49;
        if (uVar4 != 0) {
          uVar4 = 0;
          goto LAB_00103cfd;
        }
LAB_00103c97:
        cVar7 = changes->op;
        uVar5 = uVar5 & uVar6;
        if (uVar1 != 0) goto LAB_00103d10;
LAB_00103ca2:
        uVar5 = uVar5 & ~umask_value;
        if (cVar7 != '-') {
          if (cVar7 != '=') goto LAB_00103cb5;
          goto LAB_00103d29;
        }
LAB_00103d58:
        uVar3 = uVar3 | uVar5;
        uVar2 = uVar2 & ~uVar5;
      }
      else {
        uVar6 = changes->mentioned | 0xfffff3ff;
        uVar4 = ~changes->mentioned & 0xc00;
        if (cVar7 != '\x02') {
LAB_00103c52:
          if (cVar7 == '\x03') {
            uVar5 = uVar5 & uVar2;
            uVar8 = ~-(uint)((uVar5 & 0x124) == 0) & 0x124;
            if ((uVar5 & 0x92) != 0) {
              uVar8 = uVar8 | 0x92;
            }
            if ((uVar5 & 0x49) != 0) {
              uVar8 = uVar8 | 0x49;
            }
            uVar5 = uVar5 | uVar8;
          }
          goto LAB_00103c97;
        }
LAB_00103cfd:
        cVar7 = changes->op;
        uVar5 = (uVar5 | 0x49) & uVar6;
        if (uVar1 == 0) goto LAB_00103ca2;
LAB_00103d10:
        uVar5 = uVar5 & uVar1;
        if (cVar7 == '-') goto LAB_00103d58;
        if (cVar7 == '=') {
          uVar4 = uVar4 | ~uVar1;
          uVar6 = ~uVar4;
LAB_00103d29:
          cVar7 = changes[1].flag;
          changes = changes + 1;
          uVar3 = uVar3 | uVar6 & 0xfff;
          uVar2 = uVar2 & uVar4 | uVar5;
          if (cVar7 == '\0') break;
          goto LAB_00103ccd;
        }
LAB_00103cb5:
        if (cVar7 == '+') {
          uVar3 = uVar3 | uVar5;
          uVar2 = uVar2 | uVar5;
        }
      }
      cVar7 = changes[1].flag;
      changes = changes + 1;
    } while (cVar7 != '\0');
  }
  if (pmode_bits != (mode_t *)0x0) {
    *pmode_bits = uVar3;
  }
  return uVar2;
}
