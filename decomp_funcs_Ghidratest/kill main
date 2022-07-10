
int main(int argc,char **argv)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  char *pcVar14;
  undefined8 extraout_RDX;
  int iVar15;
  char **ppcVar16;
  char *pcVar17;
  long in_FS_OFFSET;
  bool bVar18;
  byte bVar19;
  char *endp;
  char signame [19];
  char signame_1 [19];
  
  bVar19 = 0;
  bVar18 = false;
  bVar3 = false;
  iVar15 = -1;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/root/coreutils-builder/share/locale");
  textdomain("coreutils");
  atexit(close_stdout);
LAB_00102770:
  do {
    iVar4 = getopt_long(argc,argv,
                        "0::1::2::3::4::5::6::7::8::9::A::B::C::D::E::F::G::H::I::J::K::M::N::O::P::Q::R::S::T::U::V::W::X::Y::Z::Lln:s:t"
                       );
    if (iVar4 == -1) {
no_more_options:
      if (iVar15 == -1) {
        if (!bVar18) {
          iVar15 = 0xf;
          goto LAB_00102878;
        }
        if (optind < argc) {
          ppcVar16 = argv + optind;
          if (!bVar3) {
            iVar4 = 0;
            for (; *ppcVar16 != (char *)0x0; ppcVar16 = ppcVar16 + 1) {
              iVar15 = operand2sig(*ppcVar16,signame_1);
              if (iVar15 < 0) {
                iVar4 = 1;
              }
              else if ((int)**ppcVar16 - 0x30U < 10) {
                puts(signame_1);
              }
              else {
                __printf_chk(1,&DAT_001070f4,iVar15);
              }
            }
            goto LAB_001029a6;
          }
LAB_001029e9:
          pcVar17 = (char *)0x0;
          iVar15 = 1;
          do {
            iVar4 = sig2str(iVar15,signame_1);
            puVar13 = (uint *)signame_1;
            if (iVar4 == 0) {
              do {
                puVar12 = puVar13;
                uVar5 = *puVar12 + 0xfefefeff & ~*puVar12;
                uVar6 = uVar5 & 0x80808080;
                puVar13 = puVar12 + 1;
              } while (uVar6 == 0);
              bVar18 = (uVar5 & 0x8080) == 0;
              if (bVar18) {
                uVar6 = uVar6 >> 0x10;
              }
              if (bVar18) {
                puVar13 = (uint *)((long)puVar12 + 6);
              }
              pcVar14 = (char *)((long)puVar13 +
                                ((-3 - (ulong)CARRY1((byte)uVar6,(byte)uVar6)) - (long)signame_1));
              if (pcVar17 < pcVar14) {
                pcVar17 = (char *)((ulong)pcVar14 & 0xffffffff);
              }
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 != 0x41);
          iVar4 = 0;
          if (ppcVar16 != (char **)0x0) {
            for (; *ppcVar16 != (char *)0x0; ppcVar16 = ppcVar16 + 1) {
              uVar6 = operand2sig(*ppcVar16,signame_1);
              if ((int)uVar6 < 0) {
                iVar4 = 1;
              }
              else {
                uVar11 = (ulong)uVar6;
                pcVar14 = strsignal(uVar6);
                if (pcVar14 == (char *)0x0) {
                  pcVar14 = "?";
                }
                __printf_chk(1,"%*d %-*s %s\n",2,uVar6,pcVar17,signame_1,pcVar14,uVar11);
              }
            }
            goto LAB_001029a6;
          }
          iVar15 = 1;
          do {
            iVar4 = sig2str(iVar15,signame_1);
            if (iVar4 == 0) {
              pcVar14 = strsignal(iVar15);
              if (pcVar14 == (char *)0x0) {
                pcVar14 = "?";
              }
              __printf_chk(1,"%*d %-*s %s\n",2,iVar15,pcVar17,signame_1,pcVar14,extraout_RDX);
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 != 0x41);
        }
        else {
          if (bVar3) {
            ppcVar16 = (char **)0x0;
            goto LAB_001029e9;
          }
          iVar15 = 1;
          do {
            iVar4 = sig2str(iVar15,signame_1);
            if (iVar4 == 0) {
              puts(signame_1);
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 != 0x41);
        }
        iVar4 = 0;
LAB_001029a6:
        if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
          return iVar4;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      pcVar17 = "cannot combine signal with -l or -t";
      if (!bVar18) {
LAB_00102878:
        pcVar17 = "no process ID specified";
        if (optind < argc) {
          ppcVar16 = argv + optind;
          iVar4 = 0;
          piVar8 = __errno_location();
          pcVar17 = *ppcVar16;
          do {
            *piVar8 = 0;
            lVar10 = __strtol_internal(pcVar17,&endp,10,0);
            if ((((*piVar8 == 0x22) || (lVar10 != (int)lVar10)) || (pcVar17 == endp)) ||
               (*endp != '\0')) {
              quote(pcVar17);
              uVar9 = dcgettext(0,"%s: invalid process id",5);
              iVar4 = 1;
              error(0,0,uVar9);
            }
            else {
              iVar7 = kill((int)lVar10,iVar15);
              if (iVar7 != 0) {
                iVar4 = 1;
                quote(pcVar17);
                error(0,*piVar8,"%s");
              }
            }
            pcVar17 = ppcVar16[1];
            ppcVar16 = ppcVar16 + 1;
          } while (pcVar17 != (char *)0x0);
          goto LAB_001029a6;
        }
      }
      goto LAB_00102c48;
    }
    if (0x74 < iVar4) goto switchD_001027bd_caseD_3a;
    if (iVar4 < 0x30) {
      if (iVar4 == -0x83) {
        version_etc(stdout,"kill","GNU coreutils",Version,"Paul Eggert",0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_001027bd_caseD_3a;
    }
    switch(iVar4) {
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      if (optind != 2) {
        optind = optind + -1;
        goto no_more_options;
      }
      break;
    default:
      goto switchD_001027bd_caseD_3a;
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
      break;
    case 0x4c:
    case 0x74:
      bVar3 = true;
    case 0x6c:
      if (bVar18) {
        pcVar17 = "multiple -l or -t options specified";
LAB_00102c48:
        uVar9 = dcgettext(0,pcVar17,5);
        error(0,0,uVar9);
        goto switchD_001027bd_caseD_3a;
      }
      bVar18 = true;
      goto LAB_00102770;
    case 0x6e:
    case 0x73:
      goto LAB_0010280e;
    }
    pcVar17 = argv[(long)optind + -1];
    if (optarg == (char *)0x0) {
      uVar11 = 0xffffffffffffffff;
      pcVar14 = pcVar17;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar14 + (ulong)bVar19 * -2 + 1;
      } while (cVar1 != '\0');
      optarg = pcVar17 + (~uVar11 - 1);
      pcVar17 = argv[(long)optind + -1];
    }
    if (optarg != pcVar17 + 2) {
      uVar9 = dcgettext(0,"invalid option -- %c",5);
      error(0,0,uVar9,iVar4);
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    optarg = pcVar17 + 1;
LAB_0010280e:
    if (iVar15 != -1) {
      pcVar17 = quote(optarg);
      uVar9 = dcgettext(0,"%s: multiple signals specified",5);
      error(0,0,uVar9,pcVar17);
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    iVar15 = operand2sig(optarg,signame);
    if (iVar15 < 0) {
switchD_001027bd_caseD_3a:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
  } while( true );
}

