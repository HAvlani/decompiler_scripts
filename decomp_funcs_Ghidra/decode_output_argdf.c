
void decode_output_arg(char *arg)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  char **ppcVar6;
  int f;
  ulong uVar7;
  char *pcVar8;
  
  pcVar2 = xstrdup(arg);
  pcVar4 = pcVar2;
  do {
    pcVar8 = (char *)0x0;
    pcVar3 = strchr(pcVar4,0x2c);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = '\0';
      pcVar8 = pcVar3 + 1;
    }
    ppcVar6 = &field_data[0].arg;
    uVar7 = 0;
    while( true ) {
      pcVar3 = *ppcVar6;
      iVar1 = strcmp(pcVar3,pcVar4);
      f = (int)uVar7;
      if (iVar1 == 0) break;
      uVar7 = (ulong)(f + 1U);
      ppcVar6 = ppcVar6 + 6;
      if (f + 1U == 0xc) {
        pcVar4 = quote(pcVar4);
        pcVar2 = "option --output: field %s unknown";
        goto LAB_00106755;
      }
    }
    if (field_data[uVar7].used != false) {
      pcVar4 = quote(pcVar3);
      pcVar2 = "option --output: field %s used more than once";
LAB_00106755:
      uVar5 = dcgettext(0,pcVar2,5);
      error(0,0,uVar5,pcVar4);
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    if (f == 2) {
      alloc_field(2,"Size");
    }
    else if (f == 4) {
      alloc_field(4,"Avail");
    }
    else {
      alloc_field(f,(char *)0x0);
    }
    pcVar4 = pcVar8;
    if (pcVar8 == (char *)0x0) {
      rpl_free(pcVar2);
      return;
    }
  } while( true );
}

