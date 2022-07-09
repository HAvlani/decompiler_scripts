
void append_normal_char(Spec_list *list,uchar c)

{
  List_element *pLVar1;
  List_element *pLVar2;
  
  pLVar2 = (List_element *)xmalloc(0x20);
  pLVar1 = list->tail;
  pLVar2->next = (List_element *)0x0;
  pLVar2->type = RE_NORMAL_CHAR;
  *(uchar *)&pLVar2->u = c;
  if (pLVar1 != (List_element *)0x0) {
    pLVar1->next = pLVar2;
    list->tail = pLVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("list->tail","src/tr.c",0x289,"append_normal_char");
}

