
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

simple_strtod_error
simple_strtod_int(char *input_str,char **endptr,longdouble *value,_Bool *negative)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  simple_strtod_error sVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  
  bVar5 = *input_str == '-';
  if (bVar5) {
    input_str = input_str + 1;
  }
  *negative = bVar5;
  *endptr = input_str;
  if ((int)*input_str - 0x30U < 10) {
    fVar7 = (float10)0;
    uVar3 = 0;
    sVar4 = SSE_OK;
    uVar1 = (int)*input_str - 0x30U;
    do {
      input_str = input_str + 1;
      if (((float10)0 != fVar7) || (uVar1 != 0)) {
        uVar3 = uVar3 + 1;
      }
      if (0x12 < uVar3) {
        if (0x1b < uVar3) {
          return SSE_OVERFLOW;
        }
        sVar4 = SSE_OK_PRECISION_LOSS;
      }
      fVar6 = (float10)_DAT_0010cdb4;
      *endptr = input_str;
      fVar7 = (float10)uVar1 + fVar6 * fVar7;
      uVar1 = (int)*input_str - 0x30U;
    } while ((int)*input_str - 0x30U < 10);
  }
  else {
    iVar2 = strncmp(input_str,decimal_point,(long)decimal_point_length);
    if (iVar2 != 0) {
      return SSE_INVALID_NUMBER;
    }
    sVar4 = SSE_OK;
    fVar7 = (float10)0;
  }
  if (bVar5) {
    fVar7 = -fVar7;
  }
  *(float10 *)value = fVar7;
  return sVar4;
}

