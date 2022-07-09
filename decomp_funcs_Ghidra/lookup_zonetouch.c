
table * lookup_zone(parser_control *pc,char *name)

{
  table *ptVar1;
  int iVar2;
  char *pcVar3;
  table *ptVar4;
  
  ptVar4 = universal_time_zone_table;
  pcVar3 = "GMT";
  do {
    iVar2 = strcmp(name,pcVar3);
    if (iVar2 == 0) {
      return ptVar4;
    }
    pcVar3 = ptVar4[1].name;
    ptVar4 = ptVar4 + 1;
  } while (pcVar3 != (char *)0x0);
  ptVar4 = pc->local_time_zone_table;
  pcVar3 = pc->local_time_zone_table[0].name;
  while (pcVar3 != (char *)0x0) {
    iVar2 = strcmp(name,pcVar3);
    if (iVar2 == 0) {
      return ptVar4;
    }
    ptVar1 = ptVar4 + 1;
    ptVar4 = ptVar4 + 1;
    pcVar3 = ptVar1->name;
  }
  ptVar4 = time_zone_table;
  pcVar3 = "WET";
  do {
    iVar2 = strcmp(name,pcVar3);
    if (iVar2 == 0) {
      return ptVar4;
    }
    pcVar3 = ptVar4[1].name;
    ptVar4 = ptVar4 + 1;
  } while (pcVar3 != (char *)0x0);
  return (table *)0x0;
}

