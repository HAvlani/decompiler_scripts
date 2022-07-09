
void key_to_opts(keyfield *key,char *opts)

{
  if (*(short *)&key->skipsblanks != 0) {
    *opts = 'b';
    opts = opts + 1;
  }
  if (key->ignore == nondictionary) {
    *opts = 'd';
    opts = opts + 1;
  }
  if (key->translate != (char *)0x0) {
    *opts = 'f';
    opts = opts + 1;
  }
  if (key->general_numeric != false) {
    *opts = 'g';
    opts = opts + 1;
  }
  if (key->human_numeric != false) {
    *opts = 'h';
    opts = opts + 1;
  }
  if (key->ignore == nonprinting) {
    *opts = 'i';
    opts = opts + 1;
  }
  if (key->month != false) {
    *opts = 'M';
    opts = opts + 1;
  }
  if (key->numeric != false) {
    *opts = 'n';
    opts = opts + 1;
  }
  if (key->random != false) {
    *opts = 'R';
    opts = opts + 1;
  }
  if (key->reverse != false) {
    *opts = 'r';
    opts = opts + 1;
  }
  if (key->version != false) {
    *opts = 'V';
    opts = opts + 1;
  }
  *opts = '\0';
  return;
}

