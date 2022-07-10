
void isaac_refill(isaac_state *s,isaac_word *result)

{
  isaac_word *piVar1;
  isaac_state *piVar2;
  isaac_state *piVar3;
  ulong uVar4;
  isaac_word iVar5;
  isaac_word *piVar6;
  isaac_word iVar7;
  
  uVar4 = s->a;
  iVar7 = s->c + 1;
  s->c = iVar7;
  iVar7 = s->b + iVar7;
  piVar2 = s;
  piVar6 = result;
  do {
    iVar5 = piVar2->m[0];
    uVar4 = ~(uVar4 ^ uVar4 << 0x15) + piVar2->m[0x80];
    iVar7 = *(long *)((long)s->m + (ulong)((uint)iVar5 & 0x7f8)) + uVar4 + iVar7;
    piVar2->m[0] = iVar7;
    iVar5 = *(long *)((long)s->m + (ulong)((uint)(iVar7 >> 8) & 0x7f8)) + iVar5;
    *piVar6 = iVar5;
    iVar7 = piVar2->m[1];
    uVar4 = (uVar4 ^ uVar4 >> 5) + piVar2->m[0x81];
    iVar5 = *(long *)((long)s->m + (ulong)((uint)iVar7 & 0x7f8)) + uVar4 + iVar5;
    piVar2->m[1] = iVar5;
    iVar7 = *(long *)((long)s->m + (ulong)((uint)(iVar5 >> 8) & 0x7f8)) + iVar7;
    piVar6[1] = iVar7;
    iVar5 = piVar2->m[2];
    uVar4 = (uVar4 * 0x1000 ^ uVar4) + piVar2->m[0x82];
    iVar7 = *(long *)((long)s->m + (ulong)((uint)iVar5 & 0x7f8)) + uVar4 + iVar7;
    piVar2->m[2] = iVar7;
    iVar5 = iVar5 + *(long *)((long)s->m + (ulong)((uint)(iVar7 >> 8) & 0x7f8));
    piVar6[2] = iVar5;
    iVar7 = piVar2->m[3];
    uVar4 = (uVar4 ^ uVar4 >> 0x21) + piVar2->m[0x83];
    iVar5 = *(long *)((long)s->m + (ulong)((uint)iVar7 & 0x7f8)) + uVar4 + iVar5;
    piVar3 = (isaac_state *)(piVar2->m + 4);
    piVar2->m[3] = iVar5;
    iVar7 = *(long *)((long)s->m + (ulong)((uint)(iVar5 >> 8) & 0x7f8)) + iVar7;
    piVar6[3] = iVar7;
    piVar2 = piVar3;
    piVar6 = piVar6 + 4;
  } while (piVar3 != (isaac_state *)(s->m + 0x80));
  piVar6 = result + 0x80;
  do {
    iVar5 = piVar3->m[0];
    uVar4 = ~(uVar4 ^ uVar4 << 0x15) + piVar3[-1].m[0x83];
    iVar7 = *(long *)((long)s->m + (ulong)((uint)iVar5 & 0x7f8)) + uVar4 + iVar7;
    piVar3->m[0] = iVar7;
    iVar5 = iVar5 + *(long *)((long)s->m + (ulong)((uint)(iVar7 >> 8) & 0x7f8));
    *piVar6 = iVar5;
    iVar7 = piVar3->m[1];
    uVar4 = (uVar4 ^ uVar4 >> 5) + piVar3[-1].m[0x84];
    iVar5 = *(long *)((long)s->m + (ulong)((uint)iVar7 & 0x7f8)) + uVar4 + iVar5;
    piVar3->m[1] = iVar5;
    iVar7 = *(long *)((long)s->m + (ulong)((uint)(iVar5 >> 8) & 0x7f8)) + iVar7;
    piVar6[1] = iVar7;
    iVar5 = piVar3->m[2];
    uVar4 = (uVar4 * 0x1000 ^ uVar4) + piVar3[-1].m[0x85];
    iVar7 = *(long *)((long)s->m + (ulong)((uint)iVar5 & 0x7f8)) + uVar4 + iVar7;
    piVar3->m[2] = iVar7;
    iVar5 = iVar5 + *(long *)((long)s->m + (ulong)((uint)(iVar7 >> 8) & 0x7f8));
    piVar6[2] = iVar5;
    iVar7 = piVar3->m[3];
    uVar4 = (uVar4 ^ uVar4 >> 0x21) + piVar3[-1].m[0x86];
    iVar5 = *(long *)((long)s->m + (ulong)((uint)iVar7 & 0x7f8)) + uVar4 + iVar5;
    piVar1 = piVar3->m;
    piVar3->m[3] = iVar5;
    iVar7 = *(long *)((long)s->m + (ulong)((uint)(iVar5 >> 8) & 0x7f8)) + iVar7;
    piVar6[3] = iVar7;
    piVar3 = (isaac_state *)(piVar1 + 4);
    piVar6 = piVar6 + 4;
  } while ((isaac_state *)(piVar1 + 4) != (isaac_state *)&s->a);
  s->a = uVar4;
  s->b = iVar7;
  return;
}

