
size_t open_input_files(sortfile *files,size_t nfiles,FILE ***pfps)

{
  long lVar1;
  tempnode *temp;
  int iVar2;
  pid_t pVar3;
  FILE **ppFVar4;
  FILE *pFVar5;
  int *piVar6;
  FILE *pFVar7;
  char *pcVar8;
  undefined8 uVar9;
  size_t sVar10;
  long in_FS_OFFSET;
  int pipefds [2];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ppFVar4 = (FILE **)xnmalloc(nfiles,8);
  *pfps = ppFVar4;
  if (nfiles == 0) {
    sVar10 = 0;
  }
  else {
    sVar10 = 0;
    do {
      temp = files->temp;
      if ((temp != (tempnode *)0x0) && (temp->state != '\0')) {
        if (temp->state == '\x01') {
          wait_proc(temp->pid);
        }
        iVar2 = open(&temp->field_0xd,0);
        if (-1 < iVar2) {
          pVar3 = pipe_fork(pipefds,9);
          if (pVar3 != -1) {
            if (pVar3 == 0) {
              close(pipefds[0]);
              if (iVar2 != 0) {
                move_fd(iVar2,0);
              }
              if (pipefds[1] != 1) {
                move_fd(pipefds[1],1);
              }
              execlp(compress_program,compress_program,&DAT_00116c29,0);
              piVar6 = __errno_location();
                    /* WARNING: Subroutine does not return */
              async_safe_die(*piVar6,"couldn\'t execute compress program (with -d)");
            }
            temp->pid = pVar3;
            register_proc(temp);
            close(iVar2);
            close(pipefds[1]);
            pFVar7 = fdopen(pipefds[0],"r");
            if (pFVar7 != (FILE *)0x0) {
              ppFVar4[sVar10] = (FILE *)pFVar7;
              goto LAB_0010a8f1;
            }
            piVar6 = __errno_location();
            iVar2 = *piVar6;
            close(pipefds[0]);
            ppFVar4[sVar10] = (FILE *)0x0;
            *piVar6 = iVar2;
            break;
          }
          piVar6 = __errno_location();
          if (*piVar6 != 0x18) {
            pcVar8 = quotearg_style(shell_escape_always_quoting_style,compress_program);
            uVar9 = dcgettext(0,"couldn\'t create process for %s -d",5);
                    /* WARNING: Subroutine does not return */
            error(2,*piVar6,uVar9,pcVar8);
          }
          close(iVar2);
          *piVar6 = 0x18;
        }
        ppFVar4[sVar10] = (FILE *)0x0;
        break;
      }
      pFVar5 = stream_open(files->name,"r");
      ppFVar4[sVar10] = pFVar5;
      if (pFVar5 == (FILE *)0x0) break;
LAB_0010a8f1:
      sVar10 = sVar10 + 1;
      files = files + 1;
    } while (sVar10 != nfiles);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

