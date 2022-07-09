
void FUN_00105198(char *param_1)

{
  char cVar1;
  
  do {
    cVar1 = *param_1;
    if (cVar1 == '\0') {
      return;
    }
    if (cVar1 < ' ') {
      if ('\0' < cVar1) goto LAB_001051a7;
    }
    else if (cVar1 == '\x7f') {
LAB_001051a7:
      *param_1 = '?';
    }
    param_1 = param_1 + 1;
  } while( true );
}

