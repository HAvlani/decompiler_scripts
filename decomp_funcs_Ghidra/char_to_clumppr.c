
int char_to_clump(char c)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ushort **ppuVar5;
  int iVar6;
  char *pcVar7;
  int iVar9;
  long in_FS_OFFSET;
  char esc_buff [4];
  char *pcVar8;
  
  pcVar1 = clump_buff;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (input_tab_char == c) {
    iVar4 = chars_per_input_tab - input_position % chars_per_input_tab;
    if (untabify_input != false) {
      if (iVar4 == 0) {
        iVar9 = 0;
        goto LAB_00103e9c;
      }
      goto LAB_00103e76;
    }
LAB_00103ede:
    *clump_buff = c;
    iVar9 = 1;
joined_r0x00103ee9:
    if (iVar4 < 0) {
      if (input_position == 0) {
LAB_00103f30:
        input_position = 0;
        iVar9 = 0;
        goto LAB_00103e9c;
      }
      iVar6 = -iVar4;
      goto LAB_00103ef3;
    }
  }
  else {
    if (c == '\t') {
      uVar3 = (uint)(input_position >> 0x1f) >> 0x1d;
      iVar4 = (uVar3 - (input_position + uVar3 & 7)) + 8;
      if (untabify_input == false) goto LAB_00103ede;
LAB_00103e76:
      pcVar1 = clump_buff + (ulong)(iVar4 - 1) + 1;
      pcVar8 = clump_buff;
      do {
        pcVar7 = pcVar8 + 1;
        *pcVar8 = ' ';
        pcVar8 = pcVar7;
        iVar9 = iVar4;
      } while (pcVar1 != pcVar7);
      goto joined_r0x00103ee9;
    }
    ppuVar5 = __ctype_b_loc();
    if ((*(byte *)((long)*ppuVar5 + (ulong)(byte)c * 2 + 1) & 0x40) != 0) {
      *pcVar1 = c;
      iVar9 = 1;
      input_position = input_position + 1;
      goto LAB_00103e9c;
    }
    if (use_esc_sequence != false) {
LAB_00103f48:
      *pcVar1 = '\\';
      __sprintf_chk(esc_buff,1,4,&DAT_0010d06c,c);
      iVar9 = 4;
      pcVar1[1] = esc_buff[0];
      pcVar1[2] = esc_buff[1];
      pcVar1[3] = esc_buff[2];
      input_position = input_position + 4;
      goto LAB_00103e9c;
    }
    if (use_cntrl_prefix != false) {
      if (-1 < c) {
        *pcVar1 = '^';
        iVar9 = 2;
        pcVar1[1] = c ^ 0x40;
        input_position = input_position + 2;
        goto LAB_00103e9c;
      }
      goto LAB_00103f48;
    }
    if (c != '\b') {
      *pcVar1 = c;
      iVar9 = 1;
      goto LAB_00103e9c;
    }
    *pcVar1 = '\b';
    if (input_position == 0) goto LAB_00103f30;
    iVar6 = 1;
    iVar9 = 1;
    iVar4 = -1;
LAB_00103ef3:
    if (input_position <= iVar6) {
      input_position = 0;
      goto LAB_00103e9c;
    }
  }
  input_position = input_position + iVar4;
LAB_00103e9c:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

