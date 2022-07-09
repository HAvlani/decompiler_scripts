
int main(int argc,char **argv)

{
  byte **ppbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  ushort **ppuVar9;
  byte bVar10;
  undefined8 extraout_RDX;
  ushort *puVar11;
  byte *pbVar12;
  byte bVar13;
  byte *pbVar14;
  byte **ppbVar15;
  
  pcVar8 = getenv("POSIXLY_CORRECT");
  bVar3 = pcVar8 != (char *)0x0;
  if (pcVar8 == (char *)0x0) {
    set_program_name(*argv);
    setlocale(6,"");
    bindtextdomain("coreutils");
    textdomain("coreutils");
    atexit(close_stdout);
    if (argc == 2) {
LAB_00102693:
      pcVar8 = argv[1];
      iVar6 = strcmp(pcVar8,"--help");
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      iVar6 = strcmp(pcVar8,"--version");
      if (iVar6 == 0) {
        version_etc((FILE *)stdout,"echo","GNU coreutils",Version,"Brian Fox","Chet Ramey",0,
                    extraout_RDX);
        return 0;
      }
      iVar6 = 1;
    }
    else {
      iVar6 = argc + -1;
      if (iVar6 < 1) goto LAB_001028de;
    }
LAB_001026ce:
    ppbVar15 = (byte **)(argv + 1);
    bVar5 = false;
    bVar4 = true;
    do {
      pbVar12 = *ppbVar15;
      if (*pbVar12 != 0x2d) {
LAB_00102bda:
        if ((bVar3) || (bVar5)) goto LAB_001027e9;
        goto LAB_00102740;
      }
      bVar13 = pbVar12[1];
      pbVar14 = pbVar12 + 1;
      if (bVar13 == 0) goto LAB_00102bda;
      pbVar12 = pbVar12 + 2;
      bVar10 = bVar13;
      do {
        if ((0x29 < (byte)(bVar10 + 0xbb)) || ((1 << (bVar10 + 0xbb & 0x3f) & 0x20100000001U) == 0))
        {
          if ((bVar3) || (bVar5)) goto LAB_001027f1;
          goto LAB_00102738;
        }
        bVar10 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar10 != 0);
      do {
        pbVar14 = pbVar14 + 1;
        if (bVar13 == 0x65) {
          bVar5 = true;
        }
        else if (bVar13 == 0x6e) {
          bVar4 = false;
        }
        else if (bVar13 == 0x45) {
          bVar5 = false;
        }
        bVar13 = *pbVar14;
      } while (bVar13 != 0);
      ppbVar15 = ppbVar15 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  else {
    if ((1 < argc) && (iVar6 = strcmp(argv[1],"-n"), iVar6 == 0)) {
      set_program_name(*argv);
      setlocale(6,"");
      bindtextdomain("coreutils");
      textdomain("coreutils");
      atexit(close_stdout);
      if (argc == 2) goto LAB_00102693;
      iVar6 = argc + -1;
      goto LAB_001026ce;
    }
    ppbVar15 = (byte **)(argv + 1);
    set_program_name(*argv);
    setlocale(6,"");
    bindtextdomain("coreutils");
    textdomain("coreutils");
    atexit(close_stdout);
    iVar6 = argc + -1;
    bVar4 = true;
    if (pcVar8 == (char *)0x0) {
LAB_00102738:
      if (0 < iVar6) {
LAB_00102740:
        ppbVar1 = ppbVar15 + (iVar6 - 1);
        for (; fputs_unlocked((char *)*ppbVar15,stdout), ppbVar1 != ppbVar15;
            ppbVar15 = ppbVar15 + 1) {
          pcVar8 = stdout->_IO_write_ptr;
          if (pcVar8 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar8 + 1;
            *pcVar8 = ' ';
          }
          else {
            __overflow(stdout,0x20);
          }
        }
      }
    }
    else {
LAB_001027e9:
      if (0 < iVar6) {
LAB_001027f1:
        ppbVar1 = ppbVar15 + (iVar6 - 1);
        do {
          pbVar12 = *ppbVar15;
LAB_0010282e:
          bVar13 = *pbVar12;
          pbVar14 = pbVar12;
          if (bVar13 != 0) {
            do {
              uVar7 = (uint)bVar13;
              pbVar12 = pbVar14 + 1;
              if (bVar13 == 0x5c) {
                bVar10 = pbVar14[1];
                if (bVar10 == 0) {
                  uVar7 = 0x5c;
                }
                else {
                  pbVar12 = pbVar14 + 2;
                  switch(bVar10) {
                  case 0x30:
                    bVar10 = pbVar14[2];
                    if ((byte)(bVar10 - 0x30) < 8) {
                      bVar2 = pbVar14[3];
                      pbVar12 = pbVar14 + 3;
                      goto LAB_0010289e;
                    }
                    uVar7 = 0;
                    bVar13 = 0;
                    break;
                  case 0x31:
                  case 0x32:
                  case 0x33:
                  case 0x34:
                  case 0x35:
                  case 0x36:
                  case 0x37:
                    bVar2 = pbVar14[2];
LAB_0010289e:
                    bVar13 = bVar10 - 0x30;
                    if ((byte)(bVar2 - 0x30) < 8) {
                      pbVar12 = pbVar12 + 1;
                      bVar13 = (bVar2 - 0x30) + bVar13 * '\b';
                    }
                    if ((byte)(*pbVar12 - 0x30) < 8) {
                      bVar13 = (*pbVar12 - 0x30) + bVar13 * '\b';
                      pbVar12 = pbVar12 + 1;
                      uVar7 = (uint)bVar13;
                    }
                    else {
                      uVar7 = (uint)bVar13;
                    }
                    break;
                  default:
not_an_escape:
                    uVar7 = (uint)bVar10;
                    pcVar8 = stdout->_IO_write_ptr;
                    bVar13 = bVar10;
                    if (stdout->_IO_write_end < pcVar8 || stdout->_IO_write_end == pcVar8) {
                      __overflow(stdout,0x5c);
                    }
                    else {
                      stdout->_IO_write_ptr = pcVar8 + 1;
                      *pcVar8 = '\\';
                    }
                    break;
                  case 0x5c:
                    uVar7 = 0x5c;
                    break;
                  case 0x61:
                    uVar7 = 7;
                    bVar13 = 7;
                    break;
                  case 0x62:
                    uVar7 = 8;
                    bVar13 = 8;
                    break;
                  case 99:
                    return 0;
                  case 0x65:
                    uVar7 = 0x1b;
                    bVar13 = 0x1b;
                    break;
                  case 0x66:
                    uVar7 = 0xc;
                    bVar13 = 0xc;
                    break;
                  case 0x6e:
                    uVar7 = 10;
                    bVar13 = 10;
                    break;
                  case 0x72:
                    uVar7 = 0xd;
                    bVar13 = 0xd;
                    break;
                  case 0x74:
                    uVar7 = 9;
                    bVar13 = 9;
                    break;
                  case 0x76:
                    uVar7 = 0xb;
                    bVar13 = 0xb;
                    break;
                  case 0x78:
                    bVar13 = pbVar14[2];
                    ppuVar9 = __ctype_b_loc();
                    puVar11 = *ppuVar9;
                    if ((*(byte *)((long)puVar11 + (ulong)bVar13 * 2 + 1) & 0x10) == 0)
                    goto not_an_escape;
                    uVar7 = hextobin(bVar13);
                    bVar13 = (byte)uVar7;
                    if ((*(byte *)((long)puVar11 + (ulong)pbVar14[3] * 2 + 1) & 0x10) == 0) {
                      pbVar12 = pbVar14 + 3;
                      uVar7 = uVar7 & 0xff;
                    }
                    else {
                      pbVar12 = pbVar14 + 4;
                      iVar6 = hextobin(pbVar14[3]);
                      uVar7 = iVar6 + uVar7 * 0x10;
                      bVar13 = (byte)uVar7;
                      uVar7 = uVar7 & 0xff;
                    }
                  }
                }
              }
              pbVar14 = (byte *)stdout->_IO_write_ptr;
              if (pbVar14 < stdout->_IO_write_end) goto code_r0x00102824;
              __overflow(stdout,uVar7);
              bVar13 = *pbVar12;
              pbVar14 = pbVar12;
              if (bVar13 == 0) break;
            } while( true );
          }
          if (ppbVar1 == ppbVar15) break;
          pcVar8 = stdout->_IO_write_ptr;
          if (pcVar8 < stdout->_IO_write_end) {
            stdout->_IO_write_ptr = pcVar8 + 1;
            *pcVar8 = ' ';
          }
          else {
            __overflow(stdout,0x20);
          }
          ppbVar15 = ppbVar15 + 1;
        } while( true );
      }
    }
  }
  if (!bVar4) {
    return 0;
  }
LAB_001028de:
  pcVar8 = stdout->_IO_write_ptr;
  if (pcVar8 < stdout->_IO_write_end) {
    stdout->_IO_write_ptr = pcVar8 + 1;
    *pcVar8 = '\n';
  }
  else {
    __overflow(stdout,10);
  }
  return 0;
code_r0x00102824:
  stdout->_IO_write_ptr = (char *)(pbVar14 + 1);
  *pbVar14 = bVar13;
  goto LAB_0010282e;
}

