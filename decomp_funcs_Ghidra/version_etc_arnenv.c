
void version_etc_arn(FILE *stream,char *command_name,char *package,char *version,char **authors,
                    size_t n_authors)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  
  if (command_name == (char *)0x0) {
    __fprintf_chk(stream,1,"%s %s\n",package,version);
  }
  else {
    __fprintf_chk(stream,1,"%s (%s) %s\n",command_name,package,version);
  }
  uVar1 = dcgettext(0,&DAT_0010962b,5);
  __fprintf_chk(stream,1,"Copyright %s %d Free Software Foundation, Inc.",uVar1,0x7e6);
  fputc_unlocked(10,(FILE *)stream);
  uVar1 = dcgettext(0,
                    "License GPLv3+: GNU GPL version 3 or later <%s>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n"
                    ,5);
  __fprintf_chk(stream,1,uVar1,"https://gnu.org/licenses/gpl.html");
  fputc_unlocked(10,(FILE *)stream);
  switch(n_authors) {
  case 0:
    goto switchD_00106940_caseD_0;
  case 1:
    pcVar6 = *authors;
    uVar1 = dcgettext(0,"Written by %s.\n",5);
    __fprintf_chk(stream,1,uVar1,pcVar6);
    return;
  case 2:
    pcVar6 = authors[1];
    pcVar5 = *authors;
    uVar1 = dcgettext(0,"Written by %s and %s.\n",5);
    __fprintf_chk(stream,1,uVar1,pcVar5,pcVar6);
    return;
  case 3:
    pcVar6 = authors[2];
    pcVar5 = authors[1];
    pcVar4 = *authors;
    uVar1 = dcgettext(0,"Written by %s, %s, and %s.\n",5);
    __fprintf_chk(stream,1,uVar1,pcVar4,pcVar5,pcVar6);
    return;
  case 4:
    pcVar5 = authors[3];
    pcVar4 = authors[2];
    pcVar3 = authors[1];
    pcVar2 = *authors;
    pcVar6 = (char *)0x106b52;
    uVar1 = dcgettext(0,"Written by %s, %s, %s,\nand %s.\n",5);
    goto LAB_00106b59;
  case 5:
    pcVar6 = authors[4];
    pcVar5 = authors[3];
    pcVar4 = authors[2];
    pcVar3 = authors[1];
    pcVar2 = *authors;
    uVar1 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_00106b59:
    __fprintf_chk(stream,1,uVar1,pcVar2,pcVar3,pcVar4,pcVar5,pcVar6);
    return;
  case 6:
    local_58 = authors[5];
    local_60 = authors[4];
    pcVar5 = authors[3];
    pcVar4 = authors[2];
    pcVar3 = authors[1];
    pcVar2 = *authors;
    pcVar6 = (char *)0x106bf4;
    uVar1 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, and %s.\n",5);
    goto LAB_00106bfb;
  case 7:
    pcVar6 = authors[6];
    local_58 = authors[5];
    local_60 = authors[4];
    pcVar5 = authors[3];
    pcVar4 = authors[2];
    pcVar3 = authors[1];
    pcVar2 = *authors;
    uVar1 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00106bfb:
    __fprintf_chk(stream,1,uVar1,pcVar2,pcVar3,pcVar4,pcVar5,local_60,local_58,pcVar6);
    return;
  case 8:
    local_48 = authors[7];
    local_50 = authors[6];
    local_58 = authors[5];
    local_60 = authors[4];
    pcVar6 = authors[3];
    pcVar5 = authors[2];
    pcVar4 = authors[1];
    pcVar3 = *authors;
    local_40 = (char *)0x10698e;
    uVar1 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n",5);
    goto LAB_00106995;
  case 9:
    local_40 = authors[8];
    local_48 = authors[7];
    pcVar2 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
    local_50 = authors[6];
    local_58 = authors[5];
    local_60 = authors[4];
    pcVar6 = authors[3];
    pcVar5 = authors[2];
    pcVar4 = authors[1];
    pcVar3 = *authors;
    break;
  default:
    local_40 = authors[8];
    local_48 = authors[7];
    pcVar2 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
    local_50 = authors[6];
    local_58 = authors[5];
    local_60 = authors[4];
    pcVar6 = authors[3];
    pcVar5 = authors[2];
    pcVar4 = authors[1];
    pcVar3 = *authors;
  }
  uVar1 = dcgettext(0,pcVar2,5);
LAB_00106995:
  __fprintf_chk(stream,1,uVar1,pcVar3,pcVar4,pcVar5,pcVar6,local_60,local_58,local_50,local_48,
                local_40);
switchD_00106940_caseD_0:
  return;
}

