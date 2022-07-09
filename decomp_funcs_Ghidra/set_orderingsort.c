
char * set_ordering(char *s,keyfield *key,blanktype blanktype)

{
  char cVar1;
  
  cVar1 = *s;
  if (cVar1 == '\0') {
    return s;
  }
  do {
    switch(cVar1) {
    case 'M':
      key->month = true;
      break;
    default:
      goto switchD_00107292_caseD_4e;
    case 'R':
      key->random = true;
      break;
    case 'V':
      key->version = true;
      break;
    case 'b':
      if ((blanktype & ~bl_both) == bl_start) {
        key->skipsblanks = true;
      }
      if (blanktype + ~bl_start < 2) {
        key->skipeblanks = true;
      }
      break;
    case 'd':
      key->ignore = nondictionary;
      break;
    case 'f':
      key->translate = fold_toupper;
      break;
    case 'g':
      key->general_numeric = true;
      break;
    case 'h':
      key->human_numeric = true;
      break;
    case 'i':
      if (key->ignore == (_Bool *)0x0) {
        key->ignore = nonprinting;
      }
      break;
    case 'n':
      key->numeric = true;
      break;
    case 'r':
      key->reverse = true;
    }
    cVar1 = s[1];
    s = s + 1;
  } while (cVar1 != '\0');
switchD_00107292_caseD_4e:
  return s;
}

