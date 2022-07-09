
void set_program_name(char *argv0)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  
  bVar8 = 0;
  if (argv0 == (char *)0x0) {
    fwrite("A NULL argv[0] was passed through an exec system call.\n",1,0x37,stderr);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pcVar1 = strrchr(argv0,0x2f);
  if (pcVar1 != (char *)0x0) {
    program_invocation_name = pcVar1 + 1;
    uVar3 = (long)program_invocation_name - (long)argv0;
    bVar6 = uVar3 < 6;
    bVar7 = uVar3 == 6;
    if (6 < (long)uVar3) {
      lVar2 = 7;
      pbVar4 = (byte *)(pcVar1 + -6);
      pbVar5 = (byte *)"/.libs/";
      do {
        if (lVar2 == 0) break;
        lVar2 = lVar2 + -1;
        bVar6 = *pbVar4 < *pbVar5;
        bVar7 = *pbVar4 == *pbVar5;
        pbVar4 = pbVar4 + (ulong)bVar8 * -2 + 1;
        pbVar5 = pbVar5 + (ulong)bVar8 * -2 + 1;
      } while (bVar7);
      if ((!bVar6 && !bVar7) == bVar6) {
        if (((pcVar1[1] != 'l') || (pcVar1[2] != 't')) || (pcVar1[3] != '-')) {
          program_name = program_invocation_name;
          return;
        }
        argv0 = pcVar1 + 4;
        program_invocation_short_name = argv0;
      }
    }
  }
  program_invocation_name = argv0;
  program_name = argv0;
  return;
}

