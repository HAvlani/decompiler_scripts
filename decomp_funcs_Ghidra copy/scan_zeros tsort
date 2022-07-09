
_Bool scan_zeros(item *k)

{
  item *piVar1;
  item *piVar2;
  
  piVar1 = zeros;
  piVar2 = head;
  if (((k->count == 0) && (k->printed == false)) && (piVar1 = k, piVar2 = k, head != (item *)0x0)) {
    zeros->qlink = k;
    piVar1 = k;
    piVar2 = head;
  }
  head = piVar2;
  zeros = piVar1;
  return false;
}

