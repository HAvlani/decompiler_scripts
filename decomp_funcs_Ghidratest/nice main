
int main(int argc,char **argv)

{
  char **ppcVar1;
  int iVar2;
  char *pcVar3;
  strtol_error sVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined8 uVar8;
  char *pcVar9;
  option *in_RCX;
  ulong uVar10;
  ulong extraout_RDX;
  int iVar11;
  undefined8 uVar12;
  option *unaff_R14;
  long in_FS_OFFSET;
  long tmp;
  long local_30;
  
  piVar7 = (int *)(ulong)(uint)argc;
  iVar11 = 1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils");
  textdomain("coreutils");
  exit_failure = 0x7d;
  atexit(close_stdout);
  if (argc < 2) goto LAB_00102938;
  pcVar9 = (char *)0x0;
  unaff_R14 = longopts;
  do {
    in_RCX = (option *)((long)iVar11 * 8);
    pcVar3 = argv[iVar11];
    if (*pcVar3 != '-') goto LAB_001027c8;
    if (9 < (int)pcVar3[(int)(((pcVar3[1] - 0x2bU & 0xfd) == 0) + 1)] - 0x30U) goto LAB_001027c8;
    iVar11 = iVar11 + 1;
    pcVar9 = pcVar3 + 1;
    while ((int)piVar7 <= iVar11) {
      do {
        argc = (int)piVar7;
        if (pcVar9 == (char *)0x0) {
LAB_00102938:
          piVar7 = __errno_location();
          if (argc == iVar11) {
            *piVar7 = 0;
            uVar6 = getpriority(PRIO_PROCESS,0);
            uVar10 = (ulong)uVar6;
            if ((uVar6 == 0xffffffff) && (*piVar7 != 0)) {
              uVar8 = dcgettext(0,"cannot get niceness",5);
              error(0x7d,*piVar7,uVar8);
              uVar10 = extraout_RDX;
            }
            iVar5 = 0;
            __printf_chk(1,&DAT_001070ea,uVar10);
            goto LAB_00102914;
          }
LAB_00102a22:
          pcVar9 = (char *)0xa;
        }
        else {
          in_RCX = (option *)&tmp;
          sVar4 = xstrtol(pcVar9,(char **)0x0,10,&tmp,"");
          if (LONGINT_OVERFLOW < sVar4) {
            in_RCX = (option *)quote(pcVar9);
            uVar8 = dcgettext(0,"invalid adjustment %s",5);
            error(0x7d,0,uVar8);
            goto LAB_00102a22;
          }
          pcVar9 = (char *)0xffffffd9;
          if ((-0x28 < tmp) && (pcVar9 = (char *)0x27, tmp < 0x28)) {
            pcVar9 = (char *)tmp;
          }
          if (iVar11 == argc) {
            uVar8 = dcgettext(0,"a command must be given with an adjustment",5);
            error(0,0,uVar8);
            goto LAB_001029e6;
          }
        }
        piVar7 = __errno_location();
        *piVar7 = 0;
        iVar5 = getpriority(PRIO_PROCESS,0);
        if ((iVar5 != -1) || (*piVar7 == 0)) {
          iVar5 = setpriority(PRIO_PROCESS,0,iVar5 + (int)pcVar9);
          if (iVar5 != 0) {
            uVar8 = dcgettext(0,"cannot set niceness",5);
            iVar2 = *piVar7;
            if ((iVar2 == 0xd) || (uVar12 = 0x7d, iVar2 == 1)) {
              uVar12 = 0;
            }
            iVar5 = 0x7d;
            error(uVar12,iVar2,uVar8);
            if ((*stderr & 0x20) != 0) goto LAB_00102914;
          }
          ppcVar1 = argv + iVar11;
          execvp(*ppcVar1,ppcVar1);
          iVar11 = *piVar7;
          pcVar9 = quote(*ppcVar1);
          iVar5 = (iVar11 == 2) + 0x7e;
          error(0,*piVar7,"%s",pcVar9);
LAB_00102914:
          if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return iVar5;
        }
        uVar8 = dcgettext(0,"cannot get niceness",5);
        error(0x7d,*piVar7,uVar8);
LAB_001027c8:
        ppcVar1 = (char **)((long)(argv + -1) + (long)in_RCX);
        *ppcVar1 = *argv;
        optind = 0;
        in_RCX = unaff_R14;
        iVar5 = getopt_long((int)piVar7 - (iVar11 + -1),ppcVar1,&DAT_001070ac,unaff_R14,0);
        iVar11 = iVar11 + -1 + optind;
      } while (iVar5 == -1);
      if (iVar5 < 0) {
        if (iVar5 == -0x83) {
          version_etc(stdout,"nice","GNU coreutils",Version,"David MacKenzie",0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar5 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
        goto LAB_001029e6;
      }
      pcVar9 = optarg;
      if (iVar5 != 0x6e) {
LAB_001029e6:
                    /* WARNING: Subroutine does not return */
        usage(0x7d);
      }
    }
  } while( true );
}

