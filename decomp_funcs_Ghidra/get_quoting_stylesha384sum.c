
quoting_style get_quoting_style(quoting_options *o)

{
  if (o == (quoting_options *)0x0) {
    o = &default_quoting_options;
  }
  return o->style;
}

