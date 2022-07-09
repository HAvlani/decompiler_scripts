
int parse_symbols(char *str,symbol_value *table,_Bool exclusive,char *error_msgid)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  symbol_value *psVar10;
  size_t sVar11;
  
  uVar8 = 0;
LAB_00105ac6:
  pcVar4 = strchr(str,0x2c);
  psVar10 = table;
  do {
    lVar5 = 0;
    do {
      pcVar1 = psVar10->symbol + lVar5;
      cVar2 = str[lVar5];
      if (*pcVar1 == '\0') {
        if (((cVar2 == ',') || (cVar2 == '\0')) && (uVar3 = psVar10->value, uVar3 != 0)) {
          uVar9 = uVar8 | uVar3;
          uVar8 = uVar3;
          if (exclusive == false) {
            uVar8 = uVar9;
          }
          if (pcVar4 == (char *)0x0) {
            return uVar8;
          }
          str = pcVar4 + 1;
          goto LAB_00105ac6;
        }
        break;
      }
      lVar5 = lVar5 + 1;
    } while (*pcVar1 == cVar2);
    if (psVar10->symbol[0] == '\0') {
      if (pcVar4 == (char *)0x0) {
        sVar11 = strlen(str);
      }
      else {
        sVar11 = (long)pcVar4 - (long)str;
      }
      uVar6 = quotearg_n_style_mem(0,8,str,sVar11);
      uVar7 = dcgettext(0,error_msgid,5);
      nl_error(0,0,"%s: %s",uVar7,uVar6);
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    psVar10 = psVar10 + 1;
  } while( true );
}

