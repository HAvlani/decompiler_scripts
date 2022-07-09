
randint_source * randint_all_new(char *name,size_t bytes_bound)

{
  randread_source *prVar1;
  randint_source *prVar2;
  
  prVar1 = randread_new(name,bytes_bound);
  if (prVar1 != (randread_source *)0x0) {
    prVar2 = (randint_source *)xmalloc(0x18);
    prVar2->source = prVar1;
    prVar2->randmax = 0;
    prVar2->randnum = 0;
    return prVar2;
  }
  return (randint_source *)0x0;
}

