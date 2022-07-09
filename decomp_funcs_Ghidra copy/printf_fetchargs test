
int printf_fetchargs(__va_list_tag *args,arguments *a)

{
  uint uVar1;
  argument *paVar2;
  ulong uVar3;
  unkbyte10 *pVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long *plVar9;
  
  paVar2 = a->arg;
  if (a->count != 0) {
    uVar3 = 0;
    do {
      switch(paVar2->type) {
      default:
        return -1;
      case TYPE_SCHAR:
      case TYPE_UCHAR:
        uVar1 = args->gp_offset;
        if (uVar1 < 0x30) {
          puVar8 = (undefined4 *)((ulong)uVar1 + (long)args->reg_save_area);
          args->gp_offset = uVar1 + 8;
        }
        else {
          puVar8 = (undefined4 *)args->overflow_arg_area;
          args->overflow_arg_area = puVar8 + 2;
        }
        *(char *)&paVar2->a = (char)*puVar8;
        break;
      case TYPE_SHORT:
      case TYPE_USHORT:
        uVar1 = args->gp_offset;
        if (uVar1 < 0x30) {
          puVar8 = (undefined4 *)((ulong)uVar1 + (long)args->reg_save_area);
          args->gp_offset = uVar1 + 8;
        }
        else {
          puVar8 = (undefined4 *)args->overflow_arg_area;
          args->overflow_arg_area = puVar8 + 2;
        }
        *(short *)&paVar2->a = (short)*puVar8;
        break;
      case TYPE_INT:
      case TYPE_UINT:
      case TYPE_CHAR:
      case TYPE_WIDE_CHAR:
        uVar1 = args->gp_offset;
        if (uVar1 < 0x30) {
          puVar8 = (undefined4 *)((ulong)uVar1 + (long)args->reg_save_area);
          args->gp_offset = uVar1 + 8;
        }
        else {
          puVar8 = (undefined4 *)args->overflow_arg_area;
          args->overflow_arg_area = puVar8 + 2;
        }
        *(undefined4 *)&paVar2->a = *puVar8;
        break;
      case TYPE_LONGINT:
      case TYPE_ULONGINT:
      case TYPE_LONGLONGINT:
      case TYPE_ULONGLONGINT:
      case TYPE_POINTER:
      case TYPE_COUNT_SCHAR_POINTER:
      case TYPE_COUNT_SHORT_POINTER:
      case TYPE_COUNT_INT_POINTER:
      case TYPE_COUNT_LONGINT_POINTER:
      case TYPE_COUNT_LONGLONGINT_POINTER:
        uVar1 = args->gp_offset;
        if (uVar1 < 0x30) {
          puVar7 = (undefined8 *)((ulong)uVar1 + (long)args->reg_save_area);
          args->gp_offset = uVar1 + 8;
        }
        else {
          puVar7 = (undefined8 *)args->overflow_arg_area;
          args->overflow_arg_area = puVar7 + 1;
        }
        *(undefined8 *)&paVar2->a = *puVar7;
        break;
      case TYPE_DOUBLE:
        uVar1 = args->fp_offset;
        if (uVar1 < 0xb0) {
          puVar7 = (undefined8 *)((ulong)uVar1 + (long)args->reg_save_area);
          args->fp_offset = uVar1 + 0x10;
        }
        else {
          puVar7 = (undefined8 *)args->overflow_arg_area;
          args->overflow_arg_area = puVar7 + 1;
        }
        *(undefined8 *)&paVar2->a = *puVar7;
        break;
      case TYPE_LONGDOUBLE:
        pVar4 = (unkbyte10 *)((long)args->overflow_arg_area + 0xfU & 0xfffffffffffffff0);
        args->overflow_arg_area = (void *)((long)pVar4 + 0x10);
        *(unkbyte10 *)&paVar2->a = *pVar4;
        break;
      case TYPE_STRING:
        uVar1 = args->gp_offset;
        if (uVar1 < 0x30) {
          puVar7 = (undefined8 *)((ulong)uVar1 + (long)args->reg_save_area);
          args->gp_offset = uVar1 + 8;
        }
        else {
          puVar7 = (undefined8 *)args->overflow_arg_area;
          args->overflow_arg_area = puVar7 + 1;
        }
        puVar6 = (undefined *)*puVar7;
        if (puVar6 == (undefined *)0x0) {
          puVar6 = &DAT_0010b8ac;
        }
        *(undefined **)&paVar2->a = puVar6;
        break;
      case TYPE_WIDE_STRING:
        uVar1 = args->gp_offset;
        if (uVar1 < 0x30) {
          plVar9 = (long *)((ulong)uVar1 + (long)args->reg_save_area);
          args->gp_offset = uVar1 + 8;
        }
        else {
          plVar9 = (long *)args->overflow_arg_area;
          args->overflow_arg_area = plVar9 + 1;
        }
        puVar5 = (undefined1 *)*plVar9;
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = wide_null_string_2857;
        }
        *(undefined1 **)&paVar2->a = puVar5;
      }
      uVar3 = uVar3 + 1;
      paVar2 = paVar2 + 1;
    } while (uVar3 <= a->count && a->count != uVar3);
  }
  return 0;
}

