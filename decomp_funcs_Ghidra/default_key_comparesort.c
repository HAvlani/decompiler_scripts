
_Bool default_key_compare(keyfield *key)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((key->ignore == (_Bool *)0x0) && (key->translate == (char *)0x0)) {
    cVar1 = key->skipsblanks;
    if ((_Bool)cVar1 != false) {
      return false;
    }
    if ((key->skipeblanks == false) && ((*(ulong *)&key->skipsblanks & 0xffff00ff0000) == 0)) {
      cVar1 = key->month;
      if ((_Bool)cVar1 != false) {
        return false;
      }
      if (key->version == false) {
        return (_Bool)(key->random ^ 1);
      }
    }
  }
  return (_Bool)cVar1;
}

