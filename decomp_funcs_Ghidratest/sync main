
int main(int argc,char **argv)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  undefined auVar10 [16];
  undefined8 uVar11;
  char *local_48;
  undefined auStack64 [4];
  uint local_3c;
  
  bVar8 = 0;
  bVar1 = false;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
LAB_001026d1:
  do {
    uVar11 = 0x1026ec;
    iVar2 = getopt_long(argc,argv,&DAT_001060e9,long_options,0);
    if (iVar2 == -1) break;
    if (iVar2 != 100) {
      if (iVar2 < 0x65) {
        if (iVar2 == -0x83) {
          version_etc(stdout,"sync","GNU coreutils",Version,"Jim Meyering","Giuseppe Scrivano",0,
                      uVar11);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar2 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
      }
      else if (iVar2 == 0x66) {
        bVar1 = true;
        goto LAB_001026d1;
      }
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    bVar8 = 1;
  } while( true );
  iVar2 = optind;
  if ((bVar8 != 0) && (bVar1)) {
    uVar11 = dcgettext(0,"cannot specify both --data and --file-system",5);
    iVar2 = error(1,0,uVar11);
  }
  if ((argc <= iVar2 & bVar8) != 0) {
    uVar11 = dcgettext(0,"--data needs at least one argument",5);
    auVar10 = error(1,0,uVar11);
    pcVar5 = local_48;
    local_48 = SUB168(auVar10,0);
    (*(code *)PTR___libc_start_main_00109fc8)
              (main,pcVar5,auStack64,__libc_csu_init,__libc_csu_fini,SUB168(auVar10 >> 0x40,0),
               &local_48);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (iVar2 < argc) {
    local_3c = 2;
    if (!bVar1) {
      local_3c = (uint)bVar8;
    }
    uVar7 = 1;
    do {
      pcVar5 = argv[iVar2];
      iVar2 = open(pcVar5,0x800);
      if (iVar2 < 0) {
        piVar4 = __errno_location();
        iVar3 = *piVar4;
        iVar2 = open(pcVar5,0x801);
        if (-1 < iVar2) goto LAB_001027e1;
        pcVar5 = quotearg_style(shell_escape_always_quoting_style,pcVar5);
        uVar11 = dcgettext(0,"error opening %s",5);
        uVar9 = 0;
        error(0,iVar3,uVar11,pcVar5);
      }
      else {
LAB_001027e1:
        uVar9 = rpl_fcntl(iVar2,3);
        if (uVar9 == 0xffffffff) {
LAB_001028ea:
          local_48 = quotearg_style(shell_escape_always_quoting_style,pcVar5);
          pcVar6 = "couldn\'t reset non-blocking mode %s";
LAB_00102907:
          uVar11 = dcgettext(0,pcVar6,5);
          piVar4 = __errno_location();
          uVar9 = 0;
          error(0,*piVar4,uVar11,local_48);
        }
        else {
          iVar3 = rpl_fcntl(iVar2,4,(ulong)(uVar9 & 0xfffff7ff));
          if (iVar3 < 0) goto LAB_001028ea;
          if (local_3c == 1) {
            iVar3 = fdatasync(iVar2);
          }
          else if (local_3c == 2) {
            iVar3 = syncfs();
          }
          else {
            iVar3 = fsync(iVar2);
          }
          uVar9 = 1;
          if (iVar3 < 0) {
            local_48 = quotearg_style(shell_escape_always_quoting_style,pcVar5);
            pcVar6 = "error syncing %s";
            goto LAB_00102907;
          }
        }
        iVar2 = close(iVar2);
        if (iVar2 < 0) {
          pcVar5 = quotearg_style(shell_escape_always_quoting_style,pcVar5);
          uVar11 = dcgettext(0,"failed to close %s",5);
          piVar4 = __errno_location();
          uVar9 = 0;
          error(0,*piVar4,uVar11,pcVar5);
        }
      }
      uVar7 = uVar7 & uVar9;
      optind = optind + 1;
      iVar2 = optind;
    } while (optind < argc);
  }
  else {
    sync();
    uVar7 = 1;
  }
  return uVar7 ^ 1;
}

