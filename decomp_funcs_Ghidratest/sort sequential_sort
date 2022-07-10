
void sequential_sort(line *lines,size_t nlines,line *temp,_Bool to_temp)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  long lVar20;
  line *plVar21;
  line *plVar22;
  line *plVar23;
  line *plVar24;
  ulong nlines_00;
  line *b;
  line *plVar25;
  size_t nlines_01;
  
  if (nlines == 2) {
    iVar19 = compare(lines + -1,lines + -2);
    if (to_temp != false) {
      plVar24 = lines + (int)~(uint)(0 < iVar19);
      plVar22 = lines + (int)((0 < iVar19) - 2);
      uVar3 = *(undefined4 *)((long)&plVar24->text + 4);
      uVar4 = *(undefined4 *)&plVar24->length;
      uVar5 = *(undefined4 *)((long)&plVar24->length + 4);
      uVar6 = *(undefined4 *)&plVar24->keybeg;
      uVar7 = *(undefined4 *)((long)&plVar24->keybeg + 4);
      uVar8 = *(undefined4 *)&plVar24->keylim;
      uVar9 = *(undefined4 *)((long)&plVar24->keylim + 4);
      *(undefined4 *)&temp[-1].text = *(undefined4 *)&plVar24->text;
      *(undefined4 *)((long)&temp[-1].text + 4) = uVar3;
      *(undefined4 *)&temp[-1].length = uVar4;
      *(undefined4 *)((long)&temp[-1].length + 4) = uVar5;
      uVar3 = *(undefined4 *)&plVar22->text;
      uVar4 = *(undefined4 *)((long)&plVar22->text + 4);
      uVar5 = *(undefined4 *)&plVar22->length;
      uVar10 = *(undefined4 *)((long)&plVar22->length + 4);
      *(undefined4 *)&temp[-1].keybeg = uVar6;
      *(undefined4 *)((long)&temp[-1].keybeg + 4) = uVar7;
      *(undefined4 *)&temp[-1].keylim = uVar8;
      *(undefined4 *)((long)&temp[-1].keylim + 4) = uVar9;
      uVar6 = *(undefined4 *)&plVar22->keybeg;
      uVar7 = *(undefined4 *)((long)&plVar22->keybeg + 4);
      uVar8 = *(undefined4 *)&plVar22->keylim;
      uVar9 = *(undefined4 *)((long)&plVar22->keylim + 4);
      *(undefined4 *)&temp[-2].text = uVar3;
      *(undefined4 *)((long)&temp[-2].text + 4) = uVar4;
      *(undefined4 *)&temp[-2].length = uVar5;
      *(undefined4 *)((long)&temp[-2].length + 4) = uVar10;
      *(undefined4 *)&temp[-2].keybeg = uVar6;
      *(undefined4 *)((long)&temp[-2].keybeg + 4) = uVar7;
      *(undefined4 *)&temp[-2].keylim = uVar8;
      *(undefined4 *)((long)&temp[-2].keylim + 4) = uVar9;
      return;
    }
    if (0 < iVar19) {
      uVar3 = *(undefined4 *)&lines[-1].text;
      uVar4 = *(undefined4 *)((long)&lines[-1].text + 4);
      uVar5 = *(undefined4 *)&lines[-1].length;
      uVar6 = *(undefined4 *)((long)&lines[-1].length + 4);
      uVar7 = *(undefined4 *)&lines[-1].keybeg;
      uVar8 = *(undefined4 *)((long)&lines[-1].keybeg + 4);
      uVar9 = *(undefined4 *)&lines[-1].keylim;
      uVar10 = *(undefined4 *)((long)&lines[-1].keylim + 4);
      uVar11 = *(undefined4 *)&lines[-2].text;
      uVar12 = *(undefined4 *)((long)&lines[-2].text + 4);
      uVar13 = *(undefined4 *)&lines[-2].length;
      uVar14 = *(undefined4 *)((long)&lines[-2].length + 4);
      uVar15 = *(undefined4 *)&lines[-2].keybeg;
      uVar16 = *(undefined4 *)((long)&lines[-2].keybeg + 4);
      uVar17 = *(undefined4 *)&lines[-2].keylim;
      uVar18 = *(undefined4 *)((long)&lines[-2].keylim + 4);
      *(undefined4 *)&temp[-1].text = uVar3;
      *(undefined4 *)((long)&temp[-1].text + 4) = uVar4;
      *(undefined4 *)&temp[-1].length = uVar5;
      *(undefined4 *)((long)&temp[-1].length + 4) = uVar6;
      *(undefined4 *)&temp[-1].keybeg = uVar7;
      *(undefined4 *)((long)&temp[-1].keybeg + 4) = uVar8;
      *(undefined4 *)&temp[-1].keylim = uVar9;
      *(undefined4 *)((long)&temp[-1].keylim + 4) = uVar10;
      *(undefined4 *)&lines[-1].text = uVar11;
      *(undefined4 *)((long)&lines[-1].text + 4) = uVar12;
      *(undefined4 *)&lines[-1].length = uVar13;
      *(undefined4 *)((long)&lines[-1].length + 4) = uVar14;
      *(undefined4 *)&lines[-1].keybeg = uVar15;
      *(undefined4 *)((long)&lines[-1].keybeg + 4) = uVar16;
      *(undefined4 *)&lines[-1].keylim = uVar17;
      *(undefined4 *)((long)&lines[-1].keylim + 4) = uVar18;
      *(undefined4 *)&lines[-2].text = uVar3;
      *(undefined4 *)((long)&lines[-2].text + 4) = uVar4;
      *(undefined4 *)&lines[-2].length = uVar5;
      *(undefined4 *)((long)&lines[-2].length + 4) = uVar6;
      *(undefined4 *)&lines[-2].keybeg = uVar7;
      *(undefined4 *)((long)&lines[-2].keybeg + 4) = uVar8;
      *(undefined4 *)&lines[-2].keylim = uVar9;
      *(undefined4 *)((long)&lines[-2].keylim + 4) = uVar10;
    }
  }
  else {
    nlines_00 = nlines >> 1;
    nlines_01 = nlines - nlines_00;
    plVar24 = lines + -nlines_00;
    if (to_temp == false) {
      sequential_sort(plVar24,nlines_01,temp,false);
      plVar22 = lines;
      plVar25 = plVar24;
      if (nlines < 4) {
        uVar3 = *(undefined4 *)((long)&lines[-1].text + 4);
        uVar4 = *(undefined4 *)&lines[-1].length;
        uVar5 = *(undefined4 *)((long)&lines[-1].length + 4);
        uVar6 = *(undefined4 *)&lines[-1].keybeg;
        uVar7 = *(undefined4 *)((long)&lines[-1].keybeg + 4);
        uVar8 = *(undefined4 *)&lines[-1].keylim;
        uVar9 = *(undefined4 *)((long)&lines[-1].keylim + 4);
        *(undefined4 *)&temp[-1].text = *(undefined4 *)&lines[-1].text;
        *(undefined4 *)((long)&temp[-1].text + 4) = uVar3;
        *(undefined4 *)&temp[-1].length = uVar4;
        *(undefined4 *)((long)&temp[-1].length + 4) = uVar5;
        *(undefined4 *)&temp[-1].keybeg = uVar6;
        *(undefined4 *)((long)&temp[-1].keybeg + 4) = uVar7;
        *(undefined4 *)&temp[-1].keylim = uVar8;
        *(undefined4 *)((long)&temp[-1].keylim + 4) = uVar9;
        lines = temp;
      }
      else {
        sequential_sort(lines,nlines_00,temp,true);
        lines = temp;
      }
    }
    else {
      plVar25 = temp + -nlines_00;
      sequential_sort(plVar24,nlines_01,plVar25,true);
      plVar22 = temp;
      if (3 < nlines) {
        sequential_sort(lines,nlines_00,temp,false);
      }
    }
    plVar24 = lines + -1;
    plVar21 = plVar25 + -1;
    while( true ) {
      while( true ) {
        b = plVar21;
        plVar21 = plVar24;
        plVar23 = plVar22 + -1;
        iVar19 = compare(plVar21,b);
        if (iVar19 < 1) break;
        uVar3 = *(undefined4 *)((long)&plVar25[-1].text + 4);
        uVar4 = *(undefined4 *)&plVar25[-1].length;
        uVar5 = *(undefined4 *)((long)&plVar25[-1].length + 4);
        *(undefined4 *)&plVar23->text = *(undefined4 *)&plVar25[-1].text;
        *(undefined4 *)((long)&plVar22[-1].text + 4) = uVar3;
        *(undefined4 *)&plVar22[-1].length = uVar4;
        *(undefined4 *)((long)&plVar22[-1].length + 4) = uVar5;
        uVar3 = *(undefined4 *)((long)&plVar25[-1].keybeg + 4);
        uVar4 = *(undefined4 *)&plVar25[-1].keylim;
        uVar5 = *(undefined4 *)((long)&plVar25[-1].keylim + 4);
        *(undefined4 *)&plVar22[-1].keybeg = *(undefined4 *)&plVar25[-1].keybeg;
        *(undefined4 *)((long)&plVar22[-1].keybeg + 4) = uVar3;
        *(undefined4 *)&plVar22[-1].keylim = uVar4;
        *(undefined4 *)((long)&plVar22[-1].keylim + 4) = uVar5;
        nlines_01 = nlines_01 - 1;
        if (nlines_01 == 0) {
          lVar20 = -0x20;
          do {
            puVar2 = (undefined4 *)((long)&lines->text + lVar20);
            uVar3 = puVar2[1];
            uVar4 = puVar2[2];
            uVar5 = puVar2[3];
            puVar1 = (undefined4 *)((long)&plVar23->text + lVar20);
            *puVar1 = *puVar2;
            puVar1[1] = uVar3;
            puVar1[2] = uVar4;
            puVar1[3] = uVar5;
            puVar1 = (undefined4 *)((long)&lines->keybeg + lVar20);
            uVar3 = puVar1[1];
            uVar4 = puVar1[2];
            uVar5 = puVar1[3];
            puVar2 = (undefined4 *)((long)plVar22 + lVar20 + -0x10);
            *puVar2 = *puVar1;
            puVar2[1] = uVar3;
            puVar2[2] = uVar4;
            puVar2[3] = uVar5;
            lVar20 = lVar20 + -0x20;
            nlines_00 = nlines_00 - 1;
          } while (nlines_00 != 0);
          return;
        }
        plVar24 = plVar21;
        plVar22 = plVar23;
        plVar21 = b + -1;
        plVar25 = b;
      }
      uVar3 = *(undefined4 *)((long)&lines[-1].text + 4);
      uVar4 = *(undefined4 *)&lines[-1].length;
      uVar5 = *(undefined4 *)((long)&lines[-1].length + 4);
      *(undefined4 *)&plVar23->text = *(undefined4 *)&lines[-1].text;
      *(undefined4 *)((long)&plVar22[-1].text + 4) = uVar3;
      *(undefined4 *)&plVar22[-1].length = uVar4;
      *(undefined4 *)((long)&plVar22[-1].length + 4) = uVar5;
      uVar3 = *(undefined4 *)((long)&lines[-1].keybeg + 4);
      uVar4 = *(undefined4 *)&lines[-1].keylim;
      uVar5 = *(undefined4 *)((long)&lines[-1].keylim + 4);
      *(undefined4 *)&plVar22[-1].keybeg = *(undefined4 *)&lines[-1].keybeg;
      *(undefined4 *)((long)&plVar22[-1].keybeg + 4) = uVar3;
      *(undefined4 *)&plVar22[-1].keylim = uVar4;
      *(undefined4 *)((long)&plVar22[-1].keylim + 4) = uVar5;
      nlines_00 = nlines_00 - 1;
      if (nlines_00 == 0) break;
      plVar24 = plVar21 + -1;
      plVar22 = plVar23;
      lines = plVar21;
      plVar21 = b;
    }
  }
  return;
}

