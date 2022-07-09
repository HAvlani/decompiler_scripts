
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int main(int argc,char **argv)

{
  char cVar1;
  bool bVar2;
  _Bool _Var3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  char **ppcVar10;
  long in_FS_OFFSET;
  double dVar11;
  undefined auVar12 [16];
  undefined8 uStack104;
  double local_60 [2];
  double s;
  char *p;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
  parse_gnu_standard_options_only
            (argc,argv,"sleep","GNU coreutils",Version,true,usage,"Jim Meyering","Paul Eggert",0);
  if (argc == 1) {
    uVar7 = dcgettext(0,"missing operand",5);
    error(0,0,uVar7);
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  if ((int)optind < argc) {
    lVar9 = (long)(int)optind;
    uVar4 = ~optind;
    bVar2 = true;
    local_60[0] = 0.0;
    ppcVar10 = argv + lVar9;
    do {
      _Var3 = xstrtod(*ppcVar10,&p,&s,cl_strtod);
      if (((_Var3 == false) && (piVar8 = __errno_location(), *piVar8 != 0x22)) || (s < 0.0)) {
LAB_0010273a:
        pcVar6 = quote(*ppcVar10);
        uVar7 = dcgettext(0,"invalid time interval %s",5);
        bVar2 = false;
        error(0,0,uVar7,pcVar6);
        dVar11 = s;
      }
      else {
        cVar1 = *p;
        dVar11 = s;
        if (cVar1 != '\0') {
          if (p[1] != '\0') goto LAB_0010273a;
          if (cVar1 == 'h') {
            dVar11 = s * _DAT_001073a8;
          }
          else if (cVar1 < 'i') {
            if (cVar1 != 'd') goto LAB_0010273a;
            dVar11 = s * _DAT_001073b0;
          }
          else if (cVar1 == 'm') {
            dVar11 = s * _DAT_001073a0;
          }
          else if (cVar1 != 's') goto LAB_0010273a;
        }
      }
      local_60[0] = dVar11 + local_60[0];
      ppcVar10 = ppcVar10 + 1;
    } while (ppcVar10 != argv + (ulong)(uVar4 + argc) + lVar9 + 1);
    if (!bVar2) {
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
  }
  else {
    local_60[0] = 0.0;
  }
  iVar5 = xnanosleep(local_60[0]);
  if (iVar5 != 0) {
    uVar7 = dcgettext(0,"cannot read realtime clock",5);
    piVar8 = __errno_location();
    auVar12 = error(1,*piVar8,uVar7);
    uVar7 = uStack104;
    uStack104 = SUB168(auVar12,0);
    (*(code *)PTR___libc_start_main_0010afd8)
              (main,uVar7,local_60,__libc_csu_init,__libc_csu_fini,SUB168(auVar12 >> 0x40,0),
               &uStack104);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

