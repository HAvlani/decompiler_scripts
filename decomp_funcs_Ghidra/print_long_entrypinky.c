
void print_long_entry(char *name)

{
  long lVar1;
  char cVar2;
  passwd *ppVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 *puVar7;
  size_t sVar8;
  undefined4 *puVar9;
  FILE *pFVar10;
  long in_FS_OFFSET;
  char buf [1024];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ppVar3 = getpwnam(name);
  uVar4 = dcgettext(0,"Login name: ",5);
  __printf_chk(1,uVar4);
  __printf_chk(1,"%-28s",name);
  uVar4 = dcgettext(0,"In real life: ",5);
  __printf_chk(1,uVar4);
  if (ppVar3 == (passwd *)0x0) {
    uVar4 = dcgettext(0,&DAT_00107026,5);
    __printf_chk(1," %s",uVar4);
  }
  else {
    pcVar6 = ppVar3->pw_gecos;
    pcVar5 = strchr(pcVar6,0x2c);
    if (pcVar5 != (char *)0x0) {
      *pcVar5 = '\0';
      pcVar6 = ppVar3->pw_gecos;
    }
    pcVar6 = create_fullname(pcVar6,ppVar3->pw_name);
    __printf_chk(1," %s",pcVar6);
    rpl_free(pcVar6);
    pcVar6 = stdout->_IO_write_ptr;
    if (pcVar6 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar6 + 1;
      *pcVar6 = '\n';
    }
    else {
      __overflow(stdout,10);
    }
    cVar2 = include_project;
    if (include_home_and_shell != false) {
      uVar4 = dcgettext(0,"Directory: ",5);
      __printf_chk(1,uVar4);
      __printf_chk(1,"%-29s",ppVar3->pw_dir);
      uVar4 = dcgettext(0,"Shell: ",5);
      __printf_chk(1,uVar4);
      __printf_chk(1," %s",ppVar3->pw_shell);
      cVar2 = include_project;
      pcVar6 = stdout->_IO_write_ptr;
      if (pcVar6 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar6 + 1;
        *pcVar6 = '\n';
      }
      else {
        __overflow(stdout,10);
        cVar2 = include_project;
      }
    }
    if (cVar2 != '\0') {
      sVar8 = strlen(ppVar3->pw_dir);
      pcVar6 = (char *)xmalloc(sVar8 + 10);
      puVar7 = (undefined8 *)stpcpy(pcVar6,ppVar3->pw_dir);
      *puVar7 = 0x63656a6f72702e2f;
      *(undefined2 *)(puVar7 + 1) = 0x74;
      pFVar10 = fopen(pcVar6,"r");
      if (pFVar10 != (FILE *)0x0) {
        uVar4 = dcgettext(0,"Project: ",5);
        __printf_chk(1,uVar4);
        while (sVar8 = fread_unlocked(buf,1,0x400,pFVar10), sVar8 != 0) {
          fwrite_unlocked(buf,1,sVar8,stdout);
        }
        rpl_fclose((FILE *)pFVar10);
      }
      rpl_free(pcVar6);
    }
    if (include_plan != false) {
      sVar8 = strlen(ppVar3->pw_dir);
      pcVar6 = (char *)xmalloc(sVar8 + 7);
      puVar9 = (undefined4 *)stpcpy(pcVar6,ppVar3->pw_dir);
      *puVar9 = 0x6c702e2f;
      *(undefined2 *)(puVar9 + 1) = 0x6e61;
      *(undefined *)((long)puVar9 + 6) = 0;
      pFVar10 = fopen(pcVar6,"r");
      if (pFVar10 != (FILE *)0x0) {
        uVar4 = dcgettext(0,"Plan:\n",5);
        __printf_chk(1,uVar4);
        while (sVar8 = fread_unlocked(buf,1,0x400,pFVar10), sVar8 != 0) {
          fwrite_unlocked(buf,1,sVar8,stdout);
        }
        rpl_fclose((FILE *)pFVar10);
      }
      rpl_free(pcVar6);
    }
    pcVar6 = stdout->_IO_write_ptr;
    if (pcVar6 < stdout->_IO_write_end) {
      stdout->_IO_write_ptr = pcVar6 + 1;
      *pcVar6 = '\n';
    }
    else {
      __overflow(stdout,10);
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

