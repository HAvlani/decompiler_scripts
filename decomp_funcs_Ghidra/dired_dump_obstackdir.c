
void dired_dump_obstack(char *prefix,obstack *os)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)os->next_free;
  puVar3 = (undefined8 *)os->object_base;
  if (7 < (ulong)((long)puVar4 - (long)puVar3)) {
    if (puVar4 == puVar3) {
      os->field_0x50 = os->field_0x50 | 2;
    }
    pcVar2 = (char *)((long)puVar4 + os->alignment_mask & ~os->alignment_mask);
    if ((ulong)((long)os->chunk_limit - (long)os->chunk) < (ulong)((long)pcVar2 - (long)os->chunk))
    {
      pcVar2 = os->chunk_limit;
    }
    puVar4 = (undefined8 *)(((long)puVar4 - (long)puVar3 & 0xfffffffffffffff8U) + (long)puVar3);
    os->next_free = pcVar2;
    os->object_base = pcVar2;
    fputs_unlocked(prefix,stdout);
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      __printf_chk(1,&DAT_00118a78,uVar1);
    } while (puVar3 != puVar4);
    pcVar2 = stdout->_IO_write_ptr;
    if (stdout->_IO_write_end <= pcVar2) {
      __overflow(stdout,10);
      return;
    }
    stdout->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = '\n';
  }
  return;
}

