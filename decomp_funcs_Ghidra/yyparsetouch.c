
/* WARNING: Could not reconcile some variable overlaps */

int yyparse(parser_control *pc)

{
  int *piVar1;
  ulong *puVar2;
  undefined auVar3 [16];
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  idx_t iVar13;
  idx_t iVar14;
  intmax_t iVar15;
  intmax_t iVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iVar22;
  uint uVar23;
  byte *pbVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  long lVar28;
  ulong uVar29;
  char cVar30;
  bool bVar31;
  int iVar32;
  uint *puVar33;
  textint *ptVar34;
  textint *ptVar35;
  table *ptVar36;
  char *pcVar37;
  ulong uVar38;
  char *pcVar39;
  long lVar40;
  uint *puVar41;
  byte bVar42;
  byte *pbVar43;
  int iVar44;
  ulong uVar45;
  uint uVar46;
  int iVar47;
  uint uVar48;
  long in_FS_OFFSET;
  bool bVar49;
  bool bVar50;
  byte bVar51;
  int local_5e4;
  ulong local_5e0;
  ulong local_5d8;
  ulong local_5d0;
  ulong local_5c8;
  ulong local_5c0;
  long local_5b8;
  intmax_t digits;
  undefined8 local_558;
  undefined4 uStack1360;
  undefined4 uStack1356;
  undefined4 local_548;
  undefined4 uStack1348;
  undefined4 uStack1344;
  undefined4 uStack1340;
  undefined4 local_538;
  undefined4 uStack1332;
  undefined4 uStack1328;
  undefined4 uStack1324;
  intmax_t local_528;
  undefined4 local_518;
  undefined4 uStack1300;
  undefined4 uStack1296;
  undefined4 uStack1292;
  undefined4 uStack1288;
  undefined4 uStack1284;
  undefined4 uStack1280;
  undefined4 uStack1276;
  undefined4 uStack1272;
  undefined4 uStack1268;
  undefined4 local_4f0;
  undefined4 uStack1260;
  ulong uStack1256;
  YYSTYPE yyvsa [20];
  yy_state_t yyssa [20];
  char buff [20];
  long local_40;
  
  bVar51 = 0;
  uVar48 = 0xfffffffe;
  iVar47 = 0;
  uVar46 = 0x26;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  yyssa[0] = '\0';
  local_5e4 = 0;
  ptVar35 = (textint *)yyvsa;
  pcVar37 = yyssa;
LAB_00105b37:
  if (uVar48 == 0xfffffffe) {
    pbVar24 = (byte *)pc->input;
    uVar48 = (uint)*pbVar24;
LAB_00105f46:
    do {
      cVar30 = (char)uVar48;
      if (cVar30 < '\x0e') {
        if ('\b' < cVar30) {
LAB_00105fe9:
          pbVar24 = pbVar24 + 1;
          pc->input = (char *)pbVar24;
          uVar48 = (uint)*pbVar24;
          goto LAB_00105f46;
        }
      }
      else if (cVar30 == ' ') goto LAB_00105fe9;
      bVar42 = cVar30 - 0x2bU & 0xfd;
      if (uVar48 - 0x30 < 10) {
        if (bVar42 != 0) {
          iVar32 = 0;
          break;
        }
      }
      else if (bVar42 != 0) {
        if (cVar30 < '[') {
          if ('@' < cVar30) {
LAB_0010624e:
            puVar33 = (uint *)buff;
            goto LAB_0010627e;
          }
        }
        else if ((byte)(cVar30 + 0x9fU) < 0x1a) goto LAB_0010624e;
        if (cVar30 != '(') {
          pc->input = (char *)(pbVar24 + 1);
          uVar48 = (uint)*pbVar24;
          if (*pbVar24 == 0) goto LAB_00105f20;
          goto LAB_00106150;
        }
        lVar28 = 0;
        do {
          pbVar43 = pbVar24;
          pbVar24 = pbVar43 + 1;
          pc->input = (char *)pbVar24;
          bVar42 = *pbVar43;
          if (bVar42 == 0) goto LAB_00105f20;
          if (bVar42 == 0x28) {
            lVar28 = lVar28 + 1;
          }
          else {
            lVar28 = lVar28 - (ulong)(bVar42 == 0x29);
          }
        } while (lVar28 != 0);
        uVar48 = (uint)pbVar43[1];
        goto LAB_00105f46;
      }
      iVar32 = (-(uint)(cVar30 != '-') & 2) - 1;
      do {
        while( true ) {
          pbVar24 = pbVar24 + 1;
          pc->input = (char *)pbVar24;
          bVar42 = *pbVar24;
          uVar48 = (uint)bVar42;
          if ('\r' < (char)bVar42) break;
          if ((char)bVar42 < '\t') goto LAB_00106032;
        }
      } while (bVar42 == 0x20);
LAB_00106032:
    } while (9 < bVar42 - 0x30);
    lVar28 = 0;
LAB_00106049:
    iVar22 = uVar48 - 0x30;
    if (iVar32 == -1) {
      iVar22 = 0x30 - uVar48;
    }
    uVar38 = lVar28 + iVar22;
    if (!SCARRY8(lVar28,(long)iVar22)) {
      uVar48 = (uint)pbVar24[1];
      pbVar43 = pbVar24 + 1;
      if (uVar48 - 0x30 < 10) goto LAB_00106170;
      if (((pbVar24[1] & 0xfd) == 0x2c) && (uVar23 = (int)(char)pbVar24[2] - 0x30, uVar23 < 10)) {
        iVar44 = (int)(char)pbVar24[3];
        pbVar24 = pbVar24 + 3;
        iVar27 = 8;
        iVar22 = iVar44;
        do {
          uVar48 = iVar44 - 0x30;
          uVar23 = uVar23 * 10;
          if (uVar48 < 10) {
            iVar44 = (int)(char)pbVar24[1];
            uVar23 = uVar23 + uVar48;
            pbVar24 = pbVar24 + 1;
            uVar48 = iVar44 - 0x30;
            iVar22 = iVar44;
          }
          iVar27 = iVar27 + -1;
        } while (iVar27 != 0);
        if (iVar32 != -1) {
joined_r0x001060e1:
          while (uVar48 < 10) {
            pbVar43 = pbVar24 + 1;
            pbVar24 = pbVar24 + 1;
            uVar48 = (int)(char)*pbVar43 - 0x30;
          }
          if ((-1 < iVar32) || (uVar23 == 0)) {
            pc->input = (char *)pbVar24;
            iVar22 = ~-(uint)(iVar32 == 0) + 0x16;
            uVar48 = ~-(uint)(iVar32 == 0) + 0x115;
            local_5c0 = (long)(int)uVar23;
            local_558 = uVar38;
            goto LAB_0010615e;
          }
LAB_00106104:
          if (!SCARRY8(uVar38,-1)) {
            pc->input = (char *)pbVar24;
            uVar48 = 0x114;
            iVar22 = 0x15;
            local_5c0 = (long)(int)(1000000000 - uVar23);
            local_558 = uVar38 - 1;
            goto LAB_0010615e;
          }
          goto LAB_001074d3;
        }
        while (uVar48 < 10) {
          if ((char)iVar22 != '0') {
            uVar23 = uVar23 + 1;
            uVar48 = (int)(char)*pbVar24 - 0x30;
            goto joined_r0x001060e1;
          }
          iVar22 = (int)(char)pbVar24[1];
          pbVar24 = pbVar24 + 1;
          uVar48 = iVar22 - 0x30;
        }
        if (uVar23 != 0) goto LAB_00106104;
        pc->input = (char *)pbVar24;
        iVar22 = 0x15;
        uVar48 = 0x114;
        local_5c0 = 0;
        local_558 = uVar38;
      }
      else {
        local_558 = local_558 & 0xffffffffffffff00 | (ulong)(byte)((uint)iVar32 >> 0x1f);
        local_5b8 = (long)pbVar43 - (long)pc->input;
        pc->input = (char *)pbVar43;
        iVar22 = ~-(uint)(iVar32 == 0) + 0x14;
        uVar48 = ~-(uint)(iVar32 == 0) + 0x113;
        local_5c0 = uVar38;
      }
      goto LAB_0010615e;
    }
    goto LAB_00106146;
  }
  goto LAB_00105b41;
LAB_0010627e:
  do {
    pbVar24 = pbVar24 + 1;
    if (puVar33 < buff + 0x13) {
      *(byte *)puVar33 = (byte)uVar48;
      puVar33 = (uint *)((long)puVar33 + 1);
    }
    pc->input = (char *)pbVar24;
    bVar42 = *pbVar24;
    uVar48 = (uint)bVar42;
    if ((char)bVar42 < '[') {
      if ('@' < (char)bVar42) goto LAB_0010627e;
    }
    else if ((byte)(bVar42 + 0x9f) < 0x1a) goto LAB_0010627e;
  } while (bVar42 == 0x2e);
  *(byte *)puVar33 = 0;
  puVar33 = (uint *)buff;
  bVar42 = buff[0];
  while (bVar42 != 0) {
    if (bVar42 - 0x61 < 0x1a) {
      bVar42 = bVar42 - 0x20;
    }
    *(byte *)puVar33 = bVar42;
    bVar42 = *(byte *)(uint *)((long)puVar33 + 1);
    puVar33 = (uint *)((long)puVar33 + 1);
  }
  pcVar39 = "AM";
  ptVar36 = meridian_table;
  do {
    iVar32 = strcmp(buff,pcVar39);
    if (iVar32 == 0) {
      local_558 = (ulong)ptVar36->value;
      uVar48 = ptVar36->type;
      goto LAB_00105b41;
    }
    pcVar39 = ptVar36[1].name;
    ptVar36 = ptVar36 + 1;
    puVar33 = (uint *)buff;
  } while (pcVar39 != (char *)0x0);
  do {
    puVar41 = puVar33;
    uVar23 = *puVar41 + 0xfefefeff & ~*puVar41;
    uVar48 = uVar23 & 0x80808080;
    puVar33 = puVar41 + 1;
  } while (uVar48 == 0);
  bVar49 = (uVar23 & 0x8080) == 0;
  if (bVar49) {
    uVar48 = uVar48 >> 0x10;
  }
  if (bVar49) {
    puVar33 = (uint *)((long)puVar41 + 6);
  }
  bVar49 = true;
  pbVar24 = (byte *)((long)puVar33 + ((-3 - (ulong)CARRY1((byte)uVar48,(byte)uVar48)) - (long)buff))
  ;
  if ((pbVar24 != (byte *)0x3) && (bVar49 = false, pbVar24 == (byte *)0x4)) {
    bVar49 = buff[3] == '.';
  }
  pcVar39 = "JANUARY";
  ptVar36 = month_and_day_table;
  do {
    if (bVar49) {
      iVar32 = strncmp(buff,pcVar39,3);
    }
    else {
      iVar32 = strcmp(buff,pcVar39);
    }
    bVar31 = iVar32 == 0;
    if (bVar31) goto LAB_001074a8;
    pcVar39 = ptVar36[1].name;
    ptVar36 = ptVar36 + 1;
  } while (pcVar39 != (char *)0x0);
  ptVar36 = lookup_zone(pc,buff);
  bVar49 = false;
  bVar50 = ptVar36 == (table *)0x0;
  if (!bVar50) {
LAB_001074a8:
    local_558 = (ulong)ptVar36->value;
    uVar48 = ptVar36->type;
LAB_00105b41:
    if ((int)uVar48 < 1) {
LAB_00105f20:
      iVar22 = 0;
      uVar48 = 0;
      uVar23 = uVar46;
      goto LAB_00105b6e;
    }
    if (uVar48 == 0x100) {
      uVar48 = 0x101;
      goto LAB_00105ee7;
    }
    if (0x115 < (int)uVar48) {
      iVar22 = 2;
      uVar23 = uVar46 + 2;
      goto LAB_00105b6e;
    }
    goto LAB_00106150;
  }
  lVar28 = 4;
  puVar33 = (uint *)buff;
  pbVar43 = &DAT_00112ac5;
  do {
    if (lVar28 == 0) break;
    lVar28 = lVar28 + -1;
    bVar49 = *(byte *)puVar33 < *pbVar43;
    bVar50 = *(byte *)puVar33 == *pbVar43;
    puVar33 = (uint *)((long)puVar33 + (ulong)bVar51 * -2 + 1);
    pbVar43 = pbVar43 + (ulong)bVar51 * -2 + 1;
  } while (bVar50);
  pcVar39 = "YEAR";
  if ((!bVar49 && !bVar50) == bVar49) {
    local_558 = 0;
    uVar48 = 0x103;
    goto LAB_00106150;
  }
  ptVar36 = time_units_table;
  do {
    iVar32 = strcmp(buff,pcVar39);
    if (iVar32 == 0) goto LAB_001074a8;
    pcVar39 = ptVar36[1].name;
    ptVar36 = ptVar36 + 1;
  } while (pcVar39 != (char *)0x0);
  pbVar43 = &stack0xffffffffffffffa4 + (long)(pbVar24 + 3);
  if (*pbVar43 == 0x53) {
    pcVar39 = "YEAR";
    ptVar36 = time_units_table;
    *pbVar43 = 0;
    do {
      iVar32 = strcmp(buff,pcVar39);
      if (iVar32 == 0) {
        local_558 = (ulong)ptVar36->value;
        uVar48 = ptVar36->type;
        goto LAB_00105b41;
      }
      pcVar39 = ptVar36[1].name;
      ptVar36 = ptVar36 + 1;
    } while (pcVar39 != (char *)0x0);
    *pbVar43 = 0x53;
  }
  pcVar39 = "TOMORROW";
  ptVar36 = relative_time_table;
  do {
    iVar32 = strcmp(buff,pcVar39);
    if (iVar32 == 0) goto LAB_001074a8;
    pcVar39 = ptVar36[1].name;
    ptVar36 = ptVar36 + 1;
  } while (pcVar39 != (char *)0x0);
  if (pbVar24 == (byte *)0x1) {
    ptVar36 = military_table;
    pcVar39 = "A";
    do {
      if (*pcVar39 == buff[0]) goto LAB_001074a8;
      pcVar39 = ptVar36[1].name;
      ptVar36 = ptVar36 + 1;
    } while (pcVar39 != (char *)0x0);
  }
  puVar33 = (uint *)buff;
  puVar41 = (uint *)buff;
  bVar42 = buff[0];
  if (buff[0] != '\0') {
    do {
      if (bVar42 == 0x2e) {
        bVar31 = true;
      }
      else {
        puVar33 = (uint *)((long)puVar33 + 1);
      }
      bVar42 = *(byte *)((long)puVar41 + 1);
      puVar41 = (uint *)((long)puVar41 + 1);
      *(byte *)puVar33 = bVar42;
    } while (bVar42 != 0);
    if ((bVar31) && (ptVar36 = lookup_zone(pc,buff), ptVar36 != (table *)0x0)) {
      local_558 = (ulong)ptVar36->value;
      uVar48 = ptVar36->type;
      goto LAB_00105b41;
    }
  }
  if (pc->parse_datetime_debug == false) {
LAB_001074d3:
    iVar22 = 2;
    uVar48 = 0x3f;
  }
  else {
    uVar48 = 0x3f;
    pcVar39 = (char *)dcgettext(0,"error: unknown word \'%s\'\n",5);
    dbg_printf(pcVar39);
    iVar22 = 2;
  }
LAB_0010615e:
  uVar23 = uVar46 + iVar22;
LAB_00105b6e:
  if (0x70 < uVar23) goto yydefault;
  if ("\x1b\x05\x06\a\b\t\n\x04\f\x0ff\x0f\x10\x13\x0f\x13\x13\x14\x13\x19p\x19\x13\x1b\x05\x06\a\b\t\n\x05\x06\a\b\t\n\x13\x13\x13k\x13\x14\x19\x19\x19q\x13\x14\x15\x16\x19\x05\x06\a\b\t\n\v\f\r\x0e\x17\x10\x11\x12\x13\x14\x15\x16`\x18\x05\x06\a\b\t\n"
      [(int)uVar23] != iVar22) goto yydefault;
  iVar47 = (int)"OCDEFGH:IdkJKenL12efqM;N=>?@AB=>?@ABee\\oZ[jpXo\x05\x06\a\bX\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x01\x17\x18\x19\x1a\x1b\x1c\x1dO\x1e345678\f9=>?@AB<0P/\x06S\bQR\x1aTUVW^_`Yiabc"
                [(int)uVar23];
  iVar32 = -iVar47;
  if ("OCDEFGH:IdkJKenL12efqM;N=>?@AB=>?@ABee\\oZ[jpXo\x05\x06\a\bX\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x01\x17\x18\x19\x1a\x1b\x1c\x1dO\x1e345678\f9=>?@AB<0P/\x06S\bQR\x1aTUVW^_`Yiabc"
      [(int)uVar23] < '\x01') goto yyreduce;
  uVar48 = 0xfffffffe;
  uStack1360 = (undefined4)local_5c0;
  uStack1356 = (undefined4)(local_5c0 >> 0x20);
  local_5e4 = local_5e4 + -1 + (uint)(local_5e4 == 0);
  ptVar35[4].value = local_528;
  ptVar34 = (textint *)&ptVar35[2].value;
  *(undefined4 *)ptVar34 = (undefined4)local_558;
  *(undefined4 *)((long)&ptVar35[2].value + 4) = local_558._4_4_;
  *(undefined4 *)&ptVar35[2].digits = uStack1360;
  *(undefined4 *)((long)&ptVar35[2].digits + 4) = uStack1356;
  ptVar35[3].negative = CONCAT412(uStack1340,CONCAT48(uStack1344,local_5b8));
  *(undefined4 *)&ptVar35[3].digits = local_538;
  *(undefined4 *)((long)&ptVar35[3].digits + 4) = uStack1332;
  *(undefined4 *)(ptVar35 + 4) = uStack1328;
  *(undefined4 *)&ptVar35[4].field_0x4 = uStack1324;
  while( true ) {
    pcVar37[1] = (char)iVar47;
    pcVar37 = pcVar37 + 1;
    if (yyssa + 0x13 <= pcVar37) {
      iVar47 = 2;
      goto LAB_00105e85;
    }
    if (iVar47 == 0xc) {
      iVar47 = 0;
      goto LAB_00105e85;
    }
    uVar46 = (uint)yypact[iVar47];
    ptVar35 = ptVar34;
    if (uVar46 != 0xffffffa3) break;
yydefault:
    iVar32 = (int)"\x05"[iVar47];
    if ("\x05"[iVar47] == '\0') {
      if (local_5e4 == 3) {
        if ((int)uVar48 < 1) {
          if (uVar48 == 0) goto LAB_00105e80;
        }
        else {
          uVar48 = 0xfffffffe;
        }
      }
LAB_00105ee7:
      while ((((uVar46 == 0xffffffa3 || (uVar46 = uVar46 + 1, 0x70 < uVar46)) ||
              ("\x1b\x05\x06\a\b\t\n\x04\f\x0ff\x0f\x10\x13\x0f\x13\x13\x14\x13\x19p\x19\x13\x1b\x05\x06\a\b\t\n\x05\x06\a\b\t\n\x13\x13\x13k\x13\x14\x19\x19\x19q\x13\x14\x15\x16\x19\x05\x06\a\b\t\n\v\f\r\x0e\x17\x10\x11\x12\x13\x14\x15\x16`\x18\x05\x06\a\b\t\n"
               [(int)uVar46] != '\x01')) ||
             (iVar47 = (int)"OCDEFGH:IdkJKenL12efqM;N=>?@AB=>?@ABee\\oZ[jpXo\x05\x06\a\bX\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x01\x17\x18\x19\x1a\x1b\x1c\x1dO\x1e345678\f9=>?@AB<0P/\x06S\bQR\x1aTUVW^_`Yiabc"
                            [(int)uVar46],
             "OCDEFGH:IdkJKenL12efqM;N=>?@AB=>?@ABee\\oZ[jpXo\x05\x06\a\bX\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x01\x17\x18\x19\x1a\x1b\x1c\x1dO\x1e345678\f9=>?@AB<0P/\x06S\bQR\x1aTUVW^_`Yiabc"
             [(int)uVar46] < '\x01'))) {
        if (pcVar37 == yyssa) goto LAB_00105e80;
        pcVar39 = pcVar37 + -1;
        pcVar37 = pcVar37 + -1;
        ptVar35 = (textint *)&ptVar35[-3].digits;
        uVar46 = (uint)yypact[*pcVar39];
      }
      local_5e4 = 3;
      ptVar34 = (textint *)&ptVar35[2].value;
      uStack1360 = (undefined4)local_5c0;
      uStack1356 = (undefined4)(local_5c0 >> 0x20);
      ptVar35[4].value = local_528;
      local_548 = (undefined4)local_5b8;
      uStack1348 = (undefined4)((ulong)local_5b8 >> 0x20);
      *(undefined4 *)ptVar34 = (undefined4)local_558;
      *(undefined4 *)((long)&ptVar35[2].value + 4) = local_558._4_4_;
      *(undefined4 *)&ptVar35[2].digits = uStack1360;
      *(undefined4 *)((long)&ptVar35[2].digits + 4) = uStack1356;
      *(undefined4 *)(ptVar35 + 3) = local_548;
      *(undefined4 *)&ptVar35[3].field_0x4 = uStack1348;
      *(undefined4 *)&ptVar35[3].value = uStack1344;
      *(undefined4 *)((long)&ptVar35[3].value + 4) = uStack1340;
      *(undefined (*) [16])&ptVar35[3].digits =
           CONCAT412(uStack1324,CONCAT48(uStack1328,CONCAT44(uStack1332,local_538)));
    }
    else {
yyreduce:
      lVar28 = (long)""[iVar32];
      puVar2 = (ulong *)((long)ptVar35 + (long)(1 - ""[iVar32]) * 0x38);
      local_5e0 = puVar2[3];
      uStack1256 = puVar2[6];
      uVar38 = *puVar2;
      local_5d0 = puVar2[4];
      uVar45 = puVar2[1];
      uVar29 = puVar2[2];
      local_5d8 = puVar2[5];
      local_5c8 = (ulong)*(uint *)(puVar2 + 6);
      switch(iVar32) {
      case 4:
        uVar18 = *(undefined4 *)ptVar35;
        uVar19 = *(undefined4 *)&ptVar35->field_0x4;
        uVar20 = *(undefined4 *)&ptVar35->value;
        uVar21 = *(undefined4 *)((long)&ptVar35->value + 4);
        pcVar39 = "number of seconds";
        pc->timespec_seen = true;
        *(undefined4 *)&(pc->seconds).tv_sec = uVar18;
        *(undefined4 *)((long)&(pc->seconds).tv_sec + 4) = uVar19;
        *(undefined4 *)&(pc->seconds).tv_nsec = uVar20;
        *(undefined4 *)((long)&(pc->seconds).tv_nsec + 4) = uVar21;
        goto LAB_00106d96;
      case 7:
        pc->times_seen = pc->times_seen + 1;
        pcVar39 = "datetime";
        pc->dates_seen = pc->dates_seen + 1;
        goto LAB_00106d96;
      case 8:
        pc->times_seen = pc->times_seen + 1;
        pcVar39 = "time";
        goto LAB_00106d96;
      case 9:
        pc->local_zones_seen = pc->local_zones_seen + 1;
        pcVar39 = "local_zone";
        goto LAB_00106d96;
      case 10:
        pc->zones_seen = pc->zones_seen + 1;
        pcVar39 = "zone";
        goto LAB_00106d96;
      case 0xb:
        pc->dates_seen = pc->dates_seen + 1;
        pcVar39 = "date";
        goto LAB_00106d96;
      case 0xc:
        pc->days_seen = pc->days_seen + 1;
        pcVar39 = "day";
LAB_00106d96:
        pcVar39 = (char *)dcgettext(0,pcVar39,5);
        if (pc->parse_datetime_debug != false) {
          debug_print_current_time(pcVar39,pc);
        }
        break;
      case 0xd:
        pcVar39 = "relative";
        goto LAB_00106719;
      case 0xe:
        pcVar39 = (char *)dcgettext(0,"number",5);
        if (pc->parse_datetime_debug != false) {
          debug_print_current_time(pcVar39,pc);
        }
        break;
      case 0xf:
        pcVar39 = "hybrid";
LAB_00106719:
        pcVar39 = (char *)dcgettext(0,pcVar39,5);
        if (pc->parse_datetime_debug != false) {
LAB_00106761:
          debug_print_relative_time(pcVar39,pc);
        }
        break;
      case 0x12:
        iVar16 = *(intmax_t *)(ptVar35 + -2);
        pc->minutes = 0;
        (pc->seconds).tv_sec = 0;
        pc->hour = iVar16;
        uVar17 = *(undefined8 *)ptVar35;
        (pc->seconds).tv_nsec = 0;
        pc->meridian = (int)uVar17;
        break;
      case 0x13:
        iVar16 = *(intmax_t *)(ptVar35 + -2);
        iVar15 = ptVar35[-7].value;
        (pc->seconds).tv_sec = 0;
        (pc->seconds).tv_nsec = 0;
        pc->minutes = iVar16;
        uVar17 = *(undefined8 *)ptVar35;
        pc->hour = iVar15;
        pc->meridian = (int)uVar17;
        break;
      case 0x14:
        iVar16 = ptVar35[-7].value;
        iVar13 = ptVar35[-0xc].digits;
        (pc->seconds).tv_sec = ptVar35[-3].digits;
        iVar47 = *(int *)(ptVar35 + -2);
        pc->hour = iVar13;
        (pc->seconds).tv_nsec = (long)iVar47;
        uVar17 = *(undefined8 *)ptVar35;
        pc->minutes = iVar16;
        pc->meridian = (int)uVar17;
        break;
      case 0x16:
        iVar16 = *(intmax_t *)(ptVar35 + -2);
        pc->minutes = 0;
        (pc->seconds).tv_sec = 0;
        pc->hour = iVar16;
        (pc->seconds).tv_nsec = 0;
        pc->meridian = 2;
        break;
      case 0x17:
        iVar16 = *(intmax_t *)(ptVar35 + -2);
        iVar15 = ptVar35[-7].value;
        (pc->seconds).tv_sec = 0;
        (pc->seconds).tv_nsec = 0;
        pc->hour = iVar15;
        pc->minutes = iVar16;
        pc->meridian = 2;
        break;
      case 0x18:
        iVar13 = ptVar35[-3].digits;
        iVar16 = ptVar35[-7].value;
        pc->meridian = 2;
        iVar14 = ptVar35[-0xc].digits;
        (pc->seconds).tv_sec = iVar13;
        iVar47 = *(int *)(ptVar35 + -2);
        pc->hour = iVar14;
        pc->minutes = iVar16;
        (pc->seconds).tv_nsec = (long)iVar47;
        break;
      case 0x1b:
        pc->zones_seen = pc->zones_seen + 1;
        lVar25 = *(long *)ptVar35;
        lVar26 = *(long *)(ptVar35 + -2);
        if (ptVar35[-2].value < 3) {
          if (-1 < lVar25) goto LAB_00105cdd;
          lVar25 = 0;
          lVar40 = lVar26;
LAB_001075a2:
          lVar25 = lVar25 + lVar40 * 0x3c;
        }
        else {
          if (lVar25 < 0) {
            lVar40 = lVar26 / 100;
            lVar25 = lVar26 % 100;
            goto LAB_001075a2;
          }
LAB_00105cdd:
          lVar40 = lVar26 * 0x3c;
          if (*(char *)&ptVar35[-3].digits == '\0') {
            bVar49 = SCARRY8(lVar40,lVar25);
          }
          else {
            bVar49 = SBORROW8(lVar40,lVar25);
            lVar25 = -lVar25;
          }
          lVar25 = lVar40 + lVar25;
          if ((SEXT816(lVar40) != SEXT816(lVar26) * SEXT816(0x3c) | bVar49) != 0) goto LAB_00105e80;
        }
        if (0xb40 < lVar25 + 0x5a0U) goto LAB_00105e80;
        pc->time_zone = (int)lVar25 * 0x3c;
        break;
      case 0x1c:
        pc->local_isdst = (int)*(undefined8 *)ptVar35;
        break;
      case 0x1d:
        pc->dsts_seen = pc->dsts_seen + 1;
        pc->local_isdst = 1;
        break;
      case 0x1e:
        pc->time_zone = (int)*(undefined8 *)ptVar35;
        break;
      case 0x1f:
        pc->time_zone = -0x6270;
        break;
      case 0x20:
        pc->time_zone = (int)ptVar35[-3].digits;
        goto LAB_0010707c;
      case 0x21:
        pc->time_zone = -0x6270;
LAB_0010707c:
        iVar47 = *(int *)(ptVar35 + 2);
        piVar1 = &(pc->rel).ns;
        iVar22 = *piVar1;
        (pc->rel).ns = iVar47 + *piVar1;
        lVar25 = (pc->rel).seconds;
        lVar26 = ptVar35[1].digits;
        (pc->rel).seconds = lVar25 + ptVar35[1].digits;
        lVar40 = (pc->rel).minutes;
        lVar4 = ptVar35[1].value;
        (pc->rel).minutes = lVar40 + ptVar35[1].value;
        lVar5 = (pc->rel).hour;
        lVar6 = *(long *)(ptVar35 + 1);
        (pc->rel).hour = lVar5 + *(long *)(ptVar35 + 1);
        lVar7 = (pc->rel).day;
        lVar8 = ptVar35->digits;
        (pc->rel).day = lVar7 + ptVar35->digits;
        lVar9 = (pc->rel).month;
        lVar10 = ptVar35->value;
        (pc->rel).month = lVar9 + ptVar35->value;
        lVar11 = (pc->rel).year;
        lVar12 = *(long *)ptVar35;
        (pc->rel).year = lVar11 + *(long *)ptVar35;
        if (((byte)(SCARRY8(lVar9,lVar10) |
                   SCARRY8(lVar25,lVar26) | SCARRY4(iVar47,iVar22) | SCARRY8(lVar40,lVar4) |
                   SCARRY8(lVar5,lVar6) | SCARRY8(lVar7,lVar8)) != 0) ||
           (SCARRY8(lVar11,lVar12) != false)) goto LAB_00105e80;
        pc->rels_seen = true;
        pcVar39 = (char *)dcgettext(0,"relative",5);
        if (pc->parse_datetime_debug == false) break;
        goto LAB_00106761;
      case 0x22:
        lVar25 = *(long *)ptVar35;
        lVar26 = *(long *)(ptVar35 + -2);
        if (ptVar35[-2].value < 3) {
          if (-1 < lVar25) goto LAB_00106ff5;
          lVar25 = 0;
          lVar40 = lVar26;
LAB_001075f5:
          lVar25 = lVar25 + lVar40 * 0x3c;
        }
        else {
          if (lVar25 < 0) {
            lVar40 = lVar26 / 100;
            lVar25 = lVar26 % 100;
            goto LAB_001075f5;
          }
LAB_00106ff5:
          lVar40 = lVar26 * 0x3c;
          if (*(char *)&ptVar35[-3].digits == '\0') {
            bVar49 = SCARRY8(lVar40,lVar25);
          }
          else {
            bVar49 = SBORROW8(lVar40,lVar25);
            lVar25 = -lVar25;
          }
          lVar25 = lVar40 + lVar25;
          if ((SEXT816(lVar40) != SEXT816(lVar26) * SEXT816(0x3c) | bVar49) != 0) goto LAB_00105e80;
        }
        if ((0xb40 < lVar25 + 0x5a0U) ||
           (lVar26 = (long)((int)lVar25 * 0x3c), lVar25 = ptVar35[-5].value,
           lVar40 = lVar26 + ptVar35[-5].value, iVar47 = (int)lVar40, pc->time_zone = iVar47,
           lVar40 != iVar47 || SCARRY8(lVar26,lVar25))) goto LAB_00105e80;
        break;
      case 0x23:
        pc->time_zone = *(int *)ptVar35 + 0xe10;
        break;
      case 0x24:
        pc->time_zone = *(int *)&ptVar35[-3].digits + 0xe10;
        break;
      case 0x25:
        uVar17 = *(undefined8 *)ptVar35;
        pc->day_ordinal = 0;
        pc->day_number = (int)uVar17;
        break;
      case 0x26:
        iVar13 = ptVar35[-3].digits;
        pc->day_ordinal = 0;
        pc->day_number = (int)iVar13;
        break;
      case 0x27:
        iVar13 = ptVar35[-3].digits;
        pc->debug_ordinal_day_seen = true;
        pc->day_ordinal = iVar13;
        pc->day_number = (int)*(undefined8 *)ptVar35;
        break;
      case 0x28:
        iVar16 = *(intmax_t *)(ptVar35 + -2);
        pc->debug_ordinal_day_seen = true;
        pc->day_ordinal = iVar16;
        pc->day_number = (int)*(undefined8 *)ptVar35;
        break;
      case 0x29:
switchD_00105cb7_caseD_29:
        pc->month = ptVar35[-5].digits;
        pc->day = ptVar35->value;
        break;
      case 0x2a:
        lVar25 = ptVar35[-9].value;
        if (3 < lVar25) {
          if (pc->parse_datetime_debug != false) {
            uVar17 = *(undefined8 *)(ptVar35 + -9);
            pcVar39 = (char *)dcgettext(0,"warning: value %ld has %ld digits. Assuming YYYY/MM/DD\n"
                                        ,5);
            dbg_printf(pcVar39,uVar17,lVar25);
          }
          uVar18 = *(undefined4 *)&ptVar35[-10].digits;
          uVar19 = *(undefined4 *)((long)&ptVar35[-10].digits + 4);
          uVar20 = *(undefined4 *)(ptVar35 + -9);
          uVar21 = *(undefined4 *)&ptVar35[-9].field_0x4;
          (pc->year).digits = ptVar35[-9].value;
          *(undefined4 *)&pc->year = uVar18;
          *(undefined4 *)&(pc->year).field_0x4 = uVar19;
          *(undefined4 *)&(pc->year).value = uVar20;
          *(undefined4 *)((long)&(pc->year).value + 4) = uVar21;
          goto switchD_00105cb7_caseD_29;
        }
        iVar16 = *(intmax_t *)(ptVar35 + -9);
        if (pc->parse_datetime_debug != false) {
          pcVar39 = (char *)dcgettext(0,
                                      "warning: value %ld has less than 4 digits. Assuming MM/DD/YY[YY]\n"
                                      ,5);
          dbg_printf(pcVar39,iVar16);
        }
        auVar3 = ptVar35->negative;
        pc->month = iVar16;
        iVar13 = ptVar35[-5].digits;
        (pc->year).negative = auVar3;
        pc->day = iVar13;
        (pc->year).digits = ptVar35->digits;
        break;
      case 0x2b:
        pc->day = ptVar35[-5].digits;
        pc->month = ptVar35[-3].digits;
        lVar25 = ptVar35->value;
        (pc->year).value = -lVar25;
joined_r0x00106d52:
        if (lVar25 != -0x8000000000000000) goto LAB_00106c32;
        goto LAB_00105e80;
      case 0x2c:
        pc->month = ptVar35[-5].value;
        lVar25 = *(long *)(ptVar35 + -2);
        pc->day = -lVar25;
        if (lVar25 != -0x8000000000000000) {
          lVar25 = ptVar35->value;
          (pc->year).value = -lVar25;
          goto joined_r0x00106d52;
        }
        goto LAB_00105e80;
      case 0x2d:
        pc->month = ptVar35[-3].digits;
        pc->day = ptVar35->value;
        break;
      case 0x2e:
        uVar18 = *(undefined4 *)ptVar35;
        uVar19 = *(undefined4 *)&ptVar35->field_0x4;
        uVar20 = *(undefined4 *)&ptVar35->value;
        uVar21 = *(undefined4 *)((long)&ptVar35->value + 4);
        pc->month = *(intmax_t *)(ptVar35 + -7);
        iVar13 = ptVar35[-5].digits;
        *(undefined4 *)&pc->year = uVar18;
        *(undefined4 *)&(pc->year).field_0x4 = uVar19;
        *(undefined4 *)&(pc->year).value = uVar20;
        *(undefined4 *)((long)&(pc->year).value + 4) = uVar21;
        pc->day = iVar13;
LAB_00106c32:
        (pc->year).digits = ptVar35->digits;
        break;
      case 0x2f:
        pc->day = *(intmax_t *)(ptVar35 + -2);
        pc->month = *(intmax_t *)ptVar35;
        break;
      case 0x30:
        auVar3 = ptVar35->negative;
        pc->day = ptVar35[-5].digits;
        iVar13 = ptVar35[-3].digits;
        (pc->year).negative = auVar3;
        pc->month = iVar13;
        (pc->year).digits = ptVar35->digits;
        break;
      case 0x32:
        uVar18 = *(undefined4 *)&ptVar35[-5].value;
        uVar19 = *(undefined4 *)((long)&ptVar35[-5].value + 4);
        uVar20 = *(undefined4 *)&ptVar35[-5].digits;
        uVar21 = *(undefined4 *)((long)&ptVar35[-5].digits + 4);
        (pc->year).digits = *(idx_t *)(ptVar35 + -4);
        lVar25 = *(long *)(ptVar35 + -2);
        *(undefined4 *)&pc->year = uVar18;
        *(undefined4 *)&(pc->year).field_0x4 = uVar19;
        *(undefined4 *)&(pc->year).value = uVar20;
        *(undefined4 *)((long)&(pc->year).value + 4) = uVar21;
        pc->month = -lVar25;
        if ((lVar25 == -0x8000000000000000) ||
           (lVar25 = ptVar35->value, pc->day = -lVar25, lVar25 == -0x8000000000000000))
        goto LAB_00105e80;
        break;
      case 0x33:
        lVar25 = ptVar35[-2].digits;
        lVar26 = ptVar35[-3].digits;
        lVar40 = *(long *)(ptVar35 + -2);
        lVar4 = ptVar35[-2].value;
        iVar47 = (pc->rel).ns;
        lVar5 = *(long *)(ptVar35 + -1);
        lVar6 = (pc->rel).minutes;
        lVar7 = (pc->rel).hour;
        iVar22 = *(int *)&ptVar35[-1].digits;
        lVar8 = (pc->rel).day;
        lVar9 = ptVar35[-1].value;
        lVar10 = (pc->rel).month;
        lVar11 = (pc->rel).seconds;
        lVar12 = (pc->rel).year;
        if (*(int *)ptVar35 < 0) {
          (pc->rel).ns = iVar47 - iVar22;
          (pc->rel).seconds = lVar11 - lVar9;
          (pc->rel).minutes = lVar6 - lVar5;
          (pc->rel).hour = lVar7 - lVar25;
          (pc->rel).day = lVar8 - lVar4;
          (pc->rel).month = lVar10 - lVar40;
          (pc->rel).year = lVar12 - lVar26;
          bVar42 = SBORROW8(lVar7,lVar25) |
                   SBORROW8(lVar11,lVar9) | SBORROW4(iVar47,iVar22) | SBORROW8(lVar6,lVar5) |
                   SBORROW8(lVar8,lVar4) | SBORROW8(lVar10,lVar40) | SBORROW8(lVar12,lVar26);
        }
        else {
          (pc->rel).ns = iVar47 + iVar22;
          (pc->rel).seconds = lVar11 + lVar9;
          (pc->rel).minutes = lVar6 + lVar5;
          (pc->rel).hour = lVar7 + lVar25;
          (pc->rel).day = lVar8 + lVar4;
          (pc->rel).month = lVar10 + lVar40;
          (pc->rel).year = lVar12 + lVar26;
          bVar42 = SCARRY8(lVar7,lVar25) |
                   SCARRY8(lVar11,lVar9) | SCARRY4(iVar47,iVar22) | SCARRY8(lVar6,lVar5) |
                   SCARRY8(lVar8,lVar4) | SCARRY8(lVar10,lVar40) | SCARRY8(lVar12,lVar26);
        }
        if (bVar42 != 0) goto LAB_00105e80;
LAB_001064bc:
        pc->rels_seen = true;
        break;
      case 0x34:
      case 0x35:
        iVar47 = *(int *)(ptVar35 + 2);
        piVar1 = &(pc->rel).ns;
        iVar22 = *piVar1;
        (pc->rel).ns = iVar47 + *piVar1;
        lVar25 = (pc->rel).seconds;
        lVar26 = ptVar35[1].digits;
        (pc->rel).seconds = lVar25 + ptVar35[1].digits;
        lVar40 = (pc->rel).minutes;
        lVar4 = ptVar35[1].value;
        (pc->rel).minutes = lVar40 + ptVar35[1].value;
        lVar5 = (pc->rel).hour;
        lVar6 = *(long *)(ptVar35 + 1);
        (pc->rel).hour = lVar5 + *(long *)(ptVar35 + 1);
        lVar7 = (pc->rel).day;
        lVar8 = ptVar35->digits;
        (pc->rel).day = lVar7 + ptVar35->digits;
        lVar9 = (pc->rel).month;
        lVar10 = ptVar35->value;
        (pc->rel).month = lVar9 + ptVar35->value;
        lVar11 = (pc->rel).year;
        lVar12 = *(long *)ptVar35;
        (pc->rel).year = lVar11 + *(long *)ptVar35;
        if (((byte)(SCARRY8(lVar9,lVar10) |
                   SCARRY8(lVar25,lVar26) | SCARRY4(iVar47,iVar22) | SCARRY8(lVar40,lVar4) |
                   SCARRY8(lVar5,lVar6) | SCARRY8(lVar7,lVar8)) == 0) &&
           (SCARRY8(lVar11,lVar12) == false)) goto LAB_001064bc;
LAB_00105e80:
        iVar47 = 1;
LAB_00105e85:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return iVar47;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      case 0x36:
        uVar38 = ptVar35[-3].digits;
        goto LAB_001063bf;
      case 0x37:
      case 0x4b:
        uVar38 = *(ulong *)(ptVar35 + -2);
LAB_001063bf:
        uStack1256 = 0;
        local_5c8 = 0;
        uVar29 = 0;
        uVar45 = 0;
        local_5d8 = 0;
        local_5d0 = 0;
        local_5e0 = 0;
        break;
      case 0x38:
        uStack1256 = 0;
        uVar29 = 0;
        uVar45 = 0;
        uVar38 = 1;
        local_5c8 = 0;
        local_5d8 = 0;
        local_5d0 = 0;
        local_5e0 = 0;
        break;
      case 0x39:
        uVar45 = ptVar35[-3].digits;
        goto LAB_001065b5;
      case 0x3a:
      case 0x4c:
        uVar45 = *(ulong *)(ptVar35 + -2);
LAB_001065b5:
        uStack1256 = 0;
        local_5c8 = 0;
        uVar29 = 0;
        uVar38 = 0;
        local_5d8 = 0;
        local_5d0 = 0;
        local_5e0 = 0;
        break;
      case 0x3b:
        uStack1256 = 0;
        uVar29 = 0;
        uVar38 = 0;
        uVar45 = 1;
        local_5c8 = 0;
        local_5d8 = 0;
        local_5d0 = 0;
        local_5e0 = 0;
        break;
      case 0x3c:
        lVar25 = ptVar35[-3].digits;
        goto LAB_0010664a;
      case 0x3d:
      case 0x4d:
        lVar25 = *(long *)(ptVar35 + -2);
LAB_0010664a:
        uStack1256 = 0;
        uVar29 = lVar25 * *(long *)ptVar35;
        bVar49 = SEXT816((long)uVar29) != SEXT816(lVar25) * SEXT816(*(long *)ptVar35);
        uVar38 = (ulong)bVar49;
        if (bVar49) goto LAB_00105e80;
        local_5d8 = 0;
        uVar45 = 0;
        local_5d0 = 0;
        local_5e0 = 0;
        local_5c8 = 0;
        break;
      case 0x3e:
      case 0x51:
        local_5c8 = 0;
        uVar29 = *(ulong *)ptVar35;
        uVar45 = 0;
        uVar38 = 0;
        uStack1256 = 0;
        local_5d8 = 0;
        local_5d0 = 0;
        local_5e0 = 0;
        break;
      case 0x3f:
        local_5e0 = ptVar35[-3].digits;
        goto LAB_001064d8;
      case 0x40:
      case 0x4e:
        local_5e0 = *(ulong *)(ptVar35 + -2);
LAB_001064d8:
        uStack1256 = 0;
        uVar29 = 0;
        uVar45 = 0;
        uVar38 = 0;
        local_5c8 = 0;
        local_5d8 = 0;
        local_5d0 = 0;
        break;
      case 0x41:
        local_5c8 = 0;
        uVar29 = 0;
        uVar45 = 0;
        uVar38 = 0;
        uStack1256 = 0;
        local_5d8 = 0;
        local_5d0 = 0;
        local_5e0 = 1;
        break;
      case 0x42:
        local_5d0 = ptVar35[-3].digits;
        goto LAB_0010654d;
      case 0x43:
      case 0x4f:
        local_5d0 = *(ulong *)(ptVar35 + -2);
LAB_0010654d:
        uStack1256 = 0;
        uVar29 = 0;
        uVar45 = 0;
        uVar38 = 0;
        local_5c8 = 0;
        local_5d8 = 0;
        local_5e0 = 0;
        break;
      case 0x44:
        local_5c8 = 0;
        uVar29 = 0;
        uVar45 = 0;
        uVar38 = 0;
        uStack1256 = 0;
        local_5d8 = 0;
        local_5d0 = 1;
        local_5e0 = 0;
        break;
      case 0x45:
        local_5d8 = ptVar35[-3].digits;
        goto LAB_00106594;
      case 0x46:
      case 0x50:
        local_5d8 = *(ulong *)(ptVar35 + -2);
LAB_00106594:
        local_5c8 = 0;
        goto LAB_0010651f;
      case 0x47:
      case 0x48:
        local_5d8 = ptVar35[-3].digits;
        local_5c8 = (ulong)*(uint *)(ptVar35 + -2);
        goto LAB_0010651f;
      case 0x49:
        local_5c8 = 0;
        local_5d8 = 1;
LAB_0010651f:
        uStack1256 = 0;
        local_5d0 = 0;
        uVar29 = 0;
        uVar45 = 0;
        uVar38 = 0;
        local_5e0 = 0;
        break;
      case 0x55:
      case 0x57:
        uVar38 = ptVar35->value;
        uVar45 = 0;
        break;
      case 0x58:
        digits_to_date_time(pc,*ptVar35);
        break;
      case 0x59:
        digits_to_date_time(pc,*(textint *)&ptVar35[-3].digits);
        iVar47 = *(int *)(ptVar35 + 2);
        piVar1 = &(pc->rel).ns;
        iVar22 = *piVar1;
        (pc->rel).ns = iVar47 + *piVar1;
        lVar25 = (pc->rel).seconds;
        lVar26 = ptVar35[1].digits;
        (pc->rel).seconds = lVar25 + ptVar35[1].digits;
        lVar40 = (pc->rel).minutes;
        lVar4 = ptVar35[1].value;
        (pc->rel).minutes = lVar40 + ptVar35[1].value;
        lVar5 = (pc->rel).hour;
        lVar6 = *(long *)(ptVar35 + 1);
        (pc->rel).hour = lVar5 + *(long *)(ptVar35 + 1);
        lVar7 = (pc->rel).day;
        lVar8 = ptVar35->digits;
        (pc->rel).day = lVar7 + ptVar35->digits;
        lVar9 = (pc->rel).month;
        lVar10 = ptVar35->value;
        (pc->rel).month = lVar9 + ptVar35->value;
        lVar11 = (pc->rel).year;
        lVar12 = *(long *)ptVar35;
        (pc->rel).year = lVar11 + *(long *)ptVar35;
        if (((byte)(SCARRY8(lVar9,lVar10) |
                   SCARRY8(lVar25,lVar26) | SCARRY4(iVar47,iVar22) | SCARRY8(lVar40,lVar4) |
                   SCARRY8(lVar5,lVar6) | SCARRY8(lVar7,lVar8)) != 0) ||
           (SCARRY8(lVar11,lVar12) != false)) goto LAB_00105e80;
        pc->rels_seen = true;
        break;
      case 0x5a:
        uVar38 = 0xffffffffffffffff;
        break;
      case 0x5b:
        uVar38 = ptVar35->value;
      }
      pcVar37 = pcVar37 + -lVar28;
      cVar30 = *pcVar37;
      ptVar34 = (textint *)((long)ptVar35 + lVar28 * -0x38 + 0x38);
      uStack1288 = (undefined4)uVar29;
      uStack1284 = (undefined4)(uVar29 >> 0x20);
      uStack1280 = (undefined4)local_5e0;
      uStack1276 = (undefined4)(local_5e0 >> 0x20);
      uStack1256 = uStack1256 & 0xffffffff00000000 | local_5c8;
      local_518 = (undefined4)uVar38;
      uStack1300 = (undefined4)(uVar38 >> 0x20);
      uStack1296 = (undefined4)uVar45;
      uStack1292 = (undefined4)(uVar45 >> 0x20);
      *(undefined4 *)((long)ptVar35 + lVar28 * -0x38 + 0x48) = uStack1288;
      *(undefined4 *)((long)ptVar35 + lVar28 * -0x38 + 0x4c) = uStack1284;
      *(undefined4 *)((long)ptVar35 + lVar28 * -0x38 + 0x50) = uStack1280;
      *(undefined4 *)((long)ptVar35 + lVar28 * -0x38 + 0x54) = uStack1276;
      uStack1272 = (undefined4)local_5d0;
      uStack1268 = (undefined4)(local_5d0 >> 0x20);
      local_4f0 = (undefined4)local_5d8;
      uStack1260 = (undefined4)(local_5d8 >> 0x20);
      *(ulong *)((long)ptVar35 + lVar28 * -0x38 + 0x68) = uStack1256;
      *(undefined4 *)((long)ptVar35 + lVar28 * -0x38 + 0x38) = local_518;
      *(undefined4 *)((long)ptVar35 + lVar28 * -0x38 + 0x3c) = uStack1300;
      *(undefined4 *)((long)ptVar35 + lVar28 * -0x38 + 0x40) = uStack1296;
      *(undefined4 *)((long)ptVar35 + lVar28 * -0x38 + 0x44) = uStack1292;
      *(undefined4 *)((long)ptVar35 + lVar28 * -0x38 + 0x58) = uStack1272;
      *(undefined4 *)((long)ptVar35 + lVar28 * -0x38 + 0x5c) = uStack1268;
      *(undefined4 *)((long)ptVar35 + lVar28 * -0x38 + 0x60) = local_4f0;
      *(undefined4 *)((long)ptVar35 + lVar28 * -0x38 + 100) = uStack1260;
      uVar46 = (int)yypgoto[""[iVar32] + -0x1c] + (int)cVar30;
      if ((uVar46 < 0x71) &&
         (cVar30 == "\x1b\x05\x06\a\b\t\n\x04\f\x0ff\x0f\x10\x13\x0f\x13\x13\x14\x13\x19p\x19\x13\x1b\x05\x06\a\b\t\n\x05\x06\a\b\t\n\x13\x13\x13k\x13\x14\x19\x19\x19q\x13\x14\x15\x16\x19\x05\x06\a\b\t\n\v\f\r\x0e\x17\x10\x11\x12\x13\x14\x15\x16`\x18\x05\x06\a\b\t\n"
                    [(int)uVar46])) {
        iVar47 = (int)"OCDEFGH:IdkJKenL12efqM;N=>?@AB=>?@ABee\\oZ[jpXo\x05\x06\a\bX\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x01\x17\x18\x19\x1a\x1b\x1c\x1dO\x1e345678\f9=>?@AB<0P/\x06S\bQR\x1aTUVW^_`Yiabc"
                      [(int)uVar46];
      }
      else {
        iVar47 = (int)yydefgoto[""[iVar32] + -0x1c];
      }
    }
  }
  goto LAB_00105b37;
LAB_00106170:
  lVar28 = uVar38 * 10;
  pbVar24 = pbVar43;
  if (SEXT816(lVar28) != SEXT816((long)uVar38) * SEXT816(10)) goto LAB_00106146;
  goto LAB_00106049;
LAB_00106146:
  uVar48 = 0x3f;
LAB_00106150:
  iVar22 = (int)""[(int)uVar48];
  goto LAB_0010615e;
}

