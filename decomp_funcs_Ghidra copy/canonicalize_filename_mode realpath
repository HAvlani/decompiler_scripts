
char * canonicalize_filename_mode(char *name,canonicalize_mode_t can_mode)

{
  undefined2 *puVar1;
  anon_union_conflict2601_for___space *paVar2;
  bool bVar3;
  void *__src;
  _Bool _Var4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  char *pcVar9;
  undefined2 *__dest;
  size_t __n;
  char cVar10;
  anon_union_conflict2601_for___space *__path;
  anon_union_conflict2601_for___space *__filename;
  size_t sVar11;
  long lVar12;
  undefined2 *puVar13;
  canonicalize_mode_t cVar14;
  char *pcVar15;
  canonicalize_mode_t cVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  char *local_d78;
  Hash_table *local_d58;
  int local_d34;
  size_t local_d30;
  long local_d10;
  stat st;
  scratch_buffer rname_buffer;
  scratch_buffer extra_buffer;
  scratch_buffer link_buffer;
  long local_40;
  
  cVar16 = can_mode & (CAN_ALL_BUT_LAST|CAN_MISSING);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((cVar16 + ~CAN_EXISTING & cVar16) == CAN_EXISTING) && (name != (char *)0x0)) {
    cVar5 = *name;
    if (cVar5 == '\0') {
      piVar8 = __errno_location();
      *piVar8 = 2;
      local_d78 = (char *)0x0;
    }
    else {
      paVar2 = &rname_buffer.__space;
      extra_buffer.length = 0x400;
      extra_buffer.data = &extra_buffer.__space;
      link_buffer.data = &link_buffer.__space;
      link_buffer.length = 0x400;
      rname_buffer.length = 0x400;
      rname_buffer.data = paVar2;
      if (cVar5 != '/') {
        do {
          __path = (anon_union_conflict2601_for___space *)rname_buffer.data;
          pcVar7 = getcwd((char *)rname_buffer.data,rname_buffer.length);
          if (pcVar7 != (char *)0x0) {
            __dest = (undefined2 *)rawmemchr(__path,0);
            cVar5 = *name;
            if (cVar5 != '\0') goto LAB_00103715;
            if (((undefined2 *)((long)__path + 1) < __dest) && (*(char *)((long)__dest + -1) == '/')
               ) {
              __dest = (undefined2 *)((long)__dest + -1);
              bVar18 = false;
            }
            else {
              bVar18 = false;
            }
            goto LAB_001034af;
          }
          piVar8 = __errno_location();
          if (*piVar8 == 0xc) break;
          if (*piVar8 != 0x22) {
            bVar18 = true;
            __dest = (undefined2 *)__path;
            goto LAB_001034af;
          }
          _Var4 = gl_scratch_buffer_grow(&rname_buffer);
        } while (_Var4 != false);
LAB_001036f8:
                    /* WARNING: Subroutine does not return */
        xalloc_die();
      }
      rname_buffer.__space._0_1_ = 0x2f;
      __dest = (undefined2 *)&rname_buffer.__space.field_0x1;
      __path = paVar2;
LAB_00103715:
      cVar14 = can_mode & CAN_NOLINKS;
      bVar3 = false;
      local_d58 = (Hash_table *)0x0;
      local_d34 = 0;
      do {
        pcVar7 = name;
        cVar10 = cVar5;
        if (cVar5 == '/') {
          do {
            cVar10 = name[1];
            name = name + 1;
          } while (cVar10 == '/');
          pcVar7 = name;
          if (cVar10 == '\0') break;
        }
        do {
          pcVar15 = name;
          cVar5 = pcVar15[1];
          name = pcVar15 + 1;
          if (cVar5 == '\0') break;
        } while (cVar5 != '/');
        sVar11 = (long)name - (long)pcVar7;
        if (sVar11 == 0) break;
        if (sVar11 == 1) {
          if (cVar10 != '.') goto LAB_00103845;
        }
        else if (((sVar11 == 2) && (cVar10 == '.')) && (pcVar7[1] == '.')) {
          if ((&__path->field_0x1 < __dest) &&
             (__dest = (undefined2 *)((long)__dest + -1), __path < __dest)) {
            do {
              if (*(char *)((long)__dest + -1) == '/') break;
              __dest = (undefined2 *)((long)__dest + -1);
            } while ((anon_union_conflict2601_for___space *)__dest != __path);
          }
        }
        else {
LAB_00103845:
          if (*(char *)((long)__dest + -1) != '/') {
            *(char *)__dest = '/';
            __dest = (undefined2 *)((long)__dest + 1);
          }
          pcVar9 = (char *)((long)__path + (rname_buffer.length - (long)__dest));
          while (pcVar9 < (char *)(sVar11 + 2)) {
            lVar12 = (long)__dest - (long)__path;
            _Var4 = gl_scratch_buffer_grow_preserve(&rname_buffer);
            if (_Var4 == false) {
                    /* WARNING: Subroutine does not return */
              xalloc_die();
            }
            __dest = (undefined2 *)((long)rname_buffer.data + lVar12);
            __path = (anon_union_conflict2601_for___space *)rname_buffer.data;
            pcVar9 = (char *)(rname_buffer.length - lVar12);
          }
          __dest = (undefined2 *)mempcpy(__dest,pcVar7,sVar11);
          *(char *)__dest = '\0';
          if (cVar14 == CAN_EXISTING) {
            while (__src = link_buffer.data, sVar11 = link_buffer.length - 1,
                  __n = readlink((char *)__path,(char *)link_buffer.data,sVar11),
                  (long)sVar11 <= (long)__n) {
              _Var4 = gl_scratch_buffer_grow(&link_buffer);
              if (_Var4 == false) goto LAB_001036f8;
            }
            if ((long)__n < 0) goto LAB_00103924;
            if (local_d34 < 0x14) {
              local_d34 = local_d34 + 1;
LAB_00103669:
              pcVar7 = (char *)extra_buffer.data;
              *(undefined *)((long)__src + __n) = 0;
              if (bVar3) {
                local_d10 = (long)name - (long)extra_buffer.data;
                local_d30 = strlen(name);
                uVar17 = __n + local_d30;
                if (extra_buffer.length <= uVar17) {
LAB_001036c3:
                  do {
                    _Var4 = gl_scratch_buffer_grow_preserve(&extra_buffer);
                    if (_Var4 == false) goto LAB_001036f8;
                  } while (extra_buffer.length <= uVar17);
                  pcVar7 = (char *)extra_buffer.data;
                  if (!bVar3) goto LAB_00103b58;
                }
                name = pcVar7 + local_d10;
              }
              else {
                local_d30 = strlen(name);
                uVar17 = __n + local_d30;
                if (extra_buffer.length <= uVar17) goto LAB_001036c3;
              }
LAB_00103b58:
              memmove(pcVar7 + __n,name,local_d30 + 1);
              memcpy(pcVar7,__src,__n);
                    /* WARNING: Load size is inaccurate */
              name = pcVar7;
              if (*__src == '/') {
                *(char *)__path = '/';
                cVar5 = *pcVar7;
                bVar3 = true;
                __dest = (undefined2 *)&__path->field_0x1;
              }
              else {
                bVar3 = true;
                cVar5 = *pcVar7;
                if (&__path->field_0x1 < __dest) {
                  do {
                    puVar13 = (undefined2 *)((long)__dest + -1);
                    if ((anon_union_conflict2601_for___space *)puVar13 == __path) break;
                    puVar1 = __dest + -1;
                    __dest = puVar13;
                  } while (*(char *)puVar1 != '/');
                  bVar3 = true;
                  __dest = puVar13;
                }
              }
              goto LAB_001037f3;
            }
            if (*pcVar7 == '\0') goto LAB_00103669;
            pcVar9 = (char *)(((long)pcVar7 - (long)name) + (long)__dest);
            *pcVar9 = '\0';
            __filename = (anon_union_conflict2601_for___space *)&DAT_00109692;
            if (*(char *)__path != '\0') {
              __filename = __path;
            }
            iVar6 = __xstat(1,(char *)__filename,(stat *)&st);
            if (iVar6 != 0) {
LAB_00103b1a:
              bVar18 = true;
              goto error;
            }
            *pcVar9 = *pcVar7;
            if ((local_d58 == (Hash_table *)0x0) &&
               (local_d58 = hash_initialize(7,(Hash_tuning *)0x0,triple_hash,triple_compare_ino_str,
                                            triple_free), local_d58 == (Hash_table *)0x0))
            goto LAB_001036f8;
            _Var4 = seen_file(local_d58,pcVar7,&st);
            if (_Var4 == false) {
              record_file(local_d58,pcVar7,&st);
              goto LAB_00103669;
            }
            if (cVar16 != CAN_MISSING) {
              piVar8 = __errno_location();
              *piVar8 = 0x28;
              goto LAB_00103b1a;
            }
          }
          else {
LAB_00103924:
            if (cVar16 != CAN_MISSING) {
              pcVar7 = name;
              if (*name == '/') {
                do {
                  do {
                    pcVar9 = pcVar7;
                    cVar5 = pcVar9[1];
                    pcVar7 = pcVar9 + 1;
                  } while (cVar5 == '/');
                  if (cVar5 == '\0') {
LAB_00103ac0:
                    *__dest = dir_suffix;
                    iVar6 = faccessat(-100,(char *)__path,0,0x200);
                    bVar18 = iVar6 != 0;
                    goto LAB_001039c8;
                  }
                  if (cVar5 != '.') break;
                  cVar5 = pcVar9[2];
                  if (cVar5 == '\0') goto LAB_00103ac0;
                  if (cVar5 == '.') {
                    if ((pcVar9[3] == '\0') || (pcVar9[3] == '/')) goto LAB_00103ac0;
                    break;
                  }
                  pcVar7 = pcVar9 + 2;
                } while (cVar5 == '/');
                if (cVar14 != CAN_EXISTING) goto LAB_00103980;
LAB_001039a8:
                piVar8 = __errno_location();
                bVar18 = *piVar8 != 0x16;
              }
              else {
                if (cVar14 == CAN_EXISTING) goto LAB_001039a8;
                if (*name != '\0') goto LAB_00103980;
                iVar6 = faccessat(-100,(char *)__path,0,0x200);
                bVar18 = iVar6 != 0;
              }
LAB_001039c8:
              if ((bVar18) &&
                 (((cVar16 != CAN_ALL_BUT_LAST || (piVar8 = __errno_location(), *piVar8 != 2)) ||
                  (sVar11 = strspn(name,"/"), name[sVar11] != '\0')))) goto error;
            }
          }
LAB_00103980:
          cVar5 = pcVar15[1];
        }
LAB_001037f3:
      } while (cVar5 != '\0');
      bVar18 = false;
      if (&__path->field_0x1 < __dest) {
        __dest = (undefined2 *)((long)__dest - (ulong)(*(char *)((long)__dest + -1) == '/'));
        bVar18 = false;
      }
error:
      if (local_d58 != (Hash_table *)0x0) {
        hash_free(local_d58);
      }
LAB_001034af:
      if ((anon_union_conflict2601_for___space *)extra_buffer.data != &extra_buffer.__space) {
        rpl_free(extra_buffer.data);
      }
      if ((anon_union_conflict2601_for___space *)link_buffer.data != &link_buffer.__space) {
        rpl_free(link_buffer.data);
      }
      if (bVar18) {
        local_d78 = (char *)0x0;
        if ((anon_union_conflict2601_for___space *)rname_buffer.data != paVar2) {
          local_d78 = (char *)0x0;
          rpl_free(rname_buffer.data);
        }
      }
      else {
        *(char *)__dest = '\0';
        local_d78 = (char *)gl_scratch_buffer_dupfree
                                      (&rname_buffer,(size_t)((long)__dest + (1 - (long)__path)));
        if (local_d78 == (char *)0x0) goto LAB_001036f8;
      }
    }
  }
  else {
    piVar8 = __errno_location();
    *piVar8 = 0x16;
    local_d78 = (char *)0x0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_d78;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

