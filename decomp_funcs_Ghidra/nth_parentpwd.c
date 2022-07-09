
char * nth_parent(size_t n)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  puVar1 = (undefined2 *)xnmalloc(3,n);
  if (n != 0) {
    puVar2 = (undefined2 *)(n * 3 + (long)puVar1);
    puVar3 = puVar1;
    do {
      *(undefined *)(puVar3 + 1) = 0x2f;
      puVar4 = (undefined2 *)((long)puVar3 + 3);
      *puVar3 = 0x2e2e;
      puVar3 = puVar4;
    } while (puVar4 != puVar2);
    *(undefined *)((long)puVar2 + -1) = 0;
    return (char *)puVar1;
  }
  *(undefined *)((long)puVar1 + -1) = 0;
  return (char *)puVar1;
}

