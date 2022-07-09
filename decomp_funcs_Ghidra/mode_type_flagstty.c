
long mode_type_flag(undefined4 param_1,long param_2)

{
  switch(param_1) {
  case 0:
    return param_2 + 8;
  case 1:
    return param_2;
  case 2:
    return param_2 + 4;
  case 3:
    return param_2 + 0xc;
  case 4:
    return 0;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
}

