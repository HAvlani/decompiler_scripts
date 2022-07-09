
void sighandler(int sig)

{
  tempnode **pptVar1;
  tempnode *ptVar2;
  
  ptVar2 = temphead;
  if (temphead != (tempnode *)0x0) {
    do {
      unlink(&ptVar2->field_0xd);
      pptVar1 = &ptVar2->next;
      ptVar2 = *pptVar1;
    } while (*pptVar1 != (tempnode *)0x0);
  }
  temphead = (tempnode *)0x0;
  signal(sig,(__sighandler_t)0x0);
  (*(code *)PTR_raise_0011cc40)(sig);
  return;
}

