
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

int * vasnprintf(int *param_1,ulong *param_2,int *param_3,__va_list_tag *param_4)

{
  argument *paVar1;
  unkbyte10 Var2;
  arg_type aVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  argument *paVar12;
  int *piVar13;
  int *piVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong *puVar17;
  size_t __size;
  uint uVar18;
  ulong uVar19;
  char_directive *pcVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  bool bVar22;
  ulong local_428;
  int local_41c;
  undefined *local_418;
  ulong *local_410;
  size_t local_408;
  int *local_400;
  int *local_3f8;
  int *local_3f0;
  undefined *local_3e8;
  undefined8 local_3e0;
  int *local_3d8;
  int *local_3d0;
  int local_3c4;
  int local_3c0 [2];
  arguments local_3b8;
  char_directives local_2c8;
  long local_40;
  
  puVar16 = &local_428;
  puVar17 = &local_428;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_410 = param_2;
  local_400 = param_1;
  iVar8 = printf_parse((char *)param_3,&local_2c8,&local_3b8);
  if (-1 < iVar8) {
    iVar8 = printf_fetchargs(param_4,&local_3b8);
    if (iVar8 < 0) {
      if (local_2c8.dir != local_2c8.direct_alloc_dir) {
        rpl_free(local_2c8.dir);
      }
      if (local_3b8.arg != local_3b8.direct_alloc_arg) {
        rpl_free(local_3b8.arg);
      }
      piVar13 = __errno_location();
      piVar14 = (int *)0x0;
      *piVar13 = 0x16;
      puVar16 = &local_428;
      goto LAB_0010f3e3;
    }
    uVar9 = local_2c8.max_width_length + 7;
    if (0xfffffffffffffff8 < local_2c8.max_width_length) {
      uVar9 = 0xffffffffffffffff;
    }
    uVar10 = uVar9 + local_2c8.max_precision_length;
    if (!CARRY8(uVar9,local_2c8.max_precision_length)) {
      __size = uVar10 + 6;
      uVar9 = (ulong)(0xfffffffffffffff9 < uVar10);
      if (0xfffffffffffffff9 >= uVar10) {
        if (__size < 4000) {
          for (; puVar17 != (ulong *)((long)&local_428 - (uVar10 + 0x1d & 0xfffffffffffff000));
              puVar17 = (ulong *)((long)puVar17 + -0x1000)) {
            *(undefined8 *)((long)puVar17 + -8) = *(undefined8 *)((long)puVar17 + -8);
          }
          uVar10 = (ulong)((uint)(uVar10 + 0x1d) & 0xff0);
          lVar6 = -uVar10;
          puVar16 = (ulong *)((long)puVar17 + lVar6);
          if (uVar10 != 0) {
            *(undefined8 *)((long)puVar17 + -8) = *(undefined8 *)((long)puVar17 + -8);
          }
          local_418 = (undefined *)0x0;
          local_3e8 = (undefined *)((ulong)((long)puVar17 + lVar6 + 0xf) & 0xfffffffffffffff0);
LAB_0010f0ab:
          uVar10 = 0;
          if (local_400 != (int *)0x0) {
            uVar10 = *local_410;
          }
          local_408 = 0;
          piVar13 = (int *)(local_2c8.dir)->dir_start;
          piVar11 = local_400;
          piVar14 = local_400;
          pcVar20 = local_2c8.dir;
          if (piVar13 == param_3) goto LAB_0010f191;
          do {
            uVar21 = (long)piVar13 - (long)param_3;
            uVar19 = uVar9 + uVar21;
            if (CARRY8(uVar9,uVar21)) {
              uVar19 = 0xffffffffffffffff;
            }
            if (uVar19 <= uVar10) goto LAB_0010f174;
            piVar14 = piVar11;
            if (uVar10 != 0) {
              if (-1 < (long)uVar10) {
                uVar10 = uVar10 * 2;
                goto LAB_0010f115;
              }
LAB_0010f6b0:
              local_3d0 = piVar14;
LAB_0010f6b7:
              *(undefined8 *)((long)puVar16 + -8) = 0x10f6bc;
              local_3d8 = __errno_location();
              piVar14 = local_3d0;
LAB_0010f6ca:
              if ((piVar14 == local_400) || (piVar14 == (int *)0x0)) goto LAB_0010f6e0;
              goto LAB_0010f6d8;
            }
            uVar10 = 0xc;
LAB_0010f115:
            if (uVar10 < uVar19) {
              uVar10 = uVar19;
            }
            if (uVar10 == 0xffffffffffffffff) goto LAB_0010f6b0;
            if ((piVar11 == (int *)0x0) || (piVar11 == local_400)) {
              local_3e0 = param_3;
              local_3d8 = piVar11;
              local_3d0 = (int *)((ulong)local_3d0 & 0xffffffffffffff00 |
                                 (ulong)(piVar11 == local_400));
              *(undefined8 *)((long)puVar16 + -8) = 0x10f76c;
              piVar11 = (int *)malloc(uVar10);
              piVar14 = local_3d8;
              if (piVar11 == (int *)0x0) goto LAB_0010f6b0;
              param_3 = local_3e0;
              if ((uVar9 != 0) && ((char)local_3d0 != '\0')) {
                local_3d0 = local_3e0;
                *(undefined8 *)((long)puVar16 + -8) = 0x10f7b3;
                piVar11 = (int *)memcpy(piVar11,piVar14,uVar9);
                param_3 = local_3d0;
              }
            }
            else {
              local_3d0 = piVar11;
              local_3d8 = param_3;
              *(undefined8 *)((long)puVar16 + -8) = 0x10f15a;
              piVar11 = (int *)realloc(piVar11,uVar10);
              param_3 = local_3d8;
              if (piVar11 == (int *)0x0) goto LAB_001100df;
            }
LAB_0010f174:
            local_3d0 = piVar11;
            *(undefined8 *)((long)puVar16 + -8) = 0x10f18a;
            memcpy((void *)((long)piVar11 + uVar9),param_3,uVar21);
            piVar14 = local_3d0;
            uVar9 = uVar19;
LAB_0010f191:
            do {
              paVar1 = local_3b8.arg;
              if (local_2c8.count == local_408) {
                uVar19 = uVar9 + 1;
                if (uVar9 < 0xffffffffffffffff) {
                  if (uVar10 < uVar19) {
                    if (uVar10 == 0) {
                      if (uVar19 < 0xd) {
                        uVar10 = 0xc;
                      }
                      else {
LAB_001100b1:
                        uVar10 = uVar19;
                        if (uVar19 == 0xffffffffffffffff) goto LAB_0010f6b0;
                      }
                    }
                    else {
                      if ((long)uVar10 < 0) goto LAB_0010f6b0;
                      uVar10 = uVar10 * 2;
                      if (uVar10 < uVar19) goto LAB_001100b1;
                    }
                    bVar22 = piVar14 == local_400;
                    if ((piVar14 == (int *)0x0) || (bVar22)) {
                      local_3d0 = piVar14;
                      *(undefined8 *)((long)puVar16 + -8) = 0x11006d;
                      piVar14 = (int *)malloc(uVar10);
                      piVar13 = local_3d0;
                      if (piVar14 == (int *)0x0) goto LAB_0010f6b7;
                      if ((uVar9 != 0) && (bVar22)) {
                        *(undefined8 *)((long)puVar16 + -8) = 0x110097;
                        piVar14 = (int *)memcpy(piVar14,piVar13,uVar9);
                      }
                    }
                    else {
                      local_3d0 = piVar14;
                      *(undefined8 *)((long)puVar16 + -8) = 0x10ff9e;
                      piVar14 = (int *)realloc(piVar14,uVar10);
                      if (piVar14 == (int *)0x0) goto LAB_001100df;
                    }
                  }
                }
                else if (uVar10 != 0xffffffffffffffff) goto LAB_0010f6b0;
                *(undefined *)((long)piVar14 + uVar9) = 0;
                if ((piVar14 != local_400) && (uVar19 < uVar10)) {
                  local_3d0 = piVar14;
                  *(undefined8 *)((long)puVar16 + -8) = 0x10ffd6;
                  piVar13 = (int *)realloc(piVar14,uVar19);
                  piVar14 = local_3d0;
                  if (piVar13 != (int *)0x0) {
                    piVar14 = piVar13;
                  }
                }
                puVar7 = local_418;
                if (local_418 != (undefined *)0x0) {
                  local_3d0 = piVar14;
                  *(undefined8 *)((long)puVar16 + -8) = 0x10fffc;
                  rpl_free(puVar7);
                  piVar14 = local_3d0;
                }
                if (local_2c8.dir != local_2c8.direct_alloc_dir) {
                  local_3d0 = piVar14;
                  *(undefined8 *)((long)puVar16 + -8) = 0x110022;
                  rpl_free(local_2c8.dir);
                  piVar14 = local_3d0;
                }
                if (local_3b8.arg != local_3b8.direct_alloc_arg) {
                  local_3d0 = piVar14;
                  *(undefined8 *)((long)puVar16 + -8) = 0x110048;
                  rpl_free(local_3b8.arg);
                  piVar14 = local_3d0;
                }
                *local_410 = uVar9;
                goto LAB_0010f3e3;
              }
              uVar19 = pcVar20->arg_index;
              if (pcVar20->conversion == '%') {
                if (uVar19 != 0xffffffffffffffff) goto LAB_00103968;
                uVar21 = uVar9 + 1;
                if (uVar9 == 0xffffffffffffffff) {
                  uVar21 = uVar19;
                }
                if (uVar10 < uVar21) {
                  if (uVar10 == 0) {
                    uVar10 = 0xc;
                  }
                  else {
                    if ((long)uVar10 < 0) goto LAB_0010f6b0;
                    uVar10 = uVar10 * 2;
                  }
                  if (uVar10 < uVar21) {
                    uVar10 = uVar21;
                  }
                  if (uVar10 == 0xffffffffffffffff) goto LAB_0010f6b0;
                  bVar22 = piVar14 == local_400;
                  if ((piVar14 == (int *)0x0) || (bVar22)) {
                    local_3d0 = piVar14;
                    *(undefined8 *)((long)puVar16 + -8) = 0x10feaf;
                    piVar14 = (int *)malloc(uVar10);
                    piVar13 = local_3d0;
                    if (piVar14 == (int *)0x0) goto LAB_0010f6b7;
                    if ((uVar9 != 0) && (bVar22)) {
                      *(undefined8 *)((long)puVar16 + -8) = 0x10feda;
                      piVar14 = (int *)memcpy(piVar14,piVar13,uVar9);
                    }
                  }
                  else {
                    local_3d0 = piVar14;
                    *(undefined8 *)((long)puVar16 + -8) = 0x10f661;
                    piVar14 = (int *)realloc(piVar14,uVar10);
                    if (piVar14 == (int *)0x0) goto LAB_001100df;
                  }
                }
                *(undefined *)((long)piVar14 + uVar9) = 0x25;
                uVar9 = uVar21;
              }
              else {
                if (uVar19 == 0xffffffffffffffff) {
LAB_00103968:
                    /* WARNING: Subroutine does not return */
                  *(undefined **)((long)puVar16 + -8) = &UNK_0010396d;
                  abort();
                }
                paVar12 = local_3b8.arg + uVar19;
                aVar3 = paVar12->type;
                if (pcVar20->conversion == 'n') {
                  switch(aVar3) {
                  case TYPE_COUNT_SCHAR_POINTER:
                    **(undefined **)&paVar12->a = (char)uVar9;
                    break;
                  case TYPE_COUNT_SHORT_POINTER:
                    **(undefined2 **)&paVar12->a = (short)uVar9;
                    break;
                  case TYPE_COUNT_INT_POINTER:
                    **(undefined4 **)&paVar12->a = (int)uVar9;
                    break;
                  case TYPE_COUNT_LONGINT_POINTER:
                  case TYPE_COUNT_LONGLONGINT_POINTER:
                    **(ulong **)&paVar12->a = uVar9;
                    break;
                  default:
vasnprintf_cold:
                    /* WARNING: Subroutine does not return */
                    *(undefined8 *)((long)puVar16 + -8) = 0x103968;
                    abort();
                  }
                }
                else {
                  uVar18 = pcVar20->flags;
                  *local_3e8 = 0x25;
                  if ((uVar18 & 1) == 0) {
                    local_3d0 = (int *)(local_3e8 + 1);
                  }
                  else {
                    local_3e8[1] = 0x27;
                    local_3d0 = (int *)(local_3e8 + 2);
                  }
                  if ((uVar18 & 2) != 0) {
                    *(undefined *)local_3d0 = 0x2d;
                    local_3d0 = (int *)((long)local_3d0 + 1);
                  }
                  if ((uVar18 & 4) != 0) {
                    *(undefined *)local_3d0 = 0x2b;
                    local_3d0 = (int *)((long)local_3d0 + 1);
                  }
                  if ((uVar18 & 8) != 0) {
                    *(undefined *)local_3d0 = 0x20;
                    local_3d0 = (int *)((long)local_3d0 + 1);
                  }
                  if ((uVar18 & 0x10) != 0) {
                    *(undefined *)local_3d0 = 0x23;
                    local_3d0 = (int *)((long)local_3d0 + 1);
                  }
                  if ((uVar18 & 0x40) != 0) {
                    *(undefined *)local_3d0 = 0x49;
                    local_3d0 = (int *)((long)local_3d0 + 1);
                  }
                  if ((uVar18 & 0x20) != 0) {
                    *(undefined *)local_3d0 = 0x30;
                    local_3d0 = (int *)((long)local_3d0 + 1);
                  }
                  piVar13 = local_3d0;
                  pcVar4 = pcVar20->width_start;
                  if (pcVar4 != pcVar20->width_end) {
                    piVar11 = (int *)(pcVar20->width_end + -(long)pcVar4);
                    local_3e0 = piVar14;
                    local_3d8 = piVar11;
                    *(undefined8 *)((long)puVar16 + -8) = 0x10f2bd;
                    memcpy(piVar13,pcVar4,(size_t)piVar11);
                    local_3d0 = (int *)((long)local_3d0 + (long)local_3d8);
                    piVar14 = local_3e0;
                  }
                  piVar13 = local_3d0;
                  pcVar4 = pcVar20->precision_start;
                  if (pcVar4 != pcVar20->precision_end) {
                    piVar11 = (int *)(pcVar20->precision_end + -(long)pcVar4);
                    local_3e0 = piVar14;
                    local_3d8 = piVar11;
                    *(undefined8 *)((long)puVar16 + -8) = 0x10f2ff;
                    memcpy(piVar13,pcVar4,(size_t)piVar11);
                    local_3d0 = (int *)((long)local_3d0 + (long)local_3d8);
                    piVar14 = local_3e0;
                  }
                  switch(aVar3) {
                  case TYPE_LONGLONGINT:
                  case TYPE_ULONGLONGINT:
                    *(undefined *)local_3d0 = 0x6c;
                    local_3d0 = (int *)((long)local_3d0 + 1);
                  case TYPE_LONGINT:
                  case TYPE_ULONGINT:
                  case TYPE_WIDE_CHAR:
                  case TYPE_WIDE_STRING:
                    *(undefined *)local_3d0 = 0x6c;
                    local_3d0 = (int *)((long)local_3d0 + 1);
                    break;
                  case TYPE_LONGDOUBLE:
                    *(undefined *)local_3d0 = 0x4c;
                    local_3d0 = (int *)((long)local_3d0 + 1);
                  }
                  *(char *)local_3d0 = pcVar20->conversion;
                  *(undefined *)((long)local_3d0 + 1) = 0;
                  if (pcVar20->width_arg_index == 0xffffffffffffffff) {
                    local_3e0 = (int *)((ulong)local_3e0._4_4_ << 0x20);
                  }
                  else {
                    paVar12 = paVar1 + pcVar20->width_arg_index;
                    if (paVar12->type != TYPE_INT) goto LAB_00103968;
                    local_3e0 = (int *)CONCAT44(local_3e0._4_4_,1);
                    local_3c0[0] = *(int *)&paVar12->a;
                  }
                  if (pcVar20->precision_arg_index != 0xffffffffffffffff) {
                    paVar1 = paVar1 + pcVar20->precision_arg_index;
                    if (paVar1->type != TYPE_INT) goto LAB_00103968;
                    local_3c0[(ulong)local_3e0 & 0xffffffff] = *(int *)&paVar1->a;
                    local_3e0 = (int *)((ulong)local_3e0 & 0xffffffff00000000 |
                                       (ulong)((int)local_3e0 + 1));
                  }
                  uVar19 = uVar9 + 2;
                  piVar13 = piVar14;
                  if (uVar9 < 0xfffffffffffffffe) {
                    if (uVar10 < uVar19) {
                      if (uVar10 == 0) {
                        if (uVar19 < 0xd) {
                          uVar10 = 0xc;
                        }
                        else {
LAB_0010fbc2:
                          uVar10 = uVar19;
                          if (uVar19 == 0xffffffffffffffff) goto LAB_0010f6b0;
                        }
                      }
                      else {
                        if ((long)uVar10 < 0) goto LAB_0010f6b0;
                        uVar10 = uVar10 * 2;
                        if (uVar10 < uVar19) goto LAB_0010fbc2;
                      }
                      if ((piVar14 == (int *)0x0) || (piVar14 == local_400)) {
                        local_3f0 = piVar14;
                        local_3d8 = (int *)((ulong)local_3d8 & 0xffffffffffffff00 |
                                           (ulong)(piVar14 == local_400));
                        *(undefined8 *)((long)puVar16 + -8) = 0x10fbfd;
                        piVar13 = (int *)malloc(uVar10);
                        piVar14 = local_3f0;
                        if (piVar13 == (int *)0x0) goto LAB_0010f6b0;
                        if ((uVar9 != 0) && ((char)local_3d8 != '\0')) {
                          *(undefined8 *)((long)puVar16 + -8) = 0x10fc36;
                          memcpy(piVar13,piVar14,uVar9);
                        }
                      }
                      else {
                        local_3d8 = piVar14;
                        *(undefined8 *)((long)puVar16 + -8) = 0x10f50f;
                        piVar13 = (int *)realloc(piVar14,uVar10);
                        piVar14 = local_3d8;
                        if (piVar13 == (int *)0x0) goto LAB_0010f6b0;
                      }
                    }
                  }
                  else if (uVar10 != 0xffffffffffffffff) goto LAB_0010f6b0;
                  *(undefined *)((long)piVar13 + uVar9) = 0;
                  *(undefined8 *)((long)puVar16 + -8) = 0x10f52c;
                  local_3d8 = __errno_location();
                  local_3f0 = (int *)((ulong)local_3f0 & 0xffffffff00000000 | (ulong)aVar3);
                  local_41c = *local_3d8;
                  local_3f8 = &local_3c4;
LAB_0010f550:
                  piVar14 = piVar13;
                  puVar7 = local_3e8;
                  local_3c4 = -1;
                  uVar21 = uVar10 - uVar9;
                  uVar19 = 0x7fffffff;
                  if (uVar21 < 0x80000000) {
                    uVar19 = uVar21;
                  }
                  *local_3d8 = 0;
                  switch((ulong)local_3f0 & 0xffffffff) {
                  default:
                    goto vasnprintf_cold;
                  case 1:
                    uVar18 = (uint)*(char *)&local_3b8.arg[pcVar20->arg_index].a;
                    break;
                  case 2:
                    uVar15 = (ulong)*(byte *)&local_3b8.arg[pcVar20->arg_index].a;
                    goto joined_r0x0010fb71;
                  case 3:
                    uVar18 = (uint)*(short *)&local_3b8.arg[pcVar20->arg_index].a;
                    break;
                  case 4:
                    uVar15 = (ulong)*(ushort *)&local_3b8.arg[pcVar20->arg_index].a;
                    goto joined_r0x0010fb71;
                  case 5:
                  case 6:
                  case 0xd:
                  case 0xe:
                    uVar18 = *(uint *)&local_3b8.arg[pcVar20->arg_index].a;
                    break;
                  case 7:
                  case 8:
                  case 9:
                  case 10:
                  case 0xf:
                  case 0x10:
                  case 0x11:
                    uVar5 = *(undefined8 *)&local_3b8.arg[pcVar20->arg_index].a;
                    if ((int)local_3e0 == 1) {
                      *(int **)((long)puVar16 + -8) = local_3f8;
                      *(undefined8 *)((long)puVar16 + -0x10) = uVar5;
                      goto LAB_0010f9a9;
                    }
                    if ((int)local_3e0 != 2) {
                      *(int **)((long)puVar16 + -0x10) = local_3f8;
LAB_0010f881:
                      puVar7 = local_3e8;
                      local_428 = uVar19;
                      *(undefined8 *)((long)puVar16 + -0x18) = 0x10f8a2;
                      iVar8 = __snprintf_chk((long)piVar14 + uVar9,uVar19,1,0xffffffffffffffff,
                                             puVar7);
                      goto LAB_0010f8b0;
                    }
                    *(int **)((long)puVar16 + -0x10) = local_3f8;
                    *(undefined8 *)((long)puVar16 + -0x18) = uVar5;
                    goto LAB_0010faa4;
                  case 0xb:
                    uVar5 = *(undefined8 *)&local_3b8.arg[pcVar20->arg_index].a;
                    if ((int)local_3e0 == 1) {
                      *(int **)((long)puVar16 + -0x10) = local_3f8;
                    }
                    else {
                      if ((int)local_3e0 != 2) {
                        local_428 = uVar19;
                        *(undefined8 *)((long)puVar16 + -8) = 0x10fb43;
                        iVar8 = __snprintf_chk(uVar5,(long)piVar14 + uVar9,uVar19,1,
                                               0xffffffffffffffff,puVar7);
                        goto LAB_0010f8b0;
                      }
                      uVar15 = (ulong)(uint)local_3c0[1];
                      *(int **)((long)puVar16 + -8) = local_3f8;
                      *(ulong *)((long)puVar16 + -0x10) = uVar15;
                    }
                    iVar8 = local_3c0[0];
                    puVar7 = local_3e8;
                    local_428 = uVar19;
                    *(undefined8 *)((long)puVar16 + -0x18) = 0x10fd78;
                    iVar8 = __snprintf_chk(uVar5,(long)piVar14 + uVar9,uVar19,1,0xffffffffffffffff,
                                           puVar7,iVar8);
                    goto LAB_0010f8b0;
                  case 0xc:
                    Var2 = *(unkbyte10 *)&local_3b8.arg[pcVar20->arg_index].a;
                    if ((int)local_3e0 != 1) {
                      if ((int)local_3e0 != 2) {
                        *(unkbyte10 *)((long)puVar16 + -0x10) = Var2;
                        goto LAB_0010f881;
                      }
                      *(int **)((long)puVar16 + -0x10) = local_3f8;
                      puVar7 = local_3e8;
                      uVar15 = (ulong)(uint)local_3c0[1];
                      local_428 = uVar19;
                      *(unkbyte10 *)((long)puVar16 + -0x20) = Var2;
                      *(ulong *)((long)puVar16 + -0x30) = uVar15;
                      *(undefined8 *)((long)puVar16 + -0x38) = 0x10fde1;
                      iVar8 = __snprintf_chk((long)piVar14 + uVar9,uVar19,1,0xffffffffffffffff,
                                             puVar7);
                      goto LAB_0010f8b0;
                    }
                    *(int **)((long)puVar16 + -0x10) = local_3f8;
                    *(unkbyte10 *)((long)puVar16 + -0x20) = Var2;
                    goto LAB_0010faab;
                  }
                  uVar15 = (ulong)uVar18;
joined_r0x0010fb71:
                  if ((int)local_3e0 == 1) {
                    *(int **)((long)puVar16 + -8) = local_3f8;
                    *(ulong *)((long)puVar16 + -0x10) = uVar15;
LAB_0010f9a9:
                    puVar7 = local_3e8;
                    local_428 = uVar19;
                    *(undefined8 *)((long)puVar16 + -0x18) = 0x10f9ca;
                    iVar8 = __snprintf_chk((long)piVar14 + uVar9,uVar19,1,0xffffffffffffffff,puVar7)
                    ;
                  }
                  else {
                    if ((int)local_3e0 != 2) {
                      *(int **)((long)puVar16 + -0x10) = local_3f8;
                      goto LAB_0010f9a9;
                    }
                    *(int **)((long)puVar16 + -0x10) = local_3f8;
                    *(ulong *)((long)puVar16 + -0x18) = uVar15;
LAB_0010faa4:
                    *(ulong *)((long)puVar16 + -0x20) = (ulong)(uint)local_3c0[1];
LAB_0010faab:
                    puVar7 = local_3e8;
                    local_428 = uVar19;
                    *(undefined8 *)((long)puVar16 + -0x28) = 0x10fad3;
                    iVar8 = __snprintf_chk((long)piVar14 + uVar9,uVar19,1,0xffffffffffffffff,puVar7)
                    ;
                  }
LAB_0010f8b0:
                  piVar13 = piVar14;
                  if (local_3c4 < 0) {
                    if (*(char *)((long)local_3d0 + 1) == '\0') {
                      if (-1 < iVar8) goto LAB_0010f8d8;
                      if (*local_3d8 == 0) {
                        iVar8 = 0x16;
                        if ((pcVar20->conversion & 0xefU) == 99) {
                          iVar8 = 0x54;
                        }
                        *local_3d8 = iVar8;
                      }
                      if ((piVar14 != local_400) && (piVar14 != (int *)0x0)) {
                        *(undefined8 *)((long)puVar16 + -8) = 0x10f394;
                        rpl_free(piVar14);
                      }
                      puVar7 = local_418;
                      if (local_418 != (undefined *)0x0) {
                        *(undefined8 *)((long)puVar16 + -8) = 0x10f3a8;
                        rpl_free(puVar7);
                      }
                      if (local_2c8.dir != local_2c8.direct_alloc_dir) {
                        *(undefined8 *)((long)puVar16 + -8) = 0x10f3c0;
                        rpl_free(local_2c8.dir);
                      }
                      if (local_3b8.arg != local_3b8.direct_alloc_arg) {
                        *(undefined8 *)((long)puVar16 + -8) = 0x10f3d8;
                        rpl_free(local_3b8.arg);
                      }
                      goto LAB_0010f3e0;
                    }
                    *(undefined *)((long)local_3d0 + 1) = 0;
                    goto LAB_0010f550;
                  }
                  if (((ulong)(long)local_3c4 < local_428) &&
                     (*(char *)((long)piVar14 + uVar9 + (long)local_3c4) != '\0'))
                  goto LAB_00103968;
                  if (local_3c4 < iVar8) {
LAB_0010f8d8:
                    local_3c4 = iVar8;
                  }
                  if (local_428 <= local_3c4 + 1) {
                    if (0x7ffffffe < uVar21) {
                      if ((piVar14 != local_400) && (piVar14 != (int *)0x0)) {
                        *(undefined8 *)((long)puVar16 + -8) = 0x10fe46;
                        rpl_free(piVar14);
                      }
                      puVar7 = local_418;
                      if (local_418 != (undefined *)0x0) {
                        *(undefined8 *)((long)puVar16 + -8) = 0x10fe5a;
                        rpl_free(puVar7);
                      }
                      if (local_2c8.dir != local_2c8.direct_alloc_dir) {
                        *(undefined8 *)((long)puVar16 + -8) = 0x10fe72;
                        rpl_free(local_2c8.dir);
                      }
                      if (local_3b8.arg != local_3b8.direct_alloc_arg) {
                        *(undefined8 *)((long)puVar16 + -8) = 0x10fe8a;
                        rpl_free(local_3b8.arg);
                      }
                      piVar14 = (int *)0x0;
                      *local_3d8 = 0x4b;
                      goto LAB_0010f3e3;
                    }
                    if ((long)uVar10 < 0) {
                      if (uVar10 != 0xffffffffffffffff) goto LAB_0010f6ca;
                    }
                    else {
                      uVar19 = uVar10 * 2;
                      uVar21 = (local_3c4 + 2) + uVar9;
                      if (CARRY8((ulong)(local_3c4 + 2),uVar9)) goto LAB_0010f6ca;
                      if (uVar21 <= uVar19) {
                        uVar21 = uVar19;
                      }
                      if (uVar10 < uVar21) {
                        uVar10 = uVar21;
                        if (uVar21 <= uVar19) {
                          uVar10 = uVar19;
                        }
                        if (uVar10 == 0xffffffffffffffff) goto LAB_0010f6ca;
                        bVar22 = piVar14 == local_400;
                        if ((piVar14 == (int *)0x0) || (bVar22)) {
                          *(undefined8 *)((long)puVar16 + -8) = 0x10fcc0;
                          piVar13 = (int *)malloc(uVar10);
                          if (piVar13 == (int *)0x0) goto LAB_0010f6ca;
                          if ((uVar9 != 0) && (bVar22)) {
                            *(undefined8 *)((long)puVar16 + -8) = 0x10fcdf;
                            piVar13 = (int *)memcpy(piVar13,piVar14,uVar9);
                          }
                        }
                        else {
                          *(undefined8 *)((long)puVar16 + -8) = 0x10f95c;
                          piVar13 = (int *)realloc(piVar14,uVar10);
                          if (piVar13 == (int *)0x0) goto LAB_0010f6ca;
                        }
                      }
                    }
                    goto LAB_0010f550;
                  }
                  uVar9 = (long)local_3c4 + uVar9;
                  *local_3d8 = local_41c;
                }
              }
              param_3 = (int *)pcVar20->dir_end;
              piVar13 = (int *)pcVar20[1].dir_start;
              pcVar20 = pcVar20 + 1;
              local_408 = local_408 + 1;
              piVar11 = piVar14;
            } while (piVar13 == param_3);
          } while( true );
        }
        if (__size != 0xffffffffffffffff) {
          local_3e8 = (undefined *)malloc(__size);
          if (local_3e8 != (undefined *)0x0) {
            local_418 = local_3e8;
            puVar16 = &local_428;
            goto LAB_0010f0ab;
          }
        }
      }
    }
    local_3d8 = __errno_location();
    puVar16 = &local_428;
    goto LAB_0010f6f4;
  }
  goto LAB_0010f3e0;
LAB_001100df:
  *(undefined8 *)((long)puVar16 + -8) = 0x1100eb;
  local_3d8 = __errno_location();
  piVar14 = local_3d0;
LAB_0010f6d8:
  *(undefined8 *)((long)puVar16 + -8) = 0x10f6e0;
  rpl_free(piVar14);
LAB_0010f6e0:
  puVar7 = local_418;
  if (local_418 != (undefined *)0x0) {
    *(undefined8 *)((long)puVar16 + -8) = 0x10f6f4;
    rpl_free(puVar7);
  }
LAB_0010f6f4:
  if (local_2c8.dir != local_2c8.direct_alloc_dir) {
    *(undefined8 *)((long)puVar16 + -8) = 0x10f70c;
    rpl_free(local_2c8.dir);
  }
  if (local_3b8.arg != local_3b8.direct_alloc_arg) {
    *(undefined8 *)((long)puVar16 + -8) = 0x10f724;
    rpl_free(local_3b8.arg);
  }
  *local_3d8 = 0xc;
LAB_0010f3e0:
  piVar14 = (int *)0x0;
LAB_0010f3e3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return piVar14;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)puVar16 + -8) = 0x1100df;
  __stack_chk_fail();
}

