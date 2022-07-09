
randint_source * randint_new(randread_source *source)

{
  randint_source *prVar1;
  
  prVar1 = (randint_source *)xmalloc(0x18);
  prVar1->source = source;
  prVar1->randmax = 0;
  prVar1->randnum = 0;
  return prVar1;
}

