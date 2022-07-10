
void finalize_tab_stops(void)

{
  ulong uVar1;
  size_t sVar2;
  undefined8 uVar3;
  ulong uVar4;
  uintmax_t uVar5;
  undefined auVar6 [16];
  
  if (first_free_tab == 0) goto LAB_00103490;
  sVar2 = 0;
  uVar4 = 0;
  do {
    uVar1 = tab_list[sVar2];
    if (uVar1 == 0) {
LAB_001034f0:
      uVar3 = dcgettext(0,"tab size cannot be 0",5);
      auVar6 = error(1,0,uVar3);
      goto LAB_00103514;
    }
    if (uVar1 <= uVar4) {
      uVar3 = dcgettext(0,"tab sizes must be ascending",5);
      error(1,0,uVar3);
      goto LAB_001034f0;
    }
    sVar2 = sVar2 + 1;
    uVar4 = uVar1;
    if (first_free_tab == sVar2) {
      if ((increment_size != 0) && (extend_size != 0)) {
        while( true ) {
          uVar3 = dcgettext(0,"\'/\' specifier is mutually exclusive with \'+\'",5);
          error(1,0,uVar3);
LAB_00103490:
          auVar6 = CONCAT88(increment_size,extend_size);
          if (increment_size == 0) break;
LAB_00103514:
          uVar5 = SUB168(auVar6 >> 0x40,0);
          if (SUB168(auVar6,0) == 0) {
            tab_size = uVar5;
            max_column_width = uVar5;
            return;
          }
        }
        if (extend_size != 0) {
          tab_size = extend_size;
          max_column_width = extend_size;
          return;
        }
        tab_size = 8;
        max_column_width = 8;
        return;
      }
      if ((first_free_tab == 1) && ((increment_size | extend_size) == 0)) {
        tab_size = *tab_list;
      }
      else {
        tab_size = 0;
      }
      return;
    }
  } while( true );
}

