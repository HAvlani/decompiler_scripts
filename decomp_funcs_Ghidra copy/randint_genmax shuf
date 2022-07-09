
randint randint_genmax(randint_source *s,randint genmax)

{
  ulong uVar1;
  byte bVar2;
  randread_source *s_00;
  long lVar3;
  ulong uVar4;
  randint rVar5;
  size_t size;
  byte *pbVar6;
  ulong uVar7;
  randint rVar8;
  long in_FS_OFFSET;
  uchar buf [8];
  
  uVar1 = genmax + 1;
  s_00 = s->source;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = s->randmax;
  rVar8 = s->randnum;
  do {
    if (genmax <= uVar7) {
      if (uVar7 != genmax) goto LAB_00105fa9;
LAB_00106037:
      s->randmax = 0;
      s->randnum = 0;
      rVar5 = rVar8;
      goto LAB_00106047;
    }
    size = 0;
    uVar4 = uVar7;
    do {
      size = size + 1;
      uVar4 = uVar4 * 0x100 + 0xff;
    } while (uVar4 < genmax);
    randread(s_00,buf,size);
    pbVar6 = buf;
    do {
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      uVar7 = uVar7 * 0x100 + 0xff;
      rVar8 = rVar8 * 0x100 + (ulong)bVar2;
    } while (uVar7 < genmax);
    if (uVar7 == genmax) goto LAB_00106037;
LAB_00105fa9:
    uVar4 = (uVar7 - genmax) % uVar1;
    rVar5 = rVar8 % uVar1;
    if (rVar8 <= uVar7 - uVar4) {
      s->randnum = rVar8 / uVar1;
      s->randmax = (uVar7 - genmax) / uVar1;
LAB_00106047:
      if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
        return rVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar7 = uVar4 - 1;
    rVar8 = rVar5;
  } while( true );
}

