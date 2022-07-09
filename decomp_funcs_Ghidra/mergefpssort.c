
void mergefps(sortfile *files,size_t ntemps,size_t nfiles,FILE *ofp,char *output_file,FILE **fps)

{
  buffer *buf;
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  char *pcVar4;
  line *line;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
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
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  keyfield *pkVar24;
  _Bool _Var25;
  int iVar26;
  void *p;
  void *p_00;
  void *p_01;
  ulong *p_02;
  ulong *puVar27;
  long lVar28;
  ulong *puVar29;
  size_t sVar30;
  undefined4 *puVar31;
  ulong uVar32;
  sortfile *psVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  long in_FS_OFFSET;
  ulong local_d0;
  ulong local_c8;
  line *local_a8;
  ulong local_88;
  ulong local_80;
  line saved;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  p = xnmalloc(nfiles,0x38);
  p_00 = xnmalloc(nfiles,8);
  p_01 = xnmalloc(nfiles,8);
  p_02 = (ulong *)xnmalloc(nfiles,8);
  pkVar24 = keylist;
  saved.text = (char *)0x0;
  if (nfiles != 0) {
    uVar32 = 0;
    local_c8 = nfiles;
    local_88 = ntemps;
    do {
      while( true ) {
        lVar28 = uVar32 * 8;
        buf = (buffer *)((long)p + uVar32 * 0x38);
        sVar30 = merge_buffer_size;
        if (merge_buffer_size <= sort_size / local_c8) {
          sVar30 = sort_size / local_c8;
        }
        initbuf(buf,0x20,sVar30);
        psVar33 = files + uVar32;
        _Var25 = fillbuf(buf,fps[uVar32],psVar33->name);
        if (_Var25 != false) break;
        xfclose(fps[uVar32],psVar33->name);
        if (uVar32 < local_88) {
          local_88 = local_88 - 1;
          zaptemp(psVar33->name);
        }
        rpl_free(buf->buf);
        uVar35 = local_c8 - 1;
        if (uVar35 <= uVar32) goto LAB_0010a282;
        lVar5 = local_c8 * 8;
        do {
          puVar2 = (undefined4 *)((long)&files[1].name + lVar28 * 2);
          uVar8 = puVar2[1];
          uVar9 = puVar2[2];
          uVar10 = puVar2[3];
          uVar7 = *(undefined8 *)((long)fps + lVar28 + 8);
          puVar31 = (undefined4 *)((long)&files->name + lVar28 * 2);
          *puVar31 = *puVar2;
          puVar31[1] = uVar8;
          puVar31[2] = uVar9;
          puVar31[3] = uVar10;
          *(undefined8 *)((long)fps + lVar28) = uVar7;
          lVar28 = lVar28 + 8;
          local_c8 = uVar35;
        } while (lVar5 + -8 != lVar28);
      }
      sVar30 = buf->alloc;
      pcVar4 = buf->buf;
      *(char **)((long)p_00 + uVar32 * 8) = pcVar4 + (sVar30 - 0x20);
      *(char **)((long)p_01 + uVar32 * 8) = pcVar4 + buf->nlines * -0x20 + sVar30;
      uVar32 = uVar32 + 1;
      uVar35 = local_c8;
    } while (uVar32 < local_c8);
LAB_0010a282:
    local_c8 = uVar35;
    if (local_c8 != 0) {
      uVar32 = 0;
      do {
        p_02[uVar32] = uVar32;
        uVar32 = uVar32 + 1;
      } while (uVar32 != local_c8);
      if (local_c8 != 1) {
        uVar32 = 1;
        do {
          while( true ) {
            puVar27 = p_02 + uVar32;
            puVar29 = p_02 + (uVar32 - 1);
            iVar26 = compare(*(line **)((long)p_00 + *puVar29 * 8),
                             *(line **)((long)p_00 + *puVar27 * 8));
            if (iVar26 < 1) break;
            uVar35 = *puVar29;
            uVar32 = 1;
            *puVar29 = *puVar27;
            *puVar27 = uVar35;
          }
          uVar32 = uVar32 + 1;
        } while (uVar32 < local_c8);
      }
      local_80 = 0;
      local_a8 = (line *)0x0;
LAB_0010a330:
      line = *(line **)((long)p_00 + *p_02 * 8);
      if (unique == false) {
        write_line(line,ofp,output_file);
      }
      else {
        if (local_a8 != (line *)0x0) {
          iVar26 = compare(local_a8,line);
          if (iVar26 == 0) goto LAB_0010a366;
          write_line(&saved,ofp,output_file);
        }
        uVar32 = line->length;
        if (local_80 < uVar32) {
          do {
            uVar35 = uVar32;
            if (local_80 == 0) break;
            local_80 = local_80 * 2;
            uVar35 = local_80;
          } while (local_80 < uVar32);
          rpl_free(saved.text);
          saved.text = (char *)xmalloc(uVar35);
          uVar32 = line->length;
          local_80 = uVar35;
        }
        saved.length = uVar32;
        memcpy(saved.text,line->text,uVar32);
        local_a8 = &saved;
        if (pkVar24 != (keyfield *)0x0) {
          saved.keybeg = line->keybeg + (long)saved.text + -(long)line->text;
          saved.keylim = saved.text + (long)line->keylim + -(long)line->text;
        }
      }
LAB_0010a366:
      local_d0 = *p_02;
      if (*(line **)((long)p_01 + local_d0 * 8) < line) {
        *(line **)((long)p_00 + local_d0 * 8) = line + -1;
        if (local_c8 == 1) goto LAB_0010a4cc;
LAB_0010a411:
        uVar32 = 1;
        uVar35 = 1;
        uVar36 = local_c8;
        do {
          while( true ) {
            uVar34 = uVar35;
            puVar29 = p_02 + uVar34;
            iVar26 = compare(*(line **)((long)p_00 + local_d0 * 8),
                             *(line **)((long)p_00 + *puVar29 * 8));
            if ((-1 < iVar26) && ((iVar26 != 0 || (*puVar29 < local_d0 || *puVar29 == local_d0))))
            break;
            uVar35 = uVar32 + uVar34 >> 1;
            uVar36 = uVar34;
            if (uVar34 <= uVar32) goto LAB_0010a479;
          }
          uVar32 = uVar34 + 1;
          uVar35 = uVar32 + uVar36 >> 1;
        } while (uVar32 < uVar36);
LAB_0010a479:
        if (uVar32 - 1 != 0) {
          puVar29 = p_02;
          do {
            puVar27 = puVar29 + 1;
            *puVar29 = puVar29[1];
            puVar29 = puVar27;
          } while (puVar27 != p_02 + (uVar32 - 1));
        }
        p_02[uVar32 - 1] = local_d0;
        goto LAB_0010a330;
      }
      _Var25 = fillbuf((buffer *)((long)p + local_d0 * 0x38),fps[local_d0],files[local_d0].name);
      if (_Var25 != false) {
        local_d0 = *p_02;
        plVar1 = (long *)((long)p + local_d0 * 0x38);
        lVar28 = plVar1[3];
        lVar5 = *plVar1;
        lVar6 = plVar1[2];
        *(long *)((long)p_00 + local_d0 * 8) = lVar28 + lVar5 + -0x20;
        *(long *)((long)p_01 + local_d0 * 8) = lVar28 + lVar5 + lVar6 * -0x20;
        if (local_c8 != 1) goto LAB_0010a411;
LAB_0010a4cc:
        *p_02 = local_d0;
        goto LAB_0010a330;
      }
      uVar32 = *p_02;
      puVar29 = p_02 + 1;
      if (local_c8 != 1) {
        do {
          if (uVar32 < *puVar29) {
            *puVar29 = *puVar29 - 1;
            uVar32 = *p_02;
          }
          puVar29 = puVar29 + 1;
        } while (p_02 + local_c8 != puVar29);
      }
      uVar35 = local_c8 - 1;
      xfclose(fps[uVar32],files[uVar32].name);
      uVar32 = *p_02;
      if (uVar32 < local_88) {
        local_88 = local_88 - 1;
        zaptemp(files[uVar32].name);
        uVar32 = *p_02;
      }
      rpl_free(*(void **)((long)p + uVar32 * 0x38));
      uVar32 = *p_02;
      if (uVar32 < uVar35) {
        lVar28 = uVar32 * 8;
        puVar31 = (undefined4 *)((long)p + uVar32 * 0x38);
        do {
          puVar2 = (undefined4 *)((long)&files[1].name + lVar28 * 2);
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          uVar10 = puVar2[2];
          uVar11 = puVar2[3];
          uVar12 = puVar31[0xe];
          uVar13 = puVar31[0xf];
          uVar14 = puVar31[0x10];
          uVar15 = puVar31[0x11];
          uVar16 = puVar31[0x12];
          uVar17 = puVar31[0x13];
          uVar18 = puVar31[0x14];
          uVar19 = puVar31[0x15];
          *(undefined8 *)((long)fps + lVar28) = *(undefined8 *)((long)fps + lVar28 + 8);
          uVar7 = *(undefined8 *)(puVar31 + 0x1a);
          uVar20 = puVar31[0x16];
          uVar21 = puVar31[0x17];
          uVar22 = puVar31[0x18];
          uVar23 = puVar31[0x19];
          puVar2 = (undefined4 *)((long)&files->name + lVar28 * 2);
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          puVar2[2] = uVar10;
          puVar2[3] = uVar11;
          *(undefined8 *)(puVar31 + 0xc) = uVar7;
          uVar7 = *(undefined8 *)((long)p_00 + lVar28 + 8);
          *puVar31 = uVar12;
          puVar31[1] = uVar13;
          puVar31[2] = uVar14;
          puVar31[3] = uVar15;
          *(undefined8 *)((long)p_00 + lVar28) = uVar7;
          uVar7 = *(undefined8 *)((long)p_01 + lVar28 + 8);
          puVar31[4] = uVar16;
          puVar31[5] = uVar17;
          puVar31[6] = uVar18;
          puVar31[7] = uVar19;
          *(undefined8 *)((long)p_01 + lVar28) = uVar7;
          lVar28 = lVar28 + 8;
          puVar31[8] = uVar20;
          puVar31[9] = uVar21;
          puVar31[10] = uVar22;
          puVar31[0xb] = uVar23;
          puVar31 = puVar31 + 0xe;
        } while (local_c8 * 8 + -8 != lVar28);
      }
      if (uVar35 != 0) {
        lVar28 = local_c8 - 1;
        puVar29 = p_02;
        do {
          puVar27 = puVar29 + 1;
          *puVar29 = puVar29[1];
          puVar29 = puVar27;
          local_c8 = uVar35;
        } while (p_02 + lVar28 != puVar27);
        goto LAB_0010a330;
      }
      if ((local_a8 != (line *)0x0) && (unique != false)) {
        write_line(&saved,ofp,output_file);
        rpl_free(saved.text);
      }
    }
  }
  xfclose(ofp,output_file);
  rpl_free(fps);
  rpl_free(p);
  rpl_free(p_02);
  rpl_free(p_01);
  rpl_free(p_00);
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

